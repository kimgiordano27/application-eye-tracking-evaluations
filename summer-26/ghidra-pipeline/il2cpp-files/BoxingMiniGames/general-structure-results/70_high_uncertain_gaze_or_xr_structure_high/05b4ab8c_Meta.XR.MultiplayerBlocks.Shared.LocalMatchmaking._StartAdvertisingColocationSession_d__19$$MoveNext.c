/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAdvertisingColocationSession>d__19$$MoveNext
ENTRY_POINT: 05b4ab8c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAdvertisingColocationSession>d__19__MoveNext
               (void)

{
  uint uVar1;
  void *__src;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar2 + 0x40)) {
    __src = (void *)thunk_FUN_0367ff68();
    memcpy(&stack0x00000000,__src,0x80);
    pcVar3 = *(code **)(*unaff_x19 + 0x1b8);
    memcpy(&stack0x00000180,&stack0x00000080,0x80);
    memcpy(&stack0x00000100,&stack0x00000000,0x80);
    uVar1 = (*pcVar3)();
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03643084();
}


