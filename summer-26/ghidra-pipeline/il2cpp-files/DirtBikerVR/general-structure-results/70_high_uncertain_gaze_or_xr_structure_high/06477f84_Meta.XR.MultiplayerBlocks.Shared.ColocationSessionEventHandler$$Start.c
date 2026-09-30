/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Start
ENTRY_POINT: 06477f84
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Start
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_x4;
  
  FUN_06477940(param_2,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x30));
  thunk_FUN_03af1434(PTR_DAT_08493018);
  uVar1 = thunk_FUN_03ac74bc();
  FUN_067532ac(uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar1,in_x4);
}


