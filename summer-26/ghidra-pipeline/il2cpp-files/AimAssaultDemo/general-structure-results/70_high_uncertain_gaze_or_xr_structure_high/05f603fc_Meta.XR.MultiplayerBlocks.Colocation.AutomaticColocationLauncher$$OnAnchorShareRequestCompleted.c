/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestCompleted
ENTRY_POINT: 05f603fc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestCompleted
               (void)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  
  while( true ) {
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
                    /* try { // try from 05f6040c to 06060423 has its CatchHandler @ 05f604f4 */
                    /* try { // try from 05f60424 to 06060443 has its CatchHandler @ 05f60360 */
                    /* try { // try from 05f60444 to 0606045b has its CatchHandler @ 05f604f4 */
                    /* try { // try from 05f6045c to 0606046f has its CatchHandler @ 05f60360 */
    uVar1 = (**(code **)(*unaff_x22 + 0x1b8))();
    if ((uVar1 & 1) != 0) break;
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w23) {
                    /* try { // try from 05f60470 to 06060487 has its CatchHandler @ 05f604f4 */
                    /* try { // try from 05f60488 to 060604e3 has its CatchHandler @ 05f60360 */
      return 0xffffffff;
    }
  }
  return unaff_w19;
}


