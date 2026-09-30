/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<OnColocationSessionFound>d__18$$MoveNext
ENTRY_POINT: 05671ccc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<OnColocationSessionFound>d__18__MoveNext
               (long param_1)

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
    pcVar2 = *(code **)(*unaff_x22 + 0x1b8);
    memcpy(&stack0x00000048,(void *)(param_1 + 0x20),0x48);
    memcpy(&stack0x00000000,unaff_x20,0x48);
    uVar1 = (*pcVar2)();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w23) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    param_1 = unaff_x21 + (long)(int)unaff_w19 * (long)unaff_w24;
  }
  return 0xffffffff;
}


