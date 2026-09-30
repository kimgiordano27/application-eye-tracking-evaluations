/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion$$ClearSessionList
ENTRY_POINT: 052f1758
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Fusion_CustomMatchmakingFusion__ClearSessionList
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  ulong unaff_x19;
  long unaff_x21;
  
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052f1750 with catch @ 052f175c
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052f168c with catch @ 052f1760
                        */
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3de38);
    *(undefined1 *)(unaff_x21 + 0x1cd) = 1;
  }
  if ((unaff_x19 & 1) != 0) {
    if (*(long *)(param_5 + 0x28) != 0) {
      FUN_047629c8(param_2,param_3,param_4,*(long *)(param_5 + 0x28),*(undefined8 *)PTR_DAT_06d3de38
                  );
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  return;
}


