/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$RequestScenePermissionIfNeeded
ENTRY_POINT: 04e1d2ac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


bool Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__RequestScenePermissionIfNeeded
               (ulong param_1,long param_2)

{
  long *unaff_x19;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02f41e9c();
  }
  if (unaff_x19 != (long *)0x0) {
    if (*(byte *)(param_2 + 0x130) <= *(byte *)(*unaff_x19 + 0x130)) {
      return *(long *)(*(long *)(*unaff_x19 + 200) + (ulong)*(byte *)(param_2 + 0x130) * 8 + -8) ==
             param_2;
    }
  }
  return false;
}


