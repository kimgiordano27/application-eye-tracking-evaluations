/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$Dispose
ENTRY_POINT: 045de9d4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x26;
  long unaff_x27;
  long in_stack_00000008;
  
  FUN_045de224(param_2,param_3,*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x188);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar4 = FUN_04d8a7b0(uVar4,0);
  if (in_stack_00000008 != 0) {
    lVar1 = FUN_04c8ae78(in_stack_00000008,*(undefined8 *)PTR_DAT_06322690,uVar4,0);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218(lVar5);
    }
    if (lVar1 == 0) {
      Oculus_Interaction_MicroGestureUnityEventWrapper__get_WhenSwipeDown(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = thunk_FUN_02b79548(lVar1,lVar5);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar1,lVar5);
    }
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar6 = 0;
      uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        FUN_045de304();
        uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    lVar1 = *unaff_x26;
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar1 = FUN_04d21d2c(0);
    if (lVar1 != 0) {
      FUN_0430a470();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


