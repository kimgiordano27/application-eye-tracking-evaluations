/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddSceneInfo
ENTRY_POINT: 04d8d958
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddSceneInfo(void)

{
  ulong uVar1;
  code *pcVar2;
  long unaff_x19;
  ulong unaff_x21;
  
  uVar1 = FUN_02f08da0();
  if ((unaff_x21 & 1) == 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = FUN_02b81c84;
    }
    else {
      pcVar2 = FUN_02b81cdc;
    }
  }
  else if ((uVar1 & 1) == 0) {
    pcVar2 = FUN_02b81da8;
  }
  else {
    pcVar2 = FUN_02b81e2c;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar2;
  *(code **)(unaff_x19 + 0x38) = FUN_02b81b70;
  return;
}


