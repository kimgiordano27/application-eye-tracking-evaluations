/*
FUNCTION_NAME: OVRSceneModelLoader$$<RequestScenePermissionAsync>g__RequestPermissionOnAndroid|9_0
ENTRY_POINT: 0579c0bc
PROGRAM: Untangled-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRSceneModelLoader__<RequestScenePermissionAsync>g__RequestPermissionOnAndroid_9_0
               (ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  long *plVar2;
  long unaff_x21;
  
  plVar2 = *(long **)(unaff_x20 + 0x28);
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d5aa60);
    FUN_02f07e70(PTR_DAT_06d37028);
    FUN_02f07e70(PTR_DAT_06d5aa68);
    FUN_02f07e70(PTR_DAT_06d02130);
    FUN_02f07e70(PTR_DAT_06d5aa00);
    *(undefined1 *)(unaff_x21 + 0xabf) = 1;
  }
  puVar1 = PTR_DAT_06d5aa60;
  if (*(int *)(*plVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_037e9048(0x4b34ca3,param_2,*(undefined8 *)puVar1);
  return;
}


