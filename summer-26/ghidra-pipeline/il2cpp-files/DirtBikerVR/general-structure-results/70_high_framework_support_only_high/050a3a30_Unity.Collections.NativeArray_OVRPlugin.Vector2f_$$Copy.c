/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 050a3a30
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


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(long param_1)

{
  long lVar1;
  long unaff_x19;
  int unaff_w21;
  int unaff_w24;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
                    /* try { // try from 050a3a4c to 051a3a73 has its CatchHandler @ 050a3c14 */
      FUN_03ac4090();
    }
    FUN_050a3190();
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    FUN_050a3abc();
    unaff_w21 = unaff_w21 + -1;
                    /* try { // try from 050a3a98 to 051a3afb has its CatchHandler @ 050a3c18 */
    if (unaff_w24 + unaff_w21 + 2U < 3) break;
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
    }
    param_1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_03ac4090();
    }
  }
  return;
}


