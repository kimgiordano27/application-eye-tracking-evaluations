/*
FUNCTION_NAME: FUN_01c72fa8
ENTRY_POINT: 01c72fa8
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


void FUN_01c72fa8(long *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_03fed742 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed742 = 1;
  }
  uVar2 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((uVar2 & 1) == 0) goto switchD_01c73050_default;
  lVar4 = param_1[0xd];
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(lVar4,0,0);
  if ((uVar2 & 1) != 0) goto switchD_01c73050_default;
  if ((param_1[0xc] == 0) || (lVar4 = *(long *)(param_1[0xc] + 0x80), lVar4 == 0)) {
LAB_01c73170:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  switch(*(undefined4 *)(lVar4 + 0x80)) {
  case 0:
    (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
    break;
  case 1:
    uVar3 = *(undefined8 *)(lVar4 + 0x88);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
      lVar4 = param_1[9];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(lVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if (param_1[9] == 0) goto LAB_01c73170;
        *(undefined1 *)(param_1[9] + 0x20) = 0;
      }
      lVar4 = param_1[7];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(lVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if (((param_1[0xc] == 0) || (lVar4 = *(long *)(param_1[0xc] + 0x80), lVar4 == 0)) ||
           (param_1[7] == 0)) goto LAB_01c73170;
        *(undefined8 *)(param_1[7] + 0x38) = *(undefined8 *)(lVar4 + 0x88);
        thunk_FUN_01b4f09c();
      }
    }
    break;
  case 2:
    lVar4 = *param_1;
    uVar3 = 0;
    goto LAB_01c73148;
  case 3:
    lVar4 = *param_1;
    uVar3 = 1;
LAB_01c73148:
    (**(code **)(lVar4 + 0x298))(param_1,uVar3,*(undefined8 *)(lVar4 + 0x2a0));
  }
switchD_01c73050_default:
  param_1[0x17] = param_2;
  thunk_FUN_01b4f09c(param_1 + 0x17,param_2);
  return;
}


