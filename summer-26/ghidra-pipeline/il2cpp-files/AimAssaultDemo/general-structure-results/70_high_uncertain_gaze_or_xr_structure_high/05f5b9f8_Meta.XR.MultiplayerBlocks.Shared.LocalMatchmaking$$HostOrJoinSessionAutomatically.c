/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$HostOrJoinSessionAutomatically
ENTRY_POINT: 05f5b9f8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__HostOrJoinSessionAutomatically(void)

{
  ulong uVar1;
  uint in_w8;
  uint unaff_w19;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  
  while( true ) {
    if (in_w8 <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar1 = (**(code **)(*unaff_x22 + 0x1b8))();
    if ((uVar1 & 1) != 0) break;
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w23) {
      return 0xffffffff;
    }
    in_w8 = *(uint *)(unaff_x21 + 0x18);
  }
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05f5b96c with catch @ 05f5ba78
                       try { // try from 05f5ba78 to 0605ba9b has its CatchHandler @ 05f5b938 */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05f5b988 with catch @ 05f5ba84
                        */
  return unaff_w19;
}


