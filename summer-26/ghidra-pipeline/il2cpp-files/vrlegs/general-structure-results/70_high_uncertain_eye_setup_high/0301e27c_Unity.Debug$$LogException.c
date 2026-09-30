/*
FUNCTION_NAME: Unity.Debug$$LogException
ENTRY_POINT: 0301e27c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0301df1c) */
/* WARNING: Removing unreachable block (ram,0x0301df20) */
/* WARNING: Removing unreachable block (ram,0x0301e34c) */

void Unity_Debug__LogException
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  uint in_w8;
  long lVar6;
  long lVar7;
  long in_x10;
  long lVar8;
  long unaff_x19;
  long lVar9;
  long lVar10;
  long unaff_x22;
  uint unaff_w24;
  uint uVar11;
  long unaff_x26;
  long lVar12;
  undefined4 unaff_w28;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 unaff_d10;
  float fVar20;
  float unaff_s12;
  float fVar21;
  float unaff_s13;
  float fVar22;
  float unaff_s15;
  undefined8 uVar23;
  float in_s16;
  float in_s17;
  float in_s18;
  float fVar24;
  undefined4 uVar25;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  uint uStack0000000000000040;
  float fStack0000000000000044;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  uint uStack00000000000000e0;
  uint uStack00000000000000e4;
  long in_stack_000000e8;
  long in_stack_00000118;
  undefined8 in_stack_00000178;
  
code_r0x0301e27c:
  do {
                    /* catch() { ... } // from try @ 0301e1e4 with catch @ 0301e27c */
    unaff_w24 = unaff_w24 + 1;
                    /* catch() { ... } // from try @ 0301e1c0 with catch @ 0301e280 */
                    /* catch() { ... } // from try @ 0301e198 with catch @ 0301e284 */
                    /* catch() { ... } // from try @ 0301e1d0 with catch @ 0301e288 */
    if (unaff_w24 == in_w8) {
      return;
    }
    if (*(uint *)(in_stack_00000118 + 0x18) <= unaff_w24) goto LAB_0301e310;
    if (in_x10 == 0) goto LAB_0301e314;
    uVar2 = *(uint *)(in_stack_00000118 + (long)(int)unaff_w24 * 4 + 0x20);
    lVar9 = (long)(int)uVar2;
    if (*(uint *)(in_x10 + 0x18) <= uVar2) goto LAB_0301e310;
    lVar6 = in_x10 + lVar9 * unaff_x26;
    fVar19 = *(float *)(lVar6 + 0x20);
    fVar22 = *(float *)(lVar6 + 0x24);
    fVar24 = *(float *)(lVar6 + 0x28);
    if ((unaff_w24 == 0) || (param_4 != fVar24)) {
      fVar13 = fStack0000000000000068 + fStack000000000000006c * fVar24;
      if (*(char *)(unaff_x19 + 0x38) != '\0') {
        fVar13 = fVar13 + (fVar13 - *(float *)(unaff_x19 + 0x3c)) * *(float *)(unaff_x19 + 0x40);
      }
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0301e314;
      fVar13 = in_stack_00000038._4_4_ * fVar13;
      bVar3 = fVar13 < 0.0;
      if (*(char *)(*(long *)(unaff_x19 + 0x10) + 0x32) == '\0') {
        fVar14 = 0.0;
        if ((!bVar3) && (fVar14 = fVar13, unaff_s15 < fVar13)) {
          fVar14 = 1.0;
        }
      }
      else {
        while (bVar3) {
          fVar13 = fVar13 + unaff_s15;
          bVar3 = fVar13 < 0.0;
        }
        for (; fVar14 = fVar13, unaff_s15 < fVar13; fVar13 = fVar13 + -1.0) {
        }
      }
      uVar4 = FUN_02fcde38(fVar14,in_stack_000000e8,unaff_w28,0);
      fVar13 = 1.0;
      uVar11 = uStack0000000000000040;
      if (uVar4 != uStack00000000000000e0) {
        if (in_stack_000000e8 == 0) goto LAB_0301e314;
        if ((*(uint *)(in_stack_000000e8 + 0x18) <= uVar4) ||
           (*(uint *)(in_stack_000000e8 + 0x18) <= uVar4 + 1)) goto LAB_0301e310;
        fVar13 = *(float *)(in_stack_000000e8 + (long)(int)uVar4 * 4 + 0x20);
        fVar13 = (fVar14 - fVar13) /
                 (*(float *)(in_stack_000000e8 + (long)(int)(uVar4 + 1) * 4 + 0x20) - fVar13);
        uVar11 = uVar4;
      }
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_0276c214(uVar11 + 1,uStack00000000000000e0,0);
      if (in_stack_00000080 == 0) goto LAB_0301e314;
      if ((*(uint *)(in_stack_00000080 + 0x18) <= uVar11) ||
         (*(uint *)(in_stack_00000080 + 0x18) <= uVar4)) goto LAB_0301e310;
      lVar6 = *(long *)(unaff_x19 + 0x48);
      if (lVar6 == 0) goto LAB_0301e314;
      lVar12 = (long)(int)uVar11;
      lVar10 = (long)(int)uVar4;
      lVar7 = in_stack_00000080 + lVar12 * 0xc;
      lVar8 = in_stack_00000080 + lVar10 * 0xc;
      uVar18 = *(undefined8 *)(lVar8 + 0x20);
      uVar23 = *(undefined8 *)(lVar7 + 0x20);
      fVar14 = *(float *)(lVar7 + 0x28);
      fVar17 = *(float *)(lVar8 + 0x28);
      if (*(int *)(lVar6 + 0x10) == 0) {
LAB_0301df28:
        unaff_s12 = *(float *)(lVar6 + 0x20);
        in_s18 = *(float *)(lVar6 + 0x24);
        if (*(char *)(lVar6 + 0x18) != '\0') {
          in_s18 = unaff_s12;
        }
      }
      else {
        if (*(int *)(lVar6 + 0x10) != 1) {
          thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
          uVar18 = thunk_FUN_01a89e68();
          FUN_026b3f6c(uVar18,0);
          uVar23 = thunk_FUN_01a6ca08(PTR_DAT_03d28a00);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar18,uVar23);
        }
        if (*(char *)(unaff_x19 + 0x50) == '\0') goto LAB_0301df28;
        lVar7 = *(long *)(unaff_x19 + 0x10);
        if (lVar7 == 0) goto LAB_0301e314;
        fVar15 = (float)FUN_0300b038(uVar11,*(undefined4 *)(lVar6 + 0x14),
                                     *(undefined8 *)(lVar7 + 0x38),*(undefined8 *)(lVar7 + 0x40),
                                     *(undefined8 *)(lVar7 + 0x48),*(undefined8 *)(lVar7 + 0x50),0);
        uVar5 = *(undefined8 *)(unaff_x19 + 0x48);
        in_stack_00000178._4_1_ = '\0';
        FUN_027e0bd8(uVar5,(long)&stack0x00000178 + 4,0);
        lVar6 = *(long *)(unaff_x19 + 0x48);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        fVar21 = *(float *)(lVar6 + 0x20);
        cVar1 = *(char *)(lVar6 + 0x18);
        fVar20 = *(float *)(lVar6 + 0x24);
        lVar7 = *(long *)(lVar6 + 0x28);
        lVar8 = *(long *)(lVar6 + 0x30);
        uVar16 = FUN_01cbd448(fVar15 - *(float *)(lVar6 + 0x1c),0x3f800000,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        fVar15 = (float)FUN_0366c2a0(lVar7,0);
        unaff_s12 = fVar21 * fVar15;
        in_s18 = unaff_s12;
        if (cVar1 == '\0') {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          fVar15 = (float)FUN_0366c2a0(uVar16,lVar8,0);
          in_s18 = fVar20 * fVar15;
        }
        unaff_w28 = in_stack_00000018._4_4_;
        if (in_stack_00000178._4_1_ != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
        }
      }
      if (in_stack_00000050 == 0) goto LAB_0301e314;
      if (*(uint *)(in_stack_00000050 + 0x18) <= uVar11) goto LAB_0301e310;
      if (in_stack_00000048 == 0) goto LAB_0301e314;
      if (*(uint *)(in_stack_00000048 + 0x18) <= uVar11) goto LAB_0301e310;
      lVar6 = in_stack_00000050 + lVar12 * 0xc;
      param_2 = *(float *)(lVar6 + 0x24);
      param_3 = *(float *)(lVar6 + 0x28);
      fVar15 = *(float *)(in_stack_00000048 + lVar12 * 0xc + 0x20);
      unaff_x26 = 0xc;
      uVar5 = FUN_036c0d90(*(undefined4 *)(lVar6 + 0x20),0);
      if ((*(uint *)(in_stack_00000050 + 0x18) <= uVar4) ||
         (*(uint *)(in_stack_00000048 + 0x18) <= uVar4)) goto LAB_0301e310;
      fVar20 = (float)uVar23;
      fVar21 = (float)((ulong)uVar23 >> 0x20);
      lVar6 = in_stack_00000050 + lVar10 * 0xc;
      unaff_d10 = CONCAT44((float)((ulong)in_stack_00000030 >> 0x20) *
                           ((fVar21 + ((float)((ulong)uVar18 >> 0x20) - fVar21) * fVar13) -
                           (float)((ulong)in_stack_00000070 >> 0x20)),
                           (float)in_stack_00000030 *
                           ((fVar20 + ((float)uVar18 - fVar20) * fVar13) - (float)in_stack_00000070)
                          );
      lVar7 = in_stack_00000048 + lVar10 * 0xc;
      unaff_s13 = in_stack_00000028._4_4_ *
                  ((fVar14 + fVar13 * (fVar17 - fVar14)) - fStack0000000000000044);
      FUN_036c0d90(*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),
                   *(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar7 + 0x20),
                   *(undefined4 *)(lVar7 + 0x24),*(undefined4 *)(lVar7 + 0x28),0);
      fVar13 = (float)FUN_036c0a20(uVar5,0);
      fVar14 = param_2 + param_2;
      fVar17 = param_3 + param_3;
      param_5 = fVar13 * (fVar13 + fVar13);
      param_6 = param_2 * fVar14;
      param_3 = param_3 * fVar17;
      param_7 = fVar13 * fVar14;
      param_1 = fVar13 * fVar17;
      param_2 = param_2 * fVar17;
      param_8 = fVar15 * (fVar13 + fVar13);
      in_s16 = fVar15 * fVar14;
      in_s17 = fVar15 * fVar17;
      unaff_s15 = 1.0;
      in_x10 = in_stack_00000088;
      param_4 = fVar24;
    }
    if (unaff_x22 == 0) goto LAB_0301e314;
    if (*(uint *)(unaff_x22 + 0x18) <= uVar2) goto LAB_0301e310;
    fVar13 = in_s17 + param_7;
    fVar14 = param_1 - in_s16;
    fVar15 = unaff_s15 - (param_3 + param_6);
    fVar20 = unaff_s15 - (param_3 + param_5);
    fVar24 = param_7 - in_s17;
    fVar17 = param_8 + param_2;
    lVar6 = unaff_x22 + lVar9 * unaff_x26;
    *(float *)(lVar6 + 0x20) =
         fVar22 * fVar24 * in_s18 + (float)unaff_d10 + fVar19 * fVar15 * unaff_s12;
    *(float *)(lVar6 + 0x24) =
         fVar22 * fVar20 * in_s18 + (float)((ulong)unaff_d10 >> 0x20) + fVar19 * fVar13 * unaff_s12;
    *(float *)(lVar6 + 0x28) = fVar22 * fVar17 * in_s18 + unaff_s13 + fVar19 * fVar14 * unaff_s12;
    if ((int)uVar2 < in_stack_000000d8._4_4_) {
      if (in_stack_000000d0 == 0) goto LAB_0301e314;
      if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar2) goto LAB_0301e310;
      if (in_stack_00000060 == 0) goto LAB_0301e314;
      if (*(uint *)(in_stack_00000060 + 0x18) <= uVar2) goto LAB_0301e310;
      lVar6 = in_stack_000000d0 + lVar9 * 0xc;
      fVar19 = *(float *)(lVar6 + 0x20);
      fVar22 = *(float *)(lVar6 + 0x24);
      fVar21 = *(float *)(lVar6 + 0x28);
      unaff_x26 = 0xc;
      lVar6 = in_stack_00000060 + lVar9 * 0xc;
      *(float *)(lVar6 + 0x20) = fVar15 * fVar19 + fVar24 * fVar22 + (in_s16 + param_1) * fVar21;
      *(float *)(lVar6 + 0x24) = fVar13 * fVar19 + fVar20 * fVar22 + (param_2 - param_8) * fVar21;
      *(float *)(lVar6 + 0x28) =
           fVar14 * fVar19 + fVar17 * fVar22 + (unaff_s15 - (param_6 + param_5)) * fVar21;
    }
    in_w8 = uStack00000000000000e4;
  } while (in_stack_000000c8._4_4_ <= (int)uVar2);
  if (in_stack_000000c0 == 0) {
LAB_0301e314:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (uVar2 < *(uint *)(in_stack_000000c0 + 0x18)) {
    if (in_stack_00000058 == 0) goto LAB_0301e314;
    if (uVar2 < *(uint *)(in_stack_00000058 + 0x18)) {
      lVar6 = in_stack_000000c0 + lVar9 * 0x10;
      fVar19 = *(float *)(lVar6 + 0x20);
      fVar21 = *(float *)(lVar6 + 0x24);
      fVar22 = *(float *)(lVar6 + 0x28);
      uVar25 = *(undefined4 *)(lVar6 + 0x2c);
      lVar9 = in_stack_00000058 + lVar9 * 0x10;
      *(float *)(lVar9 + 0x20) = fVar15 * fVar19 + fVar24 * fVar21 + (in_s16 + param_1) * fVar22;
      *(float *)(lVar9 + 0x24) = fVar13 * fVar19 + fVar20 * fVar21 + (param_2 - param_8) * fVar22;
      *(float *)(lVar9 + 0x28) =
           fVar14 * fVar19 + fVar17 * fVar21 + (unaff_s15 - (param_6 + param_5)) * fVar22;
      *(undefined4 *)(lVar9 + 0x2c) = uVar25;
      goto code_r0x0301e27c;
    }
  }
LAB_0301e310:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


