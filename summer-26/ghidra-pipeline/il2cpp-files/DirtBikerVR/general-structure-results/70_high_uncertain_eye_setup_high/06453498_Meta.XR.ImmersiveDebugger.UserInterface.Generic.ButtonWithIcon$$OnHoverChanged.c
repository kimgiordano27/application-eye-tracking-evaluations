/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$OnHoverChanged
ENTRY_POINT: 06453498
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__OnHoverChanged(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar8;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  
  lVar3 = FUN_03a8a804(param_1);
  if (lVar3 == 0) {
LAB_0645372c:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_03ac73c0(), lVar4 == 0)) {
    uVar8 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar8,0);
  }
  if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
  *(long *)(lVar3 + 0x20) = unaff_x21;
  thunk_FUN_03afed3c();
  if ((unaff_x22 == (long *)0x0) ||
     (plVar5 = (long *)(**(code **)(*unaff_x22 + 0x978))(), plVar5 == (long *)0x0))
  goto LAB_0645372c;
  uVar6 = (**(code **)(*plVar5 + 0x2b8))();
  if ((uVar6 & 1) != 0) {
    uVar8 = *(undefined8 *)PTR_DAT_084974b0;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar8 = FUN_0675ff58(uVar8,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x24);
    }
    goto LAB_06453660;
  }
  uVar6 = (**(code **)(*unaff_x20 + 0x5b8))();
  if ((uVar6 & 1) == 0) goto LAB_064536c0;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar8 = FUN_067850a4();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(unaff_x25 + 0xe0));
  }
  uVar2 = FUN_0676b950(uVar8,0);
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) == 0) {
      if ((uVar1 & 0x1800) == 0) {
        if (uVar2 != 7) goto LAB_06453610;
        lVar3 = *(long *)(unaff_x25 + 0xe0);
        puVar7 = (undefined8 *)PTR_DAT_084974c0;
      }
      else {
        lVar3 = *(long *)(unaff_x25 + 0xe0);
        puVar7 = (undefined8 *)PTR_DAT_084974a8;
      }
    }
    else {
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_08497488;
    }
  }
  else {
LAB_06453610:
    if (uVar2 != 5) {
LAB_064536c0:
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      uVar8 = thunk_FUN_03ac74bc();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090(lVar3);
      }
      FUN_053ae388(uVar8,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
      return uVar8;
    }
    lVar3 = *(long *)(unaff_x25 + 0xe0);
    puVar7 = (undefined8 *)PTR_DAT_084974b8;
  }
  uVar8 = *puVar7;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar8 = FUN_0675ff58(uVar8,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*unaff_x24);
  }
LAB_06453660:
  uVar8 = FUN_06792398(uVar8);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03ac4090(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03ac4090(lVar3);
  }
  uVar8 = FUN_035255bc(uVar8,lVar3);
  return uVar8;
}


