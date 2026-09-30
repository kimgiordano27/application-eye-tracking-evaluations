/*
FUNCTION_NAME: OVRPlugin.Media$$IsMrcActivated
ENTRY_POINT: 06aef250
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__IsMrcActivated(void)

{
  int in_w8;
  code *pcVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x21;
  long unaff_x23;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  if (in_w8 == 0) {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x20 + 0xff6) = 1;
  }
  if (*(int *)(*(long *)(unaff_x21 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar2 = *(long *)(unaff_x19 + 0x48);
  if (lVar2 != 0) {
    pcVar1 = *(code **)(unaff_x23 + 0x188);
    if (pcVar1 == (code *)0x0) {
      pcVar1 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      *(code **)(unaff_x23 + 0x188) = pcVar1;
    }
    lVar2 = (*pcVar1)(lVar2);
    if (lVar2 != 0) {
      fVar3 = SQRT((unaff_s10 - unaff_s13) * (unaff_s10 - unaff_s13) +
                   (unaff_s8 - unaff_s11) * (unaff_s8 - unaff_s11) +
                   (unaff_s9 - unaff_s12) * (unaff_s9 - unaff_s12));
                    /* try { // try from 06aef2fc to 06bef3bb has its CatchHandler @ 06aef2fc
                       catch() { ... } // from try @ 06aef2fc with catch @ 06aef2fc
                       catch() { ... } // from try @ 06aef3f0 with catch @ 06aef2fc
                       catch() { ... } // from try @ 06aef410 with catch @ 06aef2fc */
      FUN_07a19820(fVar3 * *(float *)(unaff_x19 + 100),fVar3 * *(float *)(unaff_x19 + 0x68),
                   fVar3 * *(float *)(unaff_x19 + 0x6c),lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


