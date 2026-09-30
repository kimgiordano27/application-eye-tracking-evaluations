/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestReceived
ENTRY_POINT: 05f60334
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


uint Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestReceived
               (undefined8 param_1)

{
  ulong uVar1;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  
  while( true ) {
    uStack0000000000000028 = unaff_x23[1];
    uStack0000000000000020 = *unaff_x23;
                    /* try { // try from 05f6033c to 0606034b has its CatchHandler @ 05f6034c */
    uStack0000000000000010 = unaff_x20[2];
                    /* catch() { ... } // from try @ 05f6029c with catch @ 05f6034c
                       catch() { ... } // from try @ 05f602c8 with catch @ 05f6034c
                       catch() { ... } // from try @ 05f6033c with catch @ 05f6034c */
    uStack0000000000000008 = unaff_x20[1];
    uStack0000000000000000 = *unaff_x20;
                    /* try { // try from 05f60350 to 06060353 has its CatchHandler @ 05f6035c */
                    /* try { // try from 05f60354 to 0606035f has its CatchHandler @ 05f601b8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f60350 with catch @ 05f6035c
                        */
                    /* catch() { ... } // from try @ 05f603e4 with catch @ 05f60360
                       catch() { ... } // from try @ 05f60424 with catch @ 05f60360
                       catch() { ... } // from try @ 05f6045c with catch @ 05f60360
                       catch() { ... } // from try @ 05f60488 with catch @ 05f60360
                       catch() { ... } // from try @ 05f604fc with catch @ 05f60360 */
    uStack0000000000000030 = param_1;
    uStack0000000000000040 = uStack0000000000000000;
    uStack0000000000000048 = uStack0000000000000008;
    uStack0000000000000050 = uStack0000000000000010;
    uStack0000000000000060 = uStack0000000000000020;
    uStack0000000000000068 = uStack0000000000000028;
    uStack0000000000000070 = param_1;
    uVar1 = (**(code **)(*unaff_x22 + 0x1b8))();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
                    /* try { // try from 05f6038c to 060603e3 has its CatchHandler @ 05f603f4 */
    unaff_x24 = unaff_x24 + -1;
    if (unaff_x24 == 0) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    param_1 = unaff_x23[5];
    unaff_x23 = unaff_x23 + 3;
  }
  return 0xffffffff;
}


