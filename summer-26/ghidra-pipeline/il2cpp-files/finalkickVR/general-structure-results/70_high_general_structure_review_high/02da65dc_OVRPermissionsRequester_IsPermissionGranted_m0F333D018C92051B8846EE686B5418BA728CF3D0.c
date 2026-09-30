/*
FUNCTION_NAME: OVRPermissionsRequester_IsPermissionGranted_m0F333D018C92051B8846EE686B5418BA728CF3D0
ENTRY_POINT: 02da65dc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


byte OVRPermissionsRequester_IsPermissionGranted_m0F333D018C92051B8846EE686B5418BA728CF3D0
               (undefined4 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = OVRPermissionsRequester_GetPermissionId_m4BB21C8C9EEDA33445C70B6FEC8AB04FB551CD8B(param_1)
  ;
  bVar1 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(uVar2,0);
  return bVar1 & 1;
}


