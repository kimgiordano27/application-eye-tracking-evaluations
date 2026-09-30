/*
FUNCTION_NAME: OVRManager$$remove_VrFocusLost
ENTRY_POINT: 0907f660
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_VrFocusLost(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  float in_stack_00000008;
  
  FUN_0a1ecdb4();
                    /* try { // try from 0907f684 to 0917f687 has its CatchHandler @ 0907f7f4 */
                    /* try { // try from 0907f688 to 0917f777 has its CatchHandler @ 0907f0f8 */
  uVar1 = FUN_09081468();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar2 = FUN_0a17834c(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) {
    uVar4 = FUN_0a18a1a0(lVar2,0);
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      fVar5 = (float)FUN_0a1ecdb4(*(long *)(unaff_x20 + 0x20),0);
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        fVar7 = *(float *)(unaff_x20 + 0x28);
        fVar6 = (float)FUN_0a1ecf3c(*(long *)(unaff_x20 + 0x20),0);
        uVar3 = FUN_09081468(uVar4,unaff_s10,unaff_s11,fVar5 + fVar7,
                             fVar6 * 0.5 + *(float *)(unaff_x20 + 0x28) + in_stack_00000008);
        return uVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


