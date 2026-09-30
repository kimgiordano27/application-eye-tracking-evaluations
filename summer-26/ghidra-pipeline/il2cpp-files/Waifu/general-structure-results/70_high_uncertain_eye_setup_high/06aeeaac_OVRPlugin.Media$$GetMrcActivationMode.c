/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcActivationMode
ENTRY_POINT: 06aeeaac
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__GetMrcActivationMode(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x19 + 0x48);
                    /* try { // try from 06aeeab4 to 06beeadb has its CatchHandler @ 06aeed1c */
  if (*(int *)(param_1 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar1 = FUN_07a0d2c4(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x19 + 0x48);
  if (lVar3 != 0) {
    if (DAT_086edc68 == (code *)0x0) {
      DAT_086edc68 = (code *)FUN_033d1b68("UnityEngine.Renderer::GetSharedMaterial()");
    }
    lVar3 = (*DAT_086edc68)(lVar3);
    if (lVar3 != 0) {
                    /* try { // try from 06aeeb0c to 06beeb13 has its CatchHandler @ 06aeed08 */
      FUN_079de8b8(lVar3,*(undefined8 *)(unaff_x19 + 0x58),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 06aeeb24 to 06beeb63 has its CatchHandler @ 06aeed10 */
  FUN_033d1d3c();
}


