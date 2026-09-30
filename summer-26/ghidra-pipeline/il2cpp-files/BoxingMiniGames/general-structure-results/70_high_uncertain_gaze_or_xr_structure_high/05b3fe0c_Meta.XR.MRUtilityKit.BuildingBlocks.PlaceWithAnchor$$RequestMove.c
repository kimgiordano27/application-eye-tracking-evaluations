/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PlaceWithAnchor$$RequestMove
ENTRY_POINT: 05b3fe0c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_BuildingBlocks_PlaceWithAnchor__RequestMove(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long *unaff_x20;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc(lVar1);
  }
  if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar1 + 0x40)) {
    thunk_FUN_0367ff68();
                    /* WARNING: Could not recover jumptable at 0x05b3fe60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x1c8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03643084();
}


