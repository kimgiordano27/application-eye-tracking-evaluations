/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<SpaceSharingBeforeHostStart>d__12$$SetStateMachine
ENTRY_POINT: 04e1ff7c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<SpaceSharingBeforeHostStart>d__12__SetStateMachine
               (undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  ulong uVar1;
  int in_w8;
  long lVar2;
  long lVar3;
  
  if (!in_ZR && in_NG == in_OV) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = (long)in_w8 - (long)(int)param_4;
    lVar2 = param_2 + (long)(int)param_4 * 0x40 + 0x20;
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar1 = FUN_03069754(lVar2);
      if ((uVar1 & 1) != 0) {
        return param_4;
      }
      lVar3 = lVar3 + -1;
      lVar2 = lVar2 + 0x40;
      param_4 = param_4 + 1;
    } while (lVar3 != 0);
  }
  return 0xffffffff;
}


