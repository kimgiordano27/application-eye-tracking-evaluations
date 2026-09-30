/*
FUNCTION_NAME: OVRPlugin$$DestroyInsightTriangleMesh
ENTRY_POINT: 01f72110
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__DestroyInsightTriangleMesh(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  int in_w8;
  ushort *in_x9;
  uint in_w10;
  uint in_w11;
  
  while( true ) {
    in_w8 = in_w8 + -1;
    if (in_w8 < 0) {
      *param_2 = in_w11;
      return 1;
    }
    if (in_w10 < in_w11) break;
    uVar1 = in_w11 * 10;
    in_w11 = uVar1;
    if (*in_x9 != 0) {
      in_w11 = (uVar1 + *in_x9) - 0x30;
      in_x9 = in_x9 + 1;
      if (in_w11 < uVar1) {
        return 0;
      }
    }
  }
  return 0;
}


