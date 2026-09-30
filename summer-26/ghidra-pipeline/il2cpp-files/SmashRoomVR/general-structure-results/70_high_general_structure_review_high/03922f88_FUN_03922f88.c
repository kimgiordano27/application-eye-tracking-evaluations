/*
FUNCTION_NAME: FUN_03922f88
ENTRY_POINT: 03922f88
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


byte FUN_03922f88(long param_1,long param_2)

{
  byte bVar1;
  
  if ((DAT_03ffad3a & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffad3a = 1;
  }
  if (param_1 == 0 && param_2 == 0) {
    bVar1 = 1;
  }
  else {
    if (param_2 == 0) {
      param_2 = param_1;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
    }
    else {
      if (param_1 != 0) {
        bVar1 = param_1 == param_2;
        goto LAB_03923020;
      }
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
    }
    bVar1 = FUN_03923094(param_2);
    bVar1 = bVar1 ^ 1;
  }
LAB_03923020:
  return bVar1 & 1;
}


