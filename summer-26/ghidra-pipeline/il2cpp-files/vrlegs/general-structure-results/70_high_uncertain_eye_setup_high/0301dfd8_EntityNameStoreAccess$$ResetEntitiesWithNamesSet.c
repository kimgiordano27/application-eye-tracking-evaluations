/*
FUNCTION_NAME: EntityNameStoreAccess$$ResetEntitiesWithNamesSet
ENTRY_POINT: 0301dfd8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0301df1c) */
/* WARNING: Removing unreachable block (ram,0x0301df20) */
/* WARNING: Removing unreachable block (ram,0x0301e34c) */

void EntityNameStoreAccess__ResetEntitiesWithNamesSet(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  uint uVar8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x26;
  long lVar9;
  undefined4 unaff_w28;
  long unaff_x29;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  float in_s4;
  float fVar15;
  float fVar16;
  undefined8 in_d6;
  float fVar17;
  float unaff_s9;
  undefined8 unaff_d10;
  ulong unaff_d11;
  float fVar18;
  ulong unaff_d12;
  float fVar19;
  ulong unaff_d13;
  float unaff_s14;
  float unaff_s15;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
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
  float fStack0000000000000098;
  float fStack000000000000009c;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  uint uStack00000000000000e0;
  uint uStack00000000000000e4;
  long in_stack_000000e8;
  float in_stack_000000f0;
  long in_stack_00000118;
  undefined8 in_stack_00000178;
  
  do {
    fVar19 = (float)unaff_d13;
    fVar18 = (float)unaff_d12;
    fVar13 = (float)unaff_d11;
    lVar5 = unaff_x23 + unaff_x21 * 0xc;
    uStack00000000000000a0 =
         CONCAT44((float)((ulong)in_stack_00000030 >> 0x20) * (float)((ulong)in_d6 >> 0x20),
                  (float)in_stack_00000030 * (float)in_d6);
    uStack00000000000000a8 = 0;
    lVar6 = unaff_x29 + unaff_x21 * 0xc;
    FUN_036c0d90(*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                 *(undefined4 *)(lVar5 + 0x28),*(undefined4 *)(lVar6 + 0x20),
                 *(undefined4 *)(lVar6 + 0x24),*(undefined4 *)(lVar6 + 0x28),0);
    fVar10 = (float)FUN_036c0a20(unaff_d10,0);
    fVar20 = fVar13 + fVar13;
    fVar22 = fVar18 + fVar18;
    fVar15 = fVar10 * (fVar10 + fVar10);
    fVar16 = fVar13 * fVar20;
    fVar11 = fVar10 * fVar22;
    fVar13 = fVar13 * fVar22;
    fVar17 = fVar19 * (fVar10 + fVar10);
    fVar21 = fVar19 * fVar20;
    do {
      if (unaff_x22 == 0) goto LAB_0301e314;
      uVar8 = (uint)unaff_x20;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar8) goto LAB_0301e310;
      fVar24 = fVar19 * fVar22 + fVar10 * fVar20;
      fVar25 = fVar11 - fVar21;
      fVar27 = 1.0 - (fVar18 * fVar22 + fVar16);
      fVar28 = 1.0 - (fVar18 * fVar22 + fVar15);
      fVar23 = fVar10 * fVar20 - fVar19 * fVar22;
      fVar26 = fVar17 + fVar13;
      lVar5 = unaff_x22 + unaff_x20 * unaff_x26;
      *(float *)(lVar5 + 0x20) =
           unaff_s14 * fVar23 * unaff_s15 +
           (float)uStack00000000000000a0 + unaff_s9 * fVar27 * in_stack_000000f0;
      *(float *)(lVar5 + 0x24) =
           unaff_s14 * fVar28 * unaff_s15 +
           (float)((ulong)uStack00000000000000a0 >> 0x20) + unaff_s9 * fVar24 * in_stack_000000f0;
      *(float *)(lVar5 + 0x28) =
           unaff_s14 * fVar26 * unaff_s15 +
           in_stack_00000028._4_4_ *
           ((fStack000000000000009c + in_s4 * (fStack0000000000000098 - fStack000000000000009c)) -
           fStack0000000000000044) + unaff_s9 * fVar25 * in_stack_000000f0;
      if ((int)uVar8 < in_stack_000000d8._4_4_) {
        if (in_stack_000000d0 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar8) goto LAB_0301e310;
        if (in_stack_00000060 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_00000060 + 0x18) <= uVar8) goto LAB_0301e310;
        lVar5 = in_stack_000000d0 + unaff_x20 * 0xc;
        fVar30 = *(float *)(lVar5 + 0x20);
        fVar31 = *(float *)(lVar5 + 0x24);
        fVar32 = *(float *)(lVar5 + 0x28);
        unaff_x26 = 0xc;
        lVar5 = in_stack_00000060 + unaff_x20 * 0xc;
        *(float *)(lVar5 + 0x20) = fVar27 * fVar30 + fVar23 * fVar31 + (fVar21 + fVar11) * fVar32;
        *(float *)(lVar5 + 0x24) = fVar24 * fVar30 + fVar28 * fVar31 + (fVar13 - fVar17) * fVar32;
        *(float *)(lVar5 + 0x28) =
             fVar25 * fVar30 + fVar26 * fVar31 + (1.0 - (fVar16 + fVar15)) * fVar32;
      }
      if ((int)uVar8 < in_stack_000000c8._4_4_) {
        if (in_stack_000000c0 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_000000c0 + 0x18) <= uVar8) goto LAB_0301e310;
        if (in_stack_00000058 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_00000058 + 0x18) <= uVar8) goto LAB_0301e310;
        lVar5 = in_stack_000000c0 + unaff_x20 * 0x10;
        fVar30 = *(float *)(lVar5 + 0x20);
        fVar32 = *(float *)(lVar5 + 0x24);
        fVar31 = *(float *)(lVar5 + 0x28);
        uVar29 = *(undefined4 *)(lVar5 + 0x2c);
        lVar5 = in_stack_00000058 + unaff_x20 * 0x10;
        *(float *)(lVar5 + 0x20) = fVar27 * fVar30 + fVar23 * fVar32 + (fVar21 + fVar11) * fVar31;
        *(float *)(lVar5 + 0x24) = fVar24 * fVar30 + fVar28 * fVar32 + (fVar13 - fVar17) * fVar31;
        *(float *)(lVar5 + 0x28) =
             fVar25 * fVar30 + fVar26 * fVar32 + (1.0 - (fVar16 + fVar15)) * fVar31;
        *(undefined4 *)(lVar5 + 0x2c) = uVar29;
      }
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w24 == uStack00000000000000e4) {
        return;
      }
      if (*(uint *)(in_stack_00000118 + 0x18) <= unaff_w24) goto LAB_0301e310;
      if (in_stack_00000088 == 0) goto LAB_0301e314;
      uVar8 = *(uint *)(in_stack_00000118 + (long)(int)unaff_w24 * 4 + 0x20);
      unaff_x20 = (long)(int)uVar8;
      if (*(uint *)(in_stack_00000088 + 0x18) <= uVar8) goto LAB_0301e310;
      lVar5 = in_stack_00000088 + unaff_x20 * unaff_x26;
      unaff_s9 = *(float *)(lVar5 + 0x20);
      unaff_s14 = *(float *)(lVar5 + 0x24);
      fVar23 = *(float *)(lVar5 + 0x28);
    } while ((unaff_w24 != 0) && (in_stack_000000b8._4_4_ == fVar23));
    fVar10 = fStack0000000000000068 + fStack000000000000006c * fVar23;
    if (*(char *)(unaff_x19 + 0x38) != '\0') {
      fVar10 = fVar10 + (fVar10 - *(float *)(unaff_x19 + 0x3c)) * *(float *)(unaff_x19 + 0x40);
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0301e314;
    fVar10 = in_stack_00000038._4_4_ * fVar10;
    bVar2 = fVar10 < 0.0;
    if (*(char *)(*(long *)(unaff_x19 + 0x10) + 0x32) == '\0') {
      fVar11 = 0.0;
      if ((!bVar2) && (fVar11 = fVar10, 1.0 < fVar10)) {
        fVar11 = 1.0;
      }
    }
    else {
      while (bVar2) {
        fVar10 = fVar10 + 1.0;
        bVar2 = fVar10 < 0.0;
      }
      for (; fVar11 = fVar10, 1.0 < fVar10; fVar10 = fVar10 + -1.0) {
      }
    }
    uVar3 = FUN_02fcde38(fVar11,in_stack_000000e8,unaff_w28,0);
    in_s4 = 1.0;
    uVar8 = uStack0000000000000040;
    if (uVar3 != uStack00000000000000e0) {
      if (in_stack_000000e8 == 0) goto LAB_0301e314;
      if ((*(uint *)(in_stack_000000e8 + 0x18) <= uVar3) ||
         (*(uint *)(in_stack_000000e8 + 0x18) <= uVar3 + 1)) {
LAB_0301e310:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      fVar10 = *(float *)(in_stack_000000e8 + (long)(int)uVar3 * 4 + 0x20);
      in_s4 = (fVar11 - fVar10) /
              (*(float *)(in_stack_000000e8 + (long)(int)(uVar3 + 1) * 4 + 0x20) - fVar10);
      uVar8 = uVar3;
    }
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_0276c214(uVar8 + 1,uStack00000000000000e0,0);
    if (in_stack_00000080 == 0) goto LAB_0301e314;
    if ((*(uint *)(in_stack_00000080 + 0x18) <= uVar8) ||
       (*(uint *)(in_stack_00000080 + 0x18) <= uVar3)) goto LAB_0301e310;
    lVar5 = *(long *)(unaff_x19 + 0x48);
    if (lVar5 == 0) goto LAB_0301e314;
    lVar9 = (long)(int)uVar8;
    unaff_x21 = (long)(int)uVar3;
    lVar6 = in_stack_00000080 + lVar9 * 0xc;
    lVar7 = in_stack_00000080 + unaff_x21 * 0xc;
    uVar14 = *(undefined8 *)(lVar7 + 0x20);
    uStack00000000000000a0 = *(undefined8 *)(lVar6 + 0x20);
    fStack000000000000009c = *(float *)(lVar6 + 0x28);
    fStack0000000000000098 = *(float *)(lVar7 + 0x28);
    if (*(int *)(lVar5 + 0x10) == 0) {
LAB_0301df28:
      in_stack_000000f0 = *(float *)(lVar5 + 0x20);
      unaff_s15 = *(float *)(lVar5 + 0x24);
      if (*(char *)(lVar5 + 0x18) != '\0') {
        unaff_s15 = in_stack_000000f0;
      }
    }
    else {
      if (*(int *)(lVar5 + 0x10) != 1) {
        thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
        uVar14 = thunk_FUN_01a89e68();
        FUN_026b3f6c(uVar14,0);
        uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d28a00);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar14,uVar4);
      }
      if (*(char *)(unaff_x19 + 0x50) == '\0') goto LAB_0301df28;
      lVar6 = *(long *)(unaff_x19 + 0x10);
      if (lVar6 == 0) goto LAB_0301e314;
      fVar10 = (float)FUN_0300b038(uVar8,*(undefined4 *)(lVar5 + 0x14),*(undefined8 *)(lVar6 + 0x38)
                                   ,*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x48),
                                   *(undefined8 *)(lVar6 + 0x50),0);
      uVar4 = *(undefined8 *)(unaff_x19 + 0x48);
      in_stack_00000178._4_1_ = '\0';
      FUN_027e0bd8(uVar4,(long)&stack0x00000178 + 4,0);
      lVar5 = *(long *)(unaff_x19 + 0x48);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_000000f0 = *(float *)(lVar5 + 0x20);
      cVar1 = *(char *)(lVar5 + 0x18);
      fVar11 = *(float *)(lVar5 + 0x24);
      lVar6 = *(long *)(lVar5 + 0x28);
      lVar7 = *(long *)(lVar5 + 0x30);
      uVar12 = FUN_01cbd448(fVar10 - *(float *)(lVar5 + 0x1c),0x3f800000,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      fVar10 = (float)FUN_0366c2a0(lVar6,0);
      in_stack_000000f0 = in_stack_000000f0 * fVar10;
      unaff_s15 = in_stack_000000f0;
      if (cVar1 == '\0') {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        fVar10 = (float)FUN_0366c2a0(uVar12,lVar7,0);
        unaff_s15 = fVar11 * fVar10;
      }
      unaff_w28 = in_stack_00000018._4_4_;
      if (in_stack_00000178._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
      }
    }
    if (in_stack_00000050 == 0) {
LAB_0301e314:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(in_stack_00000050 + 0x18) <= uVar8) goto LAB_0301e310;
    if (in_stack_00000048 == 0) goto LAB_0301e314;
    if (*(uint *)(in_stack_00000048 + 0x18) <= uVar8) goto LAB_0301e310;
    lVar5 = in_stack_00000050 + lVar9 * 0xc;
    unaff_d11 = (ulong)*(uint *)(lVar5 + 0x24);
    unaff_d12 = (ulong)*(uint *)(lVar5 + 0x28);
    unaff_d13 = (ulong)*(uint *)(in_stack_00000048 + lVar9 * 0xc + 0x20);
    unaff_x26 = 0xc;
    unaff_d10 = FUN_036c0d90(*(undefined4 *)(lVar5 + 0x20),0);
    if ((*(uint *)(in_stack_00000050 + 0x18) <= uVar3) ||
       (*(uint *)(in_stack_00000048 + 0x18) <= uVar3)) goto LAB_0301e310;
    fVar10 = (float)((ulong)uStack00000000000000a0 >> 0x20);
    in_d6 = CONCAT44((fVar10 + ((float)((ulong)uVar14 >> 0x20) - fVar10) * in_s4) -
                     (float)((ulong)in_stack_00000070 >> 0x20),
                     ((float)uStack00000000000000a0 +
                     ((float)uVar14 - (float)uStack00000000000000a0) * in_s4) -
                     (float)in_stack_00000070);
    unaff_x23 = in_stack_00000050;
    unaff_x29 = in_stack_00000048;
    in_stack_000000b8._4_4_ = fVar23;
  } while( true );
}


