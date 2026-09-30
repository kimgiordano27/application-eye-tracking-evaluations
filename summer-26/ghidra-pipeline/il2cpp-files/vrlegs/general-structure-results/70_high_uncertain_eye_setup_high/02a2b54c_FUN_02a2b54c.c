/*
FUNCTION_NAME: FUN_02a2b54c
ENTRY_POINT: 02a2b54c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02a2b7f8) */

void FUN_02a2b54c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char local_3c [4];
  long local_38;
  
                    /* try { // try from 02a2b54c to 02b2b54f has its CatchHandler @ 02a2b59c */
                    /* try { // try from 02a2b550 to 02b2b557 has its CatchHandler @ 02a2b5c4 */
                    /* try { // try from 02a2b558 to 02b2b55b has its CatchHandler @ 02a2b594 */
                    /* try { // try from 02a2b55c to 02b2b55f has its CatchHandler @ 02a2b5a0 */
                    /* try { // try from 02a2b560 to 02b2b563 has its CatchHandler @ 02a2b578 */
                    /* try { // try from 02a2b564 to 02b2b567 has its CatchHandler @ 02a2b570 */
                    /* catch() { ... } // from try @ 02a2b218 with catch @ 02a2b568
                       try { // try from 02a2b568 to 02b2b633 has its CatchHandler @ 02a2af0c */
                    /* catch() { ... } // from try @ 02a2b31c with catch @ 02a2b56c */
  if ((DAT_04128217 & 1) == 0) {
                    /* catch() { ... } // from try @ 02a2b564 with catch @ 02a2b570 */
                    /* catch() { ... } // from try @ 02a2b470 with catch @ 02a2b574 */
                    /* catch() { ... } // from try @ 02a2b274 with catch @ 02a2b578
                       catch() { ... } // from try @ 02a2b560 with catch @ 02a2b578 */
    FUN_01ab69ac(PTR_DAT_03d0b438);
    FUN_01ab69ac(PTR_DAT_03d0b3d8);
                    /* catch() { ... } // from try @ 02a2b244 with catch @ 02a2b588 */
                    /* catch() { ... } // from try @ 02a2b22c with catch @ 02a2b58c */
                    /* catch() { ... } // from try @ 02a2b1f4 with catch @ 02a2b590 */
    FUN_01ab69ac(PTR_DAT_03d0b3e0);
                    /* catch() { ... } // from try @ 02a2b558 with catch @ 02a2b594 */
                    /* catch() { ... } // from try @ 02a2b38c with catch @ 02a2b598 */
                    /* catch() { ... } // from try @ 02a2b54c with catch @ 02a2b59c */
    FUN_01ab69ac(PTR_DAT_03cc4f30);
                    /* catch() { ... } // from try @ 02a2b4c0 with catch @ 02a2b5a0
                       catch() { ... } // from try @ 02a2b55c with catch @ 02a2b5a0 */
    FUN_01ab69ac(PTR_DAT_03cffb00);
                    /* catch() { ... } // from try @ 02a2b348 with catch @ 02a2b5b0 */
                    /* catch() { ... } // from try @ 02a2b330 with catch @ 02a2b5b4 */
    FUN_01ab69ac(PTR_DAT_03cca338);
                    /* catch() { ... } // from try @ 02a2b300 with catch @ 02a2b5b8 */
                    /* catch() { ... } // from try @ 02a2b548 with catch @ 02a2b5bc */
                    /* catch() { ... } // from try @ 02a2b2d4 with catch @ 02a2b5c0 */
    FUN_01ab69ac(PTR_DAT_03cc4f50);
                    /* catch() { ... } // from try @ 02a2b44c with catch @ 02a2b5c4
                       catch() { ... } // from try @ 02a2b550 with catch @ 02a2b5c4 */
                    /* catch() { ... } // from try @ 02a2b368 with catch @ 02a2b5c8 */
                    /* catch() { ... } // from try @ 02a2b1c8 with catch @ 02a2b5cc */
    FUN_01ab69ac(PTR_DAT_03cd1a80);
    DAT_04128217 = 1;
  }
                    /* catch() { ... } // from try @ 02a2b194 with catch @ 02a2b5d8 */
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* catch() { ... } // from try @ 02a2b168 with catch @ 02a2b5e4 */
  uVar3 = FUN_02789ac0(param_1,0);
  puVar1 = PTR_DAT_03cd1a80;
  if ((uVar3 & 1) == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
    uVar6 = thunk_FUN_01a89e68();
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d0b3f8);
    FUN_027a794c(uVar6,uVar5,0);
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d0b440);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar6,uVar5);
  }
                    /* catch() { ... } // from try @ 02a2b130 with catch @ 02a2b5f4 */
  lVar4 = *(long *)PTR_DAT_03cd1a80;
                    /* catch() { ... } // from try @ 02a2b110 with catch @ 02a2b5f8 */
                    /* catch() { ... } // from try @ 02a2b508 with catch @ 02a2b5fc
                       catch() { ... } // from try @ 02a2b540 with catch @ 02a2b5fc */
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar1;
  }
                    /* catch() { ... } // from try @ 02a2b100 with catch @ 02a2b608
                       catch() { ... } // from try @ 02a2b53c with catch @ 02a2b608 */
                    /* catch() { ... } // from try @ 02a2b0cc with catch @ 02a2b60c */
  uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                    /* catch() { ... } // from try @ 02a2b410 with catch @ 02a2b610 */
  local_3c[0] = '\0';
                    /* catch() { ... } // from try @ 02a2b3e0 with catch @ 02a2b614 */
                    /* catch() { ... } // from try @ 02a2b3d0 with catch @ 02a2b618 */
  FUN_027e0bd8(uVar6,local_3c,0);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
                    /* try { // try from 02a2b634 to 02b2b637 has its CatchHandler @ 02a2b884 */
    lVar4 = *(long *)puVar1;
  }
  if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar3 = FUN_0219c130(**(long **)(lVar4 + 0xb8),param_1,*(undefined8 *)PTR_DAT_03d0b3d8);
                    /* try { // try from 02a2b658 to 02b2b65f has its CatchHandler @ 02a2b924 */
  lVar4 = *(long *)puVar1;
                    /* try { // try from 02a2b660 to 02b2b677 has its CatchHandler @ 02a2af0c */
  if ((uVar3 & 1) == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
                    /* try { // try from 02a2b70c to 02b2b70f has its CatchHandler @ 02a2b924 */
      thunk_FUN_01a58e78();
                    /* try { // try from 02a2b710 to 02b2b727 has its CatchHandler @ 02a2af0c */
      lVar4 = *(long *)puVar1;
    }
    lVar7 = **(long **)(lVar4 + 0xb8);
                    /* try { // try from 02a2b728 to 02b2b72b has its CatchHandler @ 02a2b854 */
    lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc4f50);
    Animancer_AnimancerState__OnSetIsPlaying(lVar4,*(undefined8 *)PTR_DAT_03cca338);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* try { // try from 02a2b748 to 02b2b74b has its CatchHandler @ 02a2b8a0 */
    FUN_01b5f01c(lVar4,param_2,*(undefined8 *)PTR_DAT_03cc4f30);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0219b9a4(lVar7,param_1,lVar4,*(undefined8 *)PTR_DAT_03d0b438);
  }
  else {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_03d0b3e0;
                    /* try { // try from 02a2b678 to 02b2b67b has its CatchHandler @ 02a2b874 */
    if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0219b634(**(long **)(lVar4 + 0xb8),param_1,&local_38,*(undefined8 *)PTR_DAT_03d0b3e0);
                    /* try { // try from 02a2b69c to 02b2b69f has its CatchHandler @ 02a2b924 */
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* try { // try from 02a2b6a0 to 02b2b6bb has its CatchHandler @ 02a2af0c */
    uVar3 = FUN_02216960(local_38,param_2,*(undefined8 *)PTR_DAT_03cffb00);
    if ((uVar3 & 1) != 0) {
      lVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cd8d10);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_02a5ebc4(param_1,0,0);
      uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d0b448);
      uVar6 = FUN_025be86c(uVar5,param_2,uVar6,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
      uVar5 = thunk_FUN_01a89e68();
      FUN_026b274c(uVar5,uVar6,0);
      uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d0b440);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar6);
    }
    lVar4 = *(long *)puVar1;
                    /* try { // try from 02a2b6bc to 02b2b6bf has its CatchHandler @ 02a2b864 */
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar1;
    }
    if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* try { // try from 02a2b6dc to 02b2b6df has its CatchHandler @ 02a2b894 */
    FUN_0219b634(**(long **)(lVar4 + 0xb8),param_1,&local_38,*(undefined8 *)puVar2);
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b5f01c(local_38,param_2,*(undefined8 *)PTR_DAT_03cc4f30);
  }
  if (local_3c[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  return;
}


