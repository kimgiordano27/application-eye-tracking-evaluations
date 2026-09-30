/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._CaptureInputFocus$$EndInvoke
ENTRY_POINT: 043190a4
PROGRAM: m3ar-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__CaptureInputFocus__EndInvoke
               (undefined8 *param_1)

{
  undefined8 uVar1;
  long in_x9;
  long unaff_x19;
  undefined8 uVar2;
  long *unaff_x23;
  
  uVar2 = *param_1;
  uVar1 = thunk_FUN_0406deb8(**(undefined8 **)(in_x9 + 0x900));
  FUN_0532c238(uVar1,uVar2,*(undefined8 *)PTR_DAT_08f73940,0);
  *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8) = uVar1;
  if (unaff_x19 != 0) {
    FUN_057d5d8c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


