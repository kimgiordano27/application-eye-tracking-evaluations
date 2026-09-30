/*
FUNCTION_NAME: EntityNameStoreAccess$$Dispose
ENTRY_POINT: 0301de30
PROGRAM: vrlegs-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0301df1c) */
/* WARNING: Removing unreachable block (ram,0x0301df20) */
/* WARNING: Removing unreachable block (ram,0x0301e34c) */

void EntityNameStoreAccess__Dispose(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  uint unaff_w25;
  uint unaff_w26;
  long unaff_x27;
  undefined4 unaff_w28;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_s8;
  float fVar18;
  float fVar19;
  float unaff_s14;
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
  undefined8 in_stack_00000090;
  float fStack0000000000000098;
  float fStack000000000000009c;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  uint uStack00000000000000e0;
  uint uStack00000000000000e4;
  long in_stack_000000e8;
  float in_stack_00000100;
  long in_stack_00000118;
  undefined8 in_stack_00000178;
  
  do {
    if (*(char *)(unaff_x19 + 0x50) == '\0') goto LAB_0301df28;
                    /* try { // try from 0301de38 to 0311de3f has its CatchHandler @ 0301de40 */
    lVar6 = *(long *)(unaff_x19 + 0x10);
    if (lVar6 == 0) {
LAB_0301e314:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* catch() { ... } // from try @ 0301ddc4 with catch @ 0301de40
                       catch() { ... } // from try @ 0301de38 with catch @ 0301de40 */
    fVar8 = (float)FUN_0300b038(unaff_w26,*(undefined4 *)(param_1 + 0x14),
                                *(undefined8 *)(lVar6 + 0x38),*(undefined8 *)(lVar6 + 0x40),
                                *(undefined8 *)(lVar6 + 0x48),*(undefined8 *)(lVar6 + 0x50),0);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x48);
    in_stack_00000178._4_1_ = '\0';
    FUN_027e0bd8(uVar5,(long)&stack0x00000178 + 4,0);
    lVar6 = *(long *)(unaff_x19 + 0x48);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    fVar19 = *(float *)(lVar6 + 0x20);
    cVar2 = *(char *)(lVar6 + 0x18);
    fVar18 = *(float *)(lVar6 + 0x24);
    lVar7 = *(long *)(lVar6 + 0x28);
    lVar1 = *(long *)(lVar6 + 0x30);
    uVar11 = FUN_01cbd448(fVar8 - *(float *)(lVar6 + 0x1c),0x3f800000,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    fVar8 = (float)FUN_0366c2a0(lVar7,0);
    fVar19 = fVar19 * fVar8;
    fVar8 = fVar19;
    if (cVar2 == '\0') {
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      fVar8 = (float)FUN_0366c2a0(uVar11,lVar1,0);
      fVar8 = fVar18 * fVar8;
    }
    unaff_w28 = in_stack_00000018._4_4_;
    if (in_stack_00000178._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
    }
LAB_0301df38:
    if (in_stack_00000050 == 0) goto LAB_0301e314;
    if (*(uint *)(in_stack_00000050 + 0x18) <= unaff_w26) {
LAB_0301e310:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (in_stack_00000048 == 0) goto LAB_0301e314;
    if (*(uint *)(in_stack_00000048 + 0x18) <= unaff_w26) goto LAB_0301e310;
    lVar6 = in_stack_00000050 + unaff_x27 * 0xc;
    fVar18 = *(float *)(lVar6 + 0x24);
    fVar12 = *(float *)(lVar6 + 0x28);
    fVar14 = *(float *)(in_stack_00000048 + unaff_x27 * 0xc + 0x20);
    uVar5 = FUN_036c0d90(*(undefined4 *)(lVar6 + 0x20),0);
    if ((*(uint *)(in_stack_00000050 + 0x18) <= unaff_w25) ||
       (*(uint *)(in_stack_00000048 + 0x18) <= unaff_w25)) goto LAB_0301e310;
    fVar13 = (float)((ulong)in_stack_000000a0 >> 0x20);
    lVar6 = in_stack_00000050 + unaff_x21 * 0xc;
    lVar7 = in_stack_00000048 + unaff_x21 * 0xc;
    FUN_036c0d90(*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),
                 *(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar7 + 0x20),
                 *(undefined4 *)(lVar7 + 0x24),*(undefined4 *)(lVar7 + 0x28),0);
    fVar9 = (float)FUN_036c0a20(uVar5,0);
    fVar20 = fVar18 + fVar18;
    fVar22 = fVar12 + fVar12;
    fVar15 = fVar9 * (fVar9 + fVar9);
    fVar16 = fVar18 * fVar20;
    fVar10 = fVar9 * fVar22;
    fVar18 = fVar18 * fVar22;
    fVar17 = fVar14 * (fVar9 + fVar9);
    fVar21 = fVar14 * fVar20;
    do {
      if (unaff_x22 == 0) goto LAB_0301e314;
      uVar4 = (uint)unaff_x20;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar4) goto LAB_0301e310;
      fVar24 = fVar14 * fVar22 + fVar9 * fVar20;
      fVar25 = fVar10 - fVar21;
      fVar27 = 1.0 - (fVar12 * fVar22 + fVar16);
      fVar28 = 1.0 - (fVar12 * fVar22 + fVar15);
      fVar23 = fVar9 * fVar20 - fVar14 * fVar22;
      fVar26 = fVar17 + fVar18;
      lVar6 = unaff_x22 + unaff_x20 * 0xc;
      *(float *)(lVar6 + 0x20) =
           unaff_s14 * fVar23 * fVar8 +
           (float)in_stack_00000030 *
           (((float)in_stack_000000a0 +
            ((float)in_stack_00000090 - (float)in_stack_000000a0) * in_stack_00000100) -
           (float)in_stack_00000070) + unaff_s8 * fVar27 * fVar19;
      *(float *)(lVar6 + 0x24) =
           unaff_s14 * fVar28 * fVar8 +
           (float)((ulong)in_stack_00000030 >> 0x20) *
           ((fVar13 + ((float)((ulong)in_stack_00000090 >> 0x20) - fVar13) * in_stack_00000100) -
           (float)((ulong)in_stack_00000070 >> 0x20)) + unaff_s8 * fVar24 * fVar19;
      *(float *)(lVar6 + 0x28) =
           unaff_s14 * fVar26 * fVar8 +
           in_stack_00000028._4_4_ *
           ((fStack000000000000009c +
            in_stack_00000100 * (fStack0000000000000098 - fStack000000000000009c)) -
           fStack0000000000000044) + unaff_s8 * fVar25 * fVar19;
      if ((int)uVar4 < in_stack_000000d8._4_4_) {
        if (in_stack_000000d0 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar4) goto LAB_0301e310;
        if (in_stack_00000060 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_00000060 + 0x18) <= uVar4) goto LAB_0301e310;
        lVar6 = in_stack_000000d0 + unaff_x20 * 0xc;
        fVar30 = *(float *)(lVar6 + 0x20);
        fVar31 = *(float *)(lVar6 + 0x24);
        fVar32 = *(float *)(lVar6 + 0x28);
        lVar6 = in_stack_00000060 + unaff_x20 * 0xc;
        *(float *)(lVar6 + 0x20) = fVar27 * fVar30 + fVar23 * fVar31 + (fVar21 + fVar10) * fVar32;
        *(float *)(lVar6 + 0x24) = fVar24 * fVar30 + fVar28 * fVar31 + (fVar18 - fVar17) * fVar32;
        *(float *)(lVar6 + 0x28) =
             fVar25 * fVar30 + fVar26 * fVar31 + (1.0 - (fVar16 + fVar15)) * fVar32;
      }
      if ((int)uVar4 < in_stack_000000c8._4_4_) {
        if (in_stack_000000c0 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_000000c0 + 0x18) <= uVar4) goto LAB_0301e310;
        if (in_stack_00000058 == 0) goto LAB_0301e314;
        if (*(uint *)(in_stack_00000058 + 0x18) <= uVar4) goto LAB_0301e310;
        lVar6 = in_stack_000000c0 + unaff_x20 * 0x10;
        fVar30 = *(float *)(lVar6 + 0x20);
        fVar32 = *(float *)(lVar6 + 0x24);
        fVar31 = *(float *)(lVar6 + 0x28);
        uVar29 = *(undefined4 *)(lVar6 + 0x2c);
        lVar6 = in_stack_00000058 + unaff_x20 * 0x10;
        *(float *)(lVar6 + 0x20) = fVar27 * fVar30 + fVar23 * fVar32 + (fVar21 + fVar10) * fVar31;
        *(float *)(lVar6 + 0x24) = fVar24 * fVar30 + fVar28 * fVar32 + (fVar18 - fVar17) * fVar31;
        *(float *)(lVar6 + 0x28) =
             fVar25 * fVar30 + fVar26 * fVar32 + (1.0 - (fVar16 + fVar15)) * fVar31;
        *(undefined4 *)(lVar6 + 0x2c) = uVar29;
      }
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w24 == uStack00000000000000e4) {
        return;
      }
      if (*(uint *)(in_stack_00000118 + 0x18) <= unaff_w24) goto LAB_0301e310;
      if (in_stack_00000088 == 0) goto LAB_0301e314;
      uVar4 = *(uint *)(in_stack_00000118 + (long)(int)unaff_w24 * 4 + 0x20);
      unaff_x20 = (long)(int)uVar4;
      if (*(uint *)(in_stack_00000088 + 0x18) <= uVar4) goto LAB_0301e310;
      lVar6 = in_stack_00000088 + unaff_x20 * 0xc;
      unaff_s8 = *(float *)(lVar6 + 0x20);
      unaff_s14 = *(float *)(lVar6 + 0x24);
      fVar23 = *(float *)(lVar6 + 0x28);
    } while ((unaff_w24 != 0) && (in_stack_000000b8._4_4_ == fVar23));
    fVar8 = fStack0000000000000068 + fStack000000000000006c * fVar23;
    if (*(char *)(unaff_x19 + 0x38) != '\0') {
      fVar8 = fVar8 + (fVar8 - *(float *)(unaff_x19 + 0x3c)) * *(float *)(unaff_x19 + 0x40);
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0301e314;
    fVar8 = in_stack_00000038._4_4_ * fVar8;
    bVar3 = fVar8 < 0.0;
    if (*(char *)(*(long *)(unaff_x19 + 0x10) + 0x32) == '\0') {
      fVar19 = 0.0;
      if ((!bVar3) && (fVar19 = fVar8, 1.0 < fVar8)) {
        fVar19 = 1.0;
      }
    }
    else {
      while (bVar3) {
        fVar8 = fVar8 + 1.0;
        bVar3 = fVar8 < 0.0;
      }
      for (; fVar19 = fVar8, 1.0 < fVar8; fVar8 = fVar8 + -1.0) {
      }
    }
    uVar4 = FUN_02fcde38(fVar19,in_stack_000000e8,unaff_w28,0);
    in_stack_00000100 = 1.0;
    unaff_w26 = uStack0000000000000040;
    if (uVar4 != uStack00000000000000e0) {
      if (in_stack_000000e8 == 0) goto LAB_0301e314;
      if ((*(uint *)(in_stack_000000e8 + 0x18) <= uVar4) ||
         (*(uint *)(in_stack_000000e8 + 0x18) <= uVar4 + 1)) goto LAB_0301e310;
      fVar8 = *(float *)(in_stack_000000e8 + (long)(int)uVar4 * 4 + 0x20);
      in_stack_00000100 =
           (fVar19 - fVar8) /
           (*(float *)(in_stack_000000e8 + (long)(int)(uVar4 + 1) * 4 + 0x20) - fVar8);
      unaff_w26 = uVar4;
    }
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    unaff_w25 = FUN_0276c214(unaff_w26 + 1,uStack00000000000000e0,0);
    if (in_stack_00000080 == 0) goto LAB_0301e314;
    if ((*(uint *)(in_stack_00000080 + 0x18) <= unaff_w26) ||
       (*(uint *)(in_stack_00000080 + 0x18) <= unaff_w25)) goto LAB_0301e310;
    param_1 = *(long *)(unaff_x19 + 0x48);
    if (param_1 == 0) goto LAB_0301e314;
    unaff_x27 = (long)(int)unaff_w26;
    unaff_x21 = (long)(int)unaff_w25;
    lVar6 = in_stack_00000080 + unaff_x27 * 0xc;
    lVar7 = in_stack_00000080 + unaff_x21 * 0xc;
    in_stack_00000090 = *(undefined8 *)(lVar7 + 0x20);
    in_stack_000000a0 = *(undefined8 *)(lVar6 + 0x20);
    fStack000000000000009c = *(float *)(lVar6 + 0x28);
    fStack0000000000000098 = *(float *)(lVar7 + 0x28);
    in_stack_000000b8._4_4_ = fVar23;
    if (*(int *)(param_1 + 0x10) == 0) {
LAB_0301df28:
      fVar19 = *(float *)(param_1 + 0x20);
      fVar8 = *(float *)(param_1 + 0x24);
      if (*(char *)(param_1 + 0x18) != '\0') {
        fVar8 = fVar19;
      }
      goto LAB_0301df38;
    }
    if (*(int *)(param_1 + 0x10) != 1) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
      uVar5 = thunk_FUN_01a89e68();
      FUN_026b3f6c(uVar5,0);
      uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03d28a00);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar11);
    }
  } while( true );
}


