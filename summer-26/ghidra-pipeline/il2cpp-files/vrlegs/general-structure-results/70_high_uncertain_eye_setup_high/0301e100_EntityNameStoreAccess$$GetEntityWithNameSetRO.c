/*
FUNCTION_NAME: EntityNameStoreAccess$$GetEntityWithNameSetRO
ENTRY_POINT: 0301e100
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

void EntityNameStoreAccess__GetEntityWithNameSetRO
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  int in_w9;
  long lVar6;
  long in_x10;
  long lVar7;
  long unaff_x19;
  uint uVar8;
  long unaff_x20;
  long lVar9;
  long unaff_x22;
  uint unaff_w24;
  uint uVar10;
  long unaff_x26;
  long lVar11;
  undefined4 unaff_w28;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  float unaff_s8;
  undefined8 unaff_d10;
  float fVar16;
  float unaff_s12;
  float fVar17;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 uVar18;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float in_s21;
  float in_s22;
  float in_s23;
  float in_s24;
  float in_s25;
  float in_s27;
  undefined4 uVar19;
  float in_s28;
  float fVar20;
  float in_s29;
  float fVar21;
  float fVar22;
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
  
  do {
    lVar5 = unaff_x22 + unaff_x20 * unaff_x26;
    uVar8 = (uint)unaff_x20;
    *(float *)(lVar5 + 0x20) = unaff_s14 * in_s19 * in_s18 + (float)unaff_d10 + unaff_s8 * in_s29;
    *(float *)(lVar5 + 0x24) = unaff_s14 * in_s27 + in_s25;
    *(float *)(lVar5 + 0x28) = unaff_s14 * in_s22 * in_s18 + unaff_s13 + unaff_s8 * in_s28;
    if ((int)uVar8 < in_w9) {
      if (in_stack_000000d0 == 0) goto LAB_0301e314;
      if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar8) goto LAB_0301e310;
      if (in_stack_00000060 == 0) goto LAB_0301e314;
                    /* try { // try from 0301e168 to 0311e17b has its CatchHandler @ 0301e270 */
      if (*(uint *)(in_stack_00000060 + 0x18) <= uVar8) goto LAB_0301e310;
      lVar5 = in_stack_000000d0 + unaff_x20 * 0xc;
      fVar20 = *(float *)(lVar5 + 0x20);
      fVar21 = *(float *)(lVar5 + 0x24);
      fVar22 = *(float *)(lVar5 + 0x28);
      unaff_x26 = 0xc;
      lVar5 = in_stack_00000060 + unaff_x20 * 0xc;
      *(float *)(lVar5 + 0x20) = in_s23 * fVar20 + in_s19 * fVar21 + (in_s16 + param_1) * fVar22;
      *(float *)(lVar5 + 0x24) = in_s20 * fVar20 + in_s24 * fVar21 + (param_2 - param_8) * fVar22;
      *(float *)(lVar5 + 0x28) =
           in_s21 * fVar20 + in_s22 * fVar21 + (unaff_s15 - (param_6 + param_5)) * fVar22;
    }
    if ((int)uVar8 < in_stack_000000c8._4_4_) {
      if (in_stack_000000c0 == 0) goto LAB_0301e314;
      if (*(uint *)(in_stack_000000c0 + 0x18) <= uVar8) goto LAB_0301e310;
      if (in_stack_00000058 == 0) goto LAB_0301e314;
      if (*(uint *)(in_stack_00000058 + 0x18) <= uVar8) goto LAB_0301e310;
      lVar5 = in_stack_000000c0 + unaff_x20 * 0x10;
      fVar20 = *(float *)(lVar5 + 0x20);
      fVar22 = *(float *)(lVar5 + 0x24);
      fVar21 = *(float *)(lVar5 + 0x28);
      uVar19 = *(undefined4 *)(lVar5 + 0x2c);
      lVar5 = in_stack_00000058 + unaff_x20 * 0x10;
      *(float *)(lVar5 + 0x20) = in_s23 * fVar20 + in_s19 * fVar22 + (in_s16 + param_1) * fVar21;
      *(float *)(lVar5 + 0x24) = in_s20 * fVar20 + in_s24 * fVar22 + (param_2 - param_8) * fVar21;
      *(float *)(lVar5 + 0x28) =
           in_s21 * fVar20 + in_s22 * fVar22 + (unaff_s15 - (param_6 + param_5)) * fVar21;
      *(undefined4 *)(lVar5 + 0x2c) = uVar19;
    }
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w24 == uStack00000000000000e4) {
      return;
    }
    if (*(uint *)(in_stack_00000118 + 0x18) <= unaff_w24) goto LAB_0301e310;
    if (in_x10 == 0) goto LAB_0301e314;
    uVar8 = *(uint *)(in_stack_00000118 + (long)(int)unaff_w24 * 4 + 0x20);
    unaff_x20 = (long)(int)uVar8;
    if (*(uint *)(in_x10 + 0x18) <= uVar8) goto LAB_0301e310;
    lVar5 = in_x10 + unaff_x20 * unaff_x26;
    unaff_s8 = *(float *)(lVar5 + 0x20);
    unaff_s14 = *(float *)(lVar5 + 0x24);
    fVar20 = *(float *)(lVar5 + 0x28);
    if ((unaff_w24 == 0) || (param_4 != fVar20)) {
      fVar21 = fStack0000000000000068 + fStack000000000000006c * fVar20;
      if (*(char *)(unaff_x19 + 0x38) != '\0') {
        fVar21 = fVar21 + (fVar21 - *(float *)(unaff_x19 + 0x3c)) * *(float *)(unaff_x19 + 0x40);
      }
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0301e314;
      fVar21 = in_stack_00000038._4_4_ * fVar21;
      bVar2 = fVar21 < 0.0;
      if (*(char *)(*(long *)(unaff_x19 + 0x10) + 0x32) == '\0') {
        fVar22 = 0.0;
        if ((!bVar2) && (fVar22 = fVar21, unaff_s15 < fVar21)) {
          fVar22 = 1.0;
        }
      }
      else {
        while (bVar2) {
          fVar21 = fVar21 + unaff_s15;
          bVar2 = fVar21 < 0.0;
        }
        for (; fVar22 = fVar21, unaff_s15 < fVar21; fVar21 = fVar21 + -1.0) {
        }
      }
      uVar3 = FUN_02fcde38(fVar22,in_stack_000000e8,unaff_w28,0);
      fVar21 = 1.0;
      uVar10 = uStack0000000000000040;
      if (uVar3 != uStack00000000000000e0) {
        if (in_stack_000000e8 == 0) goto LAB_0301e314;
        if ((*(uint *)(in_stack_000000e8 + 0x18) <= uVar3) ||
           (*(uint *)(in_stack_000000e8 + 0x18) <= uVar3 + 1)) {
LAB_0301e310:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        fVar21 = *(float *)(in_stack_000000e8 + (long)(int)uVar3 * 4 + 0x20);
        fVar21 = (fVar22 - fVar21) /
                 (*(float *)(in_stack_000000e8 + (long)(int)(uVar3 + 1) * 4 + 0x20) - fVar21);
        uVar10 = uVar3;
      }
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_0276c214(uVar10 + 1,uStack00000000000000e0,0);
      if (in_stack_00000080 == 0) goto LAB_0301e314;
      if ((*(uint *)(in_stack_00000080 + 0x18) <= uVar10) ||
         (*(uint *)(in_stack_00000080 + 0x18) <= uVar3)) goto LAB_0301e310;
      lVar5 = *(long *)(unaff_x19 + 0x48);
      if (lVar5 == 0) goto LAB_0301e314;
      lVar11 = (long)(int)uVar10;
      lVar9 = (long)(int)uVar3;
      lVar6 = in_stack_00000080 + lVar11 * 0xc;
      lVar7 = in_stack_00000080 + lVar9 * 0xc;
      uVar15 = *(undefined8 *)(lVar7 + 0x20);
      uVar18 = *(undefined8 *)(lVar6 + 0x20);
      fVar22 = *(float *)(lVar6 + 0x28);
      fVar14 = *(float *)(lVar7 + 0x28);
      if (*(int *)(lVar5 + 0x10) == 0) {
LAB_0301df28:
        unaff_s12 = *(float *)(lVar5 + 0x20);
        in_s18 = *(float *)(lVar5 + 0x24);
        if (*(char *)(lVar5 + 0x18) != '\0') {
          in_s18 = unaff_s12;
        }
      }
      else {
        if (*(int *)(lVar5 + 0x10) != 1) {
          thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
          uVar15 = thunk_FUN_01a89e68();
          FUN_026b3f6c(uVar15,0);
          uVar18 = thunk_FUN_01a6ca08(PTR_DAT_03d28a00);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar15,uVar18);
        }
        if (*(char *)(unaff_x19 + 0x50) == '\0') goto LAB_0301df28;
        lVar6 = *(long *)(unaff_x19 + 0x10);
        if (lVar6 == 0) goto LAB_0301e314;
        fVar12 = (float)FUN_0300b038(uVar10,*(undefined4 *)(lVar5 + 0x14),
                                     *(undefined8 *)(lVar6 + 0x38),*(undefined8 *)(lVar6 + 0x40),
                                     *(undefined8 *)(lVar6 + 0x48),*(undefined8 *)(lVar6 + 0x50),0);
        uVar4 = *(undefined8 *)(unaff_x19 + 0x48);
        in_stack_00000178._4_1_ = '\0';
        FUN_027e0bd8(uVar4,(long)&stack0x00000178 + 4,0);
        lVar5 = *(long *)(unaff_x19 + 0x48);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        fVar17 = *(float *)(lVar5 + 0x20);
        cVar1 = *(char *)(lVar5 + 0x18);
        fVar16 = *(float *)(lVar5 + 0x24);
        lVar6 = *(long *)(lVar5 + 0x28);
        lVar7 = *(long *)(lVar5 + 0x30);
        uVar13 = FUN_01cbd448(fVar12 - *(float *)(lVar5 + 0x1c),0x3f800000,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        fVar12 = (float)FUN_0366c2a0(lVar6,0);
        unaff_s12 = fVar17 * fVar12;
        in_s18 = unaff_s12;
        if (cVar1 == '\0') {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          fVar12 = (float)FUN_0366c2a0(uVar13,lVar7,0);
          in_s18 = fVar16 * fVar12;
        }
        unaff_w28 = in_stack_00000018._4_4_;
        if (in_stack_00000178._4_1_ != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
        }
      }
      if (in_stack_00000050 == 0) goto LAB_0301e314;
      if (*(uint *)(in_stack_00000050 + 0x18) <= uVar10) goto LAB_0301e310;
      if (in_stack_00000048 == 0) goto LAB_0301e314;
      if (*(uint *)(in_stack_00000048 + 0x18) <= uVar10) goto LAB_0301e310;
      lVar5 = in_stack_00000050 + lVar11 * 0xc;
      param_2 = *(float *)(lVar5 + 0x24);
      param_3 = *(float *)(lVar5 + 0x28);
      fVar12 = *(float *)(in_stack_00000048 + lVar11 * 0xc + 0x20);
      unaff_x26 = 0xc;
      uVar4 = FUN_036c0d90(*(undefined4 *)(lVar5 + 0x20),0);
      if ((*(uint *)(in_stack_00000050 + 0x18) <= uVar3) ||
         (*(uint *)(in_stack_00000048 + 0x18) <= uVar3)) goto LAB_0301e310;
      fVar16 = (float)uVar18;
      fVar17 = (float)((ulong)uVar18 >> 0x20);
      lVar5 = in_stack_00000050 + lVar9 * 0xc;
      unaff_d10 = CONCAT44((float)((ulong)in_stack_00000030 >> 0x20) *
                           ((fVar17 + ((float)((ulong)uVar15 >> 0x20) - fVar17) * fVar21) -
                           (float)((ulong)in_stack_00000070 >> 0x20)),
                           (float)in_stack_00000030 *
                           ((fVar16 + ((float)uVar15 - fVar16) * fVar21) - (float)in_stack_00000070)
                          );
      lVar6 = in_stack_00000048 + lVar9 * 0xc;
      unaff_s13 = in_stack_00000028._4_4_ *
                  ((fVar22 + fVar21 * (fVar14 - fVar22)) - fStack0000000000000044);
      FUN_036c0d90(*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                   *(undefined4 *)(lVar5 + 0x28),*(undefined4 *)(lVar6 + 0x20),
                   *(undefined4 *)(lVar6 + 0x24),*(undefined4 *)(lVar6 + 0x28),0);
      fVar21 = (float)FUN_036c0a20(uVar4,0);
      fVar22 = param_2 + param_2;
      fVar14 = param_3 + param_3;
      param_5 = fVar21 * (fVar21 + fVar21);
      param_6 = param_2 * fVar22;
      param_3 = param_3 * fVar14;
      param_7 = fVar21 * fVar22;
      param_1 = fVar21 * fVar14;
      param_2 = param_2 * fVar14;
      param_8 = fVar12 * (fVar21 + fVar21);
      in_s16 = fVar12 * fVar22;
      in_s17 = fVar12 * fVar14;
      unaff_s15 = 1.0;
      in_x10 = in_stack_00000088;
      param_4 = fVar20;
    }
    if (unaff_x22 == 0) {
LAB_0301e314:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(unaff_x22 + 0x18) <= uVar8) goto LAB_0301e310;
    in_s20 = in_s17 + param_7;
    in_s21 = param_1 - in_s16;
    in_s23 = unaff_s15 - (param_3 + param_6);
    in_s24 = unaff_s15 - (param_3 + param_5);
    in_s19 = param_7 - in_s17;
    in_s22 = param_8 + param_2;
    in_s28 = in_s21 * unaff_s12;
    in_s29 = in_s23 * unaff_s12;
    in_s25 = (float)((ulong)unaff_d10 >> 0x20) + unaff_s8 * in_s20 * unaff_s12;
    in_s27 = in_s24 * in_s18;
    in_w9 = in_stack_000000d8._4_4_;
  } while( true );
}


