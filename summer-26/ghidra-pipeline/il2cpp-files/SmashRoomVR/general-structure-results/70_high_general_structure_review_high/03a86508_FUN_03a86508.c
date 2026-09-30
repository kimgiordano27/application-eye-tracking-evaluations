/*
FUNCTION_NAME: FUN_03a86508
ENTRY_POINT: 03a86508
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


void FUN_03a86508(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  if ((DAT_03ffd322 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffd322 = 1;
  }
  local_38 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar2 = FUN_03a875b0(*(long *)(param_1 + 0x68),0);
    if ((uVar2 & 1) != 0) {
      if (param_2 == 0) {
        param_2 = FUN_03a8684c(param_1);
      }
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      puVar3 = (undefined8 *)(param_1 + 0xb8);
      uVar4 = *puVar3;
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(uVar4,uVar5,0);
      if ((uVar2 & 1) != 0) {
        uVar4 = *puVar3;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar2 = FUN_0391f968(uVar4,0,0);
        if ((param_2 != 0) && ((uVar2 & 1) != 0)) {
          local_38 = FUN_03acc624(param_2,0);
          FUN_039ed440(&local_38,*puVar3,0);
        }
      }
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_03a86670;
        FUN_03adc230(*(long *)(param_1 + 0x18),1,0);
        if (param_2 != 0) {
          local_38 = FUN_03acc624(param_2,0);
          FUN_039ed260(&local_38,*(undefined8 *)(param_1 + 0x18),0);
        }
      }
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x18);
      thunk_FUN_01b4f09c(puVar3);
    }
    return;
  }
LAB_03a86670:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


