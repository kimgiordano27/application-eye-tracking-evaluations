/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionDiscoveredWithSpaceSharing>d__16$$SetStateMachine
ENTRY_POINT: 0581ef58
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


bool Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpaceSharing>d__16__SetStateMachine
               (long param_1)

{
  bool bVar1;
  long *unaff_x19;
  
  if (*(byte *)(*unaff_x19 + 0x130) < *(byte *)(param_1 + 0x130)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(*(long *)(*unaff_x19 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) ==
            param_1;
  }
  return bVar1;
}


