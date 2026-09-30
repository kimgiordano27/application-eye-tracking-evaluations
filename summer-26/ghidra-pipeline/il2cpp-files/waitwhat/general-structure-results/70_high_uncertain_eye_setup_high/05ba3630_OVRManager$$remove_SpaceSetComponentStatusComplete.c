/*
FUNCTION_NAME: OVRManager$$remove_SpaceSetComponentStatusComplete
ENTRY_POINT: 05ba3630
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__remove_SpaceSetComponentStatusComplete
          (undefined4 param_1,float param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  float *pfVar7;
  float *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  float unaff_s8;
  float fVar14;
  float unaff_s11;
  undefined8 uVar15;
  float unaff_s12;
  float unaff_s13;
  float fVar16;
  float unaff_s14;
  float unaff_s15;
  float fVar17;
  float fStack0000000000000004;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  undefined8 in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  float fStack00000000000000c0;
  undefined8 uStack00000000000000c4;
  float fStack00000000000000cc;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined8 uStack00000000000000f4;
  undefined8 in_stack_00000150;
  float fStack0000000000000158;
  float fStack000000000000015c;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  float in_stack_00000290;
  
                    /* try { // try from 05ba3630 to 05ca364b has its CatchHandler @ 05ba351c */
  uStack0000000000000044 = param_1;
  uStack0000000000000048 = param_3;
  fStack000000000000004c = param_2;
  uVar4 = FUN_05ba3c6c();
  cVar3 = DAT_07546c44;
                    /* catch() { ... } // from try @ 05ba362c with catch @ 05ba3648 */
                    /* try { // try from 05ba364c to 05ca3653 has its CatchHandler @ 05ba365c */
  if ((uVar4 & 1) != 0) {
    fVar17 = unaff_s15 - unaff_s14;
                    /* try { // try from 05ba3654 to 05ca365f has its CatchHandler @ 05ba351c */
    fVar16 = unaff_s13 - unaff_s12;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ba364c with catch @ 05ba365c
                        */
                    /* try { // try from 05ba3668 to 05ca370f has its CatchHandler @ 05ba3668
                       catch() { ... } // from try @ 05ba3668 with catch @ 05ba3668
                       catch() { ... } // from try @ 05ba3730 with catch @ 05ba3668
                       catch() { ... } // from try @ 05ba37bc with catch @ 05ba3668
                       catch() { ... } // from try @ 05ba37e8 with catch @ 05ba3668
                       catch() { ... } // from try @ 05ba380c with catch @ 05ba3668 */
    unaff_x21[1] = in_stack_00000258;
    *unaff_x21 = in_stack_00000250;
    unaff_x21[3] = in_stack_00000268;
    unaff_x21[2] = in_stack_00000260;
    fVar14 = fVar16 * fVar16 + fVar17 * fVar17 + in_stack_00000050 * in_stack_00000050;
    unaff_x21[5] = in_stack_00000278;
    unaff_x21[4] = in_stack_00000270;
    if (cVar3 == '\0') {
      FUN_03188a78(PTR_DAT_070cf060);
      DAT_07546c44 = '\x01';
    }
    puVar1 = PTR_DAT_070c22f8;
    fVar8 = ABS(fVar14);
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    fVar12 = **(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) * 8.0;
    fVar9 = fVar8 * DAT_012e3b94;
    if (fVar8 * DAT_012e3b94 <= fVar12) {
      fVar9 = fVar12;
    }
    if (ABS(0.0 - fVar14) < fVar9) {
LAB_05ba382c:
      puVar2 = PTR_DAT_07115e28;
      FUN_0466ffac(&stack0x00000280,&stack0x00000250,*(undefined8 *)PTR_DAT_07115e28);
      uVar6 = *(undefined8 *)(unaff_x24 + 0xac);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar6;
      fVar14 = (float)FUN_06a63564(&stack0x000001f0,0);
      fVar17 = (float)uVar6;
      FUN_0466ffac((long)&stack0x00000150 + 4,&stack0x00000250,*(undefined8 *)puVar2);
      fVar9 = (float)*(undefined8 *)(unaff_x25 + 0x68);
      uVar6 = *(undefined8 *)(unaff_x25 + 0x74);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x7c);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar6;
      fVar16 = (float)FUN_06a6354c(&stack0x000001f0,0);
      FUN_0466ffac(&stack0x00000128,&stack0x00000250,*(undefined8 *)puVar2);
      uVar15 = *(undefined8 *)(unaff_x25 + 0x48);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x50);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar15;
      fVar8 = (float)FUN_06a6357c(&stack0x000001f0,0);
      if (DAT_07546bbf == '\0') {
        FUN_03188a78(PTR_DAT_070c22f8);
        DAT_07546bbf = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      fVar12 = SQRT(fVar17 * fVar17 + fVar14 * fVar14 + in_stack_00000290 * in_stack_00000290);
      if (fVar12 <= DAT_012e3cb4) {
        if (*(char *)(unaff_x26 + 0x7d6) == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          *(undefined1 *)(unaff_x26 + 0x7d6) = 1;
        }
        uVar15 = **(undefined8 **)(*unaff_x22 + 0xb8);
        fVar12 = *(float *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
      }
      else {
        uVar15 = CONCAT44(-in_stack_00000290 / fVar12,-fVar14 / fVar12);
        fVar12 = -fVar17 / fVar12;
      }
      FUN_0466ffac((undefined1 *)((long)&stack0x000000f0 + 0xc),&stack0x00000250,
                   *(undefined8 *)puVar2);
      uVar13 = *(undefined8 *)(unaff_x25 + 0x1c);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x24);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar13;
      lVar5 = FUN_06a634a0(&stack0x000001f0,0);
      FUN_0466ffac(&stack0x000000d0,&stack0x00000250,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x24 + 0x24) = uStack00000000000000f4;
      *(ulong *)(unaff_x24 + 0x1c) = CONCAT44(uStack00000000000000f0,uStack00000000000000ec);
      fVar10 = (float)FUN_06a6357c(&stack0x000001f0,0);
      if (lVar5 == 0) goto LAB_05ba3c68;
      fStack00000000000000c0 = (float)uVar6 + fVar17 * fVar8;
      fStack00000000000000bc = fVar9 + in_stack_00000290 * fVar8;
      fStack00000000000000b8 = fVar16 + fVar14 * fVar8;
      uStack00000000000000c4 = uVar15;
      fStack00000000000000cc = fVar12;
      uVar4 = FUN_06a59148(fVar10 + DAT_012e3d1c,lVar5,&stack0x000000b8,&stack0x000001c0,0);
      if ((uVar4 & 1) != 0) {
        uVar15 = *(undefined8 *)(unaff_x25 + 0xe0);
        uVar6 = *(undefined8 *)PTR_DAT_07115e38;
        *(undefined8 *)(unaff_x24 + 0xb4) = *(undefined8 *)(unaff_x25 + 0xe8);
        *(undefined8 *)(unaff_x24 + 0xac) = uVar15;
        FUN_0466ff7c(&stack0x00000250,&stack0x00000280,uVar6);
      }
    }
    else {
                    /* try { // try from 05ba3710 to 05ca3717 has its CatchHandler @ 05ba37c8 */
      FUN_0466ffac(&stack0x00000280,&stack0x00000250,*(undefined8 *)PTR_DAT_07115e28);
      uVar6 = *(undefined8 *)(unaff_x24 + 0xac);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar6;
      fVar8 = in_stack_00000290;
      fVar9 = (float)FUN_06a63564(&stack0x000001f0,0);
      if (DAT_07546bbf == '\0') {
        FUN_03188a78(PTR_DAT_070c22f8);
        DAT_07546bbf = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      fVar14 = SQRT(fVar14);
      if (fVar14 <= DAT_012e3cb4) {
        if (*(char *)(unaff_x26 + 0x7d6) == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          *(undefined1 *)(unaff_x26 + 0x7d6) = 1;
        }
        pfVar7 = *(float **)(*unaff_x22 + 0xb8);
        fVar17 = *pfVar7;
        in_stack_00000050 = pfVar7[1];
        fVar16 = pfVar7[2];
      }
      else {
        fVar17 = fVar17 / fVar14;
        in_stack_00000050 = in_stack_00000050 / fVar14;
        fVar16 = fVar16 / fVar14;
      }
      if (DAT_012e3d1c < ABS((float)uVar6 * fVar16 + fVar9 * fVar17 + fVar8 * in_stack_00000050))
      goto LAB_05ba382c;
    }
    FUN_0466ffac(&stack0x00000280,&stack0x00000250,*(undefined8 *)PTR_DAT_07115e28);
    FUN_05ba3f34((long)&stack0x00000150 + 4,fStack0000000000000070,fStack000000000000006c,
                 fStack0000000000000074);
    unaff_s13 = fStack0000000000000068;
    fStack0000000000000074 = fStack000000000000015c;
    fStack0000000000000070 = in_stack_00000150._4_4_;
    unaff_s8 = fStack0000000000000078;
    fStack000000000000006c = fStack0000000000000158;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar14 = unaff_s11 + fStack000000000000006c;
    fVar16 = unaff_s13 + fStack0000000000000074;
    fVar17 = (float)FUN_06a577c0(*(long *)(unaff_x20 + 0x20),0);
    uVar4 = FUN_05ba40cc(fStack000000000000007c + fStack0000000000000070,fVar14,fVar16,unaff_s8,
                         fVar17 - unaff_s8);
    if ((uVar4 & 1) != 0) {
      uVar11 = FUN_06a6354c(&stack0x00000220,0);
      if (*(char *)(unaff_x23 + 0x7aa) == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        *(undefined1 *)(unaff_x23 + 0x7aa) = 1;
      }
      lVar5 = *(long *)(*unaff_x22 + 0xb8);
      fStack0000000000000004 = fStack000000000000004c + fStack000000000000006c;
      uVar4 = FUN_05ba4510(uVar11,fVar14,fVar16,*(undefined4 *)(lVar5 + 0x18),
                           *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),
                           (long)&stack0x000001b8 + 4);
      if (((uVar4 & 1) != 0) &&
         (FUN_06a6354c(&stack0x00000220,0),
         fVar14 - (in_stack_00000060._4_4_ - unaff_s8) <= *(float *)(unaff_x20 + 0x50))) {
        FUN_06a63564(&stack0x00000220,0);
        uVar4 = FUN_05ba2854();
        if ((uVar4 & 1) != 0) {
          if (fStack000000000000006c <= in_stack_00000028._4_4_ - in_stack_000001b8._4_4_) {
            fStack000000000000006c = in_stack_00000028._4_4_ - in_stack_000001b8._4_4_;
          }
          FUN_035ed394(0);
          fStack0000000000000004 = in_stack_00000028._4_4_ * fStack000000000000006c;
          uVar4 = FUN_05ba3c6c(unaff_s14,in_stack_00000060._4_4_,unaff_s12,fStack000000000000007c,
                               unaff_s11,fStack0000000000000068,unaff_s8);
          if ((uVar4 & 1) == 0) {
            *unaff_x19 = fStack0000000000000070;
            unaff_x19[1] = fStack000000000000006c;
            unaff_x19[2] = fStack0000000000000074;
            return 1;
          }
        }
      }
    }
    return 0;
  }
LAB_05ba3c68:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


