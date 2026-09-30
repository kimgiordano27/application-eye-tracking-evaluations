/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion.<GetSessionList>d__25$$MoveNext
ENTRY_POINT: 06e587b8
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


bool Meta_XR_MultiplayerBlocks_Fusion_CustomMatchmakingFusion_<GetSessionList>d__25__MoveNext
               (long param_1)

{
  int in_w9;
  long in_x10;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  uint uVar1;
  
  while( true ) {
    *(uint *)(unaff_x19 + 8) = unaff_w21 + 1;
    if (in_x10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(in_x10 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    uVar1 = unaff_w21 + 1;
    if (-1 < *(int *)(in_x10 + (long)(int)unaff_w21 * (long)in_w9 + 0x20)) break;
    if (unaff_w20 <= uVar1) {
      *(uint *)(unaff_x19 + 8) = unaff_w20 + 1;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
      *(undefined8 *)(unaff_x19 + 0x48) = 0;
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      *(undefined8 *)(unaff_x19 + 0x58) = 0;
      *(undefined8 *)(unaff_x19 + 0x50) = 0;
      *(undefined8 *)(unaff_x19 + 0x60) = 0;
      goto LAB_06e58830;
    }
    in_x10 = *(long *)(param_1 + 0x18);
    unaff_w21 = uVar1;
  }
  memmove((void *)(unaff_x19 + 0x10),(void *)(in_x10 + (long)(int)unaff_w21 * 0x68 + 0x30),0x58);
  thunk_FUN_03d1023c((void *)(unaff_x19 + 0x10),0);
  uVar1 = unaff_w21;
LAB_06e58830:
  return uVar1 < unaff_w20;
}


