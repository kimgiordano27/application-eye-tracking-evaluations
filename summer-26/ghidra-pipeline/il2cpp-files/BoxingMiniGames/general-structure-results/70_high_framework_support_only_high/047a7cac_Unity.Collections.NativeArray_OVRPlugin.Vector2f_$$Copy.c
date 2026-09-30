/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 047a7cac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(long param_1)

{
  undefined8 uVar1;
  uint in_w9;
  undefined8 *unaff_x19;
  uint unaff_w22;
  ulong unaff_x25;
  undefined8 uVar2;
  
                    /* try { // try from 047a7cac to 048a7caf has its CatchHandler @ 047a7cb8 */
                    /* try { // try from 047a7cb0 to 048a7cbb has its CatchHandler @ 047a7be0 */
  if (unaff_w22 < in_w9) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 047a7cac with catch @ 047a7cb8
                        */
    param_1 = param_1 + (unaff_x25 & 0xffffffff) * 0x18;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    unaff_x19[1] = *(undefined8 *)(param_1 + 0x28);
    *unaff_x19 = uVar2;
    unaff_x19[2] = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


