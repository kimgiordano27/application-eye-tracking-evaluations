/*
FUNCTION_NAME: FUN_02e4a838
ENTRY_POINT: 02e4a838
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void FUN_02e4a838(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_03ff02d2 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4981);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_4921);
    thunk_FUN_01ad9084(StringLiteral_4922);
    DAT_03ff02d2 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (DAT_03feff52 == '\0') {
    thunk_FUN_01ad9084(StringLiteral_3978);
    DAT_03feff52 = '\x01';
  }
  puVar4 = StringLiteral_4981;
  puVar3 = StringLiteral_4921;
  puVar2 = StringLiteral_3978;
  lVar6 = **(long **)(*(long *)StringLiteral_3978 + 0xb8);
  if (lVar6 != 0) {
    if (iVar1 == 0) {
      uVar7 = *(undefined8 *)(lVar6 + 0x138);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03923030(uVar7,0);
      if ((uVar5 & 1) != 0) {
        if (DAT_03feff52 == '\0') {
          thunk_FUN_01ad9084(StringLiteral_3978);
          DAT_03feff52 = '\x01';
        }
        if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_02e4aa4c;
        FUN_02e4aa50(param_1,*(undefined8 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x138));
      }
      if (DAT_03feff52 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_3978);
        DAT_03feff52 = '\x01';
      }
      if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_02e4aa4c;
      lVar6 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x1b8);
    }
    else {
      uVar7 = *(undefined8 *)(lVar6 + 0x140);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03923030(uVar7,0);
      if ((uVar5 & 1) != 0) {
        if (DAT_03feff52 == '\0') {
          thunk_FUN_01ad9084(StringLiteral_3978);
          DAT_03feff52 = '\x01';
        }
        if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_02e4aa4c;
        FUN_02e4aa50(param_1,*(undefined8 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x140));
      }
      if (DAT_03feff52 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_3978);
        DAT_03feff52 = '\x01';
      }
      if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_02e4aa4c;
      lVar6 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x1c0);
    }
    uVar7 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
    FUN_02200024(uVar7,param_1,*(undefined8 *)puVar4,0);
    if (lVar6 != 0) {
      FUN_02203a6c(lVar6,uVar7,*(undefined8 *)StringLiteral_4922);
      return;
    }
  }
LAB_02e4aa4c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


