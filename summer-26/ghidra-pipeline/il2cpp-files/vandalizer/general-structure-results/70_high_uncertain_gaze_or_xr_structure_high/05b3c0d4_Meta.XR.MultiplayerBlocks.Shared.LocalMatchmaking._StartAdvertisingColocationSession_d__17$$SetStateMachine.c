/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAdvertisingColocationSession>d__17$$SetStateMachine
ENTRY_POINT: 05b3c0d4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAdvertisingColocationSession>d__17__SetStateMachine
               (void)

{
  ulong uVar1;
  uint unaff_w19;
  void *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  code *pcVar2;
  
  while( true ) {
    memcpy(&stack0x00000000,unaff_x20,0x48);
    pcVar2 = *(code **)(*unaff_x22 + 0x1b8);
    memcpy(&stack0x000000d8,&stack0x00000048,0x48);
    memcpy(&stack0x00000090,&stack0x00000000,0x48);
    uVar1 = (*pcVar2)();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w23) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    memcpy(&stack0x00000048,(void *)(unaff_x21 + (long)(int)unaff_w19 * (long)unaff_w24 + 0x20),0x48
          );
  }
  return 0xffffffff;
}


