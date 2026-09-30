/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetEnumerator
ENTRY_POINT: 05ea74e8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetEnumerator(ushort *param_1,long param_2)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_040b1acc();
  }
                    /* try { // try from 05ea7504 to 05fa7507 has its CatchHandler @ 05ea758c */
  if ((*(ushort *)(**(long **)(param_2 + 0xc0) + 0x135) & 1) == 0) {
    FUN_040b1acc(**(long **)(param_2 + 0xc0));
  }
  lVar1 = thunk_FUN_040b4e00();
  if (lVar1 == 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    return;
  }
  if (-1 < *(int *)(unaff_x20 + 0xc)) {
                    /* try { // try from 05ea7530 to 05fa753f has its CatchHandler @ 05ea7590 */
    FUN_0758dc78(lVar1,3,0);
  }
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  FUN_0762127c();
  return;
}


