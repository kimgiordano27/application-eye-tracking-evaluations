/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartDiscoveringColocationSessions>d__19$$SetStateMachine
ENTRY_POINT: 05b3cadc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartDiscoveringColocationSessions>d__19__SetStateMachine
               (long *param_1,long param_2,void *param_3,uint param_4)

{
  ulong uVar1;
  int in_w8;
  long unaff_x21;
  void *__src;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  __src = (void *)(unaff_x21 + (long)(int)param_4 * 0x48 + 0x20);
  lVar2 = (long)in_w8 - (long)(int)param_4;
  while( true ) {
    if (*(uint *)(unaff_x21 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    memcpy(&stack0x00000048,__src,0x48);
    memcpy(&stack0x00000000,param_3,0x48);
    lVar3 = *param_1;
    pcVar4 = *(code **)(lVar3 + 0x1b8);
    memcpy(&stack0x000000d8,&stack0x00000048,0x48);
    memcpy(&stack0x00000090,&stack0x00000000,0x48);
    uVar1 = (*pcVar4)(param_1,&stack0x000000d8,&stack0x00000090,*(undefined8 *)(lVar3 + 0x1c0));
    if ((uVar1 & 1) != 0) break;
    param_4 = param_4 + 1;
    lVar2 = lVar2 + -1;
    __src = (void *)((long)__src + 0x48);
    if (lVar2 == 0) {
      return 0xffffffff;
    }
  }
  return param_4;
}


