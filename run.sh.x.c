#if 0
	shc Version 3.8.9, Generic Script Compiler
	Copyright (c) 1994-2012 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f soure-encrypt-tool/run.sh 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[2]))
	"\047\132\330\024\264\342\067\241\341\374\374\136\054\256\257\143"
	"\143\300\114\361\024\302\376\130\106\011"
#define      opts_z	1
#define      opts	((&data[26]))
	"\065"
#define      date_z	1
#define      date	((&data[27]))
	"\250"
#define      xecc_z	15
#define      xecc	((&data[31]))
	"\332\272\000\023\026\020\364\316\246\252\147\060\154\013\033\316"
	"\067\301\374\100\134"
#define      msg2_z	19
#define      msg2	((&data[52]))
	"\303\072\202\020\230\076\034\341\137\333\147\364\034\007\213\220"
	"\302\262\315\317\053\244\263\042\030"
#define      shll_z	8
#define      shll	((&data[75]))
	"\126\115\036\037\223\157\141\117\173\350"
#define      text_z	222
#define      text	((&data[104]))
	"\060\107\341\205\127\101\163\126\033\055\126\030\156\263\263\020"
	"\177\167\112\002\144\304\034\031\270\307\010\106\237\061\301\264"
	"\040\212\201\370\024\262\242\224\065\010\077\260\330\165\207\220"
	"\232\205\324\107\170\145\160\162\253\362\021\234\176\213\244\336"
	"\065\064\027\141\002\044\050\157\201\343\205\151\324\236\057\134"
	"\313\276\342\024\265\005\316\161\111\213\062\373\156\070\233\012"
	"\130\222\057\000\006\140\334\066\201\302\126\173\121\176\014\027"
	"\372\124\361\073\355\000\071\073\103\100\062\077\273\261\001\174"
	"\341\062\213\152\153\052\204\157\235\372\002\155\217\246\110\030"
	"\101\372\173\346\106\123\216\335\064\231\231\131\152\337\323\053"
	"\355\242\053\373\360\265\200\135\371\307\063\144\005\355\356\031"
	"\003\365\016\345\025\106\243\164\114\337\044\375\327\201\365\247"
	"\025\314\110\264\114\250\106\137\322\275\161\263\161\222\222\213"
	"\341\031\175\201\331\234\230\002\103\305\252\015\074\251\013\306"
	"\136\117\275\035\155\065\102\135\215\156\107\214\277\202\340\115"
	"\057\223\053\155\032\132\373\257\261\344\212\020\223\273\127\165"
	"\101\257\267\265\005\323\343\134\353\121\017\237\141\216\027\253"
	"\220\102\031\253\235\024\133\116"
#define      chk2_z	19
#define      chk2	((&data[368]))
	"\215\242\267\002\160\062\031\035\004\152\117\047\212\070\352\153"
	"\075\316\145\360\111\162\056\343"
#define      lsto_z	1
#define      lsto	((&data[388]))
	"\343"
#define      chk1_z	22
#define      chk1	((&data[392]))
	"\310\171\314\022\156\356\301\237\261\311\076\162\147\217\121\141"
	"\162\063\124\327\135\304\252\027\070\330\031"
#define      inlo_z	3
#define      inlo	((&data[416]))
	"\270\040\234"
#define      tst2_z	19
#define      tst2	((&data[423]))
	"\363\243\021\010\153\354\054\376\131\362\016\014\000\130\003\217"
	"\042\262\154\015\225\017\311\376\137"
#define      pswd_z	256
#define      pswd	((&data[502]))
	"\216\206\166\221\152\335\113\002\111\330\176\022\121\112\352\152"
	"\170\121\233\122\111\016\106\355\037\116\353\177\117\320\076\336"
	"\127\265\157\301\222\272\304\334\222\102\357\344\215\332\117\005"
	"\054\352\130\166\371\236\143\031\354\116\250\027\303\164\002\100"
	"\220\250\242\213\003\230\367\316\247\363\274\024\016\075\141\055"
	"\220\374\172\302\117\367\322\107\212\172\137\116\357\141\217\200"
	"\011\061\013\015\312\003\333\161\366\227\206\004\325\347\062\145"
	"\344\254\050\063\244\372\173\057\165\332\175\144\073\014\345\105"
	"\076\360\122\011\364\056\172\352\306\001\357\233\350\041\001\315"
	"\316\051\000\162\043\174\241\231\126\037\376\222\053\343\330\152"
	"\324\052\163\310\131\356\262\040\357\242\274\330\303\275\246\221"
	"\346\247\004\012\043\246\243\171\305\242\014\361\205\344\134\131"
	"\017\317\041\151\276\324\211\256\166\105\207\072\002\055\314\351"
	"\324\320\363\367\166\227\161\074\071\175\055\277\141\211\030\161"
	"\131\072\332\027\016\143\306\205\251\115\277\254\172\213\225\117"
	"\134\211\106\322\041\267\016\132\065\074\031\227\305\062\010\036"
	"\154\342\066\173\106\374\001\357\112\300\233\304\114\061\024\250"
	"\272\132\173\333\022\212\066\107\306\120\336\214\202\347\253\357"
	"\311\341\153\017\336\154\376\050\055\232\355\171\313\001\042\206"
	"\134\236\141\157\050\230\266\357\350\225\231\074\037\330\032\166"
	"\215\212\070\040\104\374\374\327\076\354\274\313\306\013\321\362"
	"\365\052\150\357\311\313\010\266\032\241\362\072\171\015\260\006"
	"\227\351\047\334\345\043\264\044\020\160"
#define      msg1_z	42
#define      msg1	((&data[815]))
	"\301\311\161\353\061\140\265\375\151\046\017\276\114\173\073\163"
	"\041\307\016\213\330\065\027\301\077\110\315\117\071\041\003\111"
	"\022\233\302\346\306\046\110\216\343\215\164\023\077\200\013\041"
	"\241\020\133\153\030\012\136\122"
#define      rlax_z	1
#define      rlax	((&data[862]))
	"\210"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !defined(TRACEABLE)

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = getenv("_");
	if (me == NULL) { me = argv[0]; }

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !defined(TRACEABLE)
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
