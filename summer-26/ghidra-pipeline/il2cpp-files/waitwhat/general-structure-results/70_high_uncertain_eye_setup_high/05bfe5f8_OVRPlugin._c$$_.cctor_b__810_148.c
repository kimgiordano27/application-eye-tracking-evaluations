/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_148
ENTRY_POINT: 05bfe5f8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_<>c__<_cctor>b__810_148(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  uint unaff_w20;
  undefined4 unaff_w21;
  long unaff_x22;
  int iVar4;
  long unaff_x23;
  long *unaff_x25;
  undefined8 in_stack_00000028;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0xa8));
  *(undefined1 *)(unaff_x23 + 0xed6) = 1;
  lVar2 = *unaff_x25;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bfe5dc with catch @ 05bfe610
                        */
  if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bfe59c with catch @ 05bfe614
                        */
    thunk_FUN_031e5338();
    lVar2 = *unaff_x25;
  }
  if (*(int *)(*(long *)(lVar2 + 0xb8) + 8) == 0) {
                    /* try { // try from 05bfe630 to 05cfe633 has its CatchHandler @ 05bfe64c */
    if ((unaff_w20 & 1) == 0) {
                    /* catch() { ... } // from try @ 05bfe630 with catch @ 05bfe64c */
      if (unaff_x22 == 0) goto LAB_05bfe6f0;
                    /* try { // try from 05bfe650 to 05cfe657 has its CatchHandler @ 05bfe660 */
      iVar4 = *(int *)(unaff_x22 + 0x18);
    }
    else {
                    /* try { // try from 05bfe634 to 05cfe64f has its CatchHandler @ 05bfe4ec */
      if (unaff_x22 == 0) goto LAB_05bfe6f0;
      iVar4 = *(int *)(unaff_x22 + 0x18);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
    }
                    /* try { // try from 05bfe658 to 05cfe663 has its CatchHandler @ 05bfe4ec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05bfe650 with catch @ 05bfe660
                        */
    in_stack_00000028 = FUN_05856458();
    uVar3 = FUN_05856388(&stack0x00000028,0);
    if ((unaff_x19 == 0) || (lVar2 = *(long *)(unaff_x19 + 0x18), lVar2 == 0)) {
LAB_05bfe6f0:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar1 = FUN_05bfd828(unaff_w21,uVar3,iVar4,unaff_w20 & 1,unaff_x19 + 0x10,unaff_x19 + 0x14,lVar2
                         ,*(undefined4 *)(lVar2 + 0x18));
    FUN_0585646c(&stack0x00000028,0);
  }
  else {
    uVar1 = 0xfffff768;
  }
  return uVar1;
}


