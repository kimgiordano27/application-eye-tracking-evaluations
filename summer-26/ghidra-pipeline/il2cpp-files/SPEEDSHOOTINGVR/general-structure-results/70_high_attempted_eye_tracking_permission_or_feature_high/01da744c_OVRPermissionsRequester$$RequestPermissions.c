/*
FUNCTION_NAME: OVRPermissionsRequester$$RequestPermissions
ENTRY_POINT: 01da744c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__RequestPermissions(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_FUN_010303a8(PTR_DAT_02359f40);
  uVar1 = FUN_01c444f4();
  thunk_FUN_010303a8(PTR_DAT_0234be28);
  uVar2 = thunk_FUN_010400dc();
  uVar3 = thunk_FUN_010303a8(PTR_DAT_02359f30);
  FUN_01c62494(uVar2,uVar3,uVar1,0);
  uVar1 = thunk_FUN_010303a8(PTR_DAT_02359f38);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar2,uVar1);
}


