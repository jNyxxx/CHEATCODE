import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Books {
    private final String title;
    private final String author;
    private final String isbn;
    private int availCopies;

    public Books(String title, String author, String isbn, int availCopies) {
        this.title = title;
        this.author = author;
        this.isbn = isbn;
        this.availCopies = availCopies;
    }

    public String getTitle() {
        return title;
    }

    public String getAuthor() {
        return author;
    }

    public String getIsbn() {
        return isbn;
    }

    public int getAvailCopies() {
        return availCopies;
    }

    public void setAvailCopies(int availCopies) {
        this.availCopies = availCopies;
    }

    public void printBookDetails() {
        System.out.println("");
        System.out.println("---List of Books Available---");
        System.out.println("---------- I N F O ----------");
        System.out.println("Title of the book: " + title);
        System.out.println("Author's name: " + author);
        System.out.println("ISBN: " + isbn);
        System.out.print("Available Copies: " + availCopies);
        System.out.println("");
    }
}

public class LibraryManagement {
    private Scanner scan = new Scanner(System.in);
    private List<Books> books = new ArrayList<>();

    public void startMenu() {
        while (true) {
            System.out.println("\n----------LIBRARY MANAGEMENT SYSTEM----------");
            System.out.println("Press 1 to add a book.");
            System.out.println("Press 2 to borrow a book.");
            System.out.println("Press 3 to return a book.");
            System.out.println("Press 4 to check books and their available copies.");
            System.out.println("Press 5 to exit.");
            System.out.println("-----------------------------------------------");
            System.out.print("Please input your choice [1-5]: ");

            int choice = scan.nextInt();
            scan.nextLine();

            switch (choice) {
                case 1:
                    addBook();
                    break;
                case 2:
                    borrowBook();
                    break;
                case 3:
                    returnBook();
                    break;
                case 4:
                    checkBooks();
                    break;
                case 5:
                    System.out.println("Exiting...");
                    return;
                default:
                    System.out.println("Invalid choice, please choose within the provided choices.");
            }
        }
    }

    public void addBook() {
        System.out.println("");
        System.out.print("Enter the title of the Book: ");
        String title = scan.nextLine();
        System.out.print("Enter the name of the Author: ");
        String author = scan.nextLine();
        System.out.print("Enter the International Standard Book Number (ISBN): ");
        String isbn = scan.nextLine();
        System.out.print("Enter the number of copies: ");
        int availCopies = scan.nextInt();
        
        books.add(new Books(title, author, isbn, availCopies));
        System.out.println("Book added.");
    }

    public void borrowBook() {
        System.out.println("");
        System.out.print("Enter the title of the book to borrow: ");
        String title = scan.nextLine();

        for (Books book : books) {
            if (book.getTitle().equals(title)) {
                System.out.print("Enter the number of copies to borrow: ");
                int numCopies = scan.nextInt();
                if (book.getAvailCopies() >= numCopies) {
                    book.setAvailCopies(book.getAvailCopies() - numCopies);
                    System.out.print("You have borrowed " + numCopies + " copies of '" + title + "'.");
                } else {
                    System.out.println("Not enough copies available.");
                }
                return;
            }
        }
        System.out.println("Book not found.");
    }

    public void returnBook() {
        System.out.println("");
        System.out.print("Enter the title of the book to return: ");
        String title = scan.nextLine();

        for (Books book : books) {
            if (book.getTitle().equals(title)) {
                System.out.print("Enter the number of copies to return: ");
                int numCopies = scan.nextInt();
                scan.nextLine();
                book.setAvailCopies(book.getAvailCopies() + numCopies);
                System.out.print("You have returned " + numCopies + " copies of '" + title + "'.");
                return;
            }
        }
        System.out.println("Book not found.");
    }

    public void checkBooks() {
        if (books.isEmpty()) {
            System.out.print("No books available.");
        } else {
            for (Books book : books) {
                book.printBookDetails();
            }
        }
    }

    public static void main(String[] args) {
        LibraryManagement library = new LibraryManagement();
        library.startMenu();
    }
}
