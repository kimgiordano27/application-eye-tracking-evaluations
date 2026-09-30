/*
FUNCTION_NAME: FUN_044b5a40
ENTRY_POINT: 044b5a40
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_16;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_044b5a40(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
                    /* try { // try from 044b5a58 to 045b5a6f has its CatchHandler @ 044b5a58
                       catch() { ... } // from try @ 044b5a58 with catch @ 044b5a58
                       catch() { ... } // from try @ 044b5a7c with catch @ 044b5a58 */
  if (DAT_0a75d198 == 0) {
    FUN_044c0738();
                    /* try { // try from 044b5a7c to 045b5aab has its CatchHandler @ 044b5a58 */
    pcVar3 = getenv("GC_PRINT_VERBOSE_STATS");
    if (pcVar3 == (char *)0x0) {
                    /* catch() { ... } // from try @ 044b5a70 with catch @ 044b5a98 */
      pcVar3 = getenv("GC_PRINT_STATS");
      if (pcVar3 != (char *)0x0) {
        DAT_0a54ac58 = 1;
      }
    }
    else {
      DAT_0a54ac58 = 2;
    }
    pcVar3 = getenv("GC_LOG_FILE");
    if (pcVar3 != (char *)0x0) {
                    /* try { // try from 044b5ac4 to 045b5ad7 has its CatchHandler @ 044b5af4 */
      iVar1 = open(pcVar3,0x441,0x1b6);
      if (iVar1 < 0) {
        FUN_044b5094("Failed to open %s as log file\n",pcVar3);
      }
      else {
        DAT_0a51bdb0 = iVar1;
                    /* try { // try from 044b5ad8 to 045b5b07 has its CatchHandler @ 044b5aac */
        pcVar3 = getenv("GC_ONLY_LOG_TO_FILE");
                    /* catch() { ... } // from try @ 044b5ac4 with catch @ 044b5af4 */
        if ((pcVar3 == (char *)0x0) || ((*pcVar3 == '0' && (pcVar3[1] == '\0')))) {
          DAT_0a51bda8 = iVar1;
          DAT_0a51bdac = iVar1;
        }
      }
    }
    pcVar3 = getenv("GC_DUMP_REGULARLY");
    if (pcVar3 != (char *)0x0) {
      DAT_0a75d650 = 1;
    }
    pcVar3 = getenv("GC_FIND_LEAK");
    if (pcVar3 != (char *)0x0) {
      DAT_0a75d588 = 1;
    }
    pcVar3 = getenv("GC_FINDLEAK_DELAY_FREE");
    if (pcVar3 != (char *)0x0) {
      DAT_0a75d6a0 = 1;
    }
    pcVar3 = getenv("GC_ALL_INTERIOR_POINTERS");
    if (pcVar3 != (char *)0x0) {
      DAT_0a51bae8 = 1;
    }
    pcVar3 = getenv("GC_DONT_GC");
    if (pcVar3 != (char *)0x0) {
      DAT_0a75d578 = 1;
    }
    pcVar3 = getenv("GC_PRINT_BACK_HEIGHT");
    if (pcVar3 != (char *)0x0) {
      DAT_0a75d654 = 1;
    }
    pcVar3 = getenv("GC_NO_BLACKLIST_WARNING");
    if (pcVar3 != (char *)0x0) {
      DAT_0a51bb10 = 0x7fffffffffffffff;
    }
    pcVar3 = getenv("GC_TRACE");
    if (pcVar3 != (char *)0x0) {
      (*(code *)PTR_thunk_FUN_044b5094_0a51baf0)
                ("GC Warning: Tracing not enabled: Ignoring GC_TRACE value\n",0);
    }
    pcVar3 = getenv("GC_PAUSE_TIME_TARGET");
    if (pcVar3 != (char *)0x0) {
      lVar4 = atol(pcVar3);
      if (lVar4 < 5) {
        (*(code *)PTR_thunk_FUN_044b5094_0a51baf0)
                  ("GC Warning: GC_PAUSE_TIME_TARGET environment variable value too small or bad syntax: Ignoring\n"
                   ,0);
      }
      else {
        DAT_0a51bb28 = lVar4 * 1000000;
      }
    }
    pcVar3 = getenv("GC_FULL_FREQUENCY");
    if ((pcVar3 != (char *)0x0) && (iVar1 = atoi(pcVar3), 0 < iVar1)) {
      DAT_0a51bb18 = iVar1;
    }
    pcVar3 = getenv("GC_LARGE_ALLOC_WARN_INTERVAL");
    lVar4 = DAT_0a51bb10;
    if ((pcVar3 != (char *)0x0) && (lVar4 = atol(pcVar3), lVar4 < 1)) {
      (*(code *)PTR_thunk_FUN_044b5094_0a51baf0)
                ("GC Warning: GC_LARGE_ALLOC_WARN_INTERVAL environment variable has bad value: Ignoring\n"
                 ,0);
      lVar4 = DAT_0a51bb10;
    }
    DAT_0a51bb10 = lVar4;
    pcVar3 = getenv("GC_FREE_SPACE_DIVISOR");
    if ((pcVar3 != (char *)0x0) && (uVar2 = atoi(pcVar3), 0 < (int)uVar2)) {
      DAT_0a51bb20 = (ulong)uVar2;
    }
    pcVar3 = getenv("GC_UNMAP_THRESHOLD");
    if (pcVar3 != (char *)0x0) {
      if ((*pcVar3 == '0') && (pcVar3[1] == '\0')) {
        DAT_0a51bb08 = 0;
      }
      else {
        iVar1 = atoi(pcVar3);
        if (0 < iVar1) {
          DAT_0a51bb08 = iVar1;
        }
      }
    }
    pcVar3 = getenv("GC_FORCE_UNMAP_ON_GCOLLECT");
    if ((pcVar3 != (char *)0x0) &&
       ((*pcVar3 != '0' || (DAT_0a75d658 = (uint)(byte)pcVar3[1], pcVar3[1] != 0)))) {
      DAT_0a75d658 = 1;
    }
    pcVar3 = getenv("GC_USE_ENTIRE_HEAP");
    if ((pcVar3 != (char *)0x0) &&
       ((*pcVar3 != '0' || (DAT_0a75d19c = (uint)(byte)pcVar3[1], pcVar3[1] != 0)))) {
      DAT_0a75d19c = 1;
    }
    DAT_0a75daa0 = clock();
    FUN_044c0774();
    if (DAT_0a51bae8 != 0) {
      DAT_0a51bbd0 = 0xfffffffffffffff8;
    }
    FullSerializer_Internal_fsCyclicReferenceManager__GetReferenceObject
              (&DAT_0a54ac60,&DAT_0a75d140);
    FullSerializer_Internal_fsCyclicReferenceManager__GetReferenceObject
              (&PTR_DAT_0a51bba0,&PTR_thunk_FUN_044c16dc_0a51bda0);
    if (DAT_0a75da88 == 0) {
      DAT_0a75da88 = FUN_044c07dc();
    }
    if ((DAT_0a75d168 != 0) || (pcVar3 = getenv("GC_ENABLE_INCREMENTAL"), pcVar3 != (char *)0x0)) {
      if (DAT_0a54ac58 == 2) {
        FUN_044b5540("Initializing MANUAL_VDB...\n");
      }
      DAT_0a75d168 = 1;
    }
    FUN_044b66d4();
    FUN_044b532c();
    FUN_044be14c(0x1000);
    pcVar3 = getenv("GC_INITIAL_HEAP_SIZE");
    if (pcVar3 == (char *)0x0) {
      uVar5 = 0x40000;
    }
    else {
      uVar5 = FUN_044c069c();
      if (uVar5 < 0x40001) {
        (*(code *)PTR_thunk_FUN_044b5094_0a51baf0)
                  ("GC Warning: Bad initial heap size %s - ignoring it.\n",pcVar3);
      }
    }
    pcVar3 = getenv("GC_MAXIMUM_HEAP_SIZE");
    if (pcVar3 != (char *)0x0) {
      uVar6 = FUN_044c069c();
      if (uVar6 < uVar5) {
        (*(code *)PTR_thunk_FUN_044b5094_0a51baf0)
                  ("GC Warning: Bad maximum heap size %s - ignoring it.\n",pcVar3);
      }
      DAT_0a75d678 = uVar6;
      if (DAT_0a75d680 == 0) {
        DAT_0a75d680 = 2;
      }
    }
    iVar1 = FUN_044babdc(uVar5 >> 0xc);
    if (iVar1 == 0) {
      FUN_044b5094("Can\'t start up: not enough memory\n");
      (*(code *)PTR_FUN_0a51bae0)(0);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    DAT_0a54ac68 = DAT_0a54ac68 + uVar5;
    if (DAT_0a51bae8 == 0) {
      if (DAT_0a550140 == '\0') {
        DAT_0a550140 = '\x01';
        DAT_0a54af10 = 1;
      }
    }
    else {
      memset(&DAT_0a550140,1,0x1000);
    }
    FullSerializer_Internal_fsPortableReflection_<GetFlattenedMethods>d__18__System_Collections_Generic_IEnumerator<System_Reflection_MethodInfo>_get_Current
              ();
    DAT_0a75d198 = 1;
    FUN_044c0888();
    if (DAT_0a75d650 != 0) {
      FUN_044b9e48(0);
    }
    if ((DAT_0a75da90 == 0) || (DAT_0a75d168 != 0)) {
      FUN_044b8be4(FUN_044b886c);
    }
    if (DAT_0a75d588 != 0) {
      FUN_03db6eb8(FUN_044c067c);
      return;
    }
  }
                    /* try { // try from 044b5a70 to 045b5a7b has its CatchHandler @ 044b5a98 */
  return;
}


