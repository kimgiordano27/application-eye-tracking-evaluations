/*
FUNCTION_NAME: FUN_0362d69c
ENTRY_POINT: 0362d69c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


bool FUN_0362d69c(long param_1,uint param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  if ((DAT_03ff7274 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d7f4d0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff7274 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x58);
  if (lVar6 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(lVar6 + 0x18);
  }
  uVar5 = param_2 & lVar6 == 0;
  if ((param_2 >> 6 & 1) == 0) {
    bVar1 = false;
  }
  else {
    uVar5 = uVar5 & (param_2 & 0x40) >> 6;
    if (*(long *)(param_1 + 0x80) == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = iVar4 != *(int *)(*(long *)(param_1 + 0x80) + 0x18);
    }
  }
  uVar5 = (uint)(bVar1 || uVar5 != 0);
  if ((param_2 >> 1 & 1) == 0) {
    bVar1 = false;
  }
  else {
    uVar5 = uVar5 & (param_2 & 2) >> 1;
    if (*(long *)(param_1 + 0x60) == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = iVar4 != *(int *)(*(long *)(param_1 + 0x60) + 0x18);
    }
  }
  uVar5 = (uint)(bVar1 || uVar5 != 0);
  if ((param_2 >> 3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    uVar5 = uVar5 & (param_2 & 8) >> 3;
    if (*(long *)(param_1 + 0x68) == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(int *)(*(long *)(param_1 + 0x68) + 0x18) != iVar4;
    }
  }
  uVar5 = (uint)(bVar1 || uVar5 != 0);
  if ((param_2 >> 4 & 1) == 0) {
    bVar1 = false;
  }
  else {
    uVar5 = uVar5 & (param_2 & 0x10) >> 4;
    if (*(long *)(param_1 + 0x70) == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(int *)(*(long *)(param_1 + 0x70) + 0x18) != iVar4;
    }
  }
  uVar5 = (uint)(bVar1 || uVar5 != 0);
  if ((param_2 >> 5 & 1) == 0) {
    bVar1 = false;
  }
  else {
    uVar5 = uVar5 & (param_2 & 0x20) >> 5;
    if (*(long *)(param_1 + 0x88) == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = iVar4 != *(int *)(*(long *)(param_1 + 0x88) + 0x18);
    }
  }
  uVar5 = (uint)(bVar1 || uVar5 != 0);
  if ((param_2 >> 7 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar5 = uVar5 & (param_2 & 0x80) >> 7;
    if (*(long *)(param_1 + 0x78) == 0) {
      uVar7 = 1;
    }
    else {
      uVar7 = (uint)(iVar4 != *(int *)(*(long *)(param_1 + 0x78) + 0x18));
    }
  }
  uVar7 = uVar7 | uVar5;
  if ((param_2 >> 2 & 1) != 0) {
    uVar2 = FUN_0362f0b0(param_1);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_0391f968(uVar2,0,0);
    if ((uVar3 & 1) != 0) {
      lVar6 = FUN_0362f0b0(param_1);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar5 = FUN_03901748(lVar6,5,0);
      uVar7 = uVar7 | ~uVar5 & 1;
    }
  }
  return uVar7 == 0;
}


