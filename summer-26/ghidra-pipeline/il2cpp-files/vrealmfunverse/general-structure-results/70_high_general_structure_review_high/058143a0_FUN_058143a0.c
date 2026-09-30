/*
FUNCTION_NAME: FUN_058143a0
ENTRY_POINT: 058143a0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_12;telemetry_or_network_hits_6
*/


void FUN_058143a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  puVar2 = Method_System_Collections_Generic_List<Painter2D_Painter2DJobData>_get_Count__;
  if ((DAT_066d2c89 & 1) == 0) {
    FUN_02b3c81c(Method_System_Collections_Generic_List<HIDParser_HIDReportData>_get_Item__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<Painter2D_Painter2DJobData>_get_Item__);
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>__ctor__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Count__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Item__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>__ctor__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Add__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Remove__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_List<Painter2D_Painter2DJobData>_get_Count__);
    DAT_066d2c89 = 1;
  }
  puVar9 = 
  Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Remove__
  ;
  puVar8 = 
  Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Add__;
  puVar7 = 
  Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>__ctor__
  ;
  puVar6 = Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Item__;
  puVar5 = Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Count__;
  puVar4 = Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>__ctor__;
  puVar3 = Method_System_Collections_Generic_List<Painter2D_Painter2DJobData>_get_Item__;
  puVar1 = Method_System_Collections_Generic_List<HIDParser_HIDReportData>_get_Item__;
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar10 = *(long *)puVar2;
  }
  uVar13 = **(undefined8 **)(lVar10 + 0xb8);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_049c77b0(uVar11,uVar13,*(undefined8 *)puVar4,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar11;
  thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar11);
  uVar13 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_049c77b0(uVar11,uVar13,*(undefined8 *)puVar5,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar12 = uVar11;
  thunk_FUN_02bb0e9c(puVar12,uVar11);
  uVar13 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_049c77b0(uVar11,uVar13,*(undefined8 *)puVar6,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  *puVar12 = uVar11;
  thunk_FUN_02bb0e9c(puVar12,uVar11);
  uVar13 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_049c77b0(uVar11,uVar13,*(undefined8 *)puVar7,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  *puVar12 = uVar11;
  thunk_FUN_02bb0e9c(puVar12,uVar11);
  uVar13 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_049c77b0(uVar11,uVar13,*(undefined8 *)puVar8,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
  *puVar12 = uVar11;
  thunk_FUN_02bb0e9c(puVar12,uVar11);
  uVar13 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_049c77b0(uVar11,uVar13,*(undefined8 *)puVar9,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
  *puVar12 = uVar11;
  thunk_FUN_02bb0e9c(puVar12,uVar11);
  return;
}


