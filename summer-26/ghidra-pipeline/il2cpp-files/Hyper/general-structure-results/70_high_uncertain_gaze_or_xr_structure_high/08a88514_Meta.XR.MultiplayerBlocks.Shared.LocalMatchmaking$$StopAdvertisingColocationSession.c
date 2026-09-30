/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StopAdvertisingColocationSession
ENTRY_POINT: 08a88514
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StopAdvertisingColocationSession
               (long param_1)

{
  ulong uVar1;
  undefined4 *unaff_x19;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_049a583c(param_1);
  }
  uVar1 = FUN_086abadc(&stack0x00000020,0);
  if ((uVar1 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000028;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000020;
    thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
    FUN_05a7151c(unaff_x19 + 2,&stack0x00000020);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0ac3f8b8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_086abc1c(&stack0x00000020,0);
    *unaff_x19 = 0xfffffffe;
    FUN_08c7f6c8(unaff_x19 + 2,0);
  }
  return;
}


