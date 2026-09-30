/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 06e2894c
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe(long *param_1)

{
  long lVar1;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  
  if ((*(ushort *)(*param_1 + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  lVar1 = thunk_FUN_04983f60();
  FUN_06e27260(lVar1,unaff_w19,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x148));
  if (lVar1 != 0) {
                    /* try { // try from 06e28984 to 06f289ab has its CatchHandler @ 06e288f4 */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 06e28924 with catch @ 06e28994
                        */
    FUN_08d9f1fc(*(undefined8 *)(unaff_x21 + 0x10),unaff_w20,*(undefined8 *)(lVar1 + 0x10),0,
                 unaff_w19,0);
    *(undefined4 *)(lVar1 + 0x18) = unaff_w19;
                    /* try { // try from 06e289ac to 06f289c3 has its CatchHandler @ 06e28a94 */
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


