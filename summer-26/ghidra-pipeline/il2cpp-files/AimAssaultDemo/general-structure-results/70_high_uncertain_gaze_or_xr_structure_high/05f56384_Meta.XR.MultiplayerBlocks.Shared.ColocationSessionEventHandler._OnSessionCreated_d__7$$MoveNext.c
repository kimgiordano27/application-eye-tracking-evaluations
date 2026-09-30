/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionCreated>d__7$$MoveNext
ENTRY_POINT: 05f56384
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionCreated>d__7__MoveNext
          (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03775678();
  }
                    /* try { // try from 05f56390 to 060563a7 has its CatchHandler @ 05f56440 */
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  uVar1 = thunk_FUN_037788cc();
                    /* try { // try from 05f563a8 to 060563bb has its CatchHandler @ 05f562d4 */
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 05f563bc to 060563d3 has its CatchHandler @ 05f56440 */
    lVar2 = FUN_03775678(lVar2);
  }
  FUN_04f15eac(uVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
  return uVar1;
                    /* try { // try from 05f563d4 to 0605642f has its CatchHandler @ 05f562d4 */
}


