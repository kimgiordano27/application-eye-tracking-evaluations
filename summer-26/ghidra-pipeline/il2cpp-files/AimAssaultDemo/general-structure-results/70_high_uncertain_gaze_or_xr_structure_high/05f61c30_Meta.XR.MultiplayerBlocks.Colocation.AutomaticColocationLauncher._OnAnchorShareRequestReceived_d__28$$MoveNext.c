/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$MoveNext
ENTRY_POINT: 05f61c30
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


uint Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__MoveNext
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  long *unaff_x19;
  long *unaff_x20;
  
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_03775678(param_2);
  }
                    /* try { // try from 05f61c50 to 06061c77 has its CatchHandler @ 05f61bcc */
  if (*(long *)(*unaff_x20 + 0x40) == *(long *)(param_2 + 0x40)) {
    thunk_FUN_03778a20();
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05f61bf8 with catch @ 05f61c60
                        */
                    /* try { // try from 05f61c78 to 06061c8f has its CatchHandler @ 05f61d60 */
                    /* try { // try from 05f61c90 to 06061caf has its CatchHandler @ 05f61bcc */
    uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
                    /* try { // try from 05f61cb0 to 06061cc7 has its CatchHandler @ 05f61d60 */
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05f61cc8 to 06061cdb has its CatchHandler @ 05f61bcc */
  FUN_0373bb54();
}


