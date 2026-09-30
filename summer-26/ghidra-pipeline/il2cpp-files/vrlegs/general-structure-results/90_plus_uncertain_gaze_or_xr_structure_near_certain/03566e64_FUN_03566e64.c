/*
FUNCTION_NAME: FUN_03566e64
ENTRY_POINT: 03566e64
PROGRAM: vrlegs-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_03566e64(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = OVRTelemetry_NullTelemetryClient_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  puVar1 = PTR_DAT_03cbeb90;
  if ((DAT_0412df9d & 1) == 0) {
    FUN_01ab69ac(OVRTelemetry_NullTelemetryClient_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbeb90);
    DAT_0412df9d = 1;
  }
  uVar4 = FUN_01ab6a94(*(undefined8 *)puVar3,8);
  *(undefined8 *)(param_1 + 0x708) = uVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x708);
  *(undefined4 *)(param_1 + 0x710) = 0xbf800000;
  uVar4 = FUN_01ab6a94(*(undefined8 *)puVar1,4);
  *(undefined8 *)(param_1 + 0x718) = uVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x718);
  *(undefined4 *)(param_1 + 0x738) = 8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_03592c20(param_1,0);
  return;
}


