/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 02bf2920
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Dispose(void)

{
  int in_w8;
  int unaff_w20;
  int unaff_w21;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (in_w8 - unaff_w21 < unaff_w20) {
    FUN_03060400(0x17,0);
  }
  in_stack_00000030 = unaff_x23[2];
  in_stack_00000028 = unaff_x23[1];
  in_stack_00000020 = *unaff_x23;
                    /* try { // try from 02bf295c to 02cf296b has its CatchHandler @ 02bf296c */
                    /* catch() { ... } // from try @ 02bf28e0 with catch @ 02bf296c
                       catch() { ... } // from try @ 02bf295c with catch @ 02bf296c */
                    /* try { // try from 02bf2970 to 02cf2973 has its CatchHandler @ 02bf297c */
  FUN_01e71104(*(undefined8 *)(unaff_x24 + 0x10),unaff_w21,unaff_w20,&stack0x00000020);
                    /* try { // try from 02bf2974 to 02cf297f has its CatchHandler @ 02bf2828 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02bf2970 with catch @ 02bf297c
                        */
  return;
}


