/*
FUNCTION_NAME: FUN_03116538
ENTRY_POINT: 03116538
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


void FUN_03116538(long param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_03ff1d45 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d7f058);
    thunk_FUN_01ad9084(PTR_DAT_03d7efa0);
    thunk_FUN_01ad9084(PTR_DAT_03d7f020);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1d45 = 1;
  }
  puVar1 = PTR_DAT_03d7efa0;
  if (*(long *)(param_1 + 0x118) == 0) {
LAB_031166a4:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  iVar2 = FUN_0311ef6c(*(long *)(param_1 + 0x118),0);
  if (((iVar2 == 0) &&
      (iVar2 = *param_2, iVar3 = FUN_029bc358(param_1,*(undefined8 *)puVar1), iVar2 != iVar3)) &&
     (param_2[1] == 3)) {
    uVar7 = *(undefined8 *)(param_1 + 200);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_0391f968(uVar7,0,0);
    if ((uVar5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x158) = 1;
    }
  }
  iVar2 = *param_2;
  iVar3 = FUN_029bc358(param_1,*(undefined8 *)puVar1);
  if ((iVar2 == iVar3) && (param_2[1] == 5)) {
    uVar7 = *(undefined8 *)(param_1 + 200);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_0391f968(uVar7,0,0);
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 200);
      uVar4 = FUN_029bc358(param_1,*(undefined8 *)puVar1);
      if (lVar6 != 0) {
        FUN_029b9c6c(lVar6,uVar4,*(undefined8 *)PTR_DAT_03d7f058);
        return;
      }
      goto LAB_031166a4;
    }
  }
  return;
}


