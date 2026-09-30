/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$MoveNext
ENTRY_POINT: 0567916c
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


uint Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__MoveNext
               (long param_1)

{
  uint uVar1;
  void *__src;
  long in_x9;
  long *unaff_x19;
  code *pcVar2;
  
  if (*(long *)(param_1 + 0x40) == in_x9) {
    __src = (void *)thunk_FUN_031c3ef0();
    memcpy(&stack0x00000000,__src,0xd0);
    pcVar2 = *(code **)(*unaff_x19 + 0x1b8);
    memcpy(&stack0x00000270,&stack0x000000d0,0xd0);
    memcpy(&stack0x000001a0,&stack0x00000000,0xd0);
    uVar1 = (*pcVar2)();
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03189058();
}


