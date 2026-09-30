/*
FUNCTION_NAME: FUN_033fd698
ENTRY_POINT: 033fd698
PROGRAM: vrlegs-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_033fd698(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = OVRPlugin_TypeInfo;
  puVar2 = OVRPermissionsRequester_TypeInfo;
  puVar1 = PTR_DAT_03cbdce0;
  if ((DAT_0412d511 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdce0);
    FUN_01ab69ac(OVRPermissionsRequester_TypeInfo);
    FUN_01ab69ac(OVRPlugin_TypeInfo);
    DAT_0412d511 = 1;
  }
  uVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_033a2014(uVar4,*(undefined8 *)puVar3,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            (*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar4);
  return;
}


