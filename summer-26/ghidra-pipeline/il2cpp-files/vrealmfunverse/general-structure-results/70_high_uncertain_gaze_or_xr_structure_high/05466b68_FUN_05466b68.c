/*
FUNCTION_NAME: FUN_05466b68
ENTRY_POINT: 05466b68
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05466b68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar1 = OVRPlugin_OVRP_1_7_0_TypeInfo;
  if ((DAT_066d0f52 & 1) == 0) {
    FUN_02b3c81c(
                UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_IsVelocitySufficient_00001085_PostfixBurstDelegate_TypeInfo
                );
    FUN_02b3c81c(System_Data_XmlToDatasetMap_TableSchemaInfo_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_7_0_TypeInfo);
    DAT_066d0f52 = 1;
  }
  puVar3 = System_Data_XmlToDatasetMap_TableSchemaInfo_TypeInfo;
  puVar2 = 
  UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_IsVelocitySufficient_00001085_PostfixBurstDelegate_TypeInfo
  ;
  uVar5 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar5 = FUN_04d8a7b0(uVar5,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar5;
  thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar5);
  uVar5 = FUN_04d8a7b0(*(undefined8 *)puVar3,0);
  puVar4 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar4 = uVar5;
  thunk_FUN_02bb0e9c(puVar4,uVar5);
  return;
}


