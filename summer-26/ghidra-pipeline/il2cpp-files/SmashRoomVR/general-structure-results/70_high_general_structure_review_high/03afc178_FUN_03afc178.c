/*
FUNCTION_NAME: FUN_03afc178
ENTRY_POINT: 03afc178
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_16;telemetry_or_network_hits_11
*/


void FUN_03afc178(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
                 undefined8 param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_158 [88];
  undefined1 local_100;
  undefined1 auStack_f0 [104];
  undefined1 auStack_88 [88];
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ffda11 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffda11 = 1;
  }
  uVar11 = *(undefined8 *)(param_5 + 0x108);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_0391f968(uVar11,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(long *)(param_5 + 0x108) == 0) goto LAB_03afc574;
  uVar11 = FUN_03b1baa0(*(long *)(param_5 + 0x108),0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  uVar6 = FUN_0391f968(uVar11,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(char *)(param_5 + 0x1c0) != '\0') {
    return;
  }
  *(undefined1 *)(param_5 + 0x1c0) = 1;
  puVar3 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
  if (*(int *)(*(long *)
                Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar11 = FUN_03b26f4c(0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  uVar6 = FUN_0391f968(uVar11,0,0);
  if ((uVar6 & 1) == 0) {
LAB_03afc350:
    lVar7 = *(long *)(param_5 + 0x180);
    *(undefined1 *)(param_5 + 0x211) = 0;
  }
  else {
    uVar11 = FUN_0391c2b8(param_5,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar3);
    }
    lVar7 = FUN_03b26f4c(0);
    if (lVar7 == 0) goto LAB_03afc574;
    uVar12 = *(undefined8 *)(lVar7 + 0x40);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar2);
    }
    uVar6 = FUN_03922f24(uVar11,uVar12,0);
    if ((uVar6 & 1) == 0) goto LAB_03afc350;
    lVar7 = FUN_03afb688();
    if (lVar7 == 0) goto LAB_03afc574;
    if (*(int *)(lVar7 + 0x10) < 1) goto LAB_03afc350;
    *(undefined1 *)(param_5 + 0x211) = 1;
    if (*(long *)(param_5 + 0x180) == 0) goto LAB_03afc574;
    uVar11 = FUN_02ee8330(*(long *)(param_5 + 0x180),0,*(undefined4 *)(param_5 + 0x194),0);
    uVar12 = FUN_03afb688();
    if (*(long *)(param_5 + 0x180) == 0) goto LAB_03afc574;
    uVar8 = FUN_02eea48c(*(long *)(param_5 + 0x180),*(undefined4 *)(param_5 + 0x194),0);
    lVar7 = FUN_02ee6c30(uVar11,uVar12,uVar8,0);
  }
  lVar9 = lVar7;
  if (*(int *)(param_5 + 0x11c) == 2) {
    if (lVar7 == 0) goto LAB_03afc574;
    lVar9 = FUN_02eedaa8(0,*(undefined2 *)(param_5 + 0x120),*(undefined4 *)(lVar7 + 0x10),0);
  }
  uVar4 = FUN_02ee6cf0(lVar7,0);
  uVar11 = *(undefined8 *)(param_5 + 0x110);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  uVar6 = FUN_0391f968(uVar11,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_5 + 0x110) == 0) goto LAB_03afc574;
    FUN_0391b78c(*(long *)(param_5 + 0x110),uVar4 & 1,0);
  }
  if (*(char *)(param_5 + 0x1d0) == '\0') {
    *(undefined4 *)(param_5 + 0x1e4) = 0;
    if (*(long *)(param_5 + 0x180) == 0) goto LAB_03afc574;
    *(undefined4 *)(param_5 + 0x1e8) = *(undefined4 *)(*(long *)(param_5 + 0x180) + 0x10);
  }
  plVar10 = *(long **)(param_5 + 0x108);
  if (plVar10 == (long *)0x0) goto LAB_03afc574;
  (**(code **)(*plVar10 + 0x2e8))(plVar10,*(undefined8 *)(*plVar10 + 0x2f0));
  FUN_03afb1e0(0);
  if ((uVar4 & 1) == 0) {
    if ((*(long *)(param_5 + 0x108) == 0) ||
       (lVar7 = FUN_039ad440(*(long *)(param_5 + 0x108),0), lVar7 == 0)) goto LAB_03afc574;
    UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor(lVar7,0);
    if (*(long *)(param_5 + 0x108) == 0) goto LAB_03afc574;
    FUN_03b1c684(auStack_f0,param_3,param_4,*(long *)(param_5 + 0x108),0);
    memcpy(auStack_88,auStack_f0,0x58);
    lVar7 = FUN_03afbb10(param_5);
    memcpy(auStack_f0,auStack_88,0x58);
    uVar11 = FUN_0391c2b8(param_5,0);
    if (lVar7 == 0) goto LAB_03afc574;
    memcpy(auStack_158,auStack_f0,0x58);
    local_100 = 1;
    FUN_039a07e8(lVar7,lVar9,auStack_158,uVar11,0);
    uVar5 = FUN_03afd2c0(param_5);
    FUN_03b0257c(param_5,uVar5);
    if (lVar9 == 0) goto LAB_03afc574;
    iVar1 = *(int *)(param_5 + 0x1e8);
    if (*(int *)(lVar9 + 0x10) <= *(int *)(param_5 + 0x1e8)) {
      iVar1 = *(int *)(lVar9 + 0x10);
    }
    lVar9 = FUN_02ee8330(lVar9,*(int *)(param_5 + 0x1e4),iVar1 - *(int *)(param_5 + 0x1e4),0);
    FUN_03afdc8c(param_5);
  }
  plVar10 = *(long **)(param_5 + 0x108);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x5e8))(plVar10,lVar9,*(undefined8 *)(*plVar10 + 0x5f0));
    FUN_03afc6f0(param_5);
    *(undefined1 *)(param_5 + 0x1c0) = 0;
    return;
  }
LAB_03afc574:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


