/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Start
ENTRY_POINT: 052fcf70
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Start(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_06d3e0a0;
  if ((DAT_071c12c0 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3e1b8);
    FUN_02f07e70(PTR_DAT_06d3e0a0);
    DAT_071c12c0 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    FUN_05241f40(lVar2,param_1,*(undefined8 *)PTR_DAT_06d3e1b8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


