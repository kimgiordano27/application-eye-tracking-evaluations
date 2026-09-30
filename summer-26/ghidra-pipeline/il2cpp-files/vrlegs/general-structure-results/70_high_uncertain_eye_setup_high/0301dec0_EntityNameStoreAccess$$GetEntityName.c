/*
FUNCTION_NAME: EntityNameStoreAccess$$GetEntityName
ENTRY_POINT: 0301dec0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void EntityNameStoreAccess__GetEntityName(undefined1 param_1 [16],float param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
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
  long unaff_x28;
  int unaff_w29;
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
  float fVar18;
  float unaff_s8;
  float unaff_s14;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
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
  
  fVar8 = param_2;
  while( true ) {
    if (in_stack_00000178._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000020,0);
    }
    if (unaff_x28 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(unaff_x28);
    }
    if (unaff_w29 == 0x13) goto LAB_0301df38;
    if (unaff_w29 != 0) {
      return;
    }
    lVar5 = *(long *)(unaff_x19 + 0x48);
    if (lVar5 == 0) break;
    do {
      do {
        param_2 = *(float *)(lVar5 + 0x20);
        fVar8 = *(float *)(lVar5 + 0x24);
        if (*(char *)(lVar5 + 0x18) != '\0') {
          fVar8 = param_2;
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
        lVar5 = in_stack_00000050 + unaff_x27 * 0xc;
        fVar12 = *(float *)(lVar5 + 0x24);
        fVar13 = *(float *)(lVar5 + 0x28);
        fVar15 = *(float *)(in_stack_00000048 + unaff_x27 * 0xc + 0x20);
        uVar11 = FUN_036c0d90(*(undefined4 *)(lVar5 + 0x20),0);
        if ((*(uint *)(in_stack_00000050 + 0x18) <= unaff_w25) ||
           (*(uint *)(in_stack_00000048 + 0x18) <= unaff_w25)) goto LAB_0301e310;
        fVar14 = (float)((ulong)in_stack_000000a0 >> 0x20);
        lVar5 = in_stack_00000050 + unaff_x21 * 0xc;
        lVar6 = in_stack_00000048 + unaff_x21 * 0xc;
        FUN_036c0d90(*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                     *(undefined4 *)(lVar5 + 0x28),*(undefined4 *)(lVar6 + 0x20),
                     *(undefined4 *)(lVar6 + 0x24),*(undefined4 *)(lVar6 + 0x28),0);
        fVar9 = (float)FUN_036c0a20(uVar11,0);
        fVar19 = fVar12 + fVar12;
        fVar21 = fVar13 + fVar13;
        fVar16 = fVar9 * (fVar9 + fVar9);
        fVar17 = fVar12 * fVar19;
        fVar10 = fVar9 * fVar21;
        fVar12 = fVar12 * fVar21;
        fVar18 = fVar15 * (fVar9 + fVar9);
        fVar20 = fVar15 * fVar19;
        do {
          if (unaff_x22 == 0) goto LAB_0301e314;
          uVar3 = (uint)unaff_x20;
          if (*(uint *)(unaff_x22 + 0x18) <= uVar3) goto LAB_0301e310;
          fVar23 = fVar15 * fVar21 + fVar9 * fVar19;
          fVar24 = fVar10 - fVar20;
          fVar26 = 1.0 - (fVar13 * fVar21 + fVar17);
          fVar27 = 1.0 - (fVar13 * fVar21 + fVar16);
          fVar22 = fVar9 * fVar19 - fVar15 * fVar21;
          fVar25 = fVar18 + fVar12;
          lVar5 = unaff_x22 + unaff_x20 * 0xc;
          *(float *)(lVar5 + 0x20) =
               unaff_s14 * fVar22 * fVar8 +
               (float)in_stack_00000030 *
               (((float)in_stack_000000a0 +
                ((float)in_stack_00000090 - (float)in_stack_000000a0) * in_stack_00000100) -
               (float)in_stack_00000070) + unaff_s8 * fVar26 * param_2;
          *(float *)(lVar5 + 0x24) =
               unaff_s14 * fVar27 * fVar8 +
               (float)((ulong)in_stack_00000030 >> 0x20) *
               ((fVar14 + ((float)((ulong)in_stack_00000090 >> 0x20) - fVar14) * in_stack_00000100)
               - (float)((ulong)in_stack_00000070 >> 0x20)) + unaff_s8 * fVar23 * param_2;
          *(float *)(lVar5 + 0x28) =
               unaff_s14 * fVar25 * fVar8 +
               in_stack_00000028._4_4_ *
               ((fStack000000000000009c +
                in_stack_00000100 * (fStack0000000000000098 - fStack000000000000009c)) -
               fStack0000000000000044) + unaff_s8 * fVar24 * param_2;
          if ((int)uVar3 < in_stack_000000d8._4_4_) {
            if (in_stack_000000d0 == 0) goto LAB_0301e314;
            if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar3) goto LAB_0301e310;
            if (in_stack_00000060 == 0) goto LAB_0301e314;
            if (*(uint *)(in_stack_00000060 + 0x18) <= uVar3) goto LAB_0301e310;
            lVar5 = in_stack_000000d0 + unaff_x20 * 0xc;
            fVar29 = *(float *)(lVar5 + 0x20);
            fVar30 = *(float *)(lVar5 + 0x24);
            fVar31 = *(float *)(lVar5 + 0x28);
            lVar5 = in_stack_00000060 + unaff_x20 * 0xc;
            *(float *)(lVar5 + 0x20) =
                 fVar26 * fVar29 + fVar22 * fVar30 + (fVar20 + fVar10) * fVar31;
            *(float *)(lVar5 + 0x24) =
                 fVar23 * fVar29 + fVar27 * fVar30 + (fVar12 - fVar18) * fVar31;
            *(float *)(lVar5 + 0x28) =
                 fVar24 * fVar29 + fVar25 * fVar30 + (1.0 - (fVar17 + fVar16)) * fVar31;
          }
          if ((int)uVar3 < in_stack_000000c8._4_4_) {
            if (in_stack_000000c0 == 0) goto LAB_0301e314;
            if (*(uint *)(in_stack_000000c0 + 0x18) <= uVar3) goto LAB_0301e310;
            if (in_stack_00000058 == 0) goto LAB_0301e314;
            if (*(uint *)(in_stack_00000058 + 0x18) <= uVar3) goto LAB_0301e310;
            lVar5 = in_stack_000000c0 + unaff_x20 * 0x10;
            fVar29 = *(float *)(lVar5 + 0x20);
            fVar31 = *(float *)(lVar5 + 0x24);
            fVar30 = *(float *)(lVar5 + 0x28);
            uVar28 = *(undefined4 *)(lVar5 + 0x2c);
            lVar5 = in_stack_00000058 + unaff_x20 * 0x10;
            *(float *)(lVar5 + 0x20) =
                 fVar26 * fVar29 + fVar22 * fVar31 + (fVar20 + fVar10) * fVar30;
            *(float *)(lVar5 + 0x24) =
                 fVar23 * fVar29 + fVar27 * fVar31 + (fVar12 - fVar18) * fVar30;
            *(float *)(lVar5 + 0x28) =
                 fVar24 * fVar29 + fVar25 * fVar31 + (1.0 - (fVar17 + fVar16)) * fVar30;
            *(undefined4 *)(lVar5 + 0x2c) = uVar28;
          }
          unaff_w24 = unaff_w24 + 1;
          if (unaff_w24 == uStack00000000000000e4) {
            return;
          }
          if (*(uint *)(in_stack_00000118 + 0x18) <= unaff_w24) goto LAB_0301e310;
          if (in_stack_00000088 == 0) goto LAB_0301e314;
          uVar3 = *(uint *)(in_stack_00000118 + (long)(int)unaff_w24 * 4 + 0x20);
          unaff_x20 = (long)(int)uVar3;
          if (*(uint *)(in_stack_00000088 + 0x18) <= uVar3) goto LAB_0301e310;
          lVar5 = in_stack_00000088 + unaff_x20 * 0xc;
          unaff_s8 = *(float *)(lVar5 + 0x20);
          unaff_s14 = *(float *)(lVar5 + 0x24);
          fVar22 = *(float *)(lVar5 + 0x28);
        } while ((unaff_w24 != 0) && (in_stack_000000b8._4_4_ == fVar22));
        fVar8 = fStack0000000000000068 + fStack000000000000006c * fVar22;
        if (*(char *)(unaff_x19 + 0x38) != '\0') {
          fVar8 = fVar8 + (fVar8 - *(float *)(unaff_x19 + 0x3c)) * *(float *)(unaff_x19 + 0x40);
        }
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0301e314;
        fVar8 = in_stack_00000038._4_4_ * fVar8;
        bVar2 = fVar8 < 0.0;
        if (*(char *)(*(long *)(unaff_x19 + 0x10) + 0x32) == '\0') {
          fVar12 = 0.0;
          if ((!bVar2) && (fVar12 = fVar8, 1.0 < fVar8)) {
            fVar12 = 1.0;
          }
        }
        else {
          while (bVar2) {
            fVar8 = fVar8 + 1.0;
            bVar2 = fVar8 < 0.0;
          }
          for (; fVar12 = fVar8, 1.0 < fVar8; fVar8 = fVar8 + -1.0) {
          }
        }
        uVar3 = FUN_02fcde38(fVar12,in_stack_000000e8,in_stack_00000018._4_4_,0);
        in_stack_00000100 = 1.0;
        unaff_w26 = uStack0000000000000040;
        if (uVar3 != uStack00000000000000e0) {
          if (in_stack_000000e8 == 0) goto LAB_0301e314;
          if ((*(uint *)(in_stack_000000e8 + 0x18) <= uVar3) ||
             (*(uint *)(in_stack_000000e8 + 0x18) <= uVar3 + 1)) goto LAB_0301e310;
          fVar8 = *(float *)(in_stack_000000e8 + (long)(int)uVar3 * 4 + 0x20);
          in_stack_00000100 =
               (fVar12 - fVar8) /
               (*(float *)(in_stack_000000e8 + (long)(int)(uVar3 + 1) * 4 + 0x20) - fVar8);
          unaff_w26 = uVar3;
        }
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_w25 = FUN_0276c214(unaff_w26 + 1,uStack00000000000000e0,0);
        if (in_stack_00000080 == 0) goto LAB_0301e314;
        if ((*(uint *)(in_stack_00000080 + 0x18) <= unaff_w26) ||
           (*(uint *)(in_stack_00000080 + 0x18) <= unaff_w25)) goto LAB_0301e310;
        lVar5 = *(long *)(unaff_x19 + 0x48);
        if (lVar5 == 0) goto LAB_0301e314;
        unaff_x27 = (long)(int)unaff_w26;
        unaff_x21 = (long)(int)unaff_w25;
        lVar6 = in_stack_00000080 + unaff_x27 * 0xc;
        lVar7 = in_stack_00000080 + unaff_x21 * 0xc;
        in_stack_00000090 = *(undefined8 *)(lVar7 + 0x20);
        in_stack_000000a0 = *(undefined8 *)(lVar6 + 0x20);
        fStack000000000000009c = *(float *)(lVar6 + 0x28);
        fStack0000000000000098 = *(float *)(lVar7 + 0x28);
        in_stack_000000b8._4_4_ = fVar22;
      } while (*(int *)(lVar5 + 0x10) == 0);
      if (*(int *)(lVar5 + 0x10) != 1) {
        thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
        uVar11 = thunk_FUN_01a89e68();
        FUN_026b3f6c(uVar11,0);
        uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d28a00);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar11,uVar4);
      }
    } while (*(char *)(unaff_x19 + 0x50) == '\0');
    lVar6 = *(long *)(unaff_x19 + 0x10);
    if (lVar6 == 0) break;
    fVar8 = (float)FUN_0300b038(unaff_w26,*(undefined4 *)(lVar5 + 0x14),
                                *(undefined8 *)(lVar6 + 0x38),*(undefined8 *)(lVar6 + 0x40),
                                *(undefined8 *)(lVar6 + 0x48),*(undefined8 *)(lVar6 + 0x50),0);
    in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x48);
    in_stack_00000178._4_1_ = '\0';
    FUN_027e0bd8(in_stack_00000020,(long)&stack0x00000178 + 4,0);
    lVar5 = *(long *)(unaff_x19 + 0x48);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    param_2 = *(float *)(lVar5 + 0x20);
    cVar1 = *(char *)(lVar5 + 0x18);
    fVar12 = *(float *)(lVar5 + 0x24);
    lVar6 = *(long *)(lVar5 + 0x28);
    lVar7 = *(long *)(lVar5 + 0x30);
    uVar11 = FUN_01cbd448(fVar8 - *(float *)(lVar5 + 0x1c),0x3f800000,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    fVar8 = (float)FUN_0366c2a0(lVar6,0);
    param_2 = param_2 * fVar8;
    if (cVar1 == '\0') {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      fVar8 = (float)FUN_0366c2a0(uVar11,lVar7,0);
      unaff_x28 = 0;
      unaff_w29 = 0x13;
      fVar8 = fVar12 * fVar8;
    }
    else {
      unaff_x28 = 0;
      unaff_w29 = 0x13;
      fVar8 = param_2;
    }
  }
LAB_0301e314:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


