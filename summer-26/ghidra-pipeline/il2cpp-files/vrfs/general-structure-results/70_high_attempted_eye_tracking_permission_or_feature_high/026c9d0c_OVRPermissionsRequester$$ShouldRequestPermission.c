/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 026c9d0c
PROGRAM: vrfs-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


long OVRPermissionsRequester__ShouldRequestPermission(long param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  
  if (param_1 == 0) {
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80) + 0x132) & 1) == 0)
    {
      FUN_015c2790();
    }
    lVar1 = thunk_FUN_015d056c();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    (**(code **)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x88) + 8))();
    *(long *)(unaff_x19 + 0x38) = lVar1;
    thunk_FUN_01656ef8();
    param_1 = *(long *)(unaff_x19 + 0x38);
  }
  return param_1;
}


