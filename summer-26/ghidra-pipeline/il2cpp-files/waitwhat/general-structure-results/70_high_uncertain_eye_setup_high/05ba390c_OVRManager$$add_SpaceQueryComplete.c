/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryComplete
ENTRY_POINT: 05ba390c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_SpaceQueryComplete(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  float *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float in_s3;
  float unaff_s9;
  float fVar8;
  float fVar9;
  undefined4 unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  undefined8 in_stack_00000048;
  float in_stack_00000050;
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
  
  fVar4 = SQRT(unaff_s13 * unaff_s13 + in_s3 * in_s3 + in_stack_00000050 * in_stack_00000050);
  if (fVar4 <= *(float *)(unaff_x21 + 0xcb4)) {
    if (*(char *)(unaff_x26 + 0x7d6) == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      *(undefined1 *)(unaff_x26 + 0x7d6) = 1;
    }
    uVar3 = **(undefined8 **)(*unaff_x22 + 0xb8);
    fVar4 = *(float *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
  }
  else {
    uVar3 = CONCAT44(-in_stack_00000050 / fVar4,-in_s3 / fVar4);
    fVar4 = -unaff_s13 / fVar4;
  }
  FUN_0466ffac((undefined1 *)((long)&stack0x000000f0 + 0xc),&stack0x00000250,*unaff_x27);
  uVar7 = *(undefined8 *)(unaff_x25 + 0x1c);
  *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x24);
  *(undefined8 *)(unaff_x24 + 0x1c) = uVar7;
  lVar1 = FUN_06a634a0(&stack0x000001f0,0);
  FUN_0466ffac(&stack0x000000d0,&stack0x00000250,*unaff_x27);
  *(undefined8 *)(unaff_x24 + 0x24) = uStack00000000000000f4;
  *(ulong *)(unaff_x24 + 0x1c) = CONCAT44(uStack00000000000000f0,uStack00000000000000ec);
  fVar5 = (float)FUN_06a6357c(&stack0x000001f0,0);
  if (lVar1 != 0) {
    fStack00000000000000c0 = unaff_s14 + unaff_s13 * unaff_s9;
    fStack00000000000000bc = in_stack_00000020._4_4_ + in_stack_00000050 * unaff_s9;
    fStack00000000000000b8 = unaff_s15 + in_stack_00000030 * unaff_s9;
    uStack00000000000000c4 = uVar3;
    fStack00000000000000cc = fVar4;
    uVar2 = FUN_06a59148(fVar5 + DAT_012e3d1c,lVar1,&stack0x000000b8,&stack0x000001c0,0);
    if ((uVar2 & 1) != 0) {
      uVar7 = *(undefined8 *)(unaff_x25 + 0xe0);
      uVar3 = *(undefined8 *)PTR_DAT_07115e38;
      *(undefined8 *)(unaff_x24 + 0xb4) = *(undefined8 *)(unaff_x25 + 0xe8);
      *(undefined8 *)(unaff_x24 + 0xac) = uVar7;
      FUN_0466ff7c(&stack0x00000250,&stack0x00000280,uVar3);
    }
    FUN_0466ffac(&stack0x00000280,&stack0x00000250,*(undefined8 *)PTR_DAT_07115e28);
    FUN_05ba3f34((long)&stack0x00000150 + 4,uStack0000000000000070,uStack000000000000006c,
                 uStack0000000000000074);
    fVar4 = fStack0000000000000158;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      fVar9 = fStack0000000000000060 + fStack0000000000000158;
      fVar8 = fStack0000000000000068 + fStack000000000000015c;
      fVar5 = (float)FUN_06a577c0(*(long *)(unaff_x20 + 0x20),0);
      uVar2 = FUN_05ba40cc(fStack000000000000007c + in_stack_00000150._4_4_,fVar9,fVar8,
                           fStack0000000000000078,fVar5 - fStack0000000000000078);
      if ((uVar2 & 1) != 0) {
        uVar6 = FUN_06a6354c(&stack0x00000220,0);
        if (*(char *)(unaff_x23 + 0x7aa) == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          *(undefined1 *)(unaff_x23 + 0x7aa) = 1;
        }
        lVar1 = *(long *)(*unaff_x22 + 0xb8);
        fStack0000000000000004 = in_stack_00000048._4_4_ + fVar4;
        uVar2 = FUN_05ba4510(uVar6,fVar9,fVar8,*(undefined4 *)(lVar1 + 0x18),
                             *(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x20),
                             (long)&stack0x000001b8 + 4);
        if (((uVar2 & 1) != 0) &&
           (FUN_06a6354c(&stack0x00000220,0),
           fVar9 - (fStack0000000000000064 - fStack0000000000000078) <= *(float *)(unaff_x20 + 0x50)
           )) {
          FUN_06a63564(&stack0x00000220,0);
          uVar2 = FUN_05ba2854();
          if ((uVar2 & 1) != 0) {
            if (fVar4 <= fStack000000000000002c - in_stack_000001b8._4_4_) {
              fVar4 = fStack000000000000002c - in_stack_000001b8._4_4_;
            }
            FUN_035ed394(0);
            fStack0000000000000004 = fStack000000000000002c * fVar4;
            uVar2 = FUN_05ba3c6c(unaff_s12,fStack0000000000000064,uStack0000000000000028,
                                 fStack000000000000007c,fStack0000000000000060,
                                 fStack0000000000000068,fStack0000000000000078);
            if ((uVar2 & 1) == 0) {
              *unaff_x19 = in_stack_00000150._4_4_;
              unaff_x19[1] = fVar4;
              unaff_x19[2] = fStack000000000000015c;
              return 1;
            }
          }
        }
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


