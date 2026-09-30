/*
FUNCTION_NAME: EntityNameStoreAccess$$RemoveEntityWithNameSet
ENTRY_POINT: 0301e080
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

void EntityNameStoreAccess__RemoveEntityWithNameSet
               (float param_1,ulong param_2,float param_3,ulong param_4,float param_5,float param_6,
               float param_7,float param_8)

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
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  float unaff_s8;
  float unaff_s9;
  undefined8 unaff_d10;
  float unaff_s13;
  float unaff_s15;
  undefined8 uVar15;
  float in_s16;
  float fVar16;
  float in_s17;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
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
    param_1 = param_1 * in_s17;
    fVar13 = (float)param_2 * in_s17;
    fVar11 = (float)param_4;
    param_8 = fVar11 * param_8;
    fVar16 = fVar11 * in_s16;
    do {
      if (unaff_x22 == 0) goto LAB_0301e314;
      uVar8 = (uint)unaff_x20;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar8) goto LAB_0301e310;
                    /* try { // try from 0301e0c0 to 0311e167 has its CatchHandler @ 0301e0c0
                       catch() { ... } // from try @ 0301e0c0 with catch @ 0301e0c0
                       catch() { ... } // from try @ 0301e20c with catch @ 0301e0c0
                       catch() { ... } // from try @ 0301e264 with catch @ 0301e0c0
                       catch() { ... } // from try @ 0301e2b8 with catch @ 0301e0c0
                       catch() { ... } // from try @ 0301e300 with catch @ 0301e0c0 */
      fVar18 = fVar11 * in_s17 + param_7;
      fVar19 = param_1 - fVar16;
      fVar21 = 1.0 - (param_3 + param_6);
      fVar22 = 1.0 - (param_3 + param_5);
      fVar17 = param_7 - fVar11 * in_s17;
      fVar20 = param_8 + fVar13;
      lVar5 = unaff_x22 + unaff_x20 * unaff_x26;
      *(float *)(lVar5 + 0x20) =
           unaff_s8 * fVar17 * unaff_s15 + (float)unaff_d10 + unaff_s9 * fVar21 * in_stack_000000f0;
      *(float *)(lVar5 + 0x24) =
           unaff_s8 * fVar22 * unaff_s15 +
           (float)((ulong)unaff_d10 >> 0x20) + unaff_s9 * fVar18 * in_stack_000000f0;
      *(float *)(lVar5 + 0x28) =
           unaff_s8 * fVar20 * unaff_s15 + unaff_s13 + unaff_s9 * fVar19 * in_stack_000000f0;
      if ((int)uVar8 < in_stack_000000d8._4_4_) {
        if (in_stack_000000d0 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar8) goto LAB_0301e310;
        if (in_stack_00000060 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_00000060 + 0x18) <= uVar8) goto LAB_0301e310;
        lVar5 = in_stack_000000d0 + unaff_x20 * 0xc;
        fVar24 = *(float *)(lVar5 + 0x20);
        fVar25 = *(float *)(lVar5 + 0x24);
        fVar26 = *(float *)(lVar5 + 0x28);
        unaff_x26 = 0xc;
        lVar5 = in_stack_00000060 + unaff_x20 * 0xc;
        *(float *)(lVar5 + 0x20) = fVar21 * fVar24 + fVar17 * fVar25 + (fVar16 + param_1) * fVar26;
        *(float *)(lVar5 + 0x24) = fVar18 * fVar24 + fVar22 * fVar25 + (fVar13 - param_8) * fVar26;
        *(float *)(lVar5 + 0x28) =
             fVar19 * fVar24 + fVar20 * fVar25 + (1.0 - (param_6 + param_5)) * fVar26;
      }
      if ((int)uVar8 < in_stack_000000c8._4_4_) {
        if (in_stack_000000c0 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_000000c0 + 0x18) <= uVar8) goto LAB_0301e310;
        if (in_stack_00000058 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_00000058 + 0x18) <= uVar8) goto LAB_0301e310;
        lVar5 = in_stack_000000c0 + unaff_x20 * 0x10;
        fVar24 = *(float *)(lVar5 + 0x20);
        fVar26 = *(float *)(lVar5 + 0x24);
        fVar25 = *(float *)(lVar5 + 0x28);
        uVar23 = *(undefined4 *)(lVar5 + 0x2c);
        lVar5 = in_stack_00000058 + unaff_x20 * 0x10;
        *(float *)(lVar5 + 0x20) = fVar21 * fVar24 + fVar17 * fVar26 + (fVar16 + param_1) * fVar25;
        *(float *)(lVar5 + 0x24) = fVar18 * fVar24 + fVar22 * fVar26 + (fVar13 - param_8) * fVar25;
        *(float *)(lVar5 + 0x28) =
             fVar19 * fVar24 + fVar20 * fVar26 + (1.0 - (param_6 + param_5)) * fVar25;
        *(undefined4 *)(lVar5 + 0x2c) = uVar23;
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
      unaff_s8 = *(float *)(lVar5 + 0x24);
      fVar17 = *(float *)(lVar5 + 0x28);
    } while ((unaff_w24 != 0) && (in_stack_000000b8._4_4_ == fVar17));
    fVar13 = fStack0000000000000068 + fStack000000000000006c * fVar17;
    if (*(char *)(unaff_x19 + 0x38) != '\0') {
      fVar13 = fVar13 + (fVar13 - *(float *)(unaff_x19 + 0x3c)) * *(float *)(unaff_x19 + 0x40);
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0301e314;
    fVar13 = in_stack_00000038._4_4_ * fVar13;
    bVar2 = fVar13 < 0.0;
    if (*(char *)(*(long *)(unaff_x19 + 0x10) + 0x32) == '\0') {
      fVar11 = 0.0;
      if ((!bVar2) && (fVar11 = fVar13, 1.0 < fVar13)) {
        fVar11 = 1.0;
      }
    }
    else {
      while (bVar2) {
        fVar13 = fVar13 + 1.0;
        bVar2 = fVar13 < 0.0;
      }
      for (; fVar11 = fVar13, 1.0 < fVar13; fVar13 = fVar13 + -1.0) {
      }
    }
    uVar3 = FUN_02fcde38(fVar11,in_stack_000000e8,unaff_w28,0);
    fVar13 = 1.0;
    uVar8 = uStack0000000000000040;
    if (uVar3 != uStack00000000000000e0) {
      if (in_stack_000000e8 == 0) goto LAB_0301e314;
      if ((*(uint *)(in_stack_000000e8 + 0x18) <= uVar3) ||
         (*(uint *)(in_stack_000000e8 + 0x18) <= uVar3 + 1)) {
LAB_0301e310:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      fVar13 = *(float *)(in_stack_000000e8 + (long)(int)uVar3 * 4 + 0x20);
      fVar13 = (fVar11 - fVar13) /
               (*(float *)(in_stack_000000e8 + (long)(int)(uVar3 + 1) * 4 + 0x20) - fVar13);
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
    uVar14 = *(undefined8 *)(lVar7 + 0x20);
    uVar15 = *(undefined8 *)(lVar6 + 0x20);
    fVar11 = *(float *)(lVar6 + 0x28);
    fVar16 = *(float *)(lVar7 + 0x28);
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
        uVar15 = thunk_FUN_01a6ca08(PTR_DAT_03d28a00);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar14,uVar15);
      }
      if (*(char *)(unaff_x19 + 0x50) == '\0') goto LAB_0301df28;
      lVar6 = *(long *)(unaff_x19 + 0x10);
      if (lVar6 == 0) goto LAB_0301e314;
      fVar18 = (float)FUN_0300b038(uVar8,*(undefined4 *)(lVar5 + 0x14),*(undefined8 *)(lVar6 + 0x38)
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
      fVar19 = *(float *)(lVar5 + 0x24);
      lVar6 = *(long *)(lVar5 + 0x28);
      lVar7 = *(long *)(lVar5 + 0x30);
      uVar12 = FUN_01cbd448(fVar18 - *(float *)(lVar5 + 0x1c),0x3f800000,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      fVar18 = (float)FUN_0366c2a0(lVar6,0);
      in_stack_000000f0 = in_stack_000000f0 * fVar18;
      unaff_s15 = in_stack_000000f0;
      if (cVar1 == '\0') {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        fVar18 = (float)FUN_0366c2a0(uVar12,lVar7,0);
        unaff_s15 = fVar19 * fVar18;
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
    param_2 = (ulong)*(uint *)(lVar5 + 0x24);
    param_3 = *(float *)(lVar5 + 0x28);
    param_4 = (ulong)*(uint *)(in_stack_00000048 + lVar10 * 0xc + 0x20);
    unaff_x26 = 0xc;
    uVar4 = FUN_036c0d90(*(undefined4 *)(lVar5 + 0x20),0);
    if ((*(uint *)(in_stack_00000050 + 0x18) <= uVar3) ||
       (*(uint *)(in_stack_00000048 + 0x18) <= uVar3)) goto LAB_0301e310;
    fVar18 = (float)uVar15;
    fVar19 = (float)((ulong)uVar15 >> 0x20);
    lVar5 = in_stack_00000050 + lVar9 * 0xc;
    unaff_d10 = CONCAT44((float)((ulong)in_stack_00000030 >> 0x20) *
                         ((fVar19 + ((float)((ulong)uVar14 >> 0x20) - fVar19) * fVar13) -
                         (float)((ulong)in_stack_00000070 >> 0x20)),
                         (float)in_stack_00000030 *
                         ((fVar18 + ((float)uVar14 - fVar18) * fVar13) - (float)in_stack_00000070));
    lVar6 = in_stack_00000048 + lVar9 * 0xc;
    unaff_s13 = in_stack_00000028._4_4_ *
                ((fVar11 + fVar13 * (fVar16 - fVar11)) - fStack0000000000000044);
    FUN_036c0d90(*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                 *(undefined4 *)(lVar5 + 0x28),*(undefined4 *)(lVar6 + 0x20),
                 *(undefined4 *)(lVar6 + 0x24),*(undefined4 *)(lVar6 + 0x28),0);
    param_1 = (float)FUN_036c0a20(uVar4,0);
    param_8 = param_1 + param_1;
    param_6 = (float)param_2;
    in_s16 = param_6 + param_6;
    in_s17 = param_3 + param_3;
    param_5 = param_1 * param_8;
    param_6 = param_6 * in_s16;
    param_3 = param_3 * in_s17;
    param_7 = param_1 * in_s16;
    in_stack_000000b8._4_4_ = fVar17;
  } while( true );
}


