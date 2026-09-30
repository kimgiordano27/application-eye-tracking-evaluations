/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$remove_OnConnectRequest
ENTRY_POINT: 05662314
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__remove_OnConnectRequest(void)

{
  undefined1 in_ZR;
  ulong uVar1;
  uint unaff_w19;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  while( true ) {
    unaff_w19 = unaff_w19 + 1;
    if ((bool)in_ZR) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) break;
    uVar1 = (**(code **)(*unaff_x22 + 0x1b8))();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x23 = unaff_x23 + -1;
    in_ZR = unaff_x23 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


