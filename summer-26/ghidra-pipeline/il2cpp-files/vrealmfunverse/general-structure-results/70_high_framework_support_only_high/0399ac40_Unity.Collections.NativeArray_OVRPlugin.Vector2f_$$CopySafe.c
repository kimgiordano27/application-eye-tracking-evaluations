/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopySafe
ENTRY_POINT: 0399ac40
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe(void *param_1,void *param_2)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  
  memcpy(param_1,param_2,0x1b0);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)uVar1 * 0x1b0;
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      memcpy((void *)(lVar2 + 0x20),&stack0x00000000,0x1b0);
      thunk_FUN_02bb0e9c(lVar2 + 0x20,0);
    }
    else {
      memcpy(&stack0x000001b0,&stack0x00000000,0x1b0);
      FUN_0399ab40();
    }
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


