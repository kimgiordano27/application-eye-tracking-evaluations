/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$RequestScenePermissionIfNeeded
ENTRY_POINT: 0581cf0c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__RequestScenePermissionIfNeeded
               (void)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x21;
  int unaff_w23;
  
  while( true ) {
    uVar1 = FUN_069214e8(unaff_x21 + (long)(int)unaff_w19 * 4 + 0x20);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w23) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
  }
  return 0xffffffff;
}


