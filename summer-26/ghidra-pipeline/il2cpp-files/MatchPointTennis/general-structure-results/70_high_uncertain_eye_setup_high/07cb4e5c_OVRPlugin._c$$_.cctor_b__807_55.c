/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_55
ENTRY_POINT: 07cb4e5c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__807_55(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  puVar4 = PTR_DAT_09f51348;
  if ((DAT_0a526bf1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f51348);
    FUN_04447ba8(PTR_DAT_09f20da8);
    FUN_04447ba8(PTR_DAT_09f20e10);
    FUN_04447ba8(PTR_DAT_09f20db8);
    FUN_04447ba8(PTR_DAT_09f20dc0);
    FUN_04447ba8(PTR_DAT_09f20dc8);
    FUN_04447ba8(PTR_DAT_09f46318);
    FUN_04447ba8(PTR_DAT_09f20dd0);
    FUN_04447ba8(PTR_DAT_09f20dd8);
    FUN_04447ba8(PTR_DAT_09f255a8);
    DAT_0a526bf1 = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  puVar2 = PTR_DAT_09f46318;
  pvVar7 = (void *)FUN_07cb3dc0(param_1);
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_0744265c(param_2,*(undefined8 *)PTR_DAT_09f20e10);
  }
  lVar8 = FUN_04447c90(*(undefined8 *)puVar2,iVar6 << 1);
  puVar3 = PTR_DAT_09f20dc0;
  puVar2 = PTR_DAT_09f20db8;
  if (0 < iVar6) {
    if (param_2 == 0) goto LAB_07cb5108;
    FUN_07442dbc(&stack0x00000008,param_2,*(undefined8 *)PTR_DAT_09f20da8);
    uVar12 = 1;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    while (uVar9 = FUN_052607f8(&stack0x00000030,*(undefined8 *)puVar3), uVar5 = in_stack_00000048,
          uVar10 = in_stack_00000040, (uVar9 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar10 = FUN_07cb3dc0(uVar10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar12 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined8 *)(lVar8 + (long)(int)(uVar12 - 1) * 8 + 0x20) = uVar10;
      uVar10 = FUN_07cb3dc0(uVar5);
      if (*(uint *)(lVar8 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar1 = (long)(int)uVar12;
      uVar12 = uVar12 + 2;
      *(undefined8 *)(lVar8 + lVar1 * 8 + 0x20) = uVar10;
    }
    FUN_05260918(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_09f255a8;
  uVar10 = FUN_07a9893c((long)iVar6,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)puVar4);
  }
  FUN_07cb5184(pvVar7,lVar8,uVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  free(pvVar7);
  if (lVar8 != 0) {
    if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
      uVar9 = 0;
      uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        pvVar7 = *(void **)(lVar8 + 0x20 + uVar9 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        free(pvVar7);
        uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
    }
    return;
  }
LAB_07cb5108:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


