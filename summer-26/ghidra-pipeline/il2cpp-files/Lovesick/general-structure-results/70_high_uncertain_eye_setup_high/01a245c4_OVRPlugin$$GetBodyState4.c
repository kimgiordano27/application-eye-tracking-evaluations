/*
FUNCTION_NAME: OVRPlugin$$GetBodyState4
ENTRY_POINT: 01a245c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetBodyState4(ulong param_1)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float in_w9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  ulong unaff_x28;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_s6;
  float unaff_s8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  float in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  do {
    if ((param_1 & 0xffffffff) <= unaff_x28) {
LAB_01a24834:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01a24834 to 01b24837 has its CatchHandler @ 01a24ef0 */
      FUN_00da5194();
    }
    if (*(long *)(unaff_x20 + 0x40) == 0) {
LAB_01a24838:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01a3b330(&stack0x00000070,*(long *)(unaff_x20 + 0x40),
                 *(undefined4 *)(unaff_x19 + unaff_x28 * 4 + 0x20),0);
    fVar3 = in_stack_00000078;
    fVar2 = fStack0000000000000074;
    fVar5 = fStack0000000000000070;
    uVar1 = unaff_x28 + 1;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_01a24834;
    if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_01a24838;
                    /* try { // try from 01a24618 to 01b2461b has its CatchHandler @ 01a24ee8 */
                    /* try { // try from 01a2462c to 01b24813 has its CatchHandler @ 01a24f9c */
    FUN_01a3b330(&stack0x00000070,*(long *)(unaff_x20 + 0x40),
                 *(undefined4 *)(unaff_x19 + unaff_x28 * 4 + 0x24),0);
    fVar9 = in_stack_00000078;
    fVar11 = fStack0000000000000074;
    fVar10 = fStack0000000000000070;
    if (1.0 <= unaff_s8) {
LAB_01a247b4:
      fVar5 = (float)FUN_01a24cd8(in_stack_00000048._4_4_,uStack0000000000000050,
                                  uStack0000000000000054,uStack0000000000000058,
                                  uStack000000000000005c,in_stack_00000060);
      if (fVar5 <= in_w9) {
        in_w9 = fVar5;
      }
    }
    else {
      if (DAT_0377518c == '\0') {
        thunk_FUN_00d48444();
        DAT_0377518c = '\x01';
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar6 = fStack0000000000000040;
      fVar7 = fStack000000000000003c;
      fVar8 = fStack0000000000000038;
      if (fStack0000000000000044 <= in_stack_00000068) {
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444();
          DAT_03774d76 = '\x01';
        }
        pfVar4 = *(float **)(*unaff_x22 + 0xb8);
        fVar6 = *pfVar4;
        fVar7 = pfVar4[1];
        fVar8 = pfVar4[2];
      }
      if (DAT_0377518c == '\0') {
        thunk_FUN_00d48444();
        DAT_0377518c = '\x01';
      }
      fVar11 = fVar11 - fVar2;
      fVar9 = fVar9 - fVar3;
      fVar10 = fVar10 - fVar5;
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar5 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
      if (fVar5 <= in_stack_00000068) {
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444();
          DAT_03774d76 = '\x01';
        }
        pfVar4 = *(float **)(*unaff_x22 + 0xb8);
        fVar10 = *pfVar4;
        fVar11 = pfVar4[1];
        fVar9 = pfVar4[2];
      }
      else {
        fVar10 = fVar10 / fVar5;
        fVar11 = fVar11 / fVar5;
        fVar9 = fVar9 / fVar5;
      }
      unaff_s8 = in_s6;
      if (fVar8 * fVar9 + fVar6 * fVar10 + fVar7 * fVar11 < in_s6) goto LAB_01a247b4;
    }
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
    unaff_x28 = uVar1;
    if ((long)(unaff_x23 + (param_1 << 0x20)) >> 0x20 <= (long)uVar1) {
      return in_w9;
    }
  } while( true );
}


