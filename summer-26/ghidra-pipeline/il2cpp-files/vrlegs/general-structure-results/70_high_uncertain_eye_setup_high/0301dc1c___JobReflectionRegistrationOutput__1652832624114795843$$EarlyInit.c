/*
FUNCTION_NAME: __JobReflectionRegistrationOutput__1652832624114795843$$EarlyInit
ENTRY_POINT: 0301dc1c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0301df1c) */
/* WARNING: Removing unreachable block (ram,0x0301df20) */
/* WARNING: Removing unreachable block (ram,0x0301e34c) */

void __JobReflectionRegistrationOutput__1652832624114795843__EarlyInit
               (float param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  uint in_w9;
  long in_x10;
  long lVar7;
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
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong unaff_d12;
  float unaff_s13;
  float fVar24;
  float fVar25;
  float unaff_s15;
  undefined8 uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uStack000000000000001c;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
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
  
  uVar27 = unaff_d12 >> 0x20;
  uVar20 = unaff_d12;
  uStack000000000000001c = unaff_w28;
  fStack000000000000002c = param_1;
  fStack000000000000003c = param_3;
  fVar13 = param_4;
  fVar15 = param_4;
  fVar23 = param_4;
  fVar14 = param_4;
  fVar18 = param_4;
  fVar24 = param_4;
  fVar16 = param_4;
  fVar28 = param_4;
  fVar21 = param_4;
  do {
    if (*(uint *)(in_stack_00000118 + 0x18) <= unaff_w24) goto LAB_0301e310;
    if (in_x10 == 0) goto LAB_0301e314;
    uVar2 = *(uint *)(in_stack_00000118 + (long)(int)unaff_w24 * 4 + 0x20);
    lVar9 = (long)(int)uVar2;
    if (*(uint *)(in_x10 + 0x18) <= uVar2) goto LAB_0301e310;
    lVar6 = in_x10 + lVar9 * unaff_x26;
    fVar22 = *(float *)(lVar6 + 0x20);
    fVar25 = *(float *)(lVar6 + 0x24);
    fVar30 = *(float *)(lVar6 + 0x28);
    if ((unaff_w24 == 0) || (param_4 != fVar30)) {
      fVar13 = fStack0000000000000068 + fStack000000000000006c * fVar30;
      if (*(char *)(unaff_x19 + 0x38) != '\0') {
        fVar13 = fVar13 + (fVar13 - *(float *)(unaff_x19 + 0x3c)) * *(float *)(unaff_x19 + 0x40);
      }
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0301e314;
      fVar13 = fStack000000000000003c * fVar13;
      bVar3 = fVar13 < 0.0;
      if (*(char *)(*(long *)(unaff_x19 + 0x10) + 0x32) == '\0') {
        fVar15 = 0.0;
        if ((!bVar3) && (fVar15 = fVar13, unaff_s15 < fVar13)) {
          fVar15 = 1.0;
        }
      }
      else {
        while (bVar3) {
          fVar13 = fVar13 + unaff_s15;
          bVar3 = fVar13 < 0.0;
        }
        for (; fVar15 = fVar13, unaff_s15 < fVar13; fVar13 = fVar13 + -1.0) {
        }
      }
      uVar4 = FUN_02fcde38(fVar15,in_stack_000000e8,unaff_w28,0);
      fVar13 = 1.0;
      uVar11 = in_w9;
      if (uVar4 != uStack00000000000000e0) {
        if (in_stack_000000e8 == 0) goto LAB_0301e314;
        if ((*(uint *)(in_stack_000000e8 + 0x18) <= uVar4) ||
           (*(uint *)(in_stack_000000e8 + 0x18) <= uVar4 + 1)) goto LAB_0301e310;
        fVar13 = *(float *)(in_stack_000000e8 + (long)(int)uVar4 * 4 + 0x20);
        fVar13 = (fVar15 - fVar13) /
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
      uVar19 = *(undefined8 *)(lVar8 + 0x20);
      uVar26 = *(undefined8 *)(lVar7 + 0x20);
      fVar14 = *(float *)(lVar7 + 0x28);
      fVar18 = *(float *)(lVar8 + 0x28);
      if (*(int *)(lVar6 + 0x10) == 0) {
LAB_0301df28:
        uVar20 = (ulong)*(uint *)(lVar6 + 0x20);
        uVar27 = (ulong)*(uint *)(lVar6 + 0x24);
        if (*(char *)(lVar6 + 0x18) != '\0') {
          uVar27 = (ulong)*(uint *)(lVar6 + 0x20);
        }
      }
      else {
        if (*(int *)(lVar6 + 0x10) != 1) {
          thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
          uVar19 = thunk_FUN_01a89e68();
          FUN_026b3f6c(uVar19,0);
          uVar26 = thunk_FUN_01a6ca08(PTR_DAT_03d28a00);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar19,uVar26);
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
        fVar24 = *(float *)(lVar6 + 0x20);
        cVar1 = *(char *)(lVar6 + 0x18);
        fVar23 = *(float *)(lVar6 + 0x24);
        lVar7 = *(long *)(lVar6 + 0x28);
        lVar8 = *(long *)(lVar6 + 0x30);
        uVar17 = FUN_01cbd448(fVar15 - *(float *)(lVar6 + 0x1c),0x3f800000,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        fVar15 = (float)FUN_0366c2a0(lVar7,0);
        uVar20 = (ulong)(uint)(fVar24 * fVar15);
        uVar27 = uVar20;
        if (cVar1 == '\0') {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          fVar15 = (float)FUN_0366c2a0(uVar17,lVar8,0);
          uVar27 = (ulong)(uint)(fVar23 * fVar15);
        }
        unaff_w28 = uStack000000000000001c;
        if (in_stack_00000178._4_1_ != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
          unaff_w28 = uStack000000000000001c;
        }
      }
      if (in_stack_00000050 == 0) goto LAB_0301e314;
      if (*(uint *)(in_stack_00000050 + 0x18) <= uVar11) goto LAB_0301e310;
      if (in_stack_00000048 == 0) goto LAB_0301e314;
      if (*(uint *)(in_stack_00000048 + 0x18) <= uVar11) goto LAB_0301e310;
      lVar6 = in_stack_00000050 + lVar12 * 0xc;
      fVar15 = *(float *)(lVar6 + 0x24);
      fVar23 = *(float *)(lVar6 + 0x28);
      fVar21 = *(float *)(in_stack_00000048 + lVar12 * 0xc + 0x20);
      unaff_x26 = 0xc;
      uVar5 = FUN_036c0d90(*(undefined4 *)(lVar6 + 0x20),0);
      if ((*(uint *)(in_stack_00000050 + 0x18) <= uVar4) ||
         (*(uint *)(in_stack_00000048 + 0x18) <= uVar4)) goto LAB_0301e310;
      fVar24 = (float)uVar26;
      fVar16 = (float)((ulong)uVar26 >> 0x20);
      lVar6 = in_stack_00000050 + lVar10 * 0xc;
      unaff_d12 = CONCAT44((float)((ulong)in_stack_00000030 >> 0x20) *
                           ((fVar16 + ((float)((ulong)uVar19 >> 0x20) - fVar16) * fVar13) -
                           (float)((ulong)in_stack_00000070 >> 0x20)),
                           (float)in_stack_00000030 *
                           ((fVar24 + ((float)uVar19 - fVar24) * fVar13) - (float)in_stack_00000070)
                          );
      lVar7 = in_stack_00000048 + lVar10 * 0xc;
      unaff_s13 = fStack000000000000002c *
                  ((fVar14 + fVar13 * (fVar18 - fVar14)) - in_stack_00000040._4_4_);
      FUN_036c0d90(*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),
                   *(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar7 + 0x20),
                   *(undefined4 *)(lVar7 + 0x24),*(undefined4 *)(lVar7 + 0x28),0);
      fVar16 = (float)FUN_036c0a20(uVar5,0);
      fVar28 = fVar15 + fVar15;
      fVar29 = fVar23 + fVar23;
      fVar14 = fVar16 * (fVar16 + fVar16);
      fVar18 = fVar15 * fVar28;
      fVar23 = fVar23 * fVar29;
      fVar24 = fVar16 * fVar28;
      fVar13 = fVar16 * fVar29;
      fVar15 = fVar15 * fVar29;
      fVar16 = fVar21 * (fVar16 + fVar16);
      fVar28 = fVar21 * fVar28;
      fVar21 = fVar21 * fVar29;
      unaff_s15 = 1.0;
      in_x10 = in_stack_00000088;
      param_4 = fVar30;
    }
    if (unaff_x22 == 0) goto LAB_0301e314;
    if (*(uint *)(unaff_x22 + 0x18) <= uVar2) goto LAB_0301e310;
    fVar32 = fVar21 + fVar24;
    fVar30 = (float)uVar20;
    fVar33 = fVar13 - fVar28;
    fVar35 = unaff_s15 - (fVar23 + fVar18);
    fVar36 = unaff_s15 - (fVar23 + fVar14);
    fVar31 = fVar24 - fVar21;
    fVar34 = fVar16 + fVar15;
    fVar29 = (float)uVar27;
    lVar6 = unaff_x22 + lVar9 * unaff_x26;
    *(float *)(lVar6 + 0x20) =
         fVar25 * fVar31 * fVar29 + (float)unaff_d12 + fVar22 * fVar35 * fVar30;
    *(float *)(lVar6 + 0x24) =
         fVar25 * fVar36 * fVar29 + (float)(unaff_d12 >> 0x20) + fVar22 * fVar32 * fVar30;
    *(float *)(lVar6 + 0x28) = fVar25 * fVar34 * fVar29 + unaff_s13 + fVar22 * fVar33 * fVar30;
    if ((int)uVar2 < in_stack_000000d8._4_4_) {
      if (in_stack_000000d0 == 0) goto LAB_0301e314;
      if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar2) goto LAB_0301e310;
      if (in_stack_00000060 == 0) goto LAB_0301e314;
      if (*(uint *)(in_stack_00000060 + 0x18) <= uVar2) goto LAB_0301e310;
      lVar6 = in_stack_000000d0 + lVar9 * 0xc;
      fVar22 = *(float *)(lVar6 + 0x20);
      fVar25 = *(float *)(lVar6 + 0x24);
      fVar30 = *(float *)(lVar6 + 0x28);
      unaff_x26 = 0xc;
      lVar6 = in_stack_00000060 + lVar9 * 0xc;
      *(float *)(lVar6 + 0x20) = fVar35 * fVar22 + fVar31 * fVar25 + (fVar28 + fVar13) * fVar30;
      *(float *)(lVar6 + 0x24) = fVar32 * fVar22 + fVar36 * fVar25 + (fVar15 - fVar16) * fVar30;
      *(float *)(lVar6 + 0x28) =
           fVar33 * fVar22 + fVar34 * fVar25 + (unaff_s15 - (fVar18 + fVar14)) * fVar30;
    }
    if ((int)uVar2 < in_stack_000000c8._4_4_) {
      if (in_stack_000000c0 == 0) {
LAB_0301e314:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(in_stack_000000c0 + 0x18) <= uVar2) {
LAB_0301e310:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (in_stack_00000058 == 0) goto LAB_0301e314;
      if (*(uint *)(in_stack_00000058 + 0x18) <= uVar2) goto LAB_0301e310;
      lVar6 = in_stack_000000c0 + lVar9 * 0x10;
      fVar22 = *(float *)(lVar6 + 0x20);
      fVar30 = *(float *)(lVar6 + 0x24);
      fVar25 = *(float *)(lVar6 + 0x28);
      uVar37 = *(undefined4 *)(lVar6 + 0x2c);
      lVar9 = in_stack_00000058 + lVar9 * 0x10;
      *(float *)(lVar9 + 0x20) = fVar35 * fVar22 + fVar31 * fVar30 + (fVar28 + fVar13) * fVar25;
      *(float *)(lVar9 + 0x24) = fVar32 * fVar22 + fVar36 * fVar30 + (fVar15 - fVar16) * fVar25;
      *(float *)(lVar9 + 0x28) =
           fVar33 * fVar22 + fVar34 * fVar30 + (unaff_s15 - (fVar18 + fVar14)) * fVar25;
      *(undefined4 *)(lVar9 + 0x2c) = uVar37;
    }
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w24 == uStack00000000000000e4) {
      return;
    }
  } while( true );
}


