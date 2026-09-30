/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 0399de98
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe(long param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  int unaff_w19;
  undefined8 uVar3;
  
  if (unaff_w19 == 0) {
                    /* try { // try from 0399dee8 to 03a9deff has its CatchHandler @ 0399df78 */
    bVar1 = false;
  }
  else {
                    /* try { // try from 0399dea0 to 03a9decf has its CatchHandler @ 0399ded0 */
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    memcpy(&stack0x00000000,param_2,0xd0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399de64 with catch @ 0399ded0
                       catch(type#1 @ 05fbf508) { ... } // from try @ 0399dea0 with catch @ 0399ded0
                       try { // try from 0399ded0 to 03a9dee7 has its CatchHandler @ 0399de14 */
    iVar2 = FUN_03389a24(uVar3);
    bVar1 = iVar2 != -1;
  }
  return bVar1;
}


