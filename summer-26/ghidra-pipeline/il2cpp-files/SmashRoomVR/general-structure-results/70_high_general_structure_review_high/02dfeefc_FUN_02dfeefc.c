/*
FUNCTION_NAME: FUN_02dfeefc
ENTRY_POINT: 02dfeefc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_02dfeefc(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  long lVar5;
  
  if ((DAT_03ff009c & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff009c = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((char)param_1[0xf] != '\0') {
    return;
  }
  lVar5 = param_1[0xc];
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar5,0);
  if ((uVar2 & 1) == 0) {
    lVar5 = param_1[0xd];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(lVar5,0);
    if ((uVar2 & 1) == 0) {
      lVar5 = param_1[10];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(lVar5,0);
      if ((uVar2 & 1) == 0) {
        lVar5 = param_1[9];
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar2 = FUN_03923030(lVar5,0);
        if ((uVar2 & 1) == 0) {
          lVar5 = param_1[8];
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar2 = FUN_03923030(lVar5,0);
          if ((uVar2 & 1) == 0) {
            lVar5 = param_1[0xb];
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar2 = FUN_03923030(lVar5,0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            lVar4 = *param_1;
            lVar5 = param_1[0xb];
            goto FUN_02dfefa0;
          }
          lVar4 = *param_1;
          lVar5 = param_1[8];
        }
        else {
          lVar4 = *param_1;
          lVar5 = param_1[9];
        }
      }
      else {
        lVar4 = *param_1;
        lVar5 = param_1[10];
      }
      UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x1b8);
      uVar3 = *(undefined8 *)(lVar4 + 0x1c0);
      goto LAB_02dff038;
    }
    lVar4 = *param_1;
    lVar5 = param_1[0xd];
  }
  else {
    lVar4 = *param_1;
    lVar5 = param_1[0xc];
  }
FUN_02dfefa0:
  UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x1a8);
  uVar3 = *(undefined8 *)(lVar4 + 0x1b0);
LAB_02dff038:
                    /* WARNING: Could not recover jumptable at 0x02dff044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar5,uVar3);
  return;
}


