/*
FUNCTION_NAME: OVRPlugin$$GetFaceState2
ENTRY_POINT: 01a28ce4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__GetFaceState2(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_w19;
  int *unaff_x20;
  byte unaff_w21;
  uint unaff_w22;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w29;
  int iVar6;
  undefined8 in_stack_00000008;
  
  do {
                    /* try { // try from 01a28ce4 to 01b28ceb has its CatchHandler @ 01a28d24 */
                    /* try { // try from 01a28cec to 01b28cef has its CatchHandler @ 01a28d00 */
                    /* try { // try from 01a28cf0 to 01b28cf7 has its CatchHandler @ 01a28d1c */
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
                    /* try { // try from 01a28cf8 to 01b28cfb has its CatchHandler @ 01a28cfc */
                    /* catch() { ... } // from try @ 01a28cf8 with catch @ 01a28cfc
                       try { // try from 01a28cfc to 01b28d73 has its CatchHandler @ 01a28804 */
                    /* catch() { ... } // from try @ 01a28cec with catch @ 01a28d00 */
                    /* catch() { ... } // from try @ 01a28ce0 with catch @ 01a28d04 */
    uVar1 = 1 << (ulong)(unaff_w22 & 0x1f) & in_stack_00000008._4_4_;
                    /* catch() { ... } // from try @ 01a28cd0 with catch @ 01a28d08 */
                    /* catch() { ... } // from try @ 01a28ccc with catch @ 01a28d0c */
                    /* catch() { ... } // from try @ 01a28cc8 with catch @ 01a28d10 */
                    /* catch() { ... } // from try @ 01a28c28 with catch @ 01a28d14 */
                    /* catch() { ... } // from try @ 01a28bac with catch @ 01a28d18 */
                    /* catch() { ... } // from try @ 01a28b80 with catch @ 01a28d1c
                       catch() { ... } // from try @ 01a28cf0 with catch @ 01a28d1c */
                    /* catch() { ... } // from try @ 01a28ad4 with catch @ 01a28d20 */
    switch(unaff_w22) {
    case 0:
      break;
    case 1:
      unaff_w29 = unaff_w25;
                    /* catch() { ... } // from try @ 01a28ab4 with catch @ 01a28d24
                       catch() { ... } // from try @ 01a28ce4 with catch @ 01a28d24 */
                    /* catch() { ... } // from try @ 01a289dc with catch @ 01a28d28 */
      break;
    case 2:
      unaff_w29 = unaff_w26;
      break;
    case 3:
      unaff_w29 = unaff_w24;
                    /* catch() { ... } // from try @ 01a28994 with catch @ 01a28d38
                       catch() { ... } // from try @ 01a28cd4 with catch @ 01a28d38 */
      break;
    case 4:
      unaff_w29 = unaff_w19;
      break;
    default:
      goto switchD_01a28d20_default;
    }
                    /* catch() { ... } // from try @ 01a28bf0 with catch @ 01a28d44 */
    if (unaff_w29 == 2) {
                    /* catch() { ... } // from try @ 01a28c0c with catch @ 01a28d48 */
                    /* catch() { ... } // from try @ 01a28a58 with catch @ 01a28d4c */
      iVar6 = unaff_x20[5];
                    /* catch() { ... } // from try @ 01a28bf4 with catch @ 01a28d50 */
                    /* catch() { ... } // from try @ 01a28bd8 with catch @ 01a28d54 */
                    /* catch() { ... } // from try @ 01a28bc8 with catch @ 01a28d58 */
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 01a28d74 with catch @ 01a28dac
                       try { // try from 01a28dac to 01b28de7 has its CatchHandler @ 01a28804 */
        thunk_FUN_00d32864();
      }
                    /* catch() { ... } // from try @ 01a28b40 with catch @ 01a28db8 */
      if ((uVar1 == 0) && (iVar6 == 1)) {
                    /* catch() { ... } // from try @ 01a28de8 with catch @ 01a28e24
                       try { // try from 01a28e24 to 01b28e4b has its CatchHandler @ 01a28804 */
        unaff_w21 = 0;
LAB_01a28e30:
                    /* catch() { ... } // from try @ 01a28a30 with catch @ 01a28e30 */
                    /* try { // try from 01a28e4c to 01b28e4f has its CatchHandler @ 01a28ea8 */
        return unaff_w21 & 1;
      }
                    /* catch() { ... } // from try @ 01a28b00 with catch @ 01a28dbc */
                    /* catch() { ... } // from try @ 01a28a78 with catch @ 01a28dc0 */
      iVar6 = unaff_x20[5];
                    /* catch() { ... } // from try @ 01a28a5c with catch @ 01a28dc4 */
      unaff_w21 = unaff_w21 | uVar1 != 0;
                    /* catch() { ... } // from try @ 01a28a40 with catch @ 01a28dc8 */
                    /* catch() { ... } // from try @ 01a28af0 with catch @ 01a28dcc */
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if ((uVar1 != 0) && (iVar6 == 0)) {
        unaff_w21 = 1;
        goto LAB_01a28e30;
      }
    }
    else {
switchD_01a28d20_default:
      iVar6 = *unaff_x20;
      iVar3 = unaff_x20[1];
      iVar2 = unaff_x20[2];
      iVar4 = unaff_x20[3];
                    /* try { // try from 01a28d74 to 01b28d77 has its CatchHandler @ 01a28dac */
      iVar5 = unaff_x20[4];
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
                    /* try { // try from 01a28d8c to 01b28dab has its CatchHandler @ 01a28f14 */
      switch(unaff_w22) {
      case 0:
        break;
      case 1:
        iVar6 = iVar3;
        break;
      case 2:
        iVar6 = iVar2;
                    /* try { // try from 01a28de8 to 01b28deb has its CatchHandler @ 01a28e24 */
        break;
      case 3:
        iVar6 = iVar4;
        break;
      case 4:
        iVar6 = iVar5;
        break;
      default:
        goto switchD_01a28da0_default;
      }
                    /* try { // try from 01a28e04 to 01b28e23 has its CatchHandler @ 01a28f14 */
      unaff_w21 = unaff_w21 | (uVar1 != 0 && iVar6 == 1);
    }
switchD_01a28da0_default:
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == 5) goto LAB_01a28e30;
    param_1 = *unaff_x23;
    unaff_w29 = *unaff_x20;
    unaff_w25 = unaff_x20[1];
    unaff_w26 = unaff_x20[2];
    unaff_w24 = unaff_x20[3];
    unaff_w19 = unaff_x20[4];
  } while( true );
}


