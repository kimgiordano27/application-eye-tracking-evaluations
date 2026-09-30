/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 050d92e0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor
          (undefined1 (*param_1) [12],long param_2)

{
  int iVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  
  iVar1 = *(int *)(*param_1 + 8);
  auVar2 = *param_1;
                    /* try { // try from 050d92f8 to 051d92fb has its CatchHandler @ 050d9384 */
                    /* try { // try from 050d92fc to 051d9387 has its CatchHandler @ 050d905c */
  if ((*(ushort *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  if (iVar1 < 0) {
    FUN_06771580(0);
  }
  auVar3._12_4_ = 0;
  auVar3._0_12_ = auVar2;
  return auVar3;
}


