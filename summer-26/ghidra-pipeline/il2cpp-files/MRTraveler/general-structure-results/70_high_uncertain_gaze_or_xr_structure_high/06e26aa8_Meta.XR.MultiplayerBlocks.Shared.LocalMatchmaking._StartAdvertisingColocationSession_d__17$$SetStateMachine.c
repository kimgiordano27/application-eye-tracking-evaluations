/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAdvertisingColocationSession>d__17$$SetStateMachine
ENTRY_POINT: 06e26aa8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAdvertisingColocationSession>d__17__SetStateMachine
          (void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x22;
  long *unaff_x24;
  
  thunk_FUN_03cd7500();
  uVar1 = FUN_0859d3e0(0);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_06dd867c(), (uVar1 & 1) == 0)) {
    thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e937d8,&stack0x0000000c);
    uVar2 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e937e0);
    if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
    }
    FUN_06df94c0(uVar2,0,0);
    return **(undefined8 **)(*unaff_x22 + 0xb8);
  }
  FUN_06f683f8(*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x19 + 0x80),0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*unaff_x24);
  }
  uVar2 = FUN_0708d070();
  return uVar2;
}


