/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopyTo
ENTRY_POINT: 03b629b4
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopyTo(undefined8 param_1,int param_2)

{
  int unaff_w20;
  int unaff_w21;
  void *unaff_x23;
  long unaff_x24;
  undefined8 uVar1;
  
  if (param_2 < 0) {
    FUN_04f522f0(0);
  }
  if (unaff_w20 < 0) {
    FUN_04f51f34(0x10,4,0);
  }
  if (*(int *)(unaff_x24 + 0x18) - unaff_w21 < unaff_w20) {
    FUN_04f51a70(0x17,0);
  }
  uVar1 = *(undefined8 *)(unaff_x24 + 0x10);
                    /* try { // try from 03b629dc to 03c629eb has its CatchHandler @ 03b629ec */
  memcpy(&stack0x00000000,unaff_x23,0xb0);
                    /* catch() { ... } // from try @ 03b62968 with catch @ 03b629ec
                       catch() { ... } // from try @ 03b629dc with catch @ 03b629ec */
                    /* try { // try from 03b629f0 to 03c629f3 has its CatchHandler @ 03b629fc */
                    /* try { // try from 03b629f4 to 03c629ff has its CatchHandler @ 03b6285c */
  memcpy(&stack0x000000b0,&stack0x00000000,0xb0);
  FUN_035a9aec(uVar1,unaff_w21,unaff_w20,&stack0x000000b0);
  return;
}


