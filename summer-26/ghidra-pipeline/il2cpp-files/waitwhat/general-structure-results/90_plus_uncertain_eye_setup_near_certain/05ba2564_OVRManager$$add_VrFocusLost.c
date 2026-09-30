/*
FUNCTION_NAME: OVRManager$$add_VrFocusLost
ENTRY_POINT: 05ba2564
PROGRAM: waitwhat-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__add_VrFocusLost(undefined1 param_1 [16],float param_2,undefined4 param_3)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000058;
  
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar1 = FUN_069d3a80(*(long *)(unaff_x19 + 0x20),0);
    if (lVar1 != 0) {
      uVar2 = FUN_069e6fbc(lVar1,0);
      if (DAT_07547004 == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_07547004 = '\x01';
      }
      lVar1 = *(long *)(*unaff_x20 + 0xb8);
      OVRManager__remove_InputFocusLost
                (uVar2,param_2,param_3,*(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(lVar1 + 0x28),
                 *(undefined4 *)(lVar1 + 0x2c));
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        fVar3 = (float)FUN_06a577c0(*(long *)(unaff_x19 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          fVar4 = *(float *)(unaff_x19 + 0x28);
          lVar1 = FUN_069d3a80(*(long *)(unaff_x19 + 0x20),0);
          if (lVar1 != 0) {
            FUN_069e7098(uVar2,fVar4 + (param_2 - in_stack_00000058._4_4_) + fVar3 * 0.5,param_3,
                         lVar1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


