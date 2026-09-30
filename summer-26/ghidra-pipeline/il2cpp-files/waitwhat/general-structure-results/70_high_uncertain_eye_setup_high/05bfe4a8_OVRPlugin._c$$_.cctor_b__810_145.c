/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_145
ENTRY_POINT: 05bfe4a8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined4 OVRPlugin_<>c__<_cctor>b__810_145(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  ulong unaff_x22;
  int iVar3;
  long lVar4;
  long *unaff_x25;
  undefined8 in_stack_00000028;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 2;
    if ((unaff_x22 & 1) != 0) {
      uVar1 = 3;
    }
    if ((unaff_x22 & 1) == 0) {
      if (unaff_x21 == 0) goto OVRPlugin_<>c__<_cctor>b__810_147;
      iVar3 = *(int *)(unaff_x21 + 0x18);
    }
    else {
      if (unaff_x21 == 0) goto OVRPlugin_<>c__<_cctor>b__810_147;
      iVar3 = *(int *)(unaff_x21 + 0x18);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
    }
                    /* try { // try from 05bfe4ec to 05cfe59b has its CatchHandler @ 05bfe4ec
                       catch() { ... } // from try @ 05bfe4ec with catch @ 05bfe4ec
                       catch() { ... } // from try @ 05bfe5e8 with catch @ 05bfe4ec
                       catch() { ... } // from try @ 05bfe634 with catch @ 05bfe4ec
                       catch() { ... } // from try @ 05bfe658 with catch @ 05bfe4ec */
    in_stack_00000028 = FUN_05856458();
    uVar2 = FUN_05856388(&stack0x00000028,0);
    if ((unaff_x19 == 0) || (lVar4 = *(long *)(unaff_x19 + 0x18), lVar4 == 0)) {
OVRPlugin_<>c__<_cctor>b__810_147:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar1 = FUN_05bfd828(unaff_w20,uVar2,iVar3,uVar1,unaff_x19 + 0x10,unaff_x19 + 0x14,lVar4,
                         *(undefined4 *)(lVar4 + 0x18));
    FUN_0585646c(&stack0x00000028,0);
  }
  else {
    uVar1 = 0xfffff768;
  }
  return uVar1;
}


