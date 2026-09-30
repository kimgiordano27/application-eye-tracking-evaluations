/*
FUNCTION_NAME: OVRPlugin$$CreateVirtualKeyboard
ENTRY_POINT: 060df004
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__CreateVirtualKeyboard(float *param_1,float param_2,float param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  long unaff_x26;
  float fVar6;
  float fVar7;
  float in_s7;
  float unaff_s8;
  float unaff_s15;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  
code_r0x060df004:
  fVar6 = param_1[2];
  do {
    fVar7 = fStack00000000000000b8;
    if (fStack0000000000000034 <= unaff_s15 * fVar6 + unaff_s8 * param_2 + in_s7 * param_3)
    goto LAB_060df054;
    do {
                    /* try { // try from 060df02c to 061df02f has its CatchHandler @ 060df030 */
                    /* catch() { ... } // from try @ 060df02c with catch @ 060df030 */
                    /* catch() { ... } // from try @ 060defe0 with catch @ 060df034 */
      fVar6 = (float)FUN_060df534(uStack0000000000000038,uStack000000000000003c,
                                  uStack0000000000000040,uStack0000000000000044,
                                  uStack0000000000000048,uStack000000000000004c);
      if (fVar6 <= fVar7) {
        fVar7 = fVar6;
      }
LAB_060df054:
      if ((long)((int)*(ulong *)(unaff_x19 + 0x18) + -1) <= (long)unaff_x23) {
                    /* try { // try from 060df07c to 061df0a3 has its CatchHandler @ 060df3e8 */
        return fVar7;
      }
      if ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) <= unaff_x23) {
LAB_060df0ac:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (*(long *)(unaff_x20 + 0x40) == 0) {
LAB_060df0a8:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar1 = unaff_x19 + unaff_x23 * 4;
      FUN_060f7ab8((long)&stack0x00000050 + 4,*(long *)(unaff_x20 + 0x40),
                   *(undefined4 *)(lVar1 + 0x20),0);
      fVar4 = fStack000000000000005c;
      fVar3 = fStack0000000000000058;
      fVar2 = in_stack_00000050._4_4_;
      unaff_x23 = unaff_x23 + 1;
      if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x23) goto LAB_060df0ac;
      if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_060df0a8;
      FUN_060f7ab8((long)&stack0x00000050 + 4,*(long *)(unaff_x20 + 0x40),
                   *(undefined4 *)(lVar1 + 0x24),0);
      fVar6 = fStack000000000000005c;
      param_3 = fStack0000000000000058;
      param_2 = in_stack_00000050._4_4_;
    } while (1.0 <= fStack0000000000000034);
    if (*(char *)(unaff_x24 + 0x6b7) == '\0') {
      FUN_03642964();
      *(undefined1 *)(unaff_x24 + 0x6b7) = unaff_w25;
    }
    fStack00000000000000b8 = fVar7;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    in_s7 = fStack0000000000000028;
    unaff_s8 = fStack000000000000002c;
    unaff_s15 = in_stack_00000020._4_4_;
    if (fStack0000000000000030 <= fStack00000000000000bc) {
      if (*(char *)(unaff_x26 + 0x6b5) == '\0') {
        FUN_03642964();
        *(undefined1 *)(unaff_x26 + 0x6b5) = unaff_w25;
      }
      pfVar5 = *(float **)(*unaff_x22 + 0xb8);
      unaff_s8 = *pfVar5;
      in_s7 = pfVar5[1];
      unaff_s15 = pfVar5[2];
    }
    if (*(char *)(unaff_x24 + 0x6b7) == '\0') {
      FUN_03642964();
      *(undefined1 *)(unaff_x24 + 0x6b7) = unaff_w25;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    param_2 = param_2 - fVar2;
    param_3 = param_3 - fVar3;
    fVar6 = fVar6 - fVar4;
    fVar7 = SQRT(fVar6 * fVar6 + param_2 * param_2 + param_3 * param_3);
    if (fVar7 <= fStack00000000000000bc) break;
    param_2 = param_2 / fVar7;
    param_3 = param_3 / fVar7;
    fVar6 = fVar6 / fVar7;
  } while( true );
  if (*(char *)(unaff_x26 + 0x6b5) == '\0') {
    FUN_03642964();
    *(undefined1 *)(unaff_x26 + 0x6b5) = unaff_w25;
  }
  param_1 = *(float **)(*unaff_x22 + 0xb8);
  param_2 = *param_1;
  param_3 = param_1[1];
  goto code_r0x060df004;
}


