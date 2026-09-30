/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopAdvertisingColocationSession>d__18$$SetStateMachine
ENTRY_POINT: 05b3cda0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__18__SetStateMachine
               (uint param_1,undefined8 param_2,long param_3,long param_4)

{
  void *pvVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  code *pcVar3;
  long *unaff_x22;
  
  if (param_3 != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_0322bef4(lVar2);
    }
    lVar2 = thunk_FUN_0322f04c();
    if (lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        FUN_0322bef4(lVar2);
      }
      lVar2 = thunk_FUN_0322f04c();
      if (lVar2 != 0) {
        lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0322bef4(lVar2);
        }
        if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar2 + 0x40)) {
          pvVar1 = (void *)thunk_FUN_0322f29c();
          memcpy(&stack0x00000048,pvVar1,0x48);
          lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_0322bef4(lVar2);
          }
          if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar2 + 0x40)) {
            pvVar1 = (void *)thunk_FUN_0322f29c();
            memcpy(&stack0x00000000,pvVar1,0x48);
            pcVar3 = *(code **)(*unaff_x19 + 0x1b8);
            memcpy(&stack0x000000d8,&stack0x00000048,0x48);
            memcpy(&stack0x00000090,&stack0x00000000,0x48);
            param_1 = (*pcVar3)();
            goto LAB_05b3cef0;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_031f2730();
      }
    }
    FUN_05e223a8(2,0);
    param_1 = 0;
  }
LAB_05b3cef0:
  return param_1 & 1;
}


