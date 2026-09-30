/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionDiscovered>d__8$$SetStateMachine
ENTRY_POINT: 06e20b0c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionDiscovered>d__8__SetStateMachine
               (undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long in_x9;
  undefined4 *unaff_x19;
  undefined8 uVar3;
  long *unaff_x23;
  
  uVar3 = *param_1;
  uVar2 = thunk_FUN_03cf5234(**(undefined8 **)(in_x9 + 0x4d0));
  FUN_05cbddcc(uVar2,0,uVar3,*(undefined8 *)PTR_DAT_08e934c8);
  *unaff_x19 = 0xfffffffe;
  puVar1 = PTR_DAT_08e934c0;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_063c7630(unaff_x19 + 2,uVar2,*(undefined8 *)puVar1);
  return;
}


