/*
FUNCTION_NAME: FUN_0381abe4
ENTRY_POINT: 0381abe4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_17;telemetry_or_network_hits_6
*/


void FUN_0381abe4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff83f2 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da5e68);
    thunk_FUN_01ad9084(PTR_DAT_03da5e70);
    thunk_FUN_01ad9084(PTR_DAT_03da5e78);
    thunk_FUN_01ad9084(PTR_DAT_03da5e80);
    thunk_FUN_01ad9084(PTR_DAT_03da5e88);
    thunk_FUN_01ad9084(PTR_DAT_03da5e90);
    thunk_FUN_01ad9084(PTR_DAT_03da5e98);
    thunk_FUN_01ad9084(PTR_DAT_03da5ea0);
    thunk_FUN_01ad9084(PTR_DAT_03da5e60);
    thunk_FUN_01ad9084(StringLiteral_140);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Data_Entities_WitDynamicEntities_<>c__DisplayClass14_0_<AddKeyword>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Data_Entities_WitDynamicEntities_<>c__DisplayClass15_0_<RemoveKeyword>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da5ea8);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_WitRequest_<>c__DisplayClass99_0_<ProcessStringResponse>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_WitRequest_<>c__DisplayClass99_0_<ProcessStringResponse>b__1__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da5eb0);
    DAT_03ff83f2 = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_0391f968(uVar9,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0381b0f4;
    lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x80);
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Meta_WitAi_Data_Entities_WitDynamicEntities_<>c__DisplayClass14_0_<AddKeyword>b__0__
                              );
    FUN_02200024(uVar9,param_1,*(undefined8 *)PTR_DAT_03da5e70,0);
    if (lVar10 == 0) goto LAB_0381b0f4;
    FUN_02203a6c(lVar10,uVar9,
                 *(undefined8 *)
                  Method_Meta_WitAi_WitRequest_<>c__DisplayClass99_0_<ProcessStringResponse>b__0__);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0381b0f4;
    lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x88);
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Meta_WitAi_Data_Entities_WitDynamicEntities_<>c__DisplayClass15_0_<RemoveKeyword>b__0__
                              );
    FUN_02200024(uVar9,param_1,*(undefined8 *)PTR_DAT_03da5e78,0);
    if (lVar10 == 0) goto LAB_0381b0f4;
    FUN_02203a6c(lVar10,uVar9,
                 *(undefined8 *)
                  Method_Meta_WitAi_WitRequest_<>c__DisplayClass99_0_<ProcessStringResponse>b__1__);
    puVar1 = PTR_DAT_03da5ea8;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0381b0f4;
    lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x318);
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03da5ea8);
    FUN_02200024(uVar9,param_1,*(undefined8 *)PTR_DAT_03da5e98,0);
    puVar2 = PTR_DAT_03da5eb0;
    if (lVar10 == 0) goto LAB_0381b0f4;
    FUN_02203a6c(lVar10,uVar9,*(undefined8 *)PTR_DAT_03da5eb0);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0381b0f4;
    lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 800);
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_02200024(uVar9,param_1,*(undefined8 *)PTR_DAT_03da5ea0,0);
    if (lVar10 == 0) goto LAB_0381b0f4;
    FUN_02203a6c(lVar10,uVar9,*(undefined8 *)puVar2);
  }
  puVar1 = PTR_DAT_03da5e60;
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)PTR_DAT_03da5e60 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar6 = PTR_DAT_03da5e90;
  puVar4 = PTR_DAT_03da5e80;
  puVar3 = PTR_DAT_03da5e68;
  puVar2 = StringLiteral_140;
  lVar10 = FUN_0381b0f8(uVar9);
  puVar5 = PTR_DAT_03da5e88;
  if (lVar10 != 0) {
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_0251b808(uVar9,param_1,*(undefined8 *)puVar5,0);
    FUN_03440dd8(lVar10,uVar9,0);
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_0251b808(uVar9,param_1,*(undefined8 *)puVar4,0);
    FUN_03440dd8(lVar10,uVar9,0);
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_0251b808(uVar9,param_1,*(undefined8 *)puVar3,0);
    FUN_03440d28(lVar10,uVar9,0);
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_0251b808(uVar9,param_1,*(undefined8 *)puVar6,0);
    FUN_03440d28(lVar10,uVar9,0);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar8 = FUN_0381b0f8(uVar9);
  if (lVar8 != 0) {
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_0251b808(uVar9,param_1,*(undefined8 *)puVar3,0);
    FUN_03440dd8(lVar8,uVar9,0);
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_0251b808(uVar9,param_1,*(undefined8 *)puVar6,0);
    if (lVar10 == 0) {
LAB_0381b0f4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_03440d28(lVar10,uVar9,0);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar10 = FUN_0381b0f8(uVar9);
  if (lVar10 != 0) {
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_0251b808(uVar9,param_1,*(undefined8 *)puVar4,0);
    FUN_03440dd8(lVar10,uVar9,0);
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_0251b808(uVar9,param_1,*(undefined8 *)puVar6,0);
    FUN_03440d28(lVar10,uVar9,0);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar10 = FUN_0381b0f8(uVar9);
  if (lVar10 != 0) {
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_0251b808(uVar9,param_1,*(undefined8 *)puVar4,0);
    FUN_03440dd8(lVar10,uVar9,0);
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_0251b808(uVar9,param_1,*(undefined8 *)puVar6,0);
    FUN_03440d28(lVar10,uVar9,0);
    return;
  }
  return;
}


