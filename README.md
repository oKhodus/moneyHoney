# moneyHoney 🍯

A simple command-line expense tracker application written in C++.

## Overview

moneyHoney is a lightweight CLI tool that helps you track your income and expenses. It maintains a running balance and allows you to quickly add income, record expenses, and check your current balance.

## Building

Compile the project with:

```bash
g++ -o moneyHoney main.cpp cmdlayer.cpp wallet.cpp
```

Or if you have a Makefile:

```bash
make
```

## Running

Execute the compiled binary:

```bash
./moneyHoney
```

## Available Commands

| Command | Description |
|---------|-------------|
| `/add` | Add income to your balance |
| `/exp` | Record an expense (deduct from balance) |
| `/bal` | Display your current balance |
| `/help` | Show available commands |
| `/quit` | Exit the app and save balance |
| `/exit` | Exit the app and save balance |

## Usage Example

```
Welcome to the moneyHoney app! ^_^ 
Commands: /add, /exp, /bal, /help, /quit

Enter your command: /add
Enter your new income: 1500
Congrats' you have added income :)
Your current balance is: 1500

Enter your command: /exp
Enter your new expense: 250
Congrats' you have decreased your balance :)
Your current balance is: 1250

Enter your command: /bal
Your current balance is: 1250

Enter your command: /quit
Balance saved. Goodbye!
```

## Features

- ✅ Track income and expenses
- ✅ View current balance
- ✅ Simple command-line interface
- ✅ Persistent storage (balance saved to `balance.txt`)
- ✅ Multiple commands per session
- ✅ Input validation (handles non-numeric input gracefully)
- ✅ Help command for easy reference

## Limitations

- 🔴 No transaction history
- 🔴 Single user only
- 🔴 No categories for expenses

## Project Structure

```
moneyHoney/
├── main.cpp          # Entry point & command loop
├── cmdlayer.cpp      # Command routing layer
├── cmdlayer.h        # Command layer declarations
├── wallet.cpp        # Wallet class implementation
├── wallet.h          # Wallet class declarations
├── balance.txt       # Saved balance (created on first exit)
└── README.md         # This file
```

## Architecture

- **Wallet class** — Encapsulates balance and financial operations
- **CMDLayer namespace** — Routes user commands to wallet methods
- **main.cpp** — Handles user interaction loop and persistence

## Future Improvements

- [ ] Transaction history and detailed logs
- [ ] Multi-account support
- [ ] Budget tracking and alerts
- [ ] Monthly reports
- [ ] Expense categories
- [ ] Export to CSV

## License

MIT