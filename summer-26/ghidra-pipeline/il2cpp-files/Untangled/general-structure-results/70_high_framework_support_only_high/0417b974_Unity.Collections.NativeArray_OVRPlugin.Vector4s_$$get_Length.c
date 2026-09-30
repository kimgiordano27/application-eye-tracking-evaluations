/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_Length
ENTRY_POINT: 0417b974
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_Length(long param_1,undefined8 param_2)

{
  int iVar1;
  void *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long lVar2;
  
  iVar1 = (uint)unaff_x22 + 1;
  FUN_0417c154(param_2,iVar1,*(undefined8 *)(param_1 + 0x78));
  lVar2 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x18) = iVar1;
  memcpy(&stack0x00000050,unaff_x19,0x50);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  memcpy(&stack0x00000000,&stack0x00000050,0x50);
  if ((uint)unaff_x22 < *(uint *)(lVar2 + 0x18)) {
    lVar2 = lVar2 + unaff_x22 * 0x50;
    memcpy((void *)(lVar2 + 0x20),&stack0x00000000,0x50);
    thunk_FUN_02f411dc(lVar2 + 0x40,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


