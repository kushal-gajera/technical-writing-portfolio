<div align="center">

# Technical Writing Portfolio

**A collection of practical documentation tools and techniques explored in my Technical Writing course.**

Google Docs · LaTeX · Beamer · Doxygen · Git · GitHub

<img src="assets/portfolio-flow.svg" width="100%" alt="Animated learning path through documentation, writing, presentation, code documentation and version control."/>

</div>

---

## Welcome

Technical writing is more than writing a document. It is about organising information, explaining a process clearly, documenting work and communicating ideas in a way that other people can understand and use.

This portfolio brings together the tools and topics covered during the course. Each topic has its own folder with explanations, examples, commands and practical exercises.

## 🧭 Explore the Portfolio

| No. | Topic | What you will explore |
|:---:|---|---|
| 00 | [Documentation Fundamentals](00-Documentation-Fundamentals/README.md) | Purpose, audience, clear writing and documentation workflow |
| 01 | [LaTeX](01-LaTeX/README.md) | Create structured documents, format pages, write equations, tables and references |
| 02 | [Beamer](02-Beamer/README.md) | Create slide presentations using frames, themes, columns and blocks |
| 03 | [Doxygen](03-Doxygen/README.md) | Generate code documentation from structured source comments |
| 04 | [Google Docs](04-Google-Docs/README.md) | Create, format, share and collaborate on documents |
| 05 | [Git](05-Git/README.md) | Track changes, stage files, commit work and manage branches |
| 06 | [GitHub](06-GitHub/README.md) | Host repositories, push code, review changes and collaborate |

Click a topic name to open its folder and start learning.

## What This Portfolio Contains

- **Concepts:** Understand what each tool does and why it is used.
- **Examples:** Learn through editable source files and practical demonstrations.
- **Commands and syntax:** See common commands with explanations.
- **Output previews:** View the real compiled PDF pages, Beamer slides and C++ program output.
- **Troubleshooting:** Review common errors and ways to solve them.
- **Quick references:** Revise important commands and concepts.

## Repository Structure

```text
technical-writing-portfolio/
│
├── 00-Documentation-Fundamentals/
├── 01-LaTeX/
│   ├── 01-first-document/
│   ├── 02-page-layout/
│   ├── 03-formatting/
│   ├── 04-mathematics/
│   ├── 05-tables-and-images/
│   ├── 06-cross-references/
│   ├── 07-bibliography/
│   └── 08-index/
├── 02-Beamer/
├── 03-Doxygen/
│   ├── example/
│   └── generated-docs/
├── 04-Google-Docs/
│   ├── guides/
│   └── templates/
├── 05-Git/
├── 06-GitHub/
├── assets/
│   └── images/
│       ├── latex/
│       ├── beamer/
│       └── doxygen/
├── resources/
├── .gitignore
├── CONTRIBUTING.md
└── README.md
```

## How to Explore

You can study the topics independently or follow the numbered order.

1. Open the README in the topic folder you want to study.
2. Read the explanation and inspect the commands or source files.
3. Compile or run the example where applicable.
4. Compare the result with the output preview.
5. Change something in the example and try it again.

### Build the Examples

LaTeX examples can be compiled using a TeX distribution such as TeX Live or MiKTeX. For example:

```bash
cd 01-LaTeX/01-first-document
pdflatex main.tex
```

For the bibliography and index examples, follow the extra build commands in their own READMEs.

To run the C++ example:

```bash
cd 03-Doxygen/example
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o example
./example
```

To generate the Doxygen HTML documentation, install Doxygen and run:

```bash
cd 03-Doxygen/example
doxygen Doxyfile
```

## About the Output Previews

The LaTeX and Beamer preview images are rendered from the source files using a LaTeX compiler. The C++ preview is created from the program's actual terminal output.

**Note:** These are genuine locally compiled output previews. They are not screenshots of the Overleaf website. You can upload the same `.tex` files to your own Overleaf project if you need screenshots showing the Overleaf interface specifically.

## References

See [Resources and References](resources/references.md) for official documentation and recommended learning material.

## Contributing

See [CONTRIBUTING.md](CONTRIBUTING.md) for the project guidelines.

---

<div align="center">

**TECHNICAL WRITING PORTFOLIO**

*Documentation · Practical Learning · Digital Tools*

</div>
