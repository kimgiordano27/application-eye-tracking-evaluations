/*
FUNCTION_NAME: System.Collections.Generic.List<OVRPlugin.Qpl.Annotation.Builder.Entry>$$ToArray
ENTRY_POINT: 053f1db0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__ToArray
               (long param_1,long param_2)

{
  int iVar1;
  undefined4 unaff_w19;
  
  if ((param_2 != 0) && (iVar1 = thunk_FUN_03d12034(param_2,0), iVar1 != 1)) {
    FUN_07122470(7,0);
  }
  FUN_0712485c(*(undefined8 *)(param_1 + 0x10),0,param_2,unaff_w19,*(undefined4 *)(param_1 + 0x18),0
              );
  return;
}


