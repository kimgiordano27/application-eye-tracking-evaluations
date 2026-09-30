/*
FUNCTION_NAME: FUN_01ed67f4
ENTRY_POINT: 01ed67f4
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


void FUN_01ed67f4(long param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_38;
  
  if ((*(long *)(param_4 + 0x38) == 0) &&
     (thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__),
     *(long *)(param_4 + 0x38) == 0)) {
    FUN_01ae9ed0(param_4);
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_38 = 0;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(param_1,0);
  if ((uVar4 & 1) != 0) {
    if (param_1 != 0) {
      FUN_01e8b8bc(param_1,&local_38,**(undefined8 **)(param_4 + 0x38));
      uVar6 = local_38;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03923030(uVar6,0);
      uVar6 = local_38;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_0391f968(uVar6,param_3,0);
        if ((uVar4 & 1) != 0) {
          return;
        }
      }
      lVar5 = FUN_0391c2b8(param_1,0);
      if (lVar5 != 0) {
        FUN_0391fb2c(lVar5,param_2,0);
        iVar2 = FUN_0392a654(param_1,0);
        if (iVar2 < 1) {
          return;
        }
        iVar2 = 0;
        do {
          uVar6 = FUN_0392a9fc(param_1,iVar2,0);
          FUN_01ed67f4(uVar6,param_2,param_3,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18));
          iVar2 = iVar2 + 1;
          iVar3 = FUN_0392a654(param_1,0);
        } while (iVar2 < iVar3);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  return;
}


