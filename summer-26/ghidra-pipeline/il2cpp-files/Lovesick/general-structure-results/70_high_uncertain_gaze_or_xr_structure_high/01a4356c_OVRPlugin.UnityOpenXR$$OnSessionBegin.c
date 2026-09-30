/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 01a4356c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionBegin(long param_1)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
  do {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01a432c4(param_1);
    lVar1 = (long)unaff_w22;
    unaff_w22 = unaff_w22 + 1;
  } while ((lVar1 < unaff_x21) && (param_1 = FUN_01a431f0(), param_1 != 0));
  return;
}


