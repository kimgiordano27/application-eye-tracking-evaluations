/*
FUNCTION_NAME: Oculus.Platform.Voip$$SetNewConnectionOptions
ENTRY_POINT: 030d7e60
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


long * Oculus_Platform_Voip__SetNewConnectionOptions(ulong param_1)

{
  byte bVar1;
  long *unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x20 + 0xa94) = 1;
  }
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                     0x130);
    if (bVar1 <= *(byte *)(*unaff_x19 + 0x130)) {
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__) {
        return unaff_x19;
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}


