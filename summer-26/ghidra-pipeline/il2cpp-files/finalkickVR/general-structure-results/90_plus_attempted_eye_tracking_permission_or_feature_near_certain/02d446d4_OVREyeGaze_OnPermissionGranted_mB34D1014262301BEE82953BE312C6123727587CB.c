/*
FUNCTION_NAME: OVREyeGaze_OnPermissionGranted_mB34D1014262301BEE82953BE312C6123727587CB
ENTRY_POINT: 02d446d4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 123
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_6;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void OVREyeGaze_OnPermissionGranted_mB34D1014262301BEE82953BE312C6123727587CB
               (long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = OVRPermissionsRequester_GetPermissionId_m4BB21C8C9EEDA33445C70B6FEC8AB04FB551CD8B(2);
  bVar1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(param_2,uVar2,0);
  if ((bVar1 & 1) != 0) {
    OVRPermissionsRequester_remove_PermissionGranted_mE435AF3A1F8791C5EC6DE9E9F82F957999E95A73
              (*(undefined8 *)(param_1 + 0x68));
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(param_1,1,0);
  }
  return;
}


