/*
FUNCTION_NAME: UnityEngine.Material$$SetVectorArray
ENTRY_POINT: 0359dbac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 134
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_Material__SetVectorArray(void)

{
  undefined *puVar1;
  ulong uVar2;
  int in_w8;
  long unaff_x19;
  long lVar3;
  
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_036cee6c();
  puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (lVar3 != 0) {
                    /* try { // try from 0359dbf4 to 0369dc1b has its CatchHandler @ 0359de80 */
                    /* try { // try from 0359dc1c to 0369dcc7 has its CatchHandler @ 0359d898 */
    thunk_FUN_0369b650(DAT_00d38ba4,DAT_00d38ba4,DAT_00d38d70,DAT_00d38d70,lVar3,
                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x9c),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


