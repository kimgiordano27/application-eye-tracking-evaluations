/*
FUNCTION_NAME: OVRPlugin.OVRP_1_125_0$$.cctor
ENTRY_POINT: 05d542b4
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


void OVRPlugin_OVRP_1_125_0___cctor(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x24;
  uint uVar11;
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
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x540));
  FUN_02fe925c(PTR_DAT_06fb3548);
  FUN_02fe925c(PTR_DAT_06f93e98);
  *(undefined1 *)(unaff_x20 + 0xcc1) = 1;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06fae9a8;
  pvVar6 = (void *)FUN_05d53194();
  if (unaff_x22 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_052bc2fc();
  }
  lVar7 = FUN_02fe9340(*(undefined8 *)puVar2,iVar5 << 1);
  puVar3 = PTR_DAT_06fb3530;
  puVar2 = PTR_DAT_06fb3528;
  if (0 < iVar5) {
    if (unaff_x22 == 0) goto LAB_05d544dc;
    FUN_052bca5c(&stack0x00000008);
    uVar11 = 1;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    while (uVar8 = FUN_055c9450(&stack0x00000030,*(undefined8 *)puVar3), uVar4 = in_stack_00000048,
          uVar9 = in_stack_00000040, (uVar8 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar9 = FUN_05d53194(uVar9);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar11 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      *(undefined8 *)(lVar7 + (long)(int)(uVar11 - 1) * 8 + 0x20) = uVar9;
      uVar9 = FUN_05d53194(uVar4);
      if (*(uint *)(lVar7 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar1 = (long)(int)uVar11;
      uVar11 = uVar11 + 2;
      *(undefined8 *)(lVar7 + lVar1 * 8 + 0x20) = uVar9;
    }
    FUN_055c9570(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_06f93e98;
  uVar9 = FUN_05b4a5e0((long)iVar5,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*unaff_x24);
  }
  FUN_05d54558(pvVar6,lVar7,uVar9);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  free(pvVar6);
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar8 = 0;
      uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        pvVar6 = *(void **)(lVar7 + 0x20 + uVar8 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        free(pvVar6);
        uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    return;
  }
LAB_05d544dc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


