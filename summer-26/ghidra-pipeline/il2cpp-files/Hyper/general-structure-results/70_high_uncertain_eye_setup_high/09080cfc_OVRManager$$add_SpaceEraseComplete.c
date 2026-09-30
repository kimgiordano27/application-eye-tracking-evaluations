/*
FUNCTION_NAME: OVRManager$$add_SpaceEraseComplete
ENTRY_POINT: 09080cfc
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_SpaceEraseComplete(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  float *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float unaff_s9;
  float fVar7;
  float unaff_s10;
  float unaff_s11;
  float fVar8;
  undefined4 unaff_s12;
  undefined8 uVar9;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  undefined8 in_stack_00000028;
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
  undefined4 uStack00000000000000dc;
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
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0xef8));
  *(undefined1 *)(unaff_x26 + 999) = 1;
  uVar9 = **(undefined8 **)(*unaff_x22 + 0xb8);
  uVar6 = *(undefined4 *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
  FUN_06fc65c0((undefined1 *)((long)&stack0x00000100 + 0xc),&stack0x00000260,*unaff_x27);
  uVar3 = *(undefined8 *)(unaff_x25 + 0x1c);
  *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x24);
  *(undefined8 *)(unaff_x24 + 0x1c) = uVar3;
  lVar1 = FUN_0a1f89a0(&stack0x00000200,0);
  FUN_06fc65c0(&stack0x000000e0,&stack0x00000260,*unaff_x27);
  *(undefined8 *)(unaff_x24 + 0x24) = uStack0000000000000104;
  *(ulong *)(unaff_x24 + 0x1c) = CONCAT44(uStack0000000000000100,uStack00000000000000fc);
  fVar4 = (float)FUN_0a1f8a7c(&stack0x00000200,0);
  if (lVar1 != 0) {
    fStack00000000000000d0 = unaff_s10 + unaff_s9 * unaff_s11;
    fStack00000000000000cc = in_stack_00000028._4_4_ + in_stack_00000040 * unaff_s11;
    fStack00000000000000c8 = unaff_s14 + in_stack_00000030 * unaff_s11;
    uStack00000000000000d4 = uVar9;
    uStack00000000000000dc = uVar6;
    uVar2 = FUN_0a1ee23c(fVar4 + DAT_01df5128,lVar1,&stack0x000000c8,&stack0x000001d0,0);
    if ((uVar2 & 1) != 0) {
                    /* try { // try from 09080ddc to 09180e03 has its CatchHandler @ 090811a4 */
      uVar9 = *(undefined8 *)(unaff_x25 + 0xe0);
      uVar3 = *(undefined8 *)PTR_DAT_0ac78720;
      *(undefined8 *)(unaff_x24 + 0xb4) = *(undefined8 *)(unaff_x25 + 0xe8);
      *(undefined8 *)(unaff_x24 + 0xac) = uVar9;
      FUN_06fc6590(&stack0x00000260,&stack0x00000290,uVar3);
    }
    FUN_06fc65c0(&stack0x00000290,&stack0x00000260,*(undefined8 *)PTR_DAT_0ac78710);
    FUN_090812c8((long)&stack0x00000160 + 4,uStack0000000000000074,uStack0000000000000070,unaff_s12)
    ;
    fVar4 = fStack0000000000000168;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      fVar8 = fStack0000000000000068 + fStack0000000000000168;
      fVar7 = fStack000000000000006c + fStack000000000000016c;
      fVar5 = (float)FUN_0a1ecf3c(*(long *)(unaff_x20 + 0x20),0);
      uVar2 = FUN_09081468(in_stack_00000088._4_4_ + in_stack_00000160._4_4_,fVar8,fVar7,
                           fStack0000000000000084,fVar5 - fStack0000000000000084);
      if ((uVar2 & 1) != 0) {
        uVar6 = FUN_0a1f8a4c(&stack0x00000230,0);
        if (*(char *)(unaff_x23 + 0x3e4) == '\0') {
          FUN_04947ee4(PTR_DAT_0ac0def8);
          *(undefined1 *)(unaff_x23 + 0x3e4) = 1;
        }
        lVar1 = *(long *)(*unaff_x22 + 0xb8);
        fStack0000000000000004 = in_stack_00000060._4_4_ + fVar4;
        uVar2 = FUN_090818ac(uVar6,fVar8,fVar7,*(undefined4 *)(lVar1 + 0x18),
                             *(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x20),
                             (long)&stack0x000001c8 + 4);
        if ((uVar2 & 1) != 0) {
          FUN_0a1f8a4c(&stack0x00000230,0);
          fVar5 = *(float *)(unaff_x20 + 0x34);
          if (fVar8 - (fStack0000000000000080 - fStack0000000000000084) <= fVar5) {
            FUN_0a1f8a64(&stack0x00000230,0);
            uVar2 = FUN_0907f758();
            if ((uVar2 & 1) != 0) {
              if (fVar4 <= unaff_s15 - in_stack_000001c8._4_4_) {
                fVar4 = unaff_s15 - in_stack_000001c8._4_4_;
              }
              FUN_09081eac(0);
              fStack0000000000000004 = fVar5 * fVar4;
              uVar2 = FUN_09081000(uStack0000000000000078,fStack0000000000000080,
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
  FUN_0494818c();
}


