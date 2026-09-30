/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 03b5f754
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>___ctor
               (long param_1,long param_2,void *param_3)

{
  int iVar1;
  long unaff_x22;
  long lVar2;
  
  iVar1 = (uint)unaff_x22 + 1;
  FUN_03b5fee4(param_2,iVar1,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x78));
  lVar2 = *(long *)(param_2 + 0x10);
  *(int *)(param_2 + 0x18) = iVar1;
  memcpy(&stack0x00000160,param_3,0x160);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  memcpy(&stack0x00000000,&stack0x00000160,0x160);
  if ((uint)unaff_x22 < *(uint *)(lVar2 + 0x18)) {
    memcpy((void *)(lVar2 + unaff_x22 * 0x160 + 0x20),&stack0x00000000,0x160);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


