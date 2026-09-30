/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_151
ENTRY_POINT: 090dd638
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_151(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x24;
  uint uVar9;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  lVar5 = FUN_04947fd0();
  puVar3 = PTR_DAT_0ac112f0;
  puVar2 = PTR_DAT_0ac112e8;
  if (0 < unaff_w21) {
    if (unaff_x22 == 0) goto LAB_090dd7e4;
    FUN_0870d7e0(&stack0x00000008);
    uVar9 = 1;
    in_stack_00000050 = in_stack_00000028;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000030;
    while (uVar6 = FUN_060b6c80(&stack0x00000030,*(undefined8 *)puVar3), uVar4 = in_stack_00000048,
          uVar7 = in_stack_00000040, (uVar6 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar7 = FUN_090dc4a8(uVar7);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar9 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      *(undefined8 *)(lVar5 + (long)(int)(uVar9 - 1) * 8 + 0x20) = uVar7;
      uVar7 = FUN_090dc4a8(uVar4);
      if (*(uint *)(lVar5 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      lVar1 = (long)(int)uVar9;
      uVar9 = uVar9 + 2;
      *(undefined8 *)(lVar5 + lVar1 * 8 + 0x20) = uVar7;
    }
    FUN_060b6da0(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_0ac09760;
  FUN_08dd7044((long)unaff_w21,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_049a583c(*unaff_x24);
  }
  FUN_090dd84c();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  free(unaff_x20);
  if (lVar5 != 0) {
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar6 = 0;
      uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        __ptr = *(void **)(lVar5 + 0x20 + uVar6 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        free(__ptr);
        uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    return;
  }
LAB_090dd7e4:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


