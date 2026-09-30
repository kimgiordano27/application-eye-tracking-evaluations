/*
FUNCTION_NAME: FUN_03183c84
ENTRY_POINT: 03183c84
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


uint FUN_03183c84(float param_1,long param_2,long param_3,float *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  uint local_34;
  
  if ((DAT_03ff220b & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13732);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff220b = 1;
  }
  local_34 = 0;
  *param_4 = 1.0;
  if ((*(int *)(param_2 + 0x84) == 2) ||
     (uVar2 = FUN_0317df84(param_2,param_3,&local_34), (uVar2 & 1) == 0)) {
    fVar5 = (float)FUN_0317fe58(param_2,param_3,&local_34);
    *param_4 = fVar5;
  }
  else {
    fVar5 = *param_4;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (fVar5 < param_1) {
LAB_03183dd4:
    uVar3 = 0;
  }
  else {
    uVar3 = local_34;
    if (local_34 == 0) {
      if (*(char *)(param_2 + 0x13c) == '\0') goto LAB_03183dd4;
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar3 = *(uint *)(param_2 + 0x138) & *(uint *)(param_3 + 0xe0);
    }
    uVar4 = *(undefined8 *)(param_2 + 0x150);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar4,0,0);
    if ((((uVar3 >> 1 & 1) != 0) && ((uVar2 & 1) != 0)) &&
       (uVar2 = FUN_03183df4(uVar2,param_3,*(undefined8 *)(param_2 + 0x150)), (uVar2 & 1) == 0)) {
      uVar3 = uVar3 & 0xfffffffd;
      local_34 = uVar3;
    }
    uVar4 = *(undefined8 *)(param_2 + 0x160);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar4,0,0);
    if (((uVar3 & 1) != 0) && ((uVar2 & 1) != 0)) {
      uVar2 = FUN_03183df4(uVar2,param_3,*(undefined8 *)(param_2 + 0x160));
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar3 & 0xfffffffe;
      }
    }
  }
  return uVar3;
}


