/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionCreatedWithSpatialAnchor
ENTRY_POINT: 0581cc70
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor
               (long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  while( true ) {
    uVar1 = NodeCanvas_Tasks_Conditions_CheckDistanceToGameObjectAny2D__OnDrawGizmosSelected
                      (param_2,param_3,*(undefined8 *)(param_1 + 0x10));
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x24 = unaff_x24 + -1;
    param_2 = unaff_x23 + 1;
    if (unaff_x24 == 0) break;
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    param_3 = unaff_x21 & 0xffffffff;
    param_1 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    unaff_x23 = param_2;
  }
  return 0xffffffff;
}


