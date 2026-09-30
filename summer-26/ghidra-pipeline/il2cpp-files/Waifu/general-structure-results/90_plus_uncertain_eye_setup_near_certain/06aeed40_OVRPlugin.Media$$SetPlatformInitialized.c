/*
FUNCTION_NAME: OVRPlugin.Media$$SetPlatformInitialized
ENTRY_POINT: 06aeed40
PROGRAM: Waifu-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetPlatformInitialized(undefined1 param_1 [16],float param_2,float param_3)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined8 *unaff_x22;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_033b9870();
                    /* catch() { ... } // from try @ 06aeed38 with catch @ 06aeed48 */
  uVar1 = FUN_07a0d2c4();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(unaff_x19 + 0x48);
    if (lVar2 == 0) goto LAB_06aeeeec;
    if (DAT_086edc60 == (code *)0x0) {
                    /* try { // try from 06aeedac to 06beedb7 has its CatchHandler @ 06aee77c */
      DAT_086edc60 = (code *)FUN_033d1b68("UnityEngine.Renderer::GetMaterial()");
    }
                    /* try { // try from 06aeedb8 to 06beedbf has its CatchHandler @ 06aeedc0 */
    lVar2 = (*DAT_086edc60)(lVar2);
                    /* catch() { ... } // from try @ 06aeed84 with catch @ 06aeedc0
                       catch() { ... } // from try @ 06aeedb8 with catch @ 06aeedc0 */
    if (lVar2 == 0) goto LAB_06aeeeec;
                    /* try { // try from 06aeedc4 to 06beef3b has its CatchHandler @ 06aeedc4
                       catch() { ... } // from try @ 06aeedc4 with catch @ 06aeedc4
                       catch() { ... } // from try @ 06aef020 with catch @ 06aeedc4
                       catch() { ... } // from try @ 06aef040 with catch @ 06aeedc4 */
    unaff_x22 = (undefined8 *)(unaff_x19 + 0x58);
  }
  else {
    lVar2 = *(long *)(unaff_x19 + 0x48);
    if (lVar2 == 0) goto LAB_06aeeeec;
    if (DAT_086edc60 == (code *)0x0) {
      DAT_086edc60 = (code *)FUN_033d1b68("UnityEngine.Renderer::GetMaterial()");
    }
                    /* try { // try from 06aeed84 to 06beedab has its CatchHandler @ 06aeedc0 */
    lVar2 = (*DAT_086edc60)(lVar2);
    if (lVar2 == 0) goto LAB_06aeeeec;
  }
  FUN_079de8b8(lVar2,*unaff_x22,0);
  if (*(char *)(unaff_x19 + 0x60) == '\0') {
    lVar2 = *(long *)(unaff_x19 + 0x48);
    if (lVar2 == 0) goto LAB_06aeeeec;
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    lVar2 = (*DAT_086ef188)(lVar2);
    if (unaff_x20 == 0) goto LAB_06aeeeec;
    fVar4 = *(float *)(unaff_x19 + 100);
    fVar5 = *(float *)(unaff_x19 + 0x68);
    fVar6 = *(float *)(unaff_x19 + 0x6c);
    fVar3 = (float)FUN_06aed7c4();
    if (DAT_086d7cc9 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc9 = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar2 == 0) goto LAB_06aeeeec;
    fVar3 = SQRT(param_3 * param_3 + fVar3 * fVar3 + param_2 * param_2);
    FUN_07a19820(fVar4 * fVar3,fVar5 * fVar3,fVar6 * fVar3,lVar2,0);
  }
  lVar2 = *(long *)(unaff_x19 + 0x48);
  if (lVar2 != 0) {
    if (DAT_086edcc0 == (code *)0x0) {
      DAT_086edcc0 = (code *)FUN_033d1b68("UnityEngine.Renderer::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x06aeeee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_086edcc0)(lVar2,1);
    return;
  }
LAB_06aeeeec:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


