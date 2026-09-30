/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmakingUtils$$EncodeMatchInfoToSessionId
ENTRY_POINT: 06e231f0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmakingUtils__EncodeMatchInfoToSessionId
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  int in_w10;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long in_stack_00000030;
  
  while( true ) {
    *(int *)(unaff_x19 + 0x1c) = in_w10 + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_3;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4();
    }
    uVar2 = FUN_049dc4d0(&stack0x00000020,*unaff_x21);
    if ((uVar2 & 1) == 0) {
      FUN_049dc4cc(&stack0x00000020,*unaff_x20);
      return;
    }
    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (unaff_x19 == 0) break;
    in_w10 = *(int *)(unaff_x19 + 0x1c);
    param_3 = *(undefined8 *)(in_stack_00000030 + 0x10);
    param_1 = *(long *)(unaff_x19 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


