/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingOrientationSupported
ENTRY_POINT: 06102a84
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingOrientationSupported(undefined8 param_1,long param_2)

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
  long unaff_x20;
  uint uVar12;
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
  
  puVar4 = PTR_DAT_07a24e68;
  if ((*(byte *)(unaff_x20 + 0xe69) & 1) == 0) {
    FUN_03642964(PTR_DAT_07a24e68);
    FUN_03642964(PTR_DAT_07a20540);
    FUN_03642964(PTR_DAT_07a24f98);
    FUN_03642964(PTR_DAT_07a20548);
    FUN_03642964(PTR_DAT_07a20550);
    FUN_03642964(PTR_DAT_07a20558);
    FUN_03642964(PTR_DAT_07a167d0);
    FUN_03642964(PTR_DAT_079fb6a0);
    FUN_03642964(PTR_DAT_079fb670);
    FUN_03642964(PTR_DAT_079f8730);
    *(undefined1 *)(unaff_x20 + 0xe69) = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000038 = (undefined8 *)0x0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar2 = PTR_DAT_07a167d0;
  pvVar7 = (void *)FUN_061019e8(param_1);
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_056af08c(param_2,*(undefined8 *)PTR_DAT_07a24f98);
  }
  lVar8 = FUN_03642a4c(*(undefined8 *)puVar2,iVar6 << 1);
  puVar3 = PTR_DAT_07a20550;
  puVar2 = PTR_DAT_07a20548;
  if (0 < iVar6) {
    if (param_2 == 0) goto LAB_06102d24;
    FUN_056af808(&stack0x00000008,param_2,*(undefined8 *)PTR_DAT_07a20540);
    uVar12 = 1;
    in_stack_00000050 = in_stack_00000028;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000030;
    while (uVar9 = FUN_05959498(&stack0x00000030,*(undefined8 *)puVar3), uVar5 = in_stack_00000048,
          uVar10 = in_stack_00000040, (uVar9 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar10 = FUN_061019e8(uVar10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar12 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      *(undefined8 *)(lVar8 + (long)(int)(uVar12 - 1) * 8 + 0x20) = uVar10;
      uVar10 = FUN_061019e8(uVar5);
      if (*(uint *)(lVar8 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      lVar1 = (long)(int)uVar12;
      uVar12 = uVar12 + 2;
      *(undefined8 *)(lVar8 + lVar1 * 8 + 0x20) = uVar10;
    }
    FUN_059595b8(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_079f8730;
  uVar10 = FUN_05e7282c((long)iVar6,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)puVar4);
  }
  FUN_06102d8c(pvVar7,lVar8,uVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  free(pvVar7);
  if (lVar8 != 0) {
    if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
      uVar9 = 0;
      uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        pvVar7 = *(void **)(lVar8 + 0x20 + uVar9 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        free(pvVar7);
        uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
    }
    return;
  }
LAB_06102d24:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


