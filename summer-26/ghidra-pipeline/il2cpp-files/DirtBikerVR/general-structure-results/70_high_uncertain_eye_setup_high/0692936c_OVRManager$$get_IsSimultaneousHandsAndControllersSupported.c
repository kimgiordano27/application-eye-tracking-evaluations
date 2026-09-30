/*
FUNCTION_NAME: OVRManager$$get_IsSimultaneousHandsAndControllersSupported
ENTRY_POINT: 0692936c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


float OVRManager__get_IsSimultaneousHandsAndControllersSupported(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_CY;
  uint in_w9;
  long lVar3;
  uint in_w10;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  uint unaff_w23;
  float fVar5;
  float unaff_s11;
  
  while (!(bool)in_CY) {
    lVar3 = unaff_x19 + (long)(int)in_w9 * (long)unaff_w22;
    lVar4 = unaff_x19 + (long)(int)in_w10 * (long)unaff_w22;
                    /* try { // try from 0692937c to 06a293cf has its CatchHandler @ 0692937c
                       catch() { ... } // from try @ 0692937c with catch @ 0692937c
                       catch() { ... } // from try @ 069293fc with catch @ 0692937c
                       catch() { ... } // from try @ 06929454 with catch @ 0692937c
                       catch() { ... } // from try @ 06929498 with catch @ 0692937c */
    fVar5 = (float)OVRManager__set_isSupportedPlatform
                             (*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),
                              *(undefined4 *)(lVar3 + 0x28),*(undefined4 *)(lVar4 + 0x20),
                              *(undefined4 *)(lVar4 + 0x24),*(undefined4 *)(lVar4 + 0x28));
    unaff_s11 = unaff_s11 + fVar5;
    uVar2 = *(uint *)(unaff_x20 + 0x18);
    if ((int)uVar2 <= (int)(unaff_w23 + 1)) {
                    /* try { // try from 069293d0 to 06a293d3 has its CatchHandler @ 0692941c */
                    /* try { // try from 069293d4 to 06a293e7 has its CatchHandler @ 06929424 */
      return unaff_s11;
    }
    if (uVar2 <= unaff_w21 + 1U) break;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    in_w9 = *(uint *)(unaff_x20 + (long)(int)(unaff_w21 + 1U) * 4 + 0x20);
    if ((((uVar1 <= in_w9) || (uVar2 <= unaff_w21 + 2U)) ||
        (in_w10 = *(uint *)(unaff_x20 + (long)(unaff_w21 + 2) * 4 + 0x20), uVar1 <= in_w10)) ||
       (unaff_w23 = unaff_w21 + 3, uVar2 <= unaff_w23)) break;
    in_CY = uVar1 <= *(uint *)(unaff_x20 + (long)(unaff_w21 + 3) * 4 + 0x20);
    unaff_w21 = unaff_w21 + 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


