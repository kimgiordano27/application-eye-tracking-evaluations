/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionDiscoveredWithSpatialAnchor
ENTRY_POINT: 0581cd38
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


bool Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionDiscoveredWithSpatialAnchor
               (undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02feb2c4();
  }
  if (param_2 != (long *)0x0) {
    if (*(byte *)(lVar1 + 0x130) <= *(byte *)(*param_2 + 0x130)) {
      return *(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) ==
             lVar1;
    }
  }
  return false;
}


