/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$.cctor
ENTRY_POINT: 076e0c30
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0___cctor(void)

{
  undefined *puVar1;
  long lVar2;
  float in_w8;
  undefined8 *puVar3;
  uint *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
                    /* catch() { ... } // from try @ 076e0be4 with catch @ 076e0c30 */
                    /* catch() { ... } // from try @ 076e0a38 with catch @ 076e0c34 */
  uVar5 = 0;
                    /* catch() { ... } // from try @ 076e0a68 with catch @ 076e0c38 */
                    /* catch() { ... } // from try @ 076e0a58 with catch @ 076e0c3c */
  uVar4 = 0xffffffff;
  do {
                    /* catch() { ... } // from try @ 076e0acc with catch @ 076e0c40 */
                    /* catch() { ... } // from try @ 076e0ae8 with catch @ 076e0c44 */
    if (unaff_w21 == uVar5) goto LAB_076e0ce0;
                    /* catch() { ... } // from try @ 076e0a1c with catch @ 076e0c48 */
                    /* catch() { ... } // from try @ 076e0af4 with catch @ 076e0c4c */
    if (*(long *)(unaff_x20 + (long)(int)uVar5 * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    fVar6 = (float)FUN_076e0ce4();
    if (fVar6 < in_w8) {
                    /* try { // try from 076e0c68 to 077e0c6b has its CatchHandler @ 076e0c78 */
      *unaff_x19 = uVar5;
      in_w8 = fVar6;
      uVar4 = uVar5;
    }
    puVar1 = PTR_DAT_08fae288;
    uVar5 = uVar5 + 1;
                    /* catch() { ... } // from try @ 076e0c68 with catch @ 076e0c78 */
  } while ((unaff_w21 & ((int)unaff_w21 >> 0x1f ^ 0xffffffffU)) != uVar5);
                    /* try { // try from 076e0c7c to 077e0c83 has its CatchHandler @ 076e0c8c */
                    /* try { // try from 076e0c84 to 077e0c8f has its CatchHandler @ 076e095c */
  if (uVar4 == 0xffffffff) {
    lVar2 = *(long *)PTR_DAT_08fae288;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar2 = *(long *)puVar1;
    }
    puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  }
  else {
                    /* catch() { ... } // from try @ 076e0c7c with catch @ 076e0c8c */
    if (unaff_w21 <= uVar4) {
LAB_076e0ce0:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    puVar3 = (undefined8 *)(unaff_x20 + (long)(int)uVar4 * 8 + 0x20);
  }
  return *puVar3;
}


