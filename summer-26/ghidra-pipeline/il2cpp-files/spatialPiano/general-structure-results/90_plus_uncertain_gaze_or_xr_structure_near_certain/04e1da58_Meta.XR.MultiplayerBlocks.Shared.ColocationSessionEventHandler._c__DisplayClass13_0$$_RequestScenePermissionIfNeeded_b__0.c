/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<>c__DisplayClass13_0$$<RequestScenePermissionIfNeeded>b__0
ENTRY_POINT: 04e1da58
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c__DisplayClass13_0__<RequestScenePermissionIfNeeded>b__0
               (void)

{
  char in_NG;
  char in_OV;
  ulong uVar1;
  uint unaff_w19;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  
  while( true ) {
    if (in_NG != in_OV) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    uVar1 = FUN_0613a200(unaff_x24 + (long)(int)unaff_w19 * 8);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    in_OV = SBORROW4(unaff_w19,unaff_w23);
    in_NG = (int)(unaff_w19 - unaff_w23) < 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


