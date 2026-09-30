/*
FUNCTION_NAME: FUN_03b1a298
ENTRY_POINT: 03b1a298
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_13;telemetry_or_network_hits_5
*/


void FUN_03b1a298(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_03ffdb02 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffdb02 = 1;
  }
  uVar2 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (((uVar2 & 1) == 0) ||
     (uVar2 = (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined8 *)(*param_1 + 0x2c0)),
     (uVar2 & 1) == 0)) goto LAB_03b1a4c0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  switch(*(undefined4 *)(param_2 + 0x28)) {
  case 0:
    if (1 < *(uint *)(param_1 + 0x22)) goto LAB_03b1a4c0;
    pcVar5 = *(code **)(*param_1 + 0x2e8);
    uVar3 = *(undefined8 *)(*param_1 + 0x2f0);
    break;
  case 1:
    if (*(uint *)(param_1 + 0x22) < 2) goto LAB_03b1a4c0;
    pcVar5 = *(code **)(*param_1 + 0x308);
    uVar3 = *(undefined8 *)(*param_1 + 0x310);
    goto LAB_03b1a36c;
  case 2:
    if (1 < *(uint *)(param_1 + 0x22)) goto LAB_03b1a4c0;
    pcVar5 = *(code **)(*param_1 + 0x2f8);
    uVar3 = *(undefined8 *)(*param_1 + 0x300);
LAB_03b1a36c:
    uVar3 = (*pcVar5)(param_1,uVar3);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar2 = FUN_03922f24(uVar3,0,0);
    if ((uVar2 & 1) == 0) goto LAB_03b1a4c0;
    uVar1 = *(uint *)(param_1 + 0x22);
    fVar6 = (float)(**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
    fVar7 = 1.0;
    if (*(char *)((long)param_1 + 0x11c) == '\0') {
      fVar7 = (*(float *)(param_1 + 0x23) - *(float *)((long)param_1 + 0x114)) * DAT_00b55290;
    }
    lVar4 = *param_1;
    fVar8 = -fVar7;
    if ((uVar1 & 0xfffffffd) != 1) {
      fVar8 = fVar7;
    }
    goto LAB_03b1a4a0;
  case 3:
    if (*(uint *)(param_1 + 0x22) < 2) goto LAB_03b1a4c0;
    pcVar5 = *(code **)(*param_1 + 0x318);
    uVar3 = *(undefined8 *)(*param_1 + 800);
    break;
  default:
    return;
  }
  uVar3 = (*pcVar5)(param_1,uVar3);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar2 = FUN_03922f24(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
LAB_03b1a4c0:
    FUN_03b13078(param_1,param_2);
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x22);
  fVar6 = (float)(**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
  fVar8 = 1.0;
  if (*(char *)((long)param_1 + 0x11c) == '\0') {
    fVar8 = (*(float *)(param_1 + 0x23) - *(float *)((long)param_1 + 0x114)) * DAT_00b55290;
  }
  lVar4 = *param_1;
  if ((uVar1 & 0xfffffffd) != 1) {
    fVar8 = -fVar8;
  }
LAB_03b1a4a0:
                    /* WARNING: Could not recover jumptable at 0x03b1a4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x488))(fVar6 + fVar8,param_1,1,*(undefined8 *)(lVar4 + 0x490));
  return;
}


