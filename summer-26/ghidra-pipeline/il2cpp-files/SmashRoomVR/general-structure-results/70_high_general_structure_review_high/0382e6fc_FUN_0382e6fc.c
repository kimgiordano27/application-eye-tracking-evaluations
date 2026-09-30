/*
FUNCTION_NAME: FUN_0382e6fc
ENTRY_POINT: 0382e6fc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;telemetry_or_network_hits_3
*/


void FUN_0382e6fc(long *param_1,byte param_2)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 local_38;
  
  if ((DAT_03ff84c2 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_1112);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da6698);
    thunk_FUN_01ad9084(PTR_DAT_03da66a0);
    thunk_FUN_01ad9084(PTR_DAT_03da66a8);
    DAT_03ff84c2 = 1;
  }
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_38 = 0;
  if (*(char *)((long)param_1 + 0x1c6) != '\0') {
    lVar7 = param_1[0x3c];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03922f24(lVar7,0,0);
    if ((uVar5 & 1) != 0) {
      plVar1 = param_1 + 0x3c;
      lVar7 = FUN_0391f3cc(0,0);
      param_1[0x3c] = lVar7;
      thunk_FUN_01b4f09c(plVar1,lVar7);
      lVar7 = param_1[0x3c];
      uVar8 = *(undefined8 *)PTR_DAT_03da66a8;
      uVar6 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
      uVar6 = FUN_02edd6e8(uVar8,uVar6,0);
      if (lVar7 == 0) goto LAB_0382e968;
      FUN_0392316c(lVar7,uVar6,0);
      if (*plVar1 == 0) goto LAB_0382e968;
      lVar7 = FUN_0391fab4(*plVar1,0);
      uVar6 = (**(code **)(*param_1 + 0x4b8))(param_1,0,*(undefined8 *)(*param_1 + 0x4c0));
      if (lVar7 == 0) goto LAB_0382e968;
      FUN_03929660(lVar7,uVar6,0,0);
      if ((*plVar1 == 0) || (lVar7 = FUN_0391fab4(*plVar1,0), lVar7 == 0)) goto LAB_0382e968;
      uVar9 = *(undefined4 *)((long)param_1 + 0x1b4);
      FUN_039293f4(uVar9,uVar9,uVar9,lVar7,0);
      if (*plVar1 == 0) goto LAB_0382e968;
      uVar5 = FUN_01ed84c4(*plVar1,&local_38,*(undefined8 *)StringLiteral_1112);
      uVar6 = local_38;
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03923a90(uVar6,0);
      }
      lVar7 = *plVar1;
      if (*(int *)(*(long *)PTR_DAT_03da66a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar7 = FUN_01f67b14(lVar7,*(undefined8 *)PTR_DAT_03da6698);
      param_1[0x3d] = lVar7;
      thunk_FUN_01b4f09c(param_1 + 0x3d);
    }
  }
  bVar2 = *(byte *)((long)param_1 + 0x1c6);
  lVar7 = param_1[0x3c];
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_0391f968(lVar7,0,0);
  if ((uVar5 & 1) != 0) {
    if (param_1[0x3c] == 0) {
LAB_0382e968:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    bVar2 = param_2 & bVar2 & 1;
    bVar4 = FUN_0391fbb4(param_1[0x3c],0);
    if (bVar2 != (bVar4 & 1)) {
      if (param_1[0x3c] == 0) goto LAB_0382e968;
      FUN_0391fb70(param_1[0x3c],bVar2,0);
    }
  }
  return;
}


