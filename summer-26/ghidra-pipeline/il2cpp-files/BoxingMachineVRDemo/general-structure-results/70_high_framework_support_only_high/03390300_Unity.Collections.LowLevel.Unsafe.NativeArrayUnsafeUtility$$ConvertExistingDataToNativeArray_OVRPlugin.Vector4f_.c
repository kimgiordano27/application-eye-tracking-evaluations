/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector4f>
ENTRY_POINT: 03390300
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector4f>
               (void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  void *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  long *plVar5;
  long unaff_x29;
  
  if (in_w8 != 0) {
    plVar5 = *(long **)(unaff_x19 + 0x38);
    if (-1 < *(int *)(*plVar5 + 0x28)) {
      unaff_x21 = (void *)(unaff_x29 + -0x10);
    }
    memcpy(unaff_x23,unaff_x21,unaff_x22);
    uVar1 = FUN_02d60a9c(*plVar5);
    if ((uVar1 & 1) != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
      thunk_FUN_02dc61f4(PTR_DAT_06767eb0);
      FUN_028f4b80();
      uVar2 = FUN_033959dc(0);
      thunk_FUN_02dc61f4(PTR_DAT_06764070);
      uVar3 = thunk_FUN_02d9d534();
      FUN_04f7ee98(uVar3,uVar4,uVar2,0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar3);
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


