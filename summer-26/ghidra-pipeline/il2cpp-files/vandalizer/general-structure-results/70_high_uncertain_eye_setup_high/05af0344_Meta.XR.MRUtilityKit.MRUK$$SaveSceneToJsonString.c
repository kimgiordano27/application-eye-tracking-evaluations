/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$SaveSceneToJsonString
ENTRY_POINT: 05af0344
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__SaveSceneToJsonString(long *param_1,long param_2)

{
  long lVar1;
  
  if ((int)param_1[1] != 0) {
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if ((int)param_1[1] != *(int *)(*param_1 + 0x20) + 1) goto LAB_05af037c;
  }
  FUN_05e22a2c(0);
LAB_05af037c:
  lVar1 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10));
  return;
}


