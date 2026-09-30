/*
FUNCTION_NAME: OVRManager$$get_systemHeadsetTheme
ENTRY_POINT: 05ba6e20
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


undefined8 OVRManager__get_systemHeadsetTheme(float param_1,float param_2,float param_3)

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
  long *unaff_x28;
  long unaff_x29;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float unaff_s9;
  float fVar9;
  undefined4 unaff_s12;
  float unaff_s15;
  float fStack0000000000000004;
  float fStack000000000000002c;
  float in_stack_00000030;
  float in_stack_00000040;
  undefined8 in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  undefined8 in_stack_00000088;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  float fStack00000000000000dc;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000100;
  undefined8 uStack0000000000000104;
  undefined8 in_stack_00000160;
  float fStack0000000000000168;
  float fStack000000000000016c;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  fStack000000000000002c = param_2;
  FUN_0466ffac(&stack0x00000138,&stack0x00000260);
  uVar3 = *(undefined8 *)(unaff_x25 + 0x48);
  *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x50);
  *(undefined8 *)(unaff_x24 + 0x1c) = uVar3;
  fVar4 = (float)FUN_06a6357c(&stack0x00000200,0);
  if (*(char *)(unaff_x29 + 0xbbf) == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    *(undefined1 *)(unaff_x29 + 0xbbf) = 1;
  }
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar5 = SQRT(unaff_s9 * unaff_s9 +
               in_stack_00000030 * in_stack_00000030 + in_stack_00000040 * in_stack_00000040);
  if (fVar5 <= *(float *)(unaff_x21 + 0xcb4)) {
    if (*(char *)(unaff_x26 + 0x7d6) == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      *(undefined1 *)(unaff_x26 + 0x7d6) = 1;
    }
    uVar3 = **(undefined8 **)(*unaff_x22 + 0xb8);
    fVar5 = *(float *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
  }
  else {
    uVar3 = CONCAT44(-in_stack_00000040 / fVar5,-in_stack_00000030 / fVar5);
    fVar5 = -unaff_s9 / fVar5;
  }
  FUN_0466ffac((undefined1 *)((long)&stack0x00000100 + 0xc),&stack0x00000260,*unaff_x27);
  uVar8 = *(undefined8 *)(unaff_x25 + 0x1c);
  *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x24);
  *(undefined8 *)(unaff_x24 + 0x1c) = uVar8;
  lVar1 = FUN_06a634a0(&stack0x00000200,0);
  FUN_0466ffac(&stack0x000000e0,&stack0x00000260,*unaff_x27);
  *(undefined8 *)(unaff_x24 + 0x24) = uStack0000000000000104;
  *(ulong *)(unaff_x24 + 0x1c) = CONCAT44(uStack0000000000000100,uStack00000000000000fc);
  fVar6 = (float)FUN_06a6357c(&stack0x00000200,0);
  if (lVar1 != 0) {
    fStack00000000000000d0 = param_3 + unaff_s9 * fVar4;
    fStack00000000000000cc = fStack000000000000002c + in_stack_00000040 * fVar4;
    fStack00000000000000c8 = param_1 + in_stack_00000030 * fVar4;
    uStack00000000000000d4 = uVar3;
    fStack00000000000000dc = fVar5;
    uVar2 = FUN_06a59148(fVar6 + DAT_012e3d1c,lVar1,&stack0x000000c8,&stack0x000001d0,0);
    if ((uVar2 & 1) != 0) {
      uVar8 = *(undefined8 *)(unaff_x25 + 0xe0);
      uVar3 = *(undefined8 *)PTR_DAT_07115e38;
      *(undefined8 *)(unaff_x24 + 0xb4) = *(undefined8 *)(unaff_x25 + 0xe8);
      *(undefined8 *)(unaff_x24 + 0xac) = uVar8;
      FUN_0466ff7c(&stack0x00000260,&stack0x00000290,uVar3);
    }
    FUN_0466ffac(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_07115e28);
    FUN_05ba74a8((long)&stack0x00000160 + 4,uStack0000000000000074,uStack0000000000000070,unaff_s12)
    ;
    fVar4 = fStack0000000000000168;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      fVar6 = fStack0000000000000068 + fStack0000000000000168;
      fVar9 = fStack000000000000006c + fStack000000000000016c;
      fVar5 = (float)FUN_06a577c0(*(long *)(unaff_x20 + 0x20),0);
      uVar2 = FUN_05ba7648(in_stack_00000088._4_4_ + in_stack_00000160._4_4_,fVar6,fVar9,
                           fStack0000000000000084,fVar5 - fStack0000000000000084);
      if ((uVar2 & 1) != 0) {
        uVar7 = FUN_06a6354c(&stack0x00000230,0);
        if (*(char *)(unaff_x23 + 0x7aa) == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          *(undefined1 *)(unaff_x23 + 0x7aa) = 1;
        }
        lVar1 = *(long *)(*unaff_x22 + 0xb8);
        fStack0000000000000004 = in_stack_00000060._4_4_ + fVar4;
        uVar2 = FUN_05ba7a8c(uVar7,fVar6,fVar9,*(undefined4 *)(lVar1 + 0x18),
                             *(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x20),
                             (long)&stack0x000001c8 + 4);
        if ((uVar2 & 1) != 0) {
          FUN_06a6354c(&stack0x00000230,0);
          fVar5 = *(float *)(unaff_x20 + 0x34);
          if (fVar6 - (fStack0000000000000080 - fStack0000000000000084) <= fVar5) {
            FUN_06a63564(&stack0x00000230,0);
            uVar2 = FUN_05ba5938();
            if ((uVar2 & 1) != 0) {
              if (fVar4 <= unaff_s15 - in_stack_000001c8._4_4_) {
                fVar4 = unaff_s15 - in_stack_000001c8._4_4_;
              }
              FUN_035ed394(0);
              fStack0000000000000004 = fVar5 * fVar4;
              uVar2 = FUN_05ba71e0(uStack0000000000000078,fStack0000000000000080,
                                   uStack000000000000007c,in_stack_00000088._4_4_,
                                   fStack0000000000000068,fStack000000000000006c,
                                   fStack0000000000000084);
              if ((uVar2 & 1) == 0) {
                *unaff_x19 = in_stack_00000160._4_4_;
                unaff_x19[1] = fVar4;
                unaff_x19[2] = fStack000000000000016c;
                return 1;
              }
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


