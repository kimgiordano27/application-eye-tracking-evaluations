/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 04d65348
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(void)

{
  long lVar1;
  int in_w8;
  long unaff_x22;
  
  if (in_w8 == 0) {
    FUN_033b9870();
  }
  if (DAT_086d9726 == '\0') {
    FUN_0335b6c8(&DAT_083d1c30,1);
    DataMemoryBarrier(2,3);
    DAT_086d9726 = '\x01';
  }
  lVar1 = *(long *)(unaff_x22 + 0xc30);
  if (*(int *)(lVar1 + 0xe0) == 0) {
    FUN_033b9870();
    lVar1 = *(long *)(unaff_x22 + 0xc30);
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x28);
  if (*(int *)(DAT_083c96c8 + 0xe0) == 0) {
    FUN_033b9870(DAT_083c96c8);
  }
  if (lVar1 != 0) {
    FUN_068bde18(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


