/*
FUNCTION_NAME: FUN_01cb34f4
ENTRY_POINT: 01cb34f4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


undefined8 FUN_01cb34f4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  puVar1 = StringLiteral_1015;
  puVar2 = StringLiteral_1007;
  if ((DAT_03feda09 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_1007);
    thunk_FUN_01ad9084(StringLiteral_1015);
    thunk_FUN_01ad9084(StringLiteral_1016);
    thunk_FUN_01ad9084(StringLiteral_1017);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feda09 = 1;
  }
  uVar4 = FUN_01e8b0b4(param_1,*(undefined8 *)puVar1);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar7);
    lVar7 = *(long *)puVar2;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) < 1) {
LAB_01cb3670:
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_0391f968(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) goto LAB_01cb36e4;
        uVar6 = FUN_0391c2b8(*(long *)(param_2 + 0x10),0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        FUN_01cb47e4(uVar4,uVar6);
      }
      return uVar4;
    }
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03922f24(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      uVar4 = FUN_01cb3fd8(param_1,0,0,param_2);
    }
    puVar3 = StringLiteral_1017;
    iVar9 = 0;
    while( true ) {
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar7 = *(long *)puVar2;
      }
      lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar8 == 0) break;
      if (*(int *)(lVar8 + 0x18) <= iVar9) goto LAB_01cb3670;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        if (lVar8 == 0) break;
      }
      uVar6 = FUN_02b59714(lVar8,iVar9,*(undefined8 *)puVar3);
      FUN_01cb43c4(param_1,uVar6,uVar4,param_2);
      iVar9 = iVar9 + 1;
    }
  }
LAB_01cb36e4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


