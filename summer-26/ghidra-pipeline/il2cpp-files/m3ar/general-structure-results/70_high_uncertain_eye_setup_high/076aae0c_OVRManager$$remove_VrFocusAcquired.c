/*
FUNCTION_NAME: OVRManager$$remove_VrFocusAcquired
ENTRY_POINT: 076aae0c
PROGRAM: m3ar-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_VrFocusAcquired
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined4 *unaff_x19;
  undefined4 uVar2;
  
  uVar2 = FUN_08598884(param_5,0);
  *unaff_x19 = uVar2;
  unaff_x19[1] = param_2;
  unaff_x19[2] = param_3;
  lVar1 = FUN_085849e0();
  if (lVar1 != 0) {
    uVar2 = FUN_08596a20(lVar1,0);
    unaff_x19[3] = uVar2;
    unaff_x19[4] = param_2;
    unaff_x19[5] = param_3;
    unaff_x19[6] = param_4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


