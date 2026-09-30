/*
FUNCTION_NAME: Liv.NativeGalleryBridge.NativeGallery$$RequestPermissionAsync
ENTRY_POINT: 026fbec0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void Liv_NativeGalleryBridge_NativeGallery__RequestPermissionAsync(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    FUN_025da2e4();
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cea0a0);
  uVar1 = thunk_FUN_01a89e68();
  uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cf04f0);
  FUN_0273bfa0(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cf7b98);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar1,uVar2);
}


