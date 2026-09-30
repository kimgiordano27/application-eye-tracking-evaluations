/*
FUNCTION_NAME: FUN_03b0f5f0
ENTRY_POINT: 03b0f5f0
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


undefined8 FUN_03b0f5f0(int *param_1,int *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_03ffdaa2 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffdaa2 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*param_1 == *param_2) {
    uVar3 = *(undefined8 *)(param_1 + 2);
    uVar4 = *(undefined8 *)(param_2 + 2);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03922f24(uVar3,uVar4,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 4);
      uVar4 = *(undefined8 *)(param_2 + 4);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03922f24(uVar3,uVar4,0);
      if ((uVar2 & 1) != 0) {
        uVar3 = *(undefined8 *)(param_1 + 6);
        uVar4 = *(undefined8 *)(param_2 + 6);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar2 = FUN_03922f24(uVar3,uVar4,0);
        if ((uVar2 & 1) != 0) {
          uVar4 = *(undefined8 *)(param_1 + 8);
          uVar3 = *(undefined8 *)(param_2 + 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar3 = FUN_03922f24(uVar4,uVar3,0);
          return uVar3;
        }
      }
    }
  }
  return 0;
}


