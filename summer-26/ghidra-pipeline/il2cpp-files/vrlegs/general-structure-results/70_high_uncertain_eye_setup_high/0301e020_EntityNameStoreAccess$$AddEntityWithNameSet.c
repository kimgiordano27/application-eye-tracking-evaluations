/*
FUNCTION_NAME: EntityNameStoreAccess$$AddEntityWithNameSet
ENTRY_POINT: 0301e020
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

void EntityNameStoreAccess__AddEntityWithNameSet
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,
               float param_7,float param_8,undefined8 param_9)

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
  long lVar9;
  long unaff_x22;
  uint unaff_w24;
  long unaff_x26;
  long lVar10;
  undefined4 unaff_w28;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s9;
  undefined8 unaff_d10;
  ulong unaff_d11;
  float fVar20;
  ulong unaff_d12;
  ulong unaff_d13;
  float unaff_s14;
  float unaff_s15;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
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
  undefined8 in_stack_000000a0;
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
    fVar20 = (float)unaff_d13;
    fVar11 = (float)unaff_d12;
    fVar15 = (float)unaff_d11;
    FUN_036c0d90(param_1,param_2,param_3,param_4,param_5,param_6,param_9);
    fVar12 = (float)FUN_036c0a20(unaff_d10,0);
    fVar22 = fVar15 + fVar15;
    fVar24 = fVar11 + fVar11;
    fVar17 = fVar12 * (fVar12 + fVar12);
    fVar18 = fVar15 * fVar22;
    fVar13 = fVar12 * fVar24;
    fVar15 = fVar15 * fVar24;
    fVar19 = fVar20 * (fVar12 + fVar12);
    fVar23 = fVar20 * fVar22;
    do {
      if (unaff_x22 == 0) goto LAB_0301e314;
      uVar8 = (uint)unaff_x20;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar8) goto LAB_0301e310;
      fVar26 = fVar20 * fVar24 + fVar12 * fVar22;
      fVar27 = fVar13 - fVar23;
      fVar29 = 1.0 - (fVar11 * fVar24 + fVar18);
      fVar30 = 1.0 - (fVar11 * fVar24 + fVar17);
      fVar25 = fVar12 * fVar22 - fVar20 * fVar24;
      fVar28 = fVar19 + fVar15;
      lVar5 = unaff_x22 + unaff_x20 * unaff_x26;
      *(float *)(lVar5 + 0x20) =
           unaff_s14 * fVar25 * unaff_s15 +
           (float)in_stack_000000a0 + unaff_s9 * fVar29 * in_stack_000000f0;
      *(float *)(lVar5 + 0x24) =
           unaff_s14 * fVar30 * unaff_s15 +
           (float)((ulong)in_stack_000000a0 >> 0x20) + unaff_s9 * fVar26 * in_stack_000000f0;
      *(float *)(lVar5 + 0x28) =
           unaff_s14 * fVar28 * unaff_s15 +
           param_8 * param_7 + unaff_s9 * fVar27 * in_stack_000000f0;
      if ((int)uVar8 < in_stack_000000d8._4_4_) {
        if (in_stack_000000d0 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar8) goto LAB_0301e310;
        if (in_stack_00000060 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_00000060 + 0x18) <= uVar8) goto LAB_0301e310;
        lVar5 = in_stack_000000d0 + unaff_x20 * 0xc;
        fVar32 = *(float *)(lVar5 + 0x20);
        fVar33 = *(float *)(lVar5 + 0x24);
        fVar34 = *(float *)(lVar5 + 0x28);
        unaff_x26 = 0xc;
        lVar5 = in_stack_00000060 + unaff_x20 * 0xc;
        *(float *)(lVar5 + 0x20) = fVar29 * fVar32 + fVar25 * fVar33 + (fVar23 + fVar13) * fVar34;
        *(float *)(lVar5 + 0x24) = fVar26 * fVar32 + fVar30 * fVar33 + (fVar15 - fVar19) * fVar34;
        *(float *)(lVar5 + 0x28) =
             fVar27 * fVar32 + fVar28 * fVar33 + (1.0 - (fVar18 + fVar17)) * fVar34;
      }
      if ((int)uVar8 < in_stack_000000c8._4_4_) {
        if (in_stack_000000c0 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_000000c0 + 0x18) <= uVar8) goto LAB_0301e310;
        if (in_stack_00000058 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_00000058 + 0x18) <= uVar8) goto LAB_0301e310;
        lVar5 = in_stack_000000c0 + unaff_x20 * 0x10;
        fVar32 = *(float *)(lVar5 + 0x20);
        fVar34 = *(float *)(lVar5 + 0x24);
        fVar33 = *(float *)(lVar5 + 0x28);
        uVar31 = *(undefined4 *)(lVar5 + 0x2c);
        lVar5 = in_stack_00000058 + unaff_x20 * 0x10;
        *(float *)(lVar5 + 0x20) = fVar29 * fVar32 + fVar25 * fVar34 + (fVar23 + fVar13) * fVar33;
        *(float *)(lVar5 + 0x24) = fVar26 * fVar32 + fVar30 * fVar34 + (fVar15 - fVar19) * fVar33;
        *(float *)(lVar5 + 0x28) =
             fVar27 * fVar32 + fVar28 * fVar34 + (1.0 - (fVar18 + fVar17)) * fVar33;
        *(undefined4 *)(lVar5 + 0x2c) = uVar31;
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
      fVar25 = *(float *)(lVar5 + 0x28);
    } while ((unaff_w24 != 0) && (in_stack_000000b8._4_4_ == fVar25));
    fVar12 = fStack0000000000000068 + fStack000000000000006c * fVar25;
    if (*(char *)(unaff_x19 + 0x38) != '\0') {
      fVar12 = fVar12 + (fVar12 - *(float *)(unaff_x19 + 0x3c)) * *(float *)(unaff_x19 + 0x40);
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0301e314;
    fVar12 = in_stack_00000038._4_4_ * fVar12;
    bVar2 = fVar12 < 0.0;
    if (*(char *)(*(long *)(unaff_x19 + 0x10) + 0x32) == '\0') {
      fVar13 = 0.0;
      if ((!bVar2) && (fVar13 = fVar12, 1.0 < fVar12)) {
        fVar13 = 1.0;
      }
    }
    else {
      while (bVar2) {
        fVar12 = fVar12 + 1.0;
        bVar2 = fVar12 < 0.0;
      }
      for (; fVar13 = fVar12, 1.0 < fVar12; fVar12 = fVar12 + -1.0) {
      }
    }
    uVar3 = FUN_02fcde38(fVar13,in_stack_000000e8,unaff_w28,0);
    fVar12 = 1.0;
    uVar8 = uStack0000000000000040;
    if (uVar3 != uStack00000000000000e0) {
      if (in_stack_000000e8 == 0) goto LAB_0301e314;
      if ((*(uint *)(in_stack_000000e8 + 0x18) <= uVar3) ||
         (*(uint *)(in_stack_000000e8 + 0x18) <= uVar3 + 1)) {
LAB_0301e310:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      fVar12 = *(float *)(in_stack_000000e8 + (long)(int)uVar3 * 4 + 0x20);
      fVar12 = (fVar13 - fVar12) /
               (*(float *)(in_stack_000000e8 + (long)(int)(uVar3 + 1) * 4 + 0x20) - fVar12);
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
    lVar10 = (long)(int)uVar8;
    lVar9 = (long)(int)uVar3;
    lVar6 = in_stack_00000080 + lVar10 * 0xc;
    lVar7 = in_stack_00000080 + lVar9 * 0xc;
    uVar16 = *(undefined8 *)(lVar7 + 0x20);
    uVar21 = *(undefined8 *)(lVar6 + 0x20);
    fVar13 = *(float *)(lVar6 + 0x28);
    fVar15 = *(float *)(lVar7 + 0x28);
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
        uVar16 = thunk_FUN_01a89e68();
        FUN_026b3f6c(uVar16,0);
        uVar21 = thunk_FUN_01a6ca08(PTR_DAT_03d28a00);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar16,uVar21);
      }
      if (*(char *)(unaff_x19 + 0x50) == '\0') goto LAB_0301df28;
      lVar6 = *(long *)(unaff_x19 + 0x10);
      if (lVar6 == 0) goto LAB_0301e314;
      fVar11 = (float)FUN_0300b038(uVar8,*(undefined4 *)(lVar5 + 0x14),*(undefined8 *)(lVar6 + 0x38)
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
      fVar20 = *(float *)(lVar5 + 0x24);
      lVar6 = *(long *)(lVar5 + 0x28);
      lVar7 = *(long *)(lVar5 + 0x30);
      uVar14 = FUN_01cbd448(fVar11 - *(float *)(lVar5 + 0x1c),0x3f800000,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      fVar11 = (float)FUN_0366c2a0(lVar6,0);
      in_stack_000000f0 = in_stack_000000f0 * fVar11;
      unaff_s15 = in_stack_000000f0;
      if (cVar1 == '\0') {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        fVar11 = (float)FUN_0366c2a0(uVar14,lVar7,0);
        unaff_s15 = fVar20 * fVar11;
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
    lVar5 = in_stack_00000050 + lVar10 * 0xc;
    unaff_d11 = (ulong)*(uint *)(lVar5 + 0x24);
    unaff_d12 = (ulong)*(uint *)(lVar5 + 0x28);
    unaff_d13 = (ulong)*(uint *)(in_stack_00000048 + lVar10 * 0xc + 0x20);
    unaff_x26 = 0xc;
    unaff_d10 = FUN_036c0d90(*(undefined4 *)(lVar5 + 0x20),0);
    if ((*(uint *)(in_stack_00000050 + 0x18) <= uVar3) ||
       (*(uint *)(in_stack_00000048 + 0x18) <= uVar3)) goto LAB_0301e310;
    fVar11 = (float)uVar21;
    fVar20 = (float)((ulong)uVar21 >> 0x20);
    lVar5 = in_stack_00000050 + lVar9 * 0xc;
    in_stack_000000a0 =
         CONCAT44((float)((ulong)in_stack_00000030 >> 0x20) *
                  ((fVar20 + ((float)((ulong)uVar16 >> 0x20) - fVar20) * fVar12) -
                  (float)((ulong)in_stack_00000070 >> 0x20)),
                  (float)in_stack_00000030 *
                  ((fVar11 + ((float)uVar16 - fVar11) * fVar12) - (float)in_stack_00000070));
    lVar6 = in_stack_00000048 + lVar9 * 0xc;
    param_2 = (ulong)*(uint *)(lVar5 + 0x24);
    param_3 = (ulong)*(uint *)(lVar5 + 0x28);
    param_1 = (ulong)*(uint *)(lVar5 + 0x20);
    param_4 = (ulong)*(uint *)(lVar6 + 0x20);
    param_5 = (ulong)*(uint *)(lVar6 + 0x24);
    param_6 = (ulong)*(uint *)(lVar6 + 0x28);
    param_7 = (fVar13 + fVar12 * (fVar15 - fVar13)) - fStack0000000000000044;
    param_9 = 0;
    in_stack_000000b8._4_4_ = fVar25;
    param_8 = in_stack_00000028._4_4_;
  } while( true );
}


