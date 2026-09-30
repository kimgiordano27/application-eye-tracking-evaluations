/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$ToNativeArray
ENTRY_POINT: 05be9b24
PROGRAM: waitwhat-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__ToNativeArray(undefined8 param_1,uint param_2)

{
  long lVar1;
  long in_x9;
  long unaff_x19;
  undefined4 uStack000000000000002c;
  
  lVar1 = *(long *)(unaff_x19 + 0xd0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (param_2 < *(uint *)(lVar1 + 0x18)) {
    *(undefined4 *)(lVar1 + in_x9 * 4 + 0x20) = 0x3f800000;
    uStack000000000000002c = 2;
    FUN_05be9b7c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


