/*
FUNCTION_NAME: FUN_0206c6f4
ENTRY_POINT: 0206c6f4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


long * FUN_0206c6f4(undefined8 param_1,long *param_2)

{
  byte bVar1;
  
  if ((DAT_03feddeb & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feddeb = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                     0x130);
    if (bVar1 <= *(byte *)(*param_2 + 0x130)) {
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__) {
        return param_2;
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}


