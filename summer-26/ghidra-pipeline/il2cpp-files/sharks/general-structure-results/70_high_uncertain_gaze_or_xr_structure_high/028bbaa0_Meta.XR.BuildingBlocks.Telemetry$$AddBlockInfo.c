/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockInfo
ENTRY_POINT: 028bbaa0
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_BuildingBlocks_Telemetry__AddBlockInfo(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  long *unaff_x20;
  
  lVar1 = FUN_0185daa4(param_1);
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x60) + 0x20) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  lVar1 = *unaff_x20;
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    lVar4 = unaff_x20[1];
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    uVar3 = FUN_01b6e174(lVar1,lVar4,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x68));
    return uVar3;
  }
  return 0;
}


