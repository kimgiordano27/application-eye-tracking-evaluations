/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 05d3a884
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


undefined4 OVRPermissionsRequester__ShouldRequestPermission(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_06fb8f20;
  if ((DAT_07398a99 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb8f20);
    DAT_07398a99 = 1;
  }
  lVar2 = FUN_05109540(param_1,*(undefined8 *)puVar1);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x78) != 0)) {
    return *(undefined4 *)(*(long *)(lVar2 + 0x78) + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


