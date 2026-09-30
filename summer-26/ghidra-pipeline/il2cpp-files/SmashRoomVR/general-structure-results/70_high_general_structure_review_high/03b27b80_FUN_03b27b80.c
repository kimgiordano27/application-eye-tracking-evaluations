/*
FUNCTION_NAME: FUN_03b27b80
ENTRY_POINT: 03b27b80
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_8
*/


undefined8 FUN_03b27b80(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
  if ((DAT_03ffdb80 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffdb80 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar3 = *(long *)puVar2;
  }
  lVar5 = *(long *)puVar1;
  uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar5);
  }
  uVar4 = FUN_03922f24(uVar6,param_1,0);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar3 = *(long *)puVar2;
  }
  lVar5 = *(long *)puVar1;
  uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar5);
  }
  uVar6 = FUN_03922f24(uVar6,0,0);
  return uVar6;
}


