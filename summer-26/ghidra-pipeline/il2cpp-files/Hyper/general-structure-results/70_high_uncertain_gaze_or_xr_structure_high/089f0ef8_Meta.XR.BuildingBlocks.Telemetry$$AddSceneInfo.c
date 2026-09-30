/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddSceneInfo
ENTRY_POINT: 089f0ef8
PROGRAM: Hyper-libil2cpp.so
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
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_0ac50fa8;
  if ((DAT_0b32bf77 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac50fa8);
    DAT_0b32bf77 = 1;
  }
  uVar2 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
  FUN_08dbf2f0(uVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
  thunk_FUN_049ee3d8(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar2);
  return;
}


