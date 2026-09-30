/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_131
ENTRY_POINT: 06980cf8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_131(undefined8 param_1,long param_2)

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
  long unaff_x24;
  long *plVar11;
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
  
  plVar11 = *(long **)(unaff_x24 + 0x640);
  if ((*(byte *)(unaff_x20 + 0x261) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b7640);
    FUN_03a8a718(PTR_DAT_084b1b88);
    FUN_03a8a718(PTR_DAT_084b7770);
    FUN_03a8a718(PTR_DAT_084b1b90);
    FUN_03a8a718(PTR_DAT_084b1b98);
    FUN_03a8a718(PTR_DAT_084b1ba0);
    FUN_03a8a718(PTR_DAT_084ab108);
    FUN_03a8a718(PTR_DAT_084b1ba8);
    FUN_03a8a718(PTR_DAT_084b1bb0);
    FUN_03a8a718(PTR_DAT_08490748);
    *(undefined1 *)(unaff_x20 + 0x261) = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000038 = (undefined8 *)0x0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (*(int *)(*plVar11 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  puVar2 = PTR_DAT_084ab108;
  pvVar6 = (void *)FUN_0697fc58(param_1);
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_05fa01f8(param_2,*(undefined8 *)PTR_DAT_084b7770);
  }
  lVar7 = FUN_03a8a804(*(undefined8 *)puVar2,iVar5 << 1);
  puVar3 = PTR_DAT_084b1b98;
  puVar2 = PTR_DAT_084b1b90;
  if (0 < iVar5) {
    if (param_2 == 0) goto LAB_06980f94;
    FUN_05fa0974(&stack0x00000008,param_2,*(undefined8 *)PTR_DAT_084b1b88);
    uVar12 = 1;
    in_stack_00000050 = in_stack_00000028;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000030;
    while (uVar8 = FUN_06290cc0(&stack0x00000030,*(undefined8 *)puVar3), uVar4 = in_stack_00000048,
          uVar9 = in_stack_00000040, (uVar8 & 1) != 0) {
      if (*(int *)(*plVar11 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar9 = FUN_0697fc58(uVar9);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar12 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined8 *)(lVar7 + (long)(int)(uVar12 - 1) * 8 + 0x20) = uVar9;
      uVar9 = FUN_0697fc58(uVar4);
      if (*(uint *)(lVar7 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      lVar1 = (long)(int)uVar12;
      uVar12 = uVar12 + 2;
      *(undefined8 *)(lVar7 + lVar1 * 8 + 0x20) = uVar9;
    }
    FUN_06290de0(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_08490748;
  uVar9 = FUN_067aa750((long)iVar5,0);
  if (*(int *)(*plVar11 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*plVar11);
  }
  FUN_06980ffc(pvVar6,lVar7,uVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  System_Type__IsValueTypeImpl(pvVar6);
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar8 = 0;
      uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        pvVar6 = *(void **)(lVar7 + 0x20 + uVar8 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        System_Type__IsValueTypeImpl(pvVar6);
        uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    return;
  }
LAB_06980f94:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


