/*
FUNCTION_NAME: EntityNameStoreAccess$$get_NameChangeBitsSequenceNum
ENTRY_POINT: 0301dd38
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

void EntityNameStoreAccess__get_NameChangeBitsSequenceNum(long param_1,ulong param_2)

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
  long lVar10;
  ulong unaff_x28;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float unaff_s8;
  ulong unaff_d10;
  float fVar27;
  float fVar28;
  float unaff_s14;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  ulong in_stack_00000018;
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
  long in_stack_00000118;
  undefined8 in_stack_00000178;
  
  do {
    uVar3 = FUN_02fcde38(unaff_d10,param_1,param_2,0);
    fVar11 = 1.0;
                    /* try { // try from 0301dd50 to 0311dd57 has its CatchHandler @ 0301dd94 */
    uVar8 = uStack0000000000000040;
    if (uVar3 != uStack00000000000000e0) {
      if (in_stack_000000e8 == 0) {
LAB_0301e314:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((*(uint *)(in_stack_000000e8 + 0x18) <= uVar3) ||
         (*(uint *)(in_stack_000000e8 + 0x18) <= uVar3 + 1)) goto LAB_0301e310;
      fVar11 = *(float *)(in_stack_000000e8 + (long)(int)uVar3 * 4 + 0x20);
      fVar11 = ((float)unaff_d10 - fVar11) /
               (*(float *)(in_stack_000000e8 + (long)(int)(uVar3 + 1) * 4 + 0x20) - fVar11);
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
    uVar19 = *(undefined8 *)(lVar7 + 0x20);
    uVar29 = *(undefined8 *)(lVar6 + 0x20);
    fVar12 = *(float *)(lVar6 + 0x28);
    fVar18 = *(float *)(lVar7 + 0x28);
    if (*(int *)(lVar5 + 0x10) == 0) {
LAB_0301df28:
      fVar28 = *(float *)(lVar5 + 0x20);
      fVar13 = *(float *)(lVar5 + 0x24);
      if (*(char *)(lVar5 + 0x18) != '\0') {
        fVar13 = fVar28;
      }
    }
    else {
      if (*(int *)(lVar5 + 0x10) != 1) {
        thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
        uVar19 = thunk_FUN_01a89e68();
        FUN_026b3f6c(uVar19,0);
        uVar29 = thunk_FUN_01a6ca08(PTR_DAT_03d28a00);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar19,uVar29);
      }
      if (*(char *)(unaff_x19 + 0x50) == '\0') goto LAB_0301df28;
      lVar6 = *(long *)(unaff_x19 + 0x10);
      if (lVar6 == 0) goto LAB_0301e314;
      fVar13 = (float)FUN_0300b038(uVar8,*(undefined4 *)(lVar5 + 0x14),*(undefined8 *)(lVar6 + 0x38)
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
      fVar28 = *(float *)(lVar5 + 0x20);
      cVar1 = *(char *)(lVar5 + 0x18);
      fVar27 = *(float *)(lVar5 + 0x24);
      lVar6 = *(long *)(lVar5 + 0x28);
      lVar7 = *(long *)(lVar5 + 0x30);
      uVar17 = FUN_01cbd448(fVar13 - *(float *)(lVar5 + 0x1c),0x3f800000,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      fVar13 = (float)FUN_0366c2a0(lVar6,0);
      fVar28 = fVar28 * fVar13;
      fVar13 = fVar28;
      if (cVar1 == '\0') {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        fVar13 = (float)FUN_0366c2a0(uVar17,lVar7,0);
        fVar13 = fVar27 * fVar13;
      }
      unaff_x28 = in_stack_00000018 >> 0x20;
      if (in_stack_00000178._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
      }
    }
    if (in_stack_00000050 == 0) goto LAB_0301e314;
    if (*(uint *)(in_stack_00000050 + 0x18) <= uVar8) {
LAB_0301e310:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (in_stack_00000048 == 0) goto LAB_0301e314;
    if (*(uint *)(in_stack_00000048 + 0x18) <= uVar8) goto LAB_0301e310;
    lVar5 = in_stack_00000050 + lVar10 * 0xc;
    fVar27 = *(float *)(lVar5 + 0x24);
    fVar20 = *(float *)(lVar5 + 0x28);
    fVar23 = *(float *)(in_stack_00000048 + lVar10 * 0xc + 0x20);
    uVar4 = FUN_036c0d90(*(undefined4 *)(lVar5 + 0x20),0);
    if ((*(uint *)(in_stack_00000050 + 0x18) <= uVar3) ||
       (*(uint *)(in_stack_00000048 + 0x18) <= uVar3)) goto LAB_0301e310;
    fVar21 = (float)uVar29;
    fVar22 = (float)((ulong)uVar29 >> 0x20);
    lVar5 = in_stack_00000050 + lVar9 * 0xc;
    lVar6 = in_stack_00000048 + lVar9 * 0xc;
    FUN_036c0d90(*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                 *(undefined4 *)(lVar5 + 0x28),*(undefined4 *)(lVar6 + 0x20),
                 *(undefined4 *)(lVar6 + 0x24),*(undefined4 *)(lVar6 + 0x28),0);
    fVar14 = (float)FUN_036c0a20(uVar4,0);
    fVar30 = fVar27 + fVar27;
    fVar32 = fVar20 + fVar20;
    fVar24 = fVar14 * (fVar14 + fVar14);
    fVar25 = fVar27 * fVar30;
    fVar15 = fVar14 * fVar32;
    fVar27 = fVar27 * fVar32;
    fVar26 = fVar23 * (fVar14 + fVar14);
    fVar31 = fVar23 * fVar30;
    do {
      if (unaff_x22 == 0) goto LAB_0301e314;
      uVar8 = (uint)unaff_x20;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar8) goto LAB_0301e310;
      fVar34 = fVar23 * fVar32 + fVar14 * fVar30;
      fVar35 = fVar15 - fVar31;
      fVar37 = 1.0 - (fVar20 * fVar32 + fVar25);
      fVar38 = 1.0 - (fVar20 * fVar32 + fVar24);
      fVar33 = fVar14 * fVar30 - fVar23 * fVar32;
      fVar36 = fVar26 + fVar27;
      lVar5 = unaff_x22 + unaff_x20 * 0xc;
      *(float *)(lVar5 + 0x20) =
           unaff_s14 * fVar33 * fVar13 +
           (float)in_stack_00000030 *
           ((fVar21 + ((float)uVar19 - fVar21) * fVar11) - (float)in_stack_00000070) +
           unaff_s8 * fVar37 * fVar28;
      *(float *)(lVar5 + 0x24) =
           unaff_s14 * fVar38 * fVar13 +
           (float)((ulong)in_stack_00000030 >> 0x20) *
           ((fVar22 + ((float)((ulong)uVar19 >> 0x20) - fVar22) * fVar11) -
           (float)((ulong)in_stack_00000070 >> 0x20)) + unaff_s8 * fVar34 * fVar28;
      *(float *)(lVar5 + 0x28) =
           unaff_s14 * fVar36 * fVar13 +
           in_stack_00000028._4_4_ *
           ((fVar12 + fVar11 * (fVar18 - fVar12)) - fStack0000000000000044) +
           unaff_s8 * fVar35 * fVar28;
      if ((int)uVar8 < in_stack_000000d8._4_4_) {
        if (in_stack_000000d0 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar8) goto LAB_0301e310;
        if (in_stack_00000060 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_00000060 + 0x18) <= uVar8) goto LAB_0301e310;
        lVar5 = in_stack_000000d0 + unaff_x20 * 0xc;
        fVar40 = *(float *)(lVar5 + 0x20);
        fVar41 = *(float *)(lVar5 + 0x24);
        fVar42 = *(float *)(lVar5 + 0x28);
        lVar5 = in_stack_00000060 + unaff_x20 * 0xc;
        *(float *)(lVar5 + 0x20) = fVar37 * fVar40 + fVar33 * fVar41 + (fVar31 + fVar15) * fVar42;
        *(float *)(lVar5 + 0x24) = fVar34 * fVar40 + fVar38 * fVar41 + (fVar27 - fVar26) * fVar42;
        *(float *)(lVar5 + 0x28) =
             fVar35 * fVar40 + fVar36 * fVar41 + (1.0 - (fVar25 + fVar24)) * fVar42;
      }
      if ((int)uVar8 < in_stack_000000c8._4_4_) {
        if (in_stack_000000c0 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_000000c0 + 0x18) <= uVar8) goto LAB_0301e310;
        if (in_stack_00000058 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_00000058 + 0x18) <= uVar8) goto LAB_0301e310;
        lVar5 = in_stack_000000c0 + unaff_x20 * 0x10;
        fVar40 = *(float *)(lVar5 + 0x20);
        fVar42 = *(float *)(lVar5 + 0x24);
        fVar41 = *(float *)(lVar5 + 0x28);
        uVar39 = *(undefined4 *)(lVar5 + 0x2c);
        lVar5 = in_stack_00000058 + unaff_x20 * 0x10;
        *(float *)(lVar5 + 0x20) = fVar37 * fVar40 + fVar33 * fVar42 + (fVar31 + fVar15) * fVar41;
        *(float *)(lVar5 + 0x24) = fVar34 * fVar40 + fVar38 * fVar42 + (fVar27 - fVar26) * fVar41;
        *(float *)(lVar5 + 0x28) =
             fVar35 * fVar40 + fVar36 * fVar42 + (1.0 - (fVar25 + fVar24)) * fVar41;
        *(undefined4 *)(lVar5 + 0x2c) = uVar39;
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
      lVar5 = in_stack_00000088 + unaff_x20 * 0xc;
      unaff_s8 = *(float *)(lVar5 + 0x20);
      unaff_s14 = *(float *)(lVar5 + 0x24);
      fVar33 = *(float *)(lVar5 + 0x28);
    } while ((unaff_w24 != 0) && (in_stack_000000b8._4_4_ == fVar33));
    fVar11 = fStack0000000000000068 + fStack000000000000006c * fVar33;
    if (*(char *)(unaff_x19 + 0x38) != '\0') {
      fVar11 = fVar11 + (fVar11 - *(float *)(unaff_x19 + 0x3c)) * *(float *)(unaff_x19 + 0x40);
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0301e314;
    fVar11 = in_stack_00000038._4_4_ * fVar11;
    uVar16 = (ulong)(uint)fVar11;
    bVar2 = fVar11 < 0.0;
    if (*(char *)(*(long *)(unaff_x19 + 0x10) + 0x32) == '\0') {
      unaff_d10 = 0;
      if ((!bVar2) && (unaff_d10 = uVar16, 1.0 < fVar11)) {
        unaff_d10 = 0x3f800000;
      }
    }
    else {
      while (fVar11 = (float)uVar16, bVar2) {
        uVar16 = (ulong)(uint)(fVar11 + 1.0);
        bVar2 = fVar11 + 1.0 < 0.0;
      }
      while (unaff_d10 = uVar16, 1.0 < fVar11) {
        fVar11 = (float)uVar16 + -1.0;
        uVar16 = (ulong)(uint)fVar11;
      }
    }
    param_2 = unaff_x28 & 0xffffffff;
    param_1 = in_stack_000000e8;
    in_stack_000000b8._4_4_ = fVar33;
  } while( true );
}


