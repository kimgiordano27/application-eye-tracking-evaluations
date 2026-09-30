/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionCreatedWithSpatialAnchor
ENTRY_POINT: 0775bee4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000020;
  undefined1 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined1 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 uStack0000000000000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  uStack0000000000000078 = param_2;
  thunk_FUN_044bb4b4(unaff_x25 + 0x10);
  in_stack_00000050 = *unaff_x24;
  thunk_FUN_044bb4b4(&stack0x00000050);
  in_stack_00000060 = *unaff_x21;
  thunk_FUN_044bb4b4(&stack0x00000060);
  in_stack_00000038 = *unaff_x23;
  thunk_FUN_044bb4b4(&stack0x00000038);
  in_stack_00000048 = *unaff_x21;
  thunk_FUN_044bb4b4(&stack0x00000048);
  in_stack_00000020 = *unaff_x22;
  thunk_FUN_044bb4b4(&stack0x00000020);
  in_stack_00000030 = *unaff_x21;
  uVar1 = thunk_FUN_044bb4b4(&stack0x00000030);
  if (unaff_x19 != 0) {
    in_stack_000000b8 = in_stack_000000a0;
    in_stack_000000b0 = in_stack_00000098;
    in_stack_000000c0 = in_stack_000000a8;
    FUN_074aa6e8();
    in_stack_000000b8 = in_stack_00000088;
    in_stack_000000b0 = in_stack_00000080;
    in_stack_000000c0 = in_stack_00000090;
    FUN_074aa6e8();
    in_stack_000000b0 = in_stack_00000068;
    in_stack_000000c0 = uStack0000000000000078;
    FUN_074aa6e8();
    in_stack_000000b0 = in_stack_00000068;
    in_stack_000000c0 = uStack0000000000000078;
    FUN_074aa6e8();
    in_stack_000000b0 = in_stack_00000068;
    in_stack_000000c0 = uStack0000000000000078;
    FUN_074aa6e8();
    in_stack_000000b0 = in_stack_00000068;
    in_stack_000000c0 = uStack0000000000000078;
    FUN_074aa6e8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44(uVar1,in_stack_00000098);
}


