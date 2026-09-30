/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopDiscoveringColocationSessions>d__20$$MoveNext
ENTRY_POINT: 05f5da5c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopDiscoveringColocationSessions>d__20__MoveNext
          (undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x22;
  
  if ((param_2 != 0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_03775678(lVar2);
    }
    lVar2 = thunk_FUN_037787d0();
    if (lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03775678(lVar2);
      }
      lVar2 = thunk_FUN_037787d0(param_3,lVar2);
      if (lVar2 != 0) {
        lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03775678(lVar2);
        }
        if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar2 + 0x40)) {
          thunk_FUN_03778a20();
          lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03775678(lVar2);
          }
          if (*(long *)(*param_3 + 0x40) == *(long *)(lVar2 + 0x40)) {
            thunk_FUN_03778a20(param_3);
                    /* WARNING: Could not recover jumptable at 0x05f5db68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
            return uVar1;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
    }
    FUN_062638b4(2,0);
  }
  return 0;
}


