/*
FUNCTION_NAME: FUN_03830bb0
ENTRY_POINT: 03830bb0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_8
*/


void FUN_03830bb0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff84cc & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__
                      );
    DAT_03ff84cc = 1;
  }
  puVar3 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__;
  uVar5 = *(undefined8 *)(param_1 + 0x2a0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  bVar4 = FUN_0391f968(uVar5,0,0);
  *(byte *)(param_1 + 0x358) = bVar4 & 1;
  bVar4 = FUN_0391f968(*(undefined8 *)(param_1 + 0x2a8),0,0);
  *(byte *)(param_1 + 0x359) = bVar4 & 1;
  iVar1 = *(int *)(param_1 + 0x2d0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (iVar1 < 3) {
    iVar1 = 2;
  }
  *(int *)(param_1 + 0x2d0) = iVar1;
  if (*(long *)(param_1 + 0x3d0) != 0) {
    FUN_03861464(*(long *)(param_1 + 0x3d0),*(undefined1 *)(param_1 + 0x2fc),0);
    return;
  }
  return;
}


