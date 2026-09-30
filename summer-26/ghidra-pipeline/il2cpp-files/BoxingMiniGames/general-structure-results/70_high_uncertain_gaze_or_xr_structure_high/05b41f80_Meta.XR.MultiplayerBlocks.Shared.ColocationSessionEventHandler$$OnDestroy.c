/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnDestroy
ENTRY_POINT: 05b41f80
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


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnDestroy
               (undefined8 param_1,long param_2)

{
  long *unaff_x19;
  long *unaff_x20;
  
  if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_0367c9fc(param_2);
  }
  if (*(long *)(*unaff_x20 + 0x40) == *(long *)(param_2 + 0x40)) {
    thunk_FUN_0367ff68();
                    /* WARNING: Could not recover jumptable at 0x05b41fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x1c8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03643084();
}


