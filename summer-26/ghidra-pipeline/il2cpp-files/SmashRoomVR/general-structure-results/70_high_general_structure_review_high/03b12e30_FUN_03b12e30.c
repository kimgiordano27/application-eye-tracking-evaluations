/*
FUNCTION_NAME: FUN_03b12e30
ENTRY_POINT: 03b12e30
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_17;telemetry_or_network_hits_5
*/


void FUN_03b12e30(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_03ffdabc & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffdabc = 1;
  }
  uVar2 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (((uVar2 & 1) == 0) ||
     (uVar2 = (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined8 *)(*param_1 + 0x2c0)),
     (uVar2 & 1) == 0)) goto LAB_03b12ff4;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  switch(*(undefined4 *)(param_2 + 0x28)) {
  case 0:
    if (1 < *(uint *)(param_1 + 0x21)) goto LAB_03b12ff4;
    pcVar4 = *(code **)(*param_1 + 0x2e8);
    uVar3 = *(undefined8 *)(*param_1 + 0x2f0);
    break;
  case 1:
    if (*(uint *)(param_1 + 0x21) < 2) goto LAB_03b12ff4;
    pcVar4 = *(code **)(*param_1 + 0x308);
    uVar3 = *(undefined8 *)(*param_1 + 0x310);
    goto LAB_03b12f04;
  case 2:
    if (1 < *(uint *)(param_1 + 0x21)) goto LAB_03b12ff4;
    pcVar4 = *(code **)(*param_1 + 0x2f8);
    uVar3 = *(undefined8 *)(*param_1 + 0x300);
LAB_03b12f04:
    uVar3 = (*pcVar4)(param_1,uVar3);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar2 = FUN_03922f24(uVar3,0,0);
    if ((uVar2 & 1) == 0) goto LAB_03b12ff4;
    uVar1 = *(uint *)(param_1 + 0x21);
    fVar5 = (float)FUN_03b11e48(param_1);
    fVar7 = DAT_00b55290;
    if (1 < *(int *)((long)param_1 + 0x114)) {
      fVar7 = 1.0 / (float)(*(int *)((long)param_1 + 0x114) + -1);
    }
    fVar6 = -fVar7;
    if ((uVar1 & 0xfffffffd) != 1) {
      fVar6 = fVar7;
    }
    goto LAB_03b13050;
  case 3:
    if (*(uint *)(param_1 + 0x21) < 2) goto LAB_03b12ff4;
    pcVar4 = *(code **)(*param_1 + 0x318);
    uVar3 = *(undefined8 *)(*param_1 + 800);
    break;
  default:
    return;
  }
  uVar3 = (*pcVar4)(param_1,uVar3);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar2 = FUN_03922f24(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
LAB_03b12ff4:
    FUN_03b13078(param_1,param_2);
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x21);
  fVar5 = (float)FUN_03b11e48(param_1);
  fVar6 = DAT_00b55290;
  if (1 < *(int *)((long)param_1 + 0x114)) {
    fVar6 = 1.0 / (float)(*(int *)((long)param_1 + 0x114) + -1);
  }
  if ((uVar1 & 0xfffffffd) != 1) {
    fVar6 = -fVar6;
  }
LAB_03b13050:
  fVar5 = fVar5 + fVar6;
  fVar7 = fVar5;
  if (1.0 < fVar5) {
    fVar7 = 1.0;
  }
  if (fVar5 < 0.0) {
    fVar7 = 0.0;
  }
  FUN_03b11f08(fVar7,param_1,1);
  return;
}


