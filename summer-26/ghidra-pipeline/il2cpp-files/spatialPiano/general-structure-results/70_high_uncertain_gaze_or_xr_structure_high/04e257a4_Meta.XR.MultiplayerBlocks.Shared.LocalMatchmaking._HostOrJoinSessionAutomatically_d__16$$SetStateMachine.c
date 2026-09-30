/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<HostOrJoinSessionAutomatically>d__16$$SetStateMachine
ENTRY_POINT: 04e257a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<HostOrJoinSessionAutomatically>d__16__SetStateMachine
               (undefined1 param_1 [16],long param_2)

{
  ulong uVar1;
  undefined4 in_w9;
  uint unaff_w19;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined4 uStack0000000000000010;
  
  uStack0000000000000008 = param_1._8_8_;
  uStack0000000000000000 = param_1._0_8_;
  while( true ) {
    uStack0000000000000010 = in_w9;
    uVar1 = FUN_0625b774(param_2);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x24 = unaff_x24 + -1;
    param_2 = unaff_x23 + 0x14;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x24 == 0) break;
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    uStack0000000000000008 = unaff_x21[1];
    uStack0000000000000000 = *unaff_x21;
    in_w9 = *(undefined4 *)(unaff_x21 + 2);
    unaff_x23 = param_2;
  }
  return 0xffffffff;
}


