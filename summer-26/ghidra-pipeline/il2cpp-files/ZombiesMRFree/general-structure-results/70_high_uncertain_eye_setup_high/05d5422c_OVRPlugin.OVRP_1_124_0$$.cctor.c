/*
FUNCTION_NAME: OVRPlugin.OVRP_1_124_0$$.cctor
ENTRY_POINT: 05d5422c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_124_0___cctor(undefined8 param_1,long param_2)

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
  
  puVar4 = PTR_DAT_06fb93c0;
  if ((DAT_07398cc1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb93c0);
    FUN_02fe925c(PTR_DAT_06fb3520);
    FUN_02fe925c(PTR_DAT_06fb94e8);
    FUN_02fe925c(PTR_DAT_06fb3528);
    FUN_02fe925c(PTR_DAT_06fb3530);
    FUN_02fe925c(PTR_DAT_06fb3538);
    FUN_02fe925c(PTR_DAT_06fae9a8);
    FUN_02fe925c(PTR_DAT_06fb3540);
    FUN_02fe925c(PTR_DAT_06fb3548);
    FUN_02fe925c(PTR_DAT_06f93e98);
    DAT_07398cc1 = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06fae9a8;
  pvVar7 = (void *)FUN_05d53194(param_1);
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_052bc2fc(param_2,*(undefined8 *)PTR_DAT_06fb94e8);
  }
  lVar8 = FUN_02fe9340(*(undefined8 *)puVar2,iVar6 << 1);
  puVar3 = PTR_DAT_06fb3530;
  puVar2 = PTR_DAT_06fb3528;
  if (0 < iVar6) {
    if (param_2 == 0) goto LAB_05d544dc;
    FUN_052bca5c(&stack0x00000008,param_2,*(undefined8 *)PTR_DAT_06fb3520);
    uVar12 = 1;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    while (uVar9 = FUN_055c9450(&stack0x00000030,*(undefined8 *)puVar3), uVar5 = in_stack_00000048,
          uVar10 = in_stack_00000040, (uVar9 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar10 = FUN_05d53194(uVar10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar12 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      *(undefined8 *)(lVar8 + (long)(int)(uVar12 - 1) * 8 + 0x20) = uVar10;
      uVar10 = FUN_05d53194(uVar5);
      if (*(uint *)(lVar8 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar1 = (long)(int)uVar12;
      uVar12 = uVar12 + 2;
      *(undefined8 *)(lVar8 + lVar1 * 8 + 0x20) = uVar10;
    }
    FUN_055c9570(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_06f93e98;
  uVar10 = FUN_05b4a5e0((long)iVar6,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)puVar4);
  }
  FUN_05d54558(pvVar7,lVar8,uVar10);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  free(pvVar7);
  if (lVar8 != 0) {
    if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
      uVar9 = 0;
      uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        pvVar7 = *(void **)(lVar8 + 0x20 + uVar9 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        free(pvVar7);
        uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
    }
    return;
  }
LAB_05d544dc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


