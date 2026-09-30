/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 0367c178
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


undefined4 OVRPermissionsRequester__ShouldRequestPermission(void)

{
  if (DAT_0482ee1d == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    DAT_0482ee1d = '\x01';
  }
  return *(undefined4 *)
          (*(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8
                    ) + 0x48);
}


