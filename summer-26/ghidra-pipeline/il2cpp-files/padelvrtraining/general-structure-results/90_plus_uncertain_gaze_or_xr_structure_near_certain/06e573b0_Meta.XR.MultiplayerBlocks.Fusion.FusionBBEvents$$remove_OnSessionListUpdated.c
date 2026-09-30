/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$remove_OnSessionListUpdated
ENTRY_POINT: 06e573b0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__remove_OnSessionListUpdated(long param_1)

{
  uint in_w9;
  uint in_w10;
  uint uVar1;
  int in_w11;
  long in_x12;
  uint in_w13;
  long unaff_x19;
  
  do {
    uVar1 = in_w13 + 1;
    if (-1 < *(int *)(in_x12 + (long)(int)in_w10 * (long)in_w11 + 0x20)) {
      *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(in_x12 + (long)(int)in_w10 * 0x18 + 0x28);
      uVar1 = in_w10;
LAB_06e573e4:
      return uVar1 < in_w9;
    }
    if (in_w9 <= uVar1) {
      *(uint *)(unaff_x19 + 8) = in_w9 + 1;
      *(undefined4 *)(unaff_x19 + 0x10) = 0;
      goto LAB_06e573e4;
    }
    in_x12 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = in_w13 + 2;
    if (in_x12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_w13 = in_w13 + 1;
    in_w10 = uVar1;
    if (*(uint *)(in_x12 + 0x18) <= in_w13) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
  } while( true );
}


