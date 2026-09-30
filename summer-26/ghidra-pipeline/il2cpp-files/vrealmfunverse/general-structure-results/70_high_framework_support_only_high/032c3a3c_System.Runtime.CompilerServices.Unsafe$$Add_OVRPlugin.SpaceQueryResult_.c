/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$Add<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 032c3a3c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__Add<OVRPlugin_SpaceQueryResult>(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  
                    /* catch() { ... } // from try @ 032c39b0 with catch @ 032c3a44 */
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02b76218();
  }
  if (**(long **)(param_1 + 0xb8) != 0) {
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    if ((**(long **)(lVar4 + 0xb8) == 0) ||
       (plVar5 = (long *)thunk_FUN_02b4c898(**(long **)(lVar4 + 0xb8),0), plVar5 == (long *)0x0))
    goto LAB_032c3d84;
    uVar6 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
    puVar2 = PTR_DAT_06312310;
    uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
    }
    plVar5 = (long *)FUN_04d8a7b0(uVar10,0);
    if (plVar5 == (long *)0x0) goto LAB_032c3d84;
    uVar10 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
    uVar7 = FUN_04cc2134(uVar6,uVar10,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (unaff_x20 == 0) goto LAB_032c3d84;
    uVar6 = thunk_FUN_02b4c898();
    uVar6 = FUN_0318a0c4(uVar6,*(undefined8 *)PTR_DAT_0631fea0);
    uVar7 = FUN_031a8288(uVar6,*(undefined8 *)PTR_DAT_0631fea8);
    if ((uVar7 & 1) != 0) {
      plVar5 = (long *)thunk_FUN_02b4c898();
      if (plVar5 == (long *)0x0) goto LAB_032c3d84;
      uVar6 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
      uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(puVar2 + 0xe0));
      }
      plVar5 = (long *)FUN_04d8a7b0(uVar10,0);
      if (plVar5 == (long *)0x0) goto LAB_032c3d84;
      uVar10 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
      uVar7 = FUN_04cc1830(uVar6,uVar10,0);
      if ((uVar7 & 1) != 0) {
        return;
      }
    }
  }
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  **(long **)(lVar4 + 0xb8) = unaff_x20;
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  thunk_FUN_02bb0e9c(*(undefined8 *)(lVar4 + 0xb8));
  puVar2 = PTR_DAT_0631fe88;
  lVar4 = *(long *)PTR_DAT_0631fe88;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar4 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_06312310;
  lVar4 = **(long **)(lVar4 + 0xb8);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
  }
  uVar6 = FUN_04d8a7b0(uVar6,0);
  if (lVar4 == 0) goto LAB_032c3d84;
  uVar7 = FUN_042f4cec(lVar4,uVar6,*(undefined8 *)PTR_DAT_0631fe90);
  if ((uVar7 & 1) == 0) {
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar4 = *(long *)puVar2;
    }
    lVar8 = *(long *)(puVar3 + 0xe0);
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar8);
    }
    uVar6 = FUN_04d8a7b0(uVar6,0);
    if (lVar4 == 0) goto LAB_032c3d84;
    lVar8 = *(long *)(lVar4 + 0x10);
    lVar9 = *(long *)PTR_DAT_0631feb0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_032c3d84;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
      thunk_FUN_02bb0e9c();
    }
    else {
      FUN_037a6538(lVar4,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar4 = *(long *)puVar2;
  }
  lVar8 = *(long *)(puVar3 + 0xe0);
  lVar4 = **(long **)(lVar4 + 0xb8);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar8);
  }
  uVar6 = FUN_04d8a7b0(uVar6,0);
  if (lVar4 != 0) {
    FUN_042f6600(lVar4,uVar6);
    return;
  }
LAB_032c3d84:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


