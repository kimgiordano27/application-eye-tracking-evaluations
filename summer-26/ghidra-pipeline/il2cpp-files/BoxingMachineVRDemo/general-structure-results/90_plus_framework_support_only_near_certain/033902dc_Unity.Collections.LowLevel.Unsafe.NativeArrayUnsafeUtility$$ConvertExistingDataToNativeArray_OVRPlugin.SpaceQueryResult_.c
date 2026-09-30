/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 033902dc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_SpaceQueryResult>
               (void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  void *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *plVar6;
  long unaff_x26;
  long unaff_x29;
  
  *(undefined1 *)(unaff_x26 + 0x316) = 1;
  lVar1 = *unaff_x25;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x25;
  }
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 8) != '\0') {
    plVar6 = *(long **)(unaff_x19 + 0x38);
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      unaff_x21 = (void *)(unaff_x29 + -0x10);
    }
    memcpy(unaff_x23,unaff_x21,unaff_x22);
    uVar2 = FUN_02d60a9c(*plVar6);
    if ((uVar2 & 1) != 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
      thunk_FUN_02dc61f4(PTR_DAT_06767eb0);
      FUN_028f4b80();
      uVar3 = FUN_033959dc(0);
      thunk_FUN_02dc61f4(PTR_DAT_06764070);
      uVar4 = thunk_FUN_02d9d534();
      FUN_04f7ee98(uVar4,uVar5,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar4);
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


