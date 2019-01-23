-- phpMyAdmin SQL Dump
-- version 4.8.3
-- https://www.phpmyadmin.net/
--
-- Хост: 127.0.0.1:3306
-- Время создания: Янв 22 2019 г., 18:24
-- Версия сервера: 8.0.12
-- Версия PHP: 7.1.22

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- База данных: `cursach`
--

-- --------------------------------------------------------

--
-- Структура таблицы `class`
--

CREATE TABLE `class` (
  `class` varchar(20) NOT NULL,
  `lessons` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `class`
--

INSERT INTO `class` (`class`, `lessons`) VALUES
('BIS31', 'filosophia'),
('BIS31', 'PnayaC++'),
('BIS31', 'PnayaVU'),
('BIS31', 'TOKB'),
('BIS31', 'FOTSOIB');

-- --------------------------------------------------------

--
-- Структура таблицы `groups`
--

CREATE TABLE `groups` (
  `class` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `groups`
--

INSERT INTO `groups` (`class`) VALUES
('BIS31');

-- --------------------------------------------------------

--
-- Структура таблицы `lessons`
--

CREATE TABLE `lessons` (
  `id` int(11) NOT NULL,
  `lesson_name` varchar(40) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `lessons`
--

INSERT INTO `lessons` (`id`, `lesson_name`) VALUES
(1, 'filosophia'),
(2, 'PnayaC++'),
(3, 'PnayaVU'),
(4, 'TOKB'),
(5, 'FOTSOIB');

-- --------------------------------------------------------

--
-- Структура таблицы `marks`
--

CREATE TABLE `marks` (
  `class` varchar(20) NOT NULL,
  `login` varchar(20) NOT NULL,
  `name` varchar(50) NOT NULL,
  `lesson` varchar(20) CHARACTER SET utf8 COLLATE utf8_general_ci DEFAULT NULL,
  `marks` varchar(50) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `marks`
--

INSERT INTO `marks` (`class`, `login`, `name`, `lesson`, `marks`) VALUES
('BIS31', 'max', 'Maxim', 'filosophia', '0'),
('BIS31', 'max', 'Maxim', 'PnayaC++', '55555555555555555555555555555555555555'),
('BIS31', 'max', 'Maxim', 'PnayaVU', '0'),
('BIS31', 'max', 'Maxim', 'TOKB', '0'),
('BIS31', 'max', 'Maxim', 'FOTSOIB', '0'),
('BIS31', 'dima', 'Dima', 'filosophia', '0'),
('BIS31', 'dima', 'Dima', 'PnayaC++', '454345444'),
('BIS31', 'dima', 'Dima', 'PnayaVU', '0'),
('BIS31', 'dima', 'Dima', 'TOKB', '0'),
('BIS31', 'dima', 'Dima', 'FOTSOIB', '0');

-- --------------------------------------------------------

--
-- Структура таблицы `raspisanie`
--

CREATE TABLE `raspisanie` (
  `number` int(11) NOT NULL,
  `time` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `raspisanie`
--

INSERT INTO `raspisanie` (`number`, `time`) VALUES
(1, '8:00-9:35'),
(2, '9:45-11:20'),
(3, '11:30-13:05'),
(4, '13:30-15:05'),
(5, '15:15-17:50');

-- --------------------------------------------------------

--
-- Структура таблицы `teacher`
--

CREATE TABLE `teacher` (
  `login` varchar(20) NOT NULL,
  `name` varchar(50) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `lessons` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `teacher`
--

INSERT INTO `teacher` (`login`, `name`, `lessons`) VALUES
('sitn', 'Sitnikov Igor Vladimirovich', 'PnayaC++');

-- --------------------------------------------------------

--
-- Структура таблицы `timetable`
--

CREATE TABLE `timetable` (
  `day` varchar(10) CHARACTER SET utf8 COLLATE utf8_general_ci DEFAULT NULL,
  `class` varchar(10) CHARACTER SET utf8 COLLATE utf8_general_ci DEFAULT NULL,
  `number` int(2) DEFAULT NULL,
  `lesson` varchar(30) CHARACTER SET utf8 COLLATE utf8_general_ci DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `timetable`
--

INSERT INTO `timetable` (`day`, `class`, `number`, `lesson`) VALUES
('Tuesday', 'BIS31', 1, 'PnayaC++'),
('Tuesday', 'BIS31', 2, 'PnayaC++'),
('Tuesday', 'BIS31', 4, 'filosophia'),
('Tuesday', 'BIS31', 3, 'TOKB'),
('Tuesday', 'BIS31', 5, 'filosophia');

-- --------------------------------------------------------

--
-- Структура таблицы `ucheniki`
--

CREATE TABLE `ucheniki` (
  `login` varchar(20) NOT NULL,
  `name` varchar(50) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `class` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 ROW_FORMAT=COMPACT;

--
-- Дамп данных таблицы `ucheniki`
--

INSERT INTO `ucheniki` (`login`, `name`, `class`) VALUES
('dima', 'Dima', 'BIS31'),
('max', 'Maxim', 'BIS31');

-- --------------------------------------------------------

--
-- Структура таблицы `uchklass`
--

CREATE TABLE `uchklass` (
  `teacher_login` varchar(20) NOT NULL,
  `class` varchar(20) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `uchklass`
--

INSERT INTO `uchklass` (`teacher_login`, `class`) VALUES
('sitn', '0');

-- --------------------------------------------------------

--
-- Структура таблицы `users`
--

CREATE TABLE `users` (
  `login` varchar(20) NOT NULL,
  `password` varchar(40) NOT NULL,
  `role` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `users`
--

INSERT INTO `users` (`login`, `password`, `role`) VALUES
('admin', '827ccb0eea8a706c4c34a16891f84e7b', 'admin'),
('dima', '202cb962ac59075b964b07152d234b70', 'student'),
('max', '25f9e794323b453885f5181f1b624d0b', 'student'),
('sitn', '202cb962ac59075b964b07152d234b70', 'teacher');

--
-- Индексы сохранённых таблиц
--

--
-- Индексы таблицы `lessons`
--
ALTER TABLE `lessons`
  ADD PRIMARY KEY (`id`);

--
-- Индексы таблицы `teacher`
--
ALTER TABLE `teacher`
  ADD PRIMARY KEY (`login`),
  ADD KEY `teacher_ibfk_2` (`lessons`);

--
-- Индексы таблицы `ucheniki`
--
ALTER TABLE `ucheniki`
  ADD PRIMARY KEY (`login`);

--
-- Индексы таблицы `uchklass`
--
ALTER TABLE `uchklass`
  ADD KEY `teacher_login` (`teacher_login`);

--
-- Индексы таблицы `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`login`);

--
-- AUTO_INCREMENT для сохранённых таблиц
--

--
-- AUTO_INCREMENT для таблицы `lessons`
--
ALTER TABLE `lessons`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- Ограничения внешнего ключа сохраненных таблиц
--

--
-- Ограничения внешнего ключа таблицы `teacher`
--
ALTER TABLE `teacher`
  ADD CONSTRAINT `teacher_ibfk_1` FOREIGN KEY (`login`) REFERENCES `users` (`login`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Ограничения внешнего ключа таблицы `uchklass`
--
ALTER TABLE `uchklass`
  ADD CONSTRAINT `uchklass_ibfk_1` FOREIGN KEY (`teacher_login`) REFERENCES `teacher` (`login`) ON DELETE CASCADE ON UPDATE CASCADE;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
