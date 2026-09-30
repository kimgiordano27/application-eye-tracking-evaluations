/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmakingUtils$$ExtractMatchInfoFromSessionId
ENTRY_POINT: 06e22ff8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmakingUtils__ExtractMatchInfoFromSessionId
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  FUN_06f84868(param_1,param_2,0);
  FUN_06f683f8(*unaff_x24,*(undefined8 *)(unaff_x20 + 0x80),0);
  FUN_06f84868();
  uStack000000000000000c = *(undefined4 *)(unaff_x20 + 0x58);
  uVar1 = thunk_FUN_03cf4e64(*unaff_x25,&stack0x0000000c);
  FUN_06f6be0c(*unaff_x26,uVar1,0);
  FUN_06f84868();
  if (*(int *)(unaff_x20 + 0x58) == 2) {
    in_stack_00000008 = *(undefined4 *)(unaff_x20 + 0x60);
    uVar1 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e69880,&stack0x00000008);
    FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e93618,uVar1,0);
    FUN_06f84868();
  }
  FUN_06f7c2f0();
  return;
}


