/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandTrackingEnabled
ENTRY_POINT: 01db5f98
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled(undefined8 param_1,long param_2)

{
  long lVar1;
  long *unaff_x19;
  
  if (*unaff_x19 != param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0();
  }
  lVar1 = unaff_x19[3];
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01db5fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),unaff_x19[4],*(undefined8 *)(lVar1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


