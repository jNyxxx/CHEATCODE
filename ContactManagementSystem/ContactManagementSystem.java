
import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.Scanner;
import java.util.ArrayList;


class CMS {
    Scanner scan = new Scanner(System.in);

    public void addContacts() {

    try(PrintWriter pw = new PrintWriter(new FileWriter("C:\\Javacodes\\OOPROG PRACTICES\\contacts.txt", true))){
        ArrayList<String> contacts = new ArrayList<>();

        System.out.print("How many contacts do you want to add ? : ");
            int n = scan.nextInt();
                scan.nextLine();
                    for(int i = 0; i < n; i++){
                        System.out.print("Enter contact name: ");
                        String data = scan.nextLine();
                        contacts.add(data);
                        pw.println(data);
                        System.out.println(data + " Contact added successfully..");  
        }
    }
    catch(IOException e){
        System.out.println(e.getMessage());
    }

  }

  public void viewContacts(){
    ArrayList<String> contacts = new ArrayList<>();

        System.out.println("Contacts...");

        try(BufferedReader br = new BufferedReader(new FileReader("C:\\Javacodes\\OOPROG PRACTICES\\contacts.txt"))){
        String contact;
        int count = 0;


        while((contact = br.readLine()) != null){
            count++;
            System.out.println(count + ". " + contact);
        }
        System.out.println();
        if(count == 0){
            System.out.println("No contacts found inside the txt...");
        }

        }
        catch(IOException e){
            System.out.println(e.getMessage());
        }

    }

    public void updateContacts(){
        if(isEmpty()){
            System.out.println("No contacts found inside the txt to update...");
            return;
        }

        ArrayList<String> contacts = new ArrayList<>();
        boolean found = false;
        String oldName;
        String newName;


        try(BufferedReader br = new BufferedReader(new FileReader("C:\\Javacodes\\OOPROG PRACTICES\\contacts.txt"))){
                String contact;

                System.out.print("Enter the name of the contact to update : ");
                oldName = scan.nextLine();
                System.out.print("Enter the new name : ");
                newName = scan.nextLine();

                while((contact = br.readLine()) != null){
                    if(contact.equalsIgnoreCase(oldName)){
                        contacts.add(newName);                       
                        found = true;
                    }
                    else{
                    contacts.add(contact);
                    }

                }

                    if(found){
                        try(PrintWriter pw = new PrintWriter(new FileWriter("C:\\Javacodes\\OOPROG PRACTICES\\contacts.txt"))){
                            for(String n : contacts){
                                pw.println(n);
                            }
                            System.out.println("Updated Successfully.");
                        }
                        catch(IOException e){
                        }
                    }
        }
        catch (IOException e){
            System.out.println(e.getMessage());
        }
    }

    public void deleteContacts(){
        if(isEmpty()){
            System.out.println("No contacts found inside the txt to delete...");
            return;
        }

        ArrayList<String> contacts = new ArrayList<>();
        String cname;

        boolean found = false;

        System.out.print("Enter contact name to delete : ");
        cname = scan.nextLine();

        try(BufferedReader br = new BufferedReader(new FileReader("C:\\Javacodes\\OOPROG PRACTICES\\contacts.txt"))){
            String lines;

            while((lines = br.readLine()) != null){
                if(lines.equalsIgnoreCase(cname)){                       
                    found = true;
                }
                else{
                contacts.add(lines);
                }
            }

                if(found) {
                    try(PrintWriter pw = new PrintWriter(new FileWriter("C:\\Javacodes\\OOPROG PRACTICES\\contacts.txt"))){
                        for(String n : contacts){
                            pw.println(n);
                        }
                        System.out.println("Deleted Successfully.");
                    }
                    catch(IOException e){
                    }
                }
                else {
                    System.out.println("Contact not found. No deletion made.");
                }
    }
    catch (IOException e){
        System.out.println(e.getMessage());
    }

    }

    private boolean isEmpty() {
        try(FileReader fr = new FileReader("C:\\Javacodes\\OOPROG PRACTICES\\contacts.txt")){
            return fr.read() == -1;
        }
        catch(IOException e){
            System.out.println(e.getMessage());
            return false;
        }   
    }
}

import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int choice;
        CMS cms = new CMS();
        
        do{
            System.out.println();
            System.out.println("Contact Management System");
            System.out.println("1. Add Contact");
            System.out.println("2. View Contacts");
            System.out.println("3. Update Contact   ");
            System.out.println("4. Delete Contact");
            System.out.println("5. Exit");
            System.out.print("Select your choice : ");
            choice = scan.nextInt();
            System.out.println();

        switch(choice){
        case 1:
        cms.addContacts();
            break;
        case 2:
        cms.viewContacts();
            break;
        case 3:
        cms.updateContacts();
            break;
        case 4:
        cms.deleteContacts();
            break;
        case 5:
            System.out.println("Exiting...");
              break;
            default:
                System.out.println("Invalid choice. Please try again.");
            }
        } 
        while(choice != 5);
        scan.close();
    }
}
