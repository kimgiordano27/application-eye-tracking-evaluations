/*
FUNCTION_NAME: FUN_01c6662c
ENTRY_POINT: 01c6662c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3
*/


void FUN_01c6662c(float param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_03fed6dd & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed6dd = 1;
  }
  if ((param_1 < *(float *)(param_2 + 0x28)) && (*(char *)(param_2 + 0x3c) == '\0')) {
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar1 = FUN_0391f968(uVar4,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_01c71b24(0);
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      lVar3 = FUN_0391c27c(param_2,0);
      if ((lVar3 == 0) || (FUN_03928d34(lVar3,0), lVar2 == 0)) goto LAB_01c667b8;
      FUN_01c71c98(lVar2,uVar4,0);
      *(undefined1 *)(param_2 + 0x3c) = 1;
    }
  }
  if (*(float *)(param_2 + 0x28) < param_1) {
    *(undefined1 *)(param_2 + 0x3c) = 0;
  }
  if ((*(float *)(param_2 + 0x38) < param_1) && (*(char *)(param_2 + 0x3d) == '\0')) {
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar1 = FUN_0391f968(uVar4,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_01c71b24(0);
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      lVar3 = FUN_0391c27c(param_2,0);
      if ((lVar3 == 0) || (FUN_03928d34(lVar3,0), lVar2 == 0)) {
LAB_01c667b8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_01c71c98(lVar2,uVar4,0);
      *(undefined1 *)(param_2 + 0x3d) = 1;
    }
  }
  if (param_1 < *(float *)(param_2 + 0x38)) {
    *(undefined1 *)(param_2 + 0x3d) = 0;
  }
  return;
}


