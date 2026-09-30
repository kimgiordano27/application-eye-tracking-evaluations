/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<HostOrJoinSessionAutomatically>d__16$$MoveNext
ENTRY_POINT: 06e76f9c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<HostOrJoinSessionAutomatically>d__16__MoveNext
               (long param_1)

{
  uint in_w9;
  uint in_w10;
  uint uVar1;
  int in_w11;
  long in_x12;
  uint in_w13;
  long unaff_x19;
  
  while( true ) {
    uVar1 = in_w13;
    if (*(uint *)(in_x12 + 0x18) <= uVar1 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    if (-1 < *(int *)(in_x12 + (long)(int)in_w10 * (long)in_w11 + 0x20)) break;
    if (in_w9 <= uVar1) {
      *(uint *)(unaff_x19 + 8) = in_w9 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      goto LAB_06e76fe0;
    }
    in_x12 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = uVar1 + 1;
    in_w13 = uVar1 + 1;
    in_w10 = uVar1;
    if (in_x12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
  *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(in_x12 + (long)(int)in_w10 * 0x18 + 0x30);
  uVar1 = in_w10;
LAB_06e76fe0:
  return uVar1 < in_w9;
}


