/*
FUNCTION_NAME: QFSW.QC.Containers.ArraySingle.<GetEnumerator>d__6<__Il2CppFullySharedGenericType>$$MoveNext
ENTRY_POINT: 01f3e210
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01f3e40c) */

long * QFSW_QC_Containers_ArraySingle_<GetEnumerator>d__6<__Il2CppFullySharedGenericType>__MoveNext
                 (long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  char cStack000000000000000c;
  long *in_stack_00000018;
  
                    /* try { // try from 01f3e224 to 0203e243 has its CatchHandler @ 01f3e4bc */
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd7628);
    FUN_01ab69ac(PTR_DAT_03cd7990);
    FUN_01ab69ac(PTR_DAT_03cd7630);
    FUN_01ab69ac(PTR_DAT_03cd7998);
                    /* try { // try from 01f3e264 to 0203e267 has its CatchHandler @ 01f3e918 */
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_01a47054(param_2);
    }
  }
  in_stack_00000018 = (long *)0x0;
  plVar5 = (long *)(param_1 + 0x10);
  lVar4 = *plVar5;
  if (lVar4 == 0) {
                    /* try { // try from 01f3e288 to 0203e28f has its CatchHandler @ 01f3e470 */
                    /* try { // try from 01f3e290 to 0203e323 has its CatchHandler @ 01f3d5bc */
    uVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd7998);
    FUN_0219a4f0(uVar2,*(undefined8 *)PTR_DAT_03cd7990);
    FUN_01aa50f0(plVar5,uVar2,0);
    lVar4 = *plVar5;
  }
  cStack000000000000000c = '\0';
  FUN_027e0bd8(lVar4,&stack0x0000000c,0);
  puVar1 = PTR_DAT_03cbe5e8;
  uVar2 = **(undefined8 **)(param_2 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_0277b678(uVar2,0);
  if (lVar4 != 0) {
    uVar3 = FUN_0219f8b8(lVar4,uVar2,&stack0x00000018,*(undefined8 *)PTR_DAT_03cd7628);
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 01f3e324 to 0203e32b has its CatchHandler @ 01f3e924 */
                    /* try { // try from 01f3e32c to 0203e333 has its CatchHandler @ 01f3e92c */
      uVar2 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 01f3e334 to 0203e337 has its CatchHandler @ 01f3e918 */
        thunk_FUN_01a58e78();
      }
                    /* try { // try from 01f3e338 to 0203e33b has its CatchHandler @ 01f3e468 */
                    /* try { // try from 01f3e33c to 0203e33f has its CatchHandler @ 01f3e450 */
                    /* try { // try from 01f3e340 to 0203e343 has its CatchHandler @ 01f3e44c */
      uVar2 = FUN_0277b678(uVar2,0);
                    /* try { // try from 01f3e344 to 0203e347 has its CatchHandler @ 01f3e440 */
                    /* try { // try from 01f3e348 to 0203e34b has its CatchHandler @ 01f3e438 */
                    /* try { // try from 01f3e34c to 0203e34f has its CatchHandler @ 01f3e4a0 */
                    /* try { // try from 01f3e350 to 0203e353 has its CatchHandler @ 01f3e920 */
                    /* try { // try from 01f3e354 to 0203e357 has its CatchHandler @ 01f3e91c */
      if ((*(byte *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x135) & 1) == 0) {
                    /* try { // try from 01f3e358 to 0203e35b has its CatchHandler @ 01f3e49c */
        FUN_01a46ff8();
      }
                    /* try { // try from 01f3e35c to 0203e35f has its CatchHandler @ 01f3e9e8 */
      plVar5 = (long *)thunk_FUN_01a89e68();
                    /* try { // try from 01f3e360 to 0203e363 has its CatchHandler @ 01f3e930 */
                    /* try { // try from 01f3e364 to 0203e367 has its CatchHandler @ 01f3e428 */
                    /* try { // try from 01f3e368 to 0203e36b has its CatchHandler @ 01f3e484 */
                    /* try { // try from 01f3e36c to 0203e36f has its CatchHandler @ 01f3e92c */
      FUN_02076e68(plVar5,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10));
      in_stack_00000018 = plVar5;
      FUN_0219b83c(lVar4,uVar2,plVar5,*(undefined8 *)PTR_DAT_03cd7630);
    }
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar4,0);
    }
    plVar5 = in_stack_00000018;
    lVar4 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    if (plVar5 != (long *)0x0) {
      if (*(byte *)(lVar4 + 0x130) <= *(byte *)(*plVar5 + 0x130)) {
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) == lVar4)
        {
          return plVar5;
        }
        return (long *)0x0;
      }
    }
    return (long *)0x0;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01f3e37c with catch @ 01f3e414 */
  FUN_01ab6c3c(uVar2,uVar2);
}


