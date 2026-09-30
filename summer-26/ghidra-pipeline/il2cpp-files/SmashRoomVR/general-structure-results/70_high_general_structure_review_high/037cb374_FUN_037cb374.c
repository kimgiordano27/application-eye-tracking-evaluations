/*
FUNCTION_NAME: FUN_037cb374
ENTRY_POINT: 037cb374
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


undefined8 FUN_037cb374(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if ((DAT_03ff80f8 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff80f8 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_1 == (long *)0x0) {
    uVar3 = 1;
  }
  else {
    lVar5 = *param_1;
    lVar4 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    bVar1 = *(byte *)(lVar5 + 0x130);
    uVar6 = (ulong)*(byte *)(lVar4 + 0x130);
    if ((*(byte *)(lVar4 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar5 + 200) + uVar6 * 8 + -8) == lVar4)) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar4);
        lVar5 = *param_1;
        lVar4 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar5 + 0x130);
        uVar6 = (ulong)*(byte *)(lVar4 + 0x130);
      }
      if (((uint)uVar6 <= (uint)bVar1) &&
         (*(long *)(*(long *)(lVar5 + 200) + uVar6 * 8 + -8) == lVar4)) {
        uVar3 = FUN_03922f24(param_1,0,0);
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(param_1);
    }
    uVar3 = 0;
  }
  return uVar3;
}


