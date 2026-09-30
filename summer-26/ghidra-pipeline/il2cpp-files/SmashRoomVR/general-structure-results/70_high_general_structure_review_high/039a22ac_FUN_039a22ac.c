/*
FUNCTION_NAME: FUN_039a22ac
ENTRY_POINT: 039a22ac
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


undefined8 FUN_039a22ac(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((DAT_03ffc749 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffc749 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_2 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar5 = *param_2;
    lVar3 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    bVar1 = *(byte *)(lVar5 + 0x130);
    uVar6 = (ulong)*(byte *)(lVar3 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar5 + 200) + uVar6 * 8 + -8) == lVar3)) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *param_2;
        lVar3 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar5 + 0x130);
        uVar6 = (ulong)*(byte *)(lVar3 + 0x130);
      }
      if ((uint)bVar1 < (uint)uVar6) {
        param_2 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(lVar5 + 200) + uVar6 * 8 + -8) != lVar3) {
        param_2 = (long *)0x0;
      }
      uVar4 = FUN_0391f968(param_2,0,0);
      return uVar4;
    }
    uVar4 = 1;
  }
  return uVar4;
}


