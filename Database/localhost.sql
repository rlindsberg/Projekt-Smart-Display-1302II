-- phpMyAdmin SQL Dump
-- version 4.7.5
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: May 21, 2018 at 10:33 AM
-- Server version: 5.7.20
-- PHP Version: 7.1.14

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `meatballscomments`
--
CREATE DATABASE IF NOT EXISTS `comments` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `comments`;

-- --------------------------------------------------------

--
-- Table structure for table `comments`
--

CREATE TABLE `comments` (
  `cid` int(11) NOT NULL,
  `uid` varchar(128) NOT NULL,
  `date` datetime NOT NULL,
  `message` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `comments`
--

INSERT INTO `comments` (`cid`, `uid`, `date`, `message`) VALUES
(28, 'bassel', '2018-01-03 13:54:01', 'hej'),
(29, 'bassel', '2018-01-03 14:03:31', 'test'),
(30, 'bassel', '2018-01-11 22:28:23', 'wowowowowo');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `comments`
--
ALTER TABLE `comments`
  ADD PRIMARY KEY (`cid`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `comments`
--
ALTER TABLE `comments`
  MODIFY `cid` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=31;

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `user_id` int(11) NOT NULL,
  `user_first` varchar(256) NOT NULL,
  `user_last` varchar(256) NOT NULL,
  `user_email` varchar(256) NOT NULL,
  `user_uid` varchar(256) NOT NULL,
  `user_pwd` varchar(256) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`user_id`, `user_first`, `user_last`, `user_email`, `user_uid`, `user_pwd`) VALUES
(1, 'admin', 'admin', 'admin@admin.com', 'admin', '$2y$10$/zomDM0K9ITqYGMXy/bSy.o/iGKwDQ.5XHSCPAfVShr0Kkts.D2Pe'),
(2, 'bassel', 'afrem', 'bassela@kth.se', 'bassel', '$2y$10$cvKRJXnCBAr6.ZFzxdB8kO3TNeIz9y2nYVc9ZfFG1in2zk0OG4DR2'),
(3, 'first', 'last', 'sas@sdm.com', 'first', '$2y$10$Gjt55E7WpZOuKuezi1tNcuIT5Efuy10pQXKd3ZnS4SBopNLqmxkW6'),
(4, 'aaa', 'aaa', 'aa@sds.com', 'aaa', '$2y$10$ESX2v2gGt90xV0cIhPysD.tpxLCKZL8WOOKCYnOxoHjp.Gk5PP2SS'),
(5, 'bbb', 'bbb', 'bb@bb.com', 'bbb', '$2y$10$RjUI/tVpBzuLDkDqzvjbhOvd6a5UUVoGVGcYBpIlDEeBCR/cbwoGa'),
(6, 'ccc', 'ccc', 'ccc@cc.com', 'ccc', '$2y$10$purWkHXI9n8IbVp1yWat4.YC9wfSemWDisaj1fgvskJ3j8wi7og/u');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`user_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `users`
--
ALTER TABLE `users`
  MODIFY `user_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
