/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.OpenVRInterop$$.ctor
ENTRY_POINT: 04315ae0
PROGRAM: m3ar-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_OpenVRInterop___ctor(long param_1)

{
  long lVar1;
  long in_x9;
  int *piVar2;
  long unaff_x21;
  
  if (in_x9 != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar2 + -2) == *(long *)(unaff_x21 + 0x20)) {
        lVar1 = param_1 + (long)(int)(*piVar2 + (uint)*(ushort *)(unaff_x21 + 0x50)) * 0x10 + 0x138;
        goto LAB_04315b28;
      }
      in_x9 = in_x9 + -1;
      piVar2 = piVar2 + 4;
    } while (in_x9 != 0);
  }
  lVar1 = FUN_0406ae20();
LAB_04315b28:
  lVar1 = Crosstales_Common_Util_BaseHelper__FormatSecondsToHRF(*(undefined8 *)(lVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x04315b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}


