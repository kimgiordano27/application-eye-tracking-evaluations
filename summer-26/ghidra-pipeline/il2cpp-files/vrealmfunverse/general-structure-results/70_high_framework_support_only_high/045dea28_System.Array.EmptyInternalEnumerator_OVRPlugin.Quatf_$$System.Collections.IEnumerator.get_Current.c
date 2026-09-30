/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 045dea28
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long lVar3;
  ulong uVar4;
  long *unaff_x26;
  
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218(lVar3);
  }
  if (param_1 == 0) {
    Oculus_Interaction_MicroGestureUnityEventWrapper__get_WhenSwipeDown(0x10,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar1 = thunk_FUN_02b79548(param_1,lVar3);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(param_1,lVar3);
  }
  if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
    uVar4 = 0;
    uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
    do {
      if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      FUN_045de304();
      uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(lVar1 + 0x18));
  }
  lVar3 = *unaff_x26;
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar3 = FUN_04d21d2c(0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_0430a470();
  return;
}


