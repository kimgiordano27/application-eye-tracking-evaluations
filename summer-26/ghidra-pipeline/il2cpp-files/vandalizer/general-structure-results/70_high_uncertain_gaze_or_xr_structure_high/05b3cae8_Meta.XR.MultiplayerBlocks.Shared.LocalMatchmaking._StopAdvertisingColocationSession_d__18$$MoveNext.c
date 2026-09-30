/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopAdvertisingColocationSession>d__18$$MoveNext
ENTRY_POINT: 05b3cae8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__18__MoveNext
               (long param_1,long *param_2,undefined8 param_3,void *param_4,uint param_5)

{
  ulong uVar1;
  int in_w9;
  long unaff_x21;
  void *__src;
  long lVar2;
  code *pcVar3;
  
  __src = (void *)(unaff_x21 + (long)(int)param_5 * (long)in_w9 + 0x20);
  param_1 = param_1 - (int)param_5;
  while( true ) {
    if (*(uint *)(unaff_x21 + 0x18) <= param_5) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    memcpy(&stack0x00000048,__src,0x48);
    memcpy(&stack0x00000000,param_4,0x48);
    lVar2 = *param_2;
    pcVar3 = *(code **)(lVar2 + 0x1b8);
    memcpy(&stack0x000000d8,&stack0x00000048,0x48);
    memcpy(&stack0x00000090,&stack0x00000000,0x48);
    uVar1 = (*pcVar3)(param_2,&stack0x000000d8,&stack0x00000090,*(undefined8 *)(lVar2 + 0x1c0));
    if ((uVar1 & 1) != 0) break;
    param_5 = param_5 + 1;
    param_1 = param_1 + -1;
    __src = (void *)((long)__src + 0x48);
    if (param_1 == 0) {
      return 0xffffffff;
    }
  }
  return param_5;
}


