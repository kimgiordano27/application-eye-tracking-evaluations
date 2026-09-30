/*
FUNCTION_NAME: FUN_03b14284
ENTRY_POINT: 03b14284
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_03b14284(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ffdac5 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_980);
    DAT_03ffdac5 = 1;
  }
  uVar8 = FUN_0391c27c(param_1,0);
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar3);
  }
  uVar9 = FUN_03922f24(uVar12,0,0);
  plVar11 = (long *)0x0;
  if ((uVar9 & 1) == 0) {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_03b145f8;
    plVar11 = (long *)FUN_0391c27c(*(long *)(param_1 + 0x48),0);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else if (*plVar11 != *(long *)StringLiteral_980) {
      plVar11 = (long *)0x0;
    }
  }
  plVar1 = (long *)(param_1 + 0x110);
  *(long **)(param_1 + 0x110) = plVar11;
  thunk_FUN_01b4f09c(plVar1);
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar9 = FUN_03922f24(uVar12,0,0);
  plVar11 = (long *)0x0;
  if ((uVar9 & 1) == 0) {
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_03b145f8;
    plVar11 = (long *)FUN_0391c27c(*(long *)(param_1 + 0x50),0);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else if (*plVar11 != *(long *)StringLiteral_980) {
      plVar11 = (long *)0x0;
    }
  }
  plVar2 = (long *)(param_1 + 0x118);
  *(long **)(param_1 + 0x118) = plVar11;
  thunk_FUN_01b4f09c(plVar2);
  lVar10 = FUN_03b13edc(param_1);
  if (lVar10 != 0) {
    uVar12 = FUN_03928c2c(lVar10,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar3);
    }
    uVar5 = FUN_03922f24(uVar12,uVar8,0);
    uVar9 = FUN_03923030(*plVar1,0);
    if ((uVar9 & 1) == 0) {
      uVar6 = 1;
    }
    else {
      if (*plVar1 == 0) goto LAB_03b145f8;
      uVar12 = FUN_03928c2c(*plVar1,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar3);
      }
      uVar6 = FUN_03922f24(uVar12,uVar8,0);
      uVar6 = uVar6 & 1;
    }
    lVar10 = *plVar2;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar9 = FUN_03923030(lVar10,0);
    if ((uVar9 & 1) == 0) {
      uVar7 = 1;
    }
    else {
      if (*plVar2 == 0) goto LAB_03b145f8;
      uVar12 = FUN_03928c2c(*plVar2,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar3);
      }
      uVar7 = FUN_03922f24(uVar12,uVar8,0);
      uVar7 = uVar7 & 1;
    }
    if ((uVar6 & uVar5 & uVar7) == 0) {
      if (param_1 == 0) goto LAB_03b145f8;
      bVar4 = false;
      *(undefined1 *)(param_1 + 0xfd) = 0;
    }
    else {
      lVar10 = *plVar1;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar9 = FUN_03923030(lVar10,0);
      if ((uVar9 & 1) == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = *(int *)(param_1 + 0x58) == 2;
      }
      *(bool *)(param_1 + 0xfd) = bVar4;
      lVar10 = *plVar2;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar9 = FUN_03923030(lVar10,0);
      if ((uVar9 & 1) == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = *(int *)(param_1 + 0x5c) == 2;
      }
    }
    *(bool *)(param_1 + 0xfe) = bVar4;
    uVar8 = *(undefined8 *)(param_1 + 0x110);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar9 = FUN_03922f24(uVar8,0,0);
    uVar13 = 0;
    if ((uVar9 & 1) == 0) {
      if (*plVar1 == 0) goto LAB_03b145f8;
      UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor(*plVar1,0);
    }
    *(undefined4 *)(param_1 + 0x100) = uVar13;
    uVar8 = *(undefined8 *)(param_1 + 0x118);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar9 = FUN_03922f24(uVar8,0,0);
    uVar13 = 0;
    if ((uVar9 & 1) == 0) {
      if (*plVar2 == 0) goto LAB_03b145f8;
      UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor(*plVar2,0);
    }
    *(undefined4 *)(param_1 + 0x104) = uVar13;
    return;
  }
LAB_03b145f8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


