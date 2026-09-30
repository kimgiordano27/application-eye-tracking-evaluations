/*
FUNCTION_NAME: OVRPlugin$$GetMesh
ENTRY_POINT: 060dee30
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetMesh(ulong param_1,float param_2,float param_3,float param_4,float param_5,
                        undefined1 param_6 [16],undefined1 param_7 [16],float param_8)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar5;
  long unaff_x22;
  long *plVar6;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  long unaff_x26;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float fVar12;
  float unaff_s15;
  float fVar13;
  float fStack0000000000000024;
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
  float in_stack_000000b8;
  float fStack00000000000000bc;
  
  fStack0000000000000030 = SQRT(param_5);
  fStack000000000000002c = param_2 / fStack0000000000000030;
  fStack0000000000000028 = param_3 / fStack0000000000000030;
  fStack0000000000000024 = param_4 / fStack0000000000000030;
                    /* catch() { ... } // from try @ 060dee98 with catch @ 060dee4c
                       catch() { ... } // from try @ 060deecc with catch @ 060dee4c
                       catch() { ... } // from try @ 060deef0 with catch @ 060dee4c */
  fStack00000000000000bc = *(float *)(in_x9 + 0x354);
  plVar5 = *(long **)(unaff_x21 + 0xdf0);
  plVar6 = *(long **)(unaff_x22 + 0xdc0);
  fStack0000000000000034 = param_8;
  do {
    if ((param_1 & 0xffffffff) <= unaff_x23) {
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
    fVar3 = fStack000000000000005c;
    fVar2 = fStack0000000000000058;
    fVar10 = in_stack_00000050._4_4_;
    unaff_x23 = unaff_x23 + 1;
    if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x23) goto LAB_060df0ac;
                    /* try { // try from 060dee94 to 061dee97 has its CatchHandler @ 060deeac */
                    /* try { // try from 060dee98 to 061deec7 has its CatchHandler @ 060dee4c */
    if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_060df0a8;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060dee94 with catch @ 060deeac
                        */
    FUN_060f7ab8((long)&stack0x00000050 + 4,*(long *)(unaff_x20 + 0x40),
                 *(undefined4 *)(lVar1 + 0x24),0);
    fVar9 = fStack000000000000005c;
    fVar8 = fStack0000000000000058;
    fVar7 = in_stack_00000050._4_4_;
    if (1.0 <= unaff_s8) {
LAB_060df02c:
      fVar10 = (float)FUN_060df534(uStack0000000000000038,uStack000000000000003c,
                                   uStack0000000000000040,uStack0000000000000044,
                                   uStack0000000000000048,uStack000000000000004c);
      if (fVar10 <= unaff_s15) {
        unaff_s15 = fVar10;
      }
    }
    else {
                    /* try { // try from 060deec8 to 061deecb has its CatchHandler @ 060deee4 */
                    /* try { // try from 060deecc to 061deee7 has its CatchHandler @ 060dee4c */
      if (*(char *)(unaff_x24 + 0x6b7) == '\0') {
        FUN_03642964(plVar5);
        *(undefined1 *)(unaff_x24 + 0x6b7) = unaff_w25;
      }
                    /* catch() { ... } // from try @ 060deec8 with catch @ 060deee4 */
                    /* try { // try from 060deee8 to 061deeef has its CatchHandler @ 060deef8 */
      in_stack_000000b8 = unaff_s15;
      if (*(int *)(*plVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
                    /* try { // try from 060deef0 to 061deefb has its CatchHandler @ 060dee4c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 060deee8 with catch @ 060deef8
                        */
                    /* try { // try from 060deefc to 061defdf has its CatchHandler @ 060deefc
                       catch() { ... } // from try @ 060deefc with catch @ 060deefc
                       catch() { ... } // from try @ 060df3a8 with catch @ 060deefc
                       catch() { ... } // from try @ 060df408 with catch @ 060deefc
                       catch() { ... } // from try @ 060df42c with catch @ 060deefc */
      fVar11 = fStack0000000000000028;
      fVar12 = fStack000000000000002c;
      fVar13 = fStack0000000000000024;
      if (fStack0000000000000030 <= fStack00000000000000bc) {
        if (*(char *)(unaff_x26 + 0x6b5) == '\0') {
          FUN_03642964(plVar6);
          *(undefined1 *)(unaff_x26 + 0x6b5) = unaff_w25;
        }
        pfVar4 = *(float **)(*plVar6 + 0xb8);
        fVar12 = *pfVar4;
        fVar11 = pfVar4[1];
        fVar13 = pfVar4[2];
      }
      if (*(char *)(unaff_x24 + 0x6b7) == '\0') {
        FUN_03642964(plVar5);
        *(undefined1 *)(unaff_x24 + 0x6b7) = unaff_w25;
      }
      if (*(int *)(*plVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      fVar7 = fVar7 - fVar10;
      fVar8 = fVar8 - fVar2;
      fVar9 = fVar9 - fVar3;
      fVar10 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
      if (fVar10 <= fStack00000000000000bc) {
        if (*(char *)(unaff_x26 + 0x6b5) == '\0') {
                    /* try { // try from 060defe0 to 061df017 has its CatchHandler @ 060df034 */
          FUN_03642964(plVar6);
          *(undefined1 *)(unaff_x26 + 0x6b5) = unaff_w25;
        }
        pfVar4 = *(float **)(*plVar6 + 0xb8);
        fVar7 = *pfVar4;
        fVar8 = pfVar4[1];
        fVar9 = pfVar4[2];
      }
      else {
        fVar7 = fVar7 / fVar10;
        fVar8 = fVar8 / fVar10;
        fVar9 = fVar9 / fVar10;
      }
      unaff_s8 = fStack0000000000000034;
      unaff_s15 = in_stack_000000b8;
      if (fVar13 * fVar9 + fVar12 * fVar7 + fVar11 * fVar8 < fStack0000000000000034)
      goto LAB_060df02c;
    }
    param_1 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
    if ((long)((int)*(ulong *)(unaff_x19 + 0x18) + -1) <= (long)unaff_x23) {
      return unaff_s15;
    }
  } while( true );
}


