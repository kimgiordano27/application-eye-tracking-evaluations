/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopySafe
ENTRY_POINT: 0399bc7c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopySafe(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  void *unaff_x20;
  uint unaff_w21;
  
  FUN_0399b264();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  iVar1 = *(int *)(unaff_x19 + 0x18) - unaff_w21;
  if (iVar1 != 0 && (int)unaff_w21 <= *(int *)(unaff_x19 + 0x18)) {
    FUN_04d9e334(lVar2,unaff_w21,lVar2,unaff_w21 + 1,iVar1,0);
    lVar2 = *(long *)(unaff_x19 + 0x10);
  }
  if (lVar2 != 0) {
    if (unaff_w21 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)unaff_w21 * 0x1b0;
      memmove((void *)(lVar2 + 0x20),unaff_x20,0x1b0);
      thunk_FUN_02bb0e9c(lVar2 + 0x20,0);
      *(ulong *)(unaff_x19 + 0x18) =
           CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                    (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


