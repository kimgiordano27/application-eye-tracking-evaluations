/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryResults
ENTRY_POINT: 05ba3724
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__add_SpaceQueryResults(undefined1 param_1 [16],float param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float *pfVar5;
  float *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float unaff_s8;
  float unaff_s9;
  undefined8 uVar15;
  undefined4 unaff_s12;
  float unaff_s13;
  float unaff_s15;
  float fStack0000000000000004;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000048;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
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
  float in_stack_00000290;
  
  uVar4 = *(undefined8 *)(unaff_x24 + 0xac);
                    /* try { // try from 05ba372c to 05ca372f has its CatchHandler @ 05ba37c4 */
                    /* try { // try from 05ba3730 to 05ca37b7 has its CatchHandler @ 05ba3668 */
  *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
  *(undefined8 *)(unaff_x24 + 0x1c) = uVar4;
  fVar6 = (float)FUN_06a63564(param_3,0);
  if (*(char *)(unaff_x29 + 0xbbf) == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    *(undefined1 *)(unaff_x29 + 0xbbf) = 1;
  }
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar14 = SQRT(unaff_s8);
  if (fVar14 <= *(float *)(unaff_x21 + 0xcb4)) {
    if (*(char *)(unaff_x26 + 0x7d6) == '\0') {
                    /* try { // try from 05ba37e4 to 05ca37e7 has its CatchHandler @ 05ba3800 */
                    /* try { // try from 05ba37e8 to 05ca3803 has its CatchHandler @ 05ba3668 */
      FUN_03188a78(PTR_DAT_070c1a80);
      *(undefined1 *)(unaff_x26 + 0x7d6) = 1;
    }
    pfVar5 = *(float **)(*unaff_x22 + 0xb8);
                    /* catch() { ... } // from try @ 05ba37e4 with catch @ 05ba3800 */
    fVar7 = *pfVar5;
    fVar11 = pfVar5[1];
                    /* try { // try from 05ba3804 to 05ca380b has its CatchHandler @ 05ba3814 */
    fVar14 = pfVar5[2];
  }
  else {
    fVar7 = unaff_s15 / fVar14;
                    /* try { // try from 05ba37b8 to 05ca37bb has its CatchHandler @ 05ba37c0 */
    fVar11 = unaff_s9 / fVar14;
                    /* try { // try from 05ba37bc to 05ca37e3 has its CatchHandler @ 05ba3668 */
    fVar14 = unaff_s13 / fVar14;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba37b8 with catch @ 05ba37c0
                        */
  }
  puVar1 = PTR_DAT_07115e28;
                    /* try { // try from 05ba380c to 05ca3817 has its CatchHandler @ 05ba3668 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ba3804 with catch @ 05ba3814
                        */
  if (*(float *)(unaff_x27 + 0xd1c) < ABS((float)uVar4 * fVar14 + fVar6 * fVar7 + param_2 * fVar11))
  {
    FUN_0466ffac(&stack0x00000280,&stack0x00000250,*(undefined8 *)PTR_DAT_07115e28);
    uVar4 = *(undefined8 *)(unaff_x24 + 0xac);
    *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
    *(undefined8 *)(unaff_x24 + 0x1c) = uVar4;
    fVar14 = (float)FUN_06a63564(&stack0x000001f0,0);
    fVar6 = (float)uVar4;
    FUN_0466ffac((long)&stack0x00000150 + 4,&stack0x00000250,*(undefined8 *)puVar1);
    fVar12 = (float)*(undefined8 *)(unaff_x25 + 0x68);
    uVar4 = *(undefined8 *)(unaff_x25 + 0x74);
    *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x7c);
    *(undefined8 *)(unaff_x24 + 0x1c) = uVar4;
    fVar7 = (float)FUN_06a6354c(&stack0x000001f0,0);
    FUN_0466ffac(&stack0x00000128,&stack0x00000250,*(undefined8 *)puVar1);
    uVar15 = *(undefined8 *)(unaff_x25 + 0x48);
    *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x50);
    *(undefined8 *)(unaff_x24 + 0x1c) = uVar15;
    fVar11 = (float)FUN_06a6357c(&stack0x000001f0,0);
    if (*(char *)(unaff_x29 + 0xbbf) == '\0') {
      FUN_03188a78(PTR_DAT_070c22f8);
      *(undefined1 *)(unaff_x29 + 0xbbf) = 1;
    }
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    fVar8 = SQRT(fVar6 * fVar6 + fVar14 * fVar14 + in_stack_00000290 * in_stack_00000290);
    if (fVar8 <= *(float *)(unaff_x21 + 0xcb4)) {
      if (*(char *)(unaff_x26 + 0x7d6) == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        *(undefined1 *)(unaff_x26 + 0x7d6) = 1;
      }
      uVar15 = **(undefined8 **)(*unaff_x22 + 0xb8);
      fVar8 = *(float *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
    }
    else {
      uVar15 = CONCAT44(-in_stack_00000290 / fVar8,-fVar14 / fVar8);
      fVar8 = -fVar6 / fVar8;
    }
    FUN_0466ffac((undefined1 *)((long)&stack0x000000f0 + 0xc),&stack0x00000250,*(undefined8 *)puVar1
                );
    uVar13 = *(undefined8 *)(unaff_x25 + 0x1c);
    *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x24);
    *(undefined8 *)(unaff_x24 + 0x1c) = uVar13;
    lVar2 = FUN_06a634a0(&stack0x000001f0,0);
    FUN_0466ffac(&stack0x000000d0,&stack0x00000250,*(undefined8 *)puVar1);
    *(undefined8 *)(unaff_x24 + 0x24) = uStack00000000000000f4;
    *(ulong *)(unaff_x24 + 0x1c) = CONCAT44(uStack00000000000000f0,uStack00000000000000ec);
    fVar9 = (float)FUN_06a6357c(&stack0x000001f0,0);
    if (lVar2 == 0) goto LAB_05ba3c68;
    fStack00000000000000c0 = (float)uVar4 + fVar6 * fVar11;
    fStack00000000000000bc = fVar12 + in_stack_00000290 * fVar11;
    fStack00000000000000b8 = fVar7 + fVar14 * fVar11;
    uStack00000000000000c4 = uVar15;
    fStack00000000000000cc = fVar8;
    uVar3 = FUN_06a59148(fVar9 + DAT_012e3d1c,lVar2,&stack0x000000b8,&stack0x000001c0,0);
    if ((uVar3 & 1) != 0) {
      uVar15 = *(undefined8 *)(unaff_x25 + 0xe0);
      uVar4 = *(undefined8 *)PTR_DAT_07115e38;
      *(undefined8 *)(unaff_x24 + 0xb4) = *(undefined8 *)(unaff_x25 + 0xe8);
      *(undefined8 *)(unaff_x24 + 0xac) = uVar15;
      FUN_0466ff7c(&stack0x00000250,&stack0x00000280,uVar4);
    }
  }
  FUN_0466ffac(&stack0x00000280,&stack0x00000250,*(undefined8 *)PTR_DAT_07115e28);
  FUN_05ba3f34((long)&stack0x00000150 + 4,uStack0000000000000070,uStack000000000000006c,
               uStack0000000000000074);
  fVar6 = fStack0000000000000158;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar7 = fStack0000000000000060 + fStack0000000000000158;
    fVar11 = fStack0000000000000068 + fStack000000000000015c;
    fVar14 = (float)FUN_06a577c0(*(long *)(unaff_x20 + 0x20),0);
    uVar3 = FUN_05ba40cc(fStack000000000000007c + in_stack_00000150._4_4_,fVar7,fVar11,
                         fStack0000000000000078,fVar14 - fStack0000000000000078);
    if ((uVar3 & 1) != 0) {
      uVar10 = FUN_06a6354c(&stack0x00000220,0);
      if (*(char *)(unaff_x23 + 0x7aa) == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        *(undefined1 *)(unaff_x23 + 0x7aa) = 1;
      }
      lVar2 = *(long *)(*unaff_x22 + 0xb8);
      fStack0000000000000004 = in_stack_00000048._4_4_ + fVar6;
      uVar3 = FUN_05ba4510(uVar10,fVar7,fVar11,*(undefined4 *)(lVar2 + 0x18),
                           *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),
                           (long)&stack0x000001b8 + 4);
      if (((uVar3 & 1) != 0) &&
         (FUN_06a6354c(&stack0x00000220,0),
         fVar7 - (fStack0000000000000064 - fStack0000000000000078) <= *(float *)(unaff_x20 + 0x50)))
      {
        FUN_06a63564(&stack0x00000220,0);
        uVar3 = FUN_05ba2854();
        if ((uVar3 & 1) != 0) {
          if (fVar6 <= fStack000000000000002c - in_stack_000001b8._4_4_) {
            fVar6 = fStack000000000000002c - in_stack_000001b8._4_4_;
          }
          FUN_035ed394(0);
          fStack0000000000000004 = fStack000000000000002c * fVar6;
          uVar3 = FUN_05ba3c6c(unaff_s12,fStack0000000000000064,uStack0000000000000028,
                               fStack000000000000007c,fStack0000000000000060,fStack0000000000000068,
                               fStack0000000000000078);
          if ((uVar3 & 1) == 0) {
            *unaff_x19 = in_stack_00000150._4_4_;
            unaff_x19[1] = fVar6;
            unaff_x19[2] = fStack000000000000015c;
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


