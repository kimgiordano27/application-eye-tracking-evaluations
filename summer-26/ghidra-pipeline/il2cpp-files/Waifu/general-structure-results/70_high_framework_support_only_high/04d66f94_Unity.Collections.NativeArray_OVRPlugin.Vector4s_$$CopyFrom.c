/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopyFrom
ENTRY_POINT: 04d66f94
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopyFrom(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  undefined8 *unaff_x19;
  long unaff_x21;
  long lVar3;
  
  if (in_w8 == 0) {
    FUN_033b9870();
    param_1 = *(long *)(unaff_x21 + 0xc30);
  }
  uVar1 = *unaff_x19;
  uVar2 = unaff_x19[1];
  lVar3 = *(long *)(*(long *)(param_1 + 0xb8) + 0x28);
  if (*(int *)(DAT_083c96c8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (lVar3 != 0) {
    FUN_068bde18(lVar3,uVar1,uVar2,0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


