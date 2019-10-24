# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    gen.pl                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpossatt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/23 22:37:56 by tpossatt          #+#    #+#              #
#    Updated: 2019/10/23 22:37:59 by tpossatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "o";
		}
		else {
			print ".";
		}
	}
	print "\n";
}
