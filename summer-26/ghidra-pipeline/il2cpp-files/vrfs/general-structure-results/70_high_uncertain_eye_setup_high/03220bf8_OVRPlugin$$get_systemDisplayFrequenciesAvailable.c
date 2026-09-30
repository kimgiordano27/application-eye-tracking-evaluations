/*
FUNCTION_NAME: OVRPlugin$$get_systemDisplayFrequenciesAvailable
ENTRY_POINT: 03220bf8
PROGRAM: vrfs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_systemDisplayFrequenciesAvailable
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 03220c0c to 03320c63 has its CatchHandler @ 03220c0c
                       catch() { ... } // from try @ 03220c0c with catch @ 03220c0c
                       catch() { ... } // from try @ 03220c94 with catch @ 03220c0c
                       catch() { ... } // from try @ 03220cdc with catch @ 03220c0c
                       catch() { ... } // from try @ 03220d0c with catch @ 03220c0c
                       catch() { ... } // from try @ 03220d80 with catch @ 03220c0c */
  if ((bRam0000000007237e67 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e3f9a0);
    thunk_FUN_0159f088(PTR_DAT_06ddfe48);
    bRam0000000007237e67 = 1;
  }
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
                    /* try { // try from 03220c64 to 03320c93 has its CatchHandler @ 03220cdc */
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (DAT_0722c535 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    DAT_0722c535 = '\x01';
  }
  FUN_025eb094(&uStack_30,&uStack_70,0x20,0);
                    /* try { // try from 03220c94 to 03320cab has its CatchHandler @ 03220c0c */
  if (DAT_0722c536 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dfcf08);
                    /* try { // try from 03220cac to 03320cdb has its CatchHandler @ 03220cdc */
    DAT_0722c536 = '\x01';
  }
  puVar2 = PTR_DAT_06e3f9a0;
  if (param_2 == 0) {
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    uVar3 = FUN_02524ea0(param_2,0);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
  }
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 03220c64 with catch @ 03220cdc
                       catch(type#1 @ 06a5a440) { ... } // from try @ 03220cac with catch @ 03220cdc
                       try { // try from 03220cdc to 03320cf3 has its CatchHandler @ 03220c0c */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
                    /* try { // try from 03220cf4 to 03320d0b has its CatchHandler @ 03220d78 */
  lVar4 = FUN_03220d44(param_1,&uStack_30,uVar3,uVar5,param_3);
  if (lVar4 == 0) {
                    /* try { // try from 03220d0c to 03320d67 has its CatchHandler @ 03220c0c */
    FUN_025eb0d0(&uStack_30,0);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


