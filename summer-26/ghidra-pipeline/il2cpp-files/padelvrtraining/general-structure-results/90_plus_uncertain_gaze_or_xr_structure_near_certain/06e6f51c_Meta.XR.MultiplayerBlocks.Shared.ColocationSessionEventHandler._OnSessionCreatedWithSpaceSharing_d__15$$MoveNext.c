/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionCreatedWithSpaceSharing>d__15$$MoveNext
ENTRY_POINT: 06e6f51c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


bool Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionCreatedWithSpaceSharing>d__15__MoveNext
               (long param_1)

{
  int in_w9;
  long in_x10;
  uint in_w11;
  long in_x12;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  uint uVar1;
  
  do {
    uVar1 = in_w11 + 1;
    if (-1 < *(int *)(in_x12 + 0x20)) {
      *(undefined8 *)(unaff_x19 + 0x10) =
           *(undefined8 *)(in_x10 + (long)(int)unaff_w21 * 0x30 + 0x28);
      thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x10));
      uVar1 = unaff_w21;
LAB_06e6f554:
      return uVar1 < unaff_w20;
    }
    if (unaff_w20 <= uVar1) {
      *(uint *)(unaff_x19 + 8) = unaff_w20 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      goto LAB_06e6f554;
    }
    in_x10 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = in_w11 + 2;
    if (in_x10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_w11 = in_w11 + 1;
    if (*(uint *)(in_x10 + 0x18) <= in_w11) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    in_x12 = in_x10 + (long)(int)uVar1 * (long)in_w9;
    unaff_w21 = uVar1;
  } while( true );
}


