/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetEyeToHeadTransform$$.ctor
ENTRY_POINT: 0431615c
PROGRAM: m3ar-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetEyeToHeadTransform___ctor
               (undefined8 param_1)

{
  ulong uVar1;
  long unaff_x19;
  int unaff_w20;
  
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar1 = FUN_04331ed0(*(long *)(unaff_x19 + 0x30),0x9b,0);
    if ((unaff_w20 != (int)((ulong)param_1 >> 0x20)) || ((uVar1 & 1) != 0)) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_04332554(*(long *)(unaff_x19 + 0x30),0x9b,1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


