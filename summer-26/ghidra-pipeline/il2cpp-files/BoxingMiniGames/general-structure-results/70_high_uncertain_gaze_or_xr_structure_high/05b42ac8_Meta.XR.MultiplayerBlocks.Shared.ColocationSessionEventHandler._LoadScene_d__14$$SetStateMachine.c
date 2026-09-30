/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<LoadScene>d__14$$SetStateMachine
ENTRY_POINT: 05b42ac8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<LoadScene>d__14__SetStateMachine
          (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
    FUN_0367c9fc(param_2);
  }
  lVar1 = thunk_FUN_0367fd24();
  if (lVar1 == 0) {
    FUN_05e390e4(2,0);
    uVar2 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc(lVar1);
    }
    if (*(long *)(*unaff_x20 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084();
    }
    thunk_FUN_0367ff68();
    uVar2 = (**(code **)(*unaff_x19 + 0x1c8))();
  }
  return uVar2;
}


