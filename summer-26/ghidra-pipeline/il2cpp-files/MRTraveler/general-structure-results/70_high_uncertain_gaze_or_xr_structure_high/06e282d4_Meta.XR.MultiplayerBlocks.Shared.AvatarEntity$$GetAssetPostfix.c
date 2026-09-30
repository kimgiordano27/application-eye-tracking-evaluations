/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.AvatarEntity$$GetAssetPostfix
ENTRY_POINT: 06e282d4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_AvatarEntity__GetAssetPostfix(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x19 + 0x60);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar1 = FUN_085e285c(uVar2,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x60) != 0) {
      FUN_06de9918(*(long *)(unaff_x19 + 0x60),0,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  return;
}


