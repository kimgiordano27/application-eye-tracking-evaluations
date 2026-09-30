/*
FUNCTION_NAME: OVRManager$$add_SpaceSetComponentStatusComplete
ENTRY_POINT: 05ba353c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_SpaceSetComponentStatusComplete(void)

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
  long unaff_x22;
  long *plVar8;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float unaff_s11;
  undefined8 uVar17;
  float unaff_s12;
  float unaff_s13;
  float fVar18;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  float fStack000000000000002c;
  float fStack0000000000000044;
  float fStack000000000000004c;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
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
  float in_stack_00000350;
  float in_stack_00000354;
  float in_stack_00000358;
  
  cVar3 = DAT_075457aa;
  fVar13 = unaff_s11 - unaff_s12;
  plVar8 = *(long **)(unaff_x22 + 0xa80);
  fVar12 = *(float *)(*(undefined8 **)(*plVar8 + 0xb8) + 1);
  *(undefined8 *)unaff_x19 = **(undefined8 **)(*plVar8 + 0xb8);
  unaff_x19[2] = fVar12;
  fVar12 = *(float *)(unaff_x20 + 0x50);
  if (fVar13 <= *(float *)(unaff_x20 + 0x50)) {
    fVar12 = fVar13;
  }
  fStack0000000000000064 = unaff_s12;
  fStack0000000000000068 = unaff_s13;
  if (cVar3 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
                    /* try { // try from 05ba35b8 to 05ca35bf has its CatchHandler @ 05ba3610 */
    DAT_075457aa = '\x01';
  }
  fVar18 = fStack0000000000000068;
                    /* try { // try from 05ba35d4 to 05ca35db has its CatchHandler @ 05ba360c */
                    /* try { // try from 05ba35dc to 05ca35ff has its CatchHandler @ 05ba351c */
                    /* try { // try from 05ba3600 to 05ca3603 has its CatchHandler @ 05ba3608 */
                    /* try { // try from 05ba3604 to 05ca362b has its CatchHandler @ 05ba351c */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba3600 with catch @ 05ba3608
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba35d4 with catch @ 05ba360c
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba35b8 with catch @ 05ba3610
                        */
  fStack000000000000004c =
       fStack0000000000000064 + fVar12 * *(float *)(*(long *)(*plVar8 + 0xb8) + 0x1c);
  fStack0000000000000044 = unaff_s14 + fVar12 * *(float *)(*(long *)(*plVar8 + 0xb8) + 0x18);
  fStack000000000000002c = fVar12;
  fStack000000000000006c = in_stack_00000354;
  fStack0000000000000074 = in_stack_00000358;
                    /* try { // try from 05ba362c to 05ca362f has its CatchHandler @ 05ba3648 */
  uVar4 = FUN_05ba3c6c();
  cVar3 = DAT_07546c44;
  fVar12 = fStack0000000000000074;
  fVar16 = fStack000000000000006c;
  if ((uVar4 & 1) != 0) {
    fVar12 = fStack000000000000007c - unaff_s14;
    fVar18 = fVar18 - unaff_s15;
    unaff_x21[1] = in_stack_00000258;
    *unaff_x21 = in_stack_00000250;
    unaff_x21[3] = in_stack_00000268;
    unaff_x21[2] = in_stack_00000260;
    fVar16 = fVar18 * fVar18 + fVar12 * fVar12 + fVar13 * fVar13;
    unaff_x21[5] = in_stack_00000278;
    unaff_x21[4] = in_stack_00000270;
    if (cVar3 == '\0') {
      FUN_03188a78(PTR_DAT_070cf060);
      DAT_07546c44 = '\x01';
    }
    puVar1 = PTR_DAT_070c22f8;
    fVar9 = ABS(fVar16);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar14 = **(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) * 8.0;
    fVar10 = fVar9 * DAT_012e3b94;
    if (fVar9 * DAT_012e3b94 <= fVar14) {
      fVar10 = fVar14;
    }
    if (ABS(0.0 - fVar16) < fVar10) {
LAB_05ba382c:
      puVar2 = PTR_DAT_07115e28;
      FUN_0466ffac(&stack0x00000280,&stack0x00000250,*(undefined8 *)PTR_DAT_07115e28);
      uVar6 = *(undefined8 *)(unaff_x24 + 0xac);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar6;
      fVar13 = (float)FUN_06a63564(&stack0x000001f0,0);
      fVar12 = (float)uVar6;
      FUN_0466ffac((long)&stack0x00000150 + 4,&stack0x00000250,*(undefined8 *)puVar2);
      fVar9 = (float)*(undefined8 *)(unaff_x25 + 0x68);
      uVar6 = *(undefined8 *)(unaff_x25 + 0x74);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x7c);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar6;
      fVar18 = (float)FUN_06a6354c(&stack0x000001f0,0);
      FUN_0466ffac(&stack0x00000128,&stack0x00000250,*(undefined8 *)puVar2);
      uVar17 = *(undefined8 *)(unaff_x25 + 0x48);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x50);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar17;
      fVar16 = (float)FUN_06a6357c(&stack0x000001f0,0);
      if (DAT_07546bbf == '\0') {
        FUN_03188a78(PTR_DAT_070c22f8);
        DAT_07546bbf = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      fVar10 = SQRT(fVar12 * fVar12 + fVar13 * fVar13 + in_stack_00000290 * in_stack_00000290);
      if (fVar10 <= DAT_012e3cb4) {
        if (*(char *)(unaff_x26 + 0x7d6) == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          *(undefined1 *)(unaff_x26 + 0x7d6) = 1;
        }
        uVar17 = **(undefined8 **)(*plVar8 + 0xb8);
        fVar10 = *(float *)(*(undefined8 **)(*plVar8 + 0xb8) + 1);
      }
      else {
        uVar17 = CONCAT44(-in_stack_00000290 / fVar10,-fVar13 / fVar10);
        fVar10 = -fVar12 / fVar10;
      }
      FUN_0466ffac((undefined1 *)((long)&stack0x000000f0 + 0xc),&stack0x00000250,
                   *(undefined8 *)puVar2);
      uVar15 = *(undefined8 *)(unaff_x25 + 0x1c);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x24);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar15;
      lVar5 = FUN_06a634a0(&stack0x000001f0,0);
      FUN_0466ffac(&stack0x000000d0,&stack0x00000250,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x24 + 0x24) = uStack00000000000000f4;
      *(ulong *)(unaff_x24 + 0x1c) = CONCAT44(uStack00000000000000f0,uStack00000000000000ec);
      fVar14 = (float)FUN_06a6357c(&stack0x000001f0,0);
      if (lVar5 == 0) goto LAB_05ba3c68;
      fStack00000000000000c0 = (float)uVar6 + fVar12 * fVar16;
      fStack00000000000000bc = fVar9 + in_stack_00000290 * fVar16;
      fStack00000000000000b8 = fVar18 + fVar13 * fVar16;
      uStack00000000000000c4 = uVar17;
      fStack00000000000000cc = fVar10;
      uVar4 = FUN_06a59148(fVar14 + DAT_012e3d1c,lVar5,&stack0x000000b8,&stack0x000001c0,0);
      if ((uVar4 & 1) != 0) {
        uVar17 = *(undefined8 *)(unaff_x25 + 0xe0);
        uVar6 = *(undefined8 *)PTR_DAT_07115e38;
        *(undefined8 *)(unaff_x24 + 0xb4) = *(undefined8 *)(unaff_x25 + 0xe8);
        *(undefined8 *)(unaff_x24 + 0xac) = uVar17;
        FUN_0466ff7c(&stack0x00000250,&stack0x00000280,uVar6);
      }
    }
    else {
      FUN_0466ffac(&stack0x00000280,&stack0x00000250,*(undefined8 *)PTR_DAT_07115e28);
      uVar6 = *(undefined8 *)(unaff_x24 + 0xac);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar6;
      fVar9 = in_stack_00000290;
      fVar10 = (float)FUN_06a63564(&stack0x000001f0,0);
      if (DAT_07546bbf == '\0') {
        FUN_03188a78(PTR_DAT_070c22f8);
        DAT_07546bbf = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      fVar16 = SQRT(fVar16);
      if (fVar16 <= DAT_012e3cb4) {
        if (*(char *)(unaff_x26 + 0x7d6) == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          *(undefined1 *)(unaff_x26 + 0x7d6) = 1;
        }
        pfVar7 = *(float **)(*plVar8 + 0xb8);
        fVar12 = *pfVar7;
        fVar13 = pfVar7[1];
        fVar18 = pfVar7[2];
      }
      else {
        fVar12 = fVar12 / fVar16;
        fVar13 = fVar13 / fVar16;
        fVar18 = fVar18 / fVar16;
      }
      if (DAT_012e3d1c < ABS((float)uVar6 * fVar18 + fVar10 * fVar12 + fVar9 * fVar13))
      goto LAB_05ba382c;
    }
    FUN_0466ffac(&stack0x00000280,&stack0x00000250,*(undefined8 *)PTR_DAT_07115e28);
    FUN_05ba3f34((long)&stack0x00000150 + 4,in_stack_00000350,fStack000000000000006c,
                 fStack0000000000000074);
    fVar18 = fStack0000000000000068;
    fVar12 = fStack000000000000015c;
    in_stack_00000350 = in_stack_00000150._4_4_;
    fVar16 = fStack0000000000000158;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar9 = unaff_s11 + fVar16;
    fVar18 = fVar18 + fVar12;
    fVar13 = (float)FUN_06a577c0(*(long *)(unaff_x20 + 0x20),0);
    uVar4 = FUN_05ba40cc(fStack000000000000007c + in_stack_00000350,fVar9,fVar18,
                         fStack0000000000000078,fVar13 - fStack0000000000000078);
    if ((uVar4 & 1) != 0) {
      uVar11 = FUN_06a6354c(&stack0x00000220,0);
      if (DAT_075457aa == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457aa = '\x01';
      }
      lVar5 = *(long *)(*plVar8 + 0xb8);
      fStack0000000000000004 = fStack000000000000004c + fVar16;
      uVar4 = FUN_05ba4510(uVar11,fVar9,fVar18,*(undefined4 *)(lVar5 + 0x18),
                           *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),
                           (long)&stack0x000001b8 + 4);
      if (((uVar4 & 1) != 0) &&
         (FUN_06a6354c(&stack0x00000220,0),
         fVar9 - (fStack0000000000000064 - fStack0000000000000078) <= *(float *)(unaff_x20 + 0x50)))
      {
        FUN_06a63564(&stack0x00000220,0);
        uVar4 = FUN_05ba2854();
        if ((uVar4 & 1) != 0) {
          if (fVar16 <= fStack000000000000002c - in_stack_000001b8._4_4_) {
            fVar16 = fStack000000000000002c - in_stack_000001b8._4_4_;
          }
          fVar13 = fStack000000000000002c;
          FUN_035ed394(0);
          fStack0000000000000004 = fVar13 * fVar16;
          uVar4 = FUN_05ba3c6c(unaff_s14,fStack0000000000000064,unaff_s15,fStack000000000000007c,
                               unaff_s11,fStack0000000000000068,fStack0000000000000078);
          if ((uVar4 & 1) == 0) {
            *unaff_x19 = in_stack_00000350;
            unaff_x19[1] = fVar16;
            unaff_x19[2] = fVar12;
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


