/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopySafe
ENTRY_POINT: 03cb73bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopySafe
               (long param_1,int param_2,int param_3)

{
  int unaff_w20;
  
                    /* try { // try from 03cb73c0 to 03db73e7 has its CatchHandler @ 03cb7330 */
  if (param_2 < 0) {
    FUN_050f63c0(0);
  }
  if (param_3 < 0) {
    FUN_050f6004(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - unaff_w20 < param_3) {
    FUN_050f5b58(0x17,0);
  }
                    /* try { // try from 03cb73e8 to 03db73f7 has its CatchHandler @ 03cb73f8 */
                    /* catch() { ... } // from try @ 03cb73a8 with catch @ 03cb73f8
                       catch() { ... } // from try @ 03cb73e8 with catch @ 03cb73f8 */
                    /* try { // try from 03cb73fc to 03db73ff has its CatchHandler @ 03cb7408 */
                    /* try { // try from 03cb7400 to 03db740b has its CatchHandler @ 03cb7330 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03cb73fc with catch @ 03cb7408
                        */
  FUN_034207b8(*(undefined8 *)(param_1 + 0x10),unaff_w20,param_3);
  return;
}


