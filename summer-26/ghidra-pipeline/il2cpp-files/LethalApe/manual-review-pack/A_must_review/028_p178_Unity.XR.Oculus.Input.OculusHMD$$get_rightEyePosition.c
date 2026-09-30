/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$get_rightEyePosition
ENTRY_POINT: 01d7afb8
PROGRAM: LethalApe-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


undefined4 Unity_XR_Oculus_Input_OculusHMD__get_rightEyePosition(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  void *__dest;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long unaff_x19;
  uint *puVar22;
  long unaff_x21;
  ulong uVar23;
  long *plVar24;
  undefined4 unaff_w23;
  undefined8 uVar25;
  long *plVar26;
  long *plVar27;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar28;
  long lVar29;
  long *unaff_x27;
  ulong uVar30;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  long *in_stack_00000038;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000170;
  uint uStack00000000000001a8;
  undefined1 uStack00000000000001ac;
  
code_r0x01d7afb8:
  uVar9 = uStack00000000000001a8;
  iVar11 = *(int *)(param_1 + 0x24);
  if ((*(byte *)(unaff_x19 + 0x254) & 1) != 0) {
    *(undefined1 *)(unaff_x19 + 0x262) = 1;
  }
  puVar5 = PTR_DAT_02bcde18;
  plVar27 = (long *)PTR_DAT_02bcde18;
  if (*(int *)(unaff_x19 + 0x63c) != 1) goto LAB_01d7be94;
  lVar13 = *(long *)PTR_DAT_02bcde18;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_009ddef4();
    lVar13 = *(long *)puVar5;
  }
  lVar13 = **(long **)(lVar13 + 0xb8);
  if (lVar13 == 0) goto thunk_FUN_00a190f0;
  if (*(uint *)(unaff_x19 + 0x118) < *(uint *)(lVar13 + 0x18)) {
    lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x118) * 0x38;
    *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
    if ((*unaff_x29 == 0) || (lVar13 = *(long *)(*unaff_x29 + 0x38), lVar13 == 0))
    goto thunk_FUN_00a190f0;
    if (*(uint *)(unaff_x19 + 0x488) < *(uint *)(lVar13 + 0x18)) {
      uVar10 = *(undefined4 *)(unaff_x19 + 0x69c);
      lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x488) * 0x178;
      *(short *)(lVar13 + 0x20) = (short)uVar10 + -0x2000;
      *(undefined4 *)(lVar13 + 0x48) = uVar10;
      *(long *)(lVar13 + 0x38) = *unaff_x24;
      thunk_FUN_00a502ec();
      if ((*unaff_x29 == 0) || (lVar13 = *(long *)(*unaff_x29 + 0x38), lVar13 == 0))
      goto thunk_FUN_00a190f0;
      if (*(uint *)(unaff_x19 + 0x488) < *(uint *)(lVar13 + 0x18)) {
        *(undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x488) * 0x178 + 0x40) =
             *(undefined8 *)(unaff_x19 + 0x690);
        thunk_FUN_00a502ec();
        if ((*unaff_x29 == 0) || (lVar13 = *(long *)(*unaff_x29 + 0x38), lVar13 == 0))
        goto thunk_FUN_00a190f0;
        uVar6 = *(uint *)(unaff_x19 + 0x488);
        if (uVar6 < *(uint *)(lVar13 + 0x18)) {
          *(undefined4 *)(lVar13 + (long)(int)uVar6 * 0x178 + 0x58) =
               *(undefined4 *)(unaff_x19 + 0x118);
          if ((*(long *)(unaff_x19 + 0x690) == 0) ||
             (lVar14 = FUN_01dcb584(*(long *)(unaff_x19 + 0x690),0), lVar14 == 0))
          goto thunk_FUN_00a190f0;
          uVar15 = FUN_010ee2fc(lVar14,*(undefined4 *)(unaff_x19 + 0x69c),
                                *(undefined8 *)PTR_DAT_02bc6930);
          if (uVar6 < *(uint *)(lVar13 + 0x18)) {
            *(undefined8 *)(lVar13 + (long)(int)uVar6 * 0x178 + 0x30) = uVar15;
            thunk_FUN_00a502ec();
            plVar27 = (long *)PTR_DAT_02bcde18;
            if ((*unaff_x29 == 0) || (lVar13 = *(long *)(*unaff_x29 + 0x38), lVar13 == 0))
            goto thunk_FUN_00a190f0;
            uVar6 = *(uint *)(unaff_x19 + 0x488);
            if (uVar6 < *(uint *)(lVar13 + 0x18)) {
              lVar14 = lVar13 + (long)(int)uVar6 * 0x178;
              *(undefined4 *)(lVar14 + 0x2c) = *(undefined4 *)(unaff_x19 + 0x63c);
              *(int *)(lVar14 + 0x24) = iVar11;
              if (uVar9 < *(uint *)(unaff_x21 + 0x18)) {
                *(int *)(lVar13 + (long)(int)uVar6 * 0x178 + 0x28) =
                     (*(int *)(unaff_x21 + (long)(int)uVar9 * 0xc + 0x24) - iVar11) + 1;
                *(undefined4 *)(unaff_x19 + 0x63c) = 0;
                *(undefined4 *)(unaff_x19 + 0x118) = unaff_w23;
                in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
                unaff_x25 = in_stack_00000020;
LAB_01d7be8c:
                *(uint *)(unaff_x19 + 0x488) = uVar6 + 1;
LAB_01d7be94:
                uVar6 = *(uint *)(unaff_x21 + 0x18);
                uVar9 = uVar9 + 1;
                if ((int)uVar6 <= (int)uVar9) {
LAB_01d7beac:
                  if (*(char *)(unaff_x19 + 0x3ed) != '\0') {
                    *(undefined1 *)(unaff_x19 + 0x3ed) = 0;
                    goto LAB_01d7c70c;
                  }
                  lVar13 = *unaff_x29;
                  if (lVar13 == 0) goto thunk_FUN_00a190f0;
                  *(int *)(lVar13 + 0x1c) = in_stack_00000018._4_4_;
                  lVar14 = *plVar27;
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    thunk_FUN_009ddef4();
                    lVar14 = *plVar27;
                  }
                  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
                  if (lVar14 == 0) goto thunk_FUN_00a190f0;
                  uVar9 = System_Array_EmptyInternalEnumerator<ProbeVolumeBakingProcessSettings>___ctor
                                    (lVar14,*(undefined8 *)PTR_DAT_02bdbe60);
                  *(uint *)(lVar13 + 0x34) = uVar9;
                  puVar5 = PTR_DAT_02bd73e0;
                  if (*unaff_x29 == 0) goto thunk_FUN_00a190f0;
                  plVar24 = (long *)(*unaff_x29 + 0x60);
                  lVar13 = *plVar24;
                  if (lVar13 == 0) goto thunk_FUN_00a190f0;
                  uVar23 = (ulong)uVar9;
                  if (*(int *)(lVar13 + 0x18) < (int)uVar9) {
                    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                      thunk_FUN_009ddef4();
                    }
                    FUN_00bec950(plVar24,uVar23,0,*(undefined8 *)puVar5);
                  }
                  puVar5 = PTR_DAT_02bea6e0;
                  if (*(long *)(unaff_x19 + 0x700) == 0) goto thunk_FUN_00a190f0;
                  plVar24 = (long *)(unaff_x19 + 0x700);
                  if (*(int *)(*(long *)(unaff_x19 + 0x700) + 0x18) < (int)uVar9) {
                    uVar10 = FUN_01ef5610(uVar9 + 1,0);
                    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                      thunk_FUN_009ddef4(*unaff_x27);
                    }
                    FUN_00bec784(plVar24,uVar10,*(undefined8 *)puVar5);
                  }
                  if (*(char *)(unaff_x19 + 0x319) != '\0') {
                    if (*unaff_x29 == 0) goto thunk_FUN_00a190f0;
                    plVar26 = (long *)(*unaff_x29 + 0x38);
                    lVar13 = *plVar26;
                    if (lVar13 == 0) goto thunk_FUN_00a190f0;
                    iVar11 = *(int *)(unaff_x19 + 0x488);
                    if (0x100 < *(int *)(lVar13 + 0x18) - iVar11) {
                      iVar12 = 0x100;
                      if (0x100 < iVar11 + 1) {
                        iVar12 = iVar11 + 1;
                      }
                      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                        thunk_FUN_009ddef4();
                      }
                      FUN_00bec8dc(plVar26,iVar12,1,*(undefined8 *)PTR_DAT_02bddf10);
                      plVar27 = (long *)PTR_DAT_02bcde18;
                    }
                  }
                  if ((int)uVar9 < 1) goto LAB_01d7c640;
                  lVar13 = 0;
                  uVar30 = 0;
                  lVar14 = 0x54;
                  lVar29 = 0x20;
                  goto LAB_01d7c02c;
                }
                if (uVar6 <= uVar9) goto LAB_01d7c730;
                puVar22 = (uint *)(unaff_x21 + (long)(int)uVar9 * 0xc + 0x20);
                if (*puVar22 == 0) goto LAB_01d7beac;
                if (*unaff_x29 == 0) goto thunk_FUN_00a190f0;
                plVar27 = (long *)(*unaff_x29 + 0x38);
                lVar13 = *plVar27;
                iVar11 = *(int *)(unaff_x19 + 0x488);
                if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) <= iVar11)) {
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_009ddef4();
                  }
                  FUN_00bec8dc(plVar27,iVar11 + 1,1,*(undefined8 *)PTR_DAT_02bddf10);
                  uVar6 = *(uint *)(unaff_x21 + 0x18);
                }
                if (uVar6 <= uVar9) goto LAB_01d7c730;
                uVar6 = *puVar22;
                if ((uVar6 == 0x3c) && (*(char *)(unaff_x19 + 0x2fa) != '\0')) {
                  unaff_w23 = *(undefined4 *)(unaff_x19 + 0x118);
                  uVar23 = FUN_01daf3ec();
                  if ((uVar23 & 1) != 0) goto code_r0x01d7afa4;
                }
                uVar21 = *(undefined8 *)(unaff_x19 + 0xf8);
                uVar15 = *(undefined8 *)(unaff_x19 + 0x110);
                uVar10 = *(undefined4 *)(unaff_x19 + 0x118);
                if (*(int *)(unaff_x19 + 0x63c) != 0) goto LAB_01d7b278;
                uVar7 = *(uint *)(unaff_x19 + 0x254);
                if ((uVar7 >> 4 & 1) == 0) {
                  if ((uVar7 >> 3 & 1) == 0) {
                    if ((uVar7 >> 5 & 1) != 0) goto LAB_01d7b1d8;
                  }
                  else {
                    if (*(int *)(*(long *)PTR_DAT_02bd29d0 + 0xe0) == 0) {
                      thunk_FUN_009ddef4();
                    }
                    uVar23 = FUN_0168f144(uVar6,0);
                    if ((uVar23 & 1) != 0) {
                      if (*(int *)(*(long *)PTR_DAT_02bd29d0 + 0xe0) == 0) {
                        thunk_FUN_009ddef4();
                      }
                      uVar6 = FUN_0168f650(uVar6,0);
                      goto LAB_01d7b274;
                    }
                  }
                }
                else {
LAB_01d7b1d8:
                  if (*(int *)(*(long *)PTR_DAT_02bd29d0 + 0xe0) == 0) {
                    thunk_FUN_009ddef4();
                  }
                  uVar23 = FUN_0168f200(uVar6,0);
                  if ((uVar23 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_02bd29d0 + 0xe0) == 0) {
                      thunk_FUN_009ddef4();
                    }
                    uVar6 = FUN_0168f4d4(uVar6,0);
LAB_01d7b274:
                    uVar6 = uVar6 & 0xffff;
                  }
                }
LAB_01d7b278:
                lVar13 = FUN_01dbeeb8();
                if (lVar13 == 0) {
                  iVar11 = FUN_01dc86c0();
                  if (*(uint *)(unaff_x21 + 0x18) <= uVar9) goto LAB_01d7c730;
                  if (iVar11 == 0) {
                    uVar7 = 0x25a1;
                  }
                  else {
                    uVar7 = FUN_01dc86c0(0);
                  }
                  *puVar22 = uVar7;
                  uVar25 = *(undefined8 *)(unaff_x19 + 0xf8);
                  uVar8 = *(undefined4 *)(unaff_x19 + 0x254);
                  uVar2 = *(undefined4 *)(unaff_x19 + 0x20c);
                  if (*(int *)(*(long *)PTR_DAT_02bcd7a0 + 0xe0) == 0) {
                    thunk_FUN_009ddef4();
                  }
                  lVar13 = FUN_01d97ce0(uVar7,uVar25,1,uVar8,uVar2,(long)&stack0x000001a8 + 4,0);
                  if ((lVar13 == 0) && (lVar14 = FUN_01dc8838(), lVar14 != 0)) {
                    lVar14 = FUN_01dc8838(0);
                    if (lVar14 == 0) goto thunk_FUN_00a190f0;
                    if (0 < *(int *)(lVar14 + 0x18)) {
                      uVar28 = *(undefined8 *)(unaff_x19 + 0xf8);
                      uVar25 = FUN_01dc8838(0);
                      uVar8 = *(undefined4 *)(unaff_x19 + 0x254);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x20c);
                      if (*(int *)(*(long *)PTR_DAT_02bcd7a0 + 0xe0) == 0) {
                        thunk_FUN_009ddef4(*(long *)PTR_DAT_02bcd7a0);
                      }
                      lVar13 = FUN_01d9821c(uVar7,uVar28,uVar25,1,uVar8,uVar2,
                                            (long)&stack0x000001a8 + 4,0);
                    }
                  }
                  if (lVar13 == 0) {
                    uVar25 = FUN_01dc8718(0);
                    if (*(int *)(*(long *)PTR_DAT_02bcd000 + 0xe0) == 0) {
                      thunk_FUN_009ddef4(*(long *)PTR_DAT_02bcd000);
                    }
                    uVar23 = FUN_01ee8fb4(uVar25,0,0);
                    if ((uVar23 & 1) != 0) {
                      uVar25 = FUN_01dc8718(0);
                      uVar8 = *(undefined4 *)(unaff_x19 + 0x254);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x20c);
                      if (*(int *)(*(long *)PTR_DAT_02bcd7a0 + 0xe0) == 0) {
                        thunk_FUN_009ddef4(*(long *)PTR_DAT_02bcd7a0);
                      }
                      lVar13 = FUN_01d97ce0(uVar7,uVar25,1,uVar8,uVar2,(long)&stack0x000001a8 + 4,0)
                      ;
                      if (lVar13 != 0) goto LAB_01d7b508;
                    }
                    if (*(uint *)(unaff_x21 + 0x18) <= uVar9) goto LAB_01d7c730;
                    *puVar22 = 0x20;
                    uVar25 = *(undefined8 *)(unaff_x19 + 0xf8);
                    uVar8 = *(undefined4 *)(unaff_x19 + 0x254);
                    uVar2 = *(undefined4 *)(unaff_x19 + 0x20c);
                    if (*(int *)(*(long *)PTR_DAT_02bcd7a0 + 0xe0) == 0) {
                      thunk_FUN_009ddef4();
                    }
                    uVar7 = 0x20;
                    lVar13 = FUN_01d97ce0(0x20,uVar25,1,uVar8,uVar2,(long)&stack0x000001a8 + 4,0);
                    if (lVar13 == 0) {
                      if (*(uint *)(unaff_x21 + 0x18) <= uVar9) goto LAB_01d7c730;
                      *puVar22 = 3;
                      uVar25 = *(undefined8 *)(unaff_x19 + 0xf8);
                      uVar8 = *(undefined4 *)(unaff_x19 + 0x254);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x20c);
                      if (*(int *)(*(long *)PTR_DAT_02bcd7a0 + 0xe0) == 0) {
                        thunk_FUN_009ddef4();
                      }
                      uVar7 = 3;
                      lVar13 = FUN_01d97ce0(3,uVar25,1,uVar8,uVar2,(long)&stack0x000001a8 + 4,0);
                    }
                  }
LAB_01d7b508:
                  uVar23 = FUN_01dc86fc(0);
                  unaff_x29 = in_stack_00000038;
                  if ((uVar23 & 1) == 0) {
                    plVar27 = (long *)FUN_00a19040(*(undefined8 *)PTR_DAT_02c04c28,4);
                    if ((int)uVar6 < 0x10000) {
                      in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar6);
                      lVar14 = thunk_FUN_00a058b4(*(undefined8 *)PTR_DAT_02bd8658,&stack0x000000e0);
                      if (plVar27 == (long *)0x0) goto thunk_FUN_00a190f0;
                      if ((lVar14 != 0) &&
                         (lVar29 = thunk_FUN_00a05b84(lVar14,*(undefined8 *)(*plVar27 + 0x40)),
                         lVar29 == 0)) goto LAB_01d7c734;
                      if ((int)plVar27[3] == 0) goto LAB_01d7c730;
                      plVar27[4] = lVar14;
                      thunk_FUN_00a502ec(plVar27 + 4,lVar14);
                      if (*(long *)(unaff_x19 + 0xf0) == 0) goto thunk_FUN_00a190f0;
                      lVar14 = FUN_01ed0a38(*(long *)(unaff_x19 + 0xf0),0);
                      if ((lVar14 != 0) &&
                         (lVar29 = thunk_FUN_00a05b84(lVar14,*(undefined8 *)(*plVar27 + 0x40)),
                         lVar29 == 0)) goto LAB_01d7c734;
                      if (*(uint *)(plVar27 + 3) < 2) goto LAB_01d7c730;
                      plVar27[5] = lVar14;
                      thunk_FUN_00a502ec(plVar27 + 5,lVar14);
                      if (lVar13 == 0) goto thunk_FUN_00a190f0;
                      in_stack_00000170 = *(undefined4 *)(lVar13 + 0x14);
                      lVar14 = thunk_FUN_00a058b4(*(undefined8 *)PTR_DAT_02bf4f30,&stack0x00000170);
                      if ((lVar14 != 0) &&
                         (lVar29 = thunk_FUN_00a05b84(lVar14,*(undefined8 *)(*plVar27 + 0x40)),
                         lVar29 == 0)) goto LAB_01d7c734;
                      if (*(uint *)(plVar27 + 3) < 3) goto LAB_01d7c730;
                      plVar27[6] = lVar14;
                      thunk_FUN_00a502ec(plVar27 + 6,lVar14);
                      lVar14 = FUN_01ed0a38();
                      if ((lVar14 != 0) &&
                         (lVar29 = thunk_FUN_00a05b84(lVar14,*(undefined8 *)(*plVar27 + 0x40)),
                         lVar29 == 0)) goto LAB_01d7c734;
                      uVar6 = *(uint *)(plVar27 + 3);
                      puVar18 = (undefined8 *)PTR_DAT_02c11188;
                    }
                    else {
                      in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar6);
                      lVar14 = thunk_FUN_00a058b4(*(undefined8 *)PTR_DAT_02bd8658,&stack0x000000e0);
                      if (plVar27 == (long *)0x0) goto thunk_FUN_00a190f0;
                      if ((lVar14 != 0) &&
                         (lVar29 = thunk_FUN_00a05b84(lVar14,*(undefined8 *)(*plVar27 + 0x40)),
                         lVar29 == 0)) goto LAB_01d7c734;
                      if ((int)plVar27[3] == 0) goto LAB_01d7c730;
                      plVar27[4] = lVar14;
                      thunk_FUN_00a502ec(plVar27 + 4,lVar14);
                      if (*(long *)(unaff_x19 + 0xf0) == 0) goto thunk_FUN_00a190f0;
                      lVar14 = FUN_01ed0a38(*(long *)(unaff_x19 + 0xf0),0);
                      if ((lVar14 != 0) &&
                         (lVar29 = thunk_FUN_00a05b84(lVar14,*(undefined8 *)(*plVar27 + 0x40)),
                         lVar29 == 0)) goto LAB_01d7c734;
                      if (*(uint *)(plVar27 + 3) < 2) goto LAB_01d7c730;
                      plVar27[5] = lVar14;
                      thunk_FUN_00a502ec(plVar27 + 5,lVar14);
                      if (lVar13 == 0) goto thunk_FUN_00a190f0;
                      in_stack_00000170 = *(undefined4 *)(lVar13 + 0x14);
                      lVar14 = thunk_FUN_00a058b4(*(undefined8 *)PTR_DAT_02bf4f30,&stack0x00000170);
                      if ((lVar14 != 0) &&
                         (lVar29 = thunk_FUN_00a05b84(lVar14,*(undefined8 *)(*plVar27 + 0x40)),
                         lVar29 == 0)) goto LAB_01d7c734;
                      if (*(uint *)(plVar27 + 3) < 3) goto LAB_01d7c730;
                      plVar27[6] = lVar14;
                      thunk_FUN_00a502ec(plVar27 + 6,lVar14);
                      lVar14 = FUN_01ed0a38();
                      if ((lVar14 != 0) &&
                         (lVar29 = thunk_FUN_00a05b84(lVar14,*(undefined8 *)(*plVar27 + 0x40)),
                         lVar29 == 0)) goto LAB_01d7c734;
                      uVar6 = *(uint *)(plVar27 + 3);
                      puVar18 = (undefined8 *)PTR_DAT_02bcf000;
                    }
                    if (uVar6 < 4) goto LAB_01d7c730;
                    plVar27[7] = lVar14;
                    thunk_FUN_00a502ec(plVar27 + 7,lVar14);
                    uVar25 = FUN_0158e8dc(*puVar18,plVar27,0);
                    if (*(int *)(*(long *)PTR_DAT_02c01348 + 0xe0) == 0) {
                      thunk_FUN_009ddef4(*(long *)PTR_DAT_02c01348);
                    }
                    FUN_01ecb394(uVar25);
                    unaff_x25 = in_stack_00000020;
                    uVar6 = uVar7;
                  }
                  else {
                    unaff_x25 = in_stack_00000020;
                    uVar6 = uVar7;
                    if (lVar13 == 0) goto thunk_FUN_00a190f0;
                  }
                }
                if (*(char *)(lVar13 + 0x10) == '\x01') {
                  if (*(long *)(lVar13 + 0x18) == 0) goto thunk_FUN_00a190f0;
                  iVar11 = FUN_01d87360(*(long *)(lVar13 + 0x18),0);
                  if (*unaff_x24 == 0) goto thunk_FUN_00a190f0;
                  iVar12 = FUN_01d87360(*unaff_x24,0);
                  if (iVar11 == iVar12) goto LAB_01d7b828;
                  plVar27 = *(long **)(lVar13 + 0x18);
                  if (plVar27 == (long *)0x0) {
                    plVar27 = (long *)0x0;
                    *unaff_x24 = 0;
                  }
                  else {
                    lVar14 = *(long *)PTR_DAT_02be86e8;
                    bVar3 = *(byte *)(lVar14 + 300);
                    if (*(byte *)(*plVar27 + 300) < bVar3) {
                      plVar24 = (long *)0x0;
                    }
                    else {
                      plVar24 = plVar27;
                      if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar3 * 8 + -8) != lVar14) {
                        plVar24 = (long *)0x0;
                      }
                    }
                    *unaff_x24 = (long)plVar24;
                    if (*(byte *)(*plVar27 + 300) < bVar3) {
                      plVar27 = (long *)0x0;
                    }
                    else if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar3 * 8 + -8) != lVar14)
                    {
                      plVar27 = (long *)0x0;
                    }
                  }
                  thunk_FUN_00a502ec(unaff_x24,plVar27);
                  bVar4 = true;
                }
                else {
LAB_01d7b828:
                  bVar4 = false;
                }
                if ((*unaff_x29 == 0) || (lVar14 = *(long *)(*unaff_x29 + 0x38), lVar14 == 0))
                goto thunk_FUN_00a190f0;
                if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x488)) goto LAB_01d7c730;
                lVar14 = lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x488) * 0x178;
                plVar27 = (long *)(lVar14 + 0x30);
                *plVar27 = lVar13;
                *(undefined4 *)(lVar14 + 0x2c) = 0;
                thunk_FUN_00a502ec(plVar27,lVar13);
                if ((*unaff_x29 == 0) || (lVar14 = *(long *)(*unaff_x29 + 0x38), lVar14 == 0))
                goto thunk_FUN_00a190f0;
                uVar7 = *(uint *)(unaff_x19 + 0x488);
                if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_01d7c730;
                lVar29 = lVar14 + (long)(int)uVar7 * 0x178;
                *(short *)(lVar29 + 0x20) = (short)uVar6;
                *(undefined1 *)(lVar29 + 0x5c) = uStack00000000000001ac;
                if (*(uint *)(unaff_x21 + 0x18) <= uVar9) goto LAB_01d7c730;
                lVar14 = lVar14 + (long)(int)uVar7 * 0x178;
                *(undefined8 *)(lVar14 + 0x24) =
                     *(undefined8 *)(unaff_x21 + (long)(int)uVar9 * 0xc + 0x24);
                *(long *)(lVar14 + 0x38) = *unaff_x24;
                thunk_FUN_00a502ec();
                plVar27 = (long *)PTR_DAT_02bcde18;
                if (*(char *)(lVar13 + 0x10) == '\x02') {
                  plVar24 = *(long **)(lVar13 + 0x18);
                  if (plVar24 == (long *)0x0) goto thunk_FUN_00a190f0;
                  bVar3 = *(byte *)(*(long *)PTR_DAT_02c0fb18 + 300);
                  if ((*(byte *)(*plVar24 + 300) < bVar3) ||
                     (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar3 * 8 + -8) !=
                      *(long *)PTR_DAT_02c0fb18)) goto thunk_FUN_00a190f0;
                  lVar29 = plVar24[4];
                  lVar14 = *(long *)PTR_DAT_02bcde18;
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    thunk_FUN_009ddef4();
                    lVar14 = *plVar27;
                  }
                  uVar6 = FUN_01d75cd4(lVar29,plVar24,*(long *)(lVar14 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
                  *(uint *)(unaff_x19 + 0x118) = uVar6;
                  lVar14 = **(long **)(*plVar27 + 0xb8);
                  if (lVar14 == 0) goto thunk_FUN_00a190f0;
                  if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_01d7c730;
                  lVar14 = lVar14 + (long)(int)uVar6 * 0x38;
                  *(int *)(lVar14 + 0x54) = *(int *)(lVar14 + 0x54) + 1;
                  if ((*unaff_x29 == 0) || (lVar14 = *(long *)(*unaff_x29 + 0x38), lVar14 == 0))
                  goto thunk_FUN_00a190f0;
                  if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x488)) goto LAB_01d7c730;
                  lVar14 = lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x488) * 0x178;
                  *(undefined4 *)(lVar14 + 0x2c) = 1;
                  uVar8 = *(undefined4 *)(unaff_x19 + 0x118);
                  *(undefined8 *)(lVar14 + 0x40) = plVar24;
                  *(undefined4 *)(lVar14 + 0x58) = uVar8;
                  thunk_FUN_00a502ec((undefined8 *)(lVar14 + 0x40),plVar24);
                  plVar27 = (long *)PTR_DAT_02bcde18;
                  if ((*(long *)(unaff_x19 + 0x360) == 0) ||
                     (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x360) + 0x38), lVar14 == 0))
                  goto thunk_FUN_00a190f0;
                  uVar6 = *(uint *)(unaff_x19 + 0x488);
                  if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_01d7c730;
                  *(undefined4 *)(lVar14 + (long)(int)uVar6 * 0x178 + 0x48) =
                       *(undefined4 *)(lVar13 + 0x28);
                  *(undefined4 *)(unaff_x19 + 0x63c) = 0;
                  *(undefined4 *)(unaff_x19 + 0x118) = uVar10;
                  in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
                  unaff_x27 = (long *)PTR_DAT_02bc9b28;
                }
                else {
                  if (bVar4) {
                    if (*unaff_x24 == 0) goto thunk_FUN_00a190f0;
                    iVar11 = FUN_01d87360(*unaff_x24,0);
                    if (*(long *)(unaff_x19 + 0xf0) == 0) goto thunk_FUN_00a190f0;
                    iVar12 = FUN_01d87360(*(long *)(unaff_x19 + 0xf0),0);
                    if (iVar11 != iVar12) {
                      uVar23 = FUN_01dc8854(0);
                      if ((uVar23 & 1) == 0) {
                        if (*unaff_x24 == 0) goto thunk_FUN_00a190f0;
                        uVar25 = *(undefined8 *)(*unaff_x24 + 0x20);
                      }
                      else {
                        if (*unaff_x24 == 0) goto thunk_FUN_00a190f0;
                        uVar25 = *unaff_x25;
                        uVar28 = *(undefined8 *)(*unaff_x24 + 0x20);
                        if (*(int *)(*(long *)PTR_DAT_02c0bad0 + 0xe0) == 0) {
                          thunk_FUN_009ddef4();
                        }
                        uVar25 = FUN_01dc4b48(uVar25,uVar28,0);
                        unaff_x25 = in_stack_00000020;
                      }
                      *unaff_x25 = uVar25;
                      thunk_FUN_00a502ec(unaff_x25);
                      lVar14 = *plVar27;
                      uVar25 = *unaff_x25;
                      lVar29 = *unaff_x24;
                      if (*(int *)(lVar14 + 0xe0) == 0) {
                        thunk_FUN_009ddef4();
                        lVar14 = *plVar27;
                      }
                      uVar8 = FUN_01d75aa4(uVar25,lVar29,*(long *)(lVar14 + 0xb8),
                                           *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
                      *(undefined4 *)(unaff_x19 + 0x118) = uVar8;
                      unaff_x25 = in_stack_00000020;
                    }
                  }
                  if (*(long *)(lVar13 + 0x20) == 0) goto thunk_FUN_00a190f0;
                  iVar11 = FUN_01f49678(*(long *)(lVar13 + 0x20),0);
                  if (0 < iVar11) {
                    if (*(long *)(lVar13 + 0x20) == 0) goto thunk_FUN_00a190f0;
                    lVar14 = *unaff_x24;
                    uVar25 = *unaff_x25;
                    uVar8 = FUN_01f49678(*(long *)(lVar13 + 0x20),0);
                    if (*(int *)(*(long *)PTR_DAT_02c0bad0 + 0xe0) == 0) {
                      thunk_FUN_009ddef4(*(long *)PTR_DAT_02c0bad0);
                    }
                    uVar25 = FUN_01dc45e4(lVar14,uVar25,uVar8,0);
                    *unaff_x25 = uVar25;
                    thunk_FUN_00a502ec(unaff_x25,uVar25);
                    lVar13 = *plVar27;
                    uVar25 = *unaff_x25;
                    lVar14 = *unaff_x24;
                    if (*(int *)(lVar13 + 0xe0) == 0) {
                      thunk_FUN_009ddef4();
                      lVar13 = *plVar27;
                    }
                    uVar8 = FUN_01d75aa4(uVar25,lVar14,*(long *)(lVar13 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
                    bVar4 = true;
                    *(undefined4 *)(unaff_x19 + 0x118) = uVar8;
                    unaff_x25 = in_stack_00000020;
                  }
                  if (*(int *)(*(long *)PTR_DAT_02bd29d0 + 0xe0) == 0) {
                    thunk_FUN_009ddef4();
                  }
                  uVar23 = FUN_0168c82c(uVar6,0);
                  unaff_x27 = (long *)PTR_DAT_02bc9b28;
                  if ((uVar6 != 0x200b) && ((uVar23 & 1) == 0)) {
                    lVar13 = *plVar27;
                    if (*(int *)(lVar13 + 0xe0) == 0) {
                      thunk_FUN_009ddef4(lVar13);
                      lVar13 = *plVar27;
                    }
                    lVar14 = **(long **)(lVar13 + 0xb8);
                    if (lVar14 == 0) goto thunk_FUN_00a190f0;
                    uVar6 = *(uint *)(unaff_x19 + 0x118);
                    if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_01d7c730;
                    if (*(int *)(lVar14 + (long)(int)uVar6 * 0x38 + 0x54) < 0x3fff) {
                      if (*(int *)(lVar13 + 0xe0) == 0) {
                        thunk_FUN_009ddef4(lVar13);
                        lVar14 = **(long **)(*plVar27 + 0xb8);
                        if (lVar14 == 0) goto thunk_FUN_00a190f0;
                        uVar6 = *(uint *)(unaff_x19 + 0x118);
                      }
                    }
                    else {
                      uVar25 = *unaff_x25;
                      lVar13 = thunk_FUN_00a05c70(*(undefined8 *)PTR_DAT_02c0ff78);
                      if (lVar13 == 0) goto thunk_FUN_00a190f0;
                      FUN_01edc188(lVar13,uVar25,0);
                      lVar14 = *plVar27;
                      lVar29 = *unaff_x24;
                      if (*(int *)(lVar14 + 0xe0) == 0) {
                        thunk_FUN_009ddef4();
                        lVar14 = *plVar27;
                      }
                      uVar6 = FUN_01d75aa4(lVar13,lVar29,*(long *)(lVar14 + 0xb8),
                                           *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
                      *(uint *)(unaff_x19 + 0x118) = uVar6;
                      lVar14 = **(long **)(*plVar27 + 0xb8);
                      if (lVar14 == 0) goto thunk_FUN_00a190f0;
                    }
                    if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_01d7c730;
                    lVar14 = lVar14 + (long)(int)uVar6 * 0x38;
                    *(int *)(lVar14 + 0x54) = *(int *)(lVar14 + 0x54) + 1;
                  }
                  if ((*unaff_x29 == 0) || (lVar13 = *(long *)(*unaff_x29 + 0x38), lVar13 == 0))
                  goto thunk_FUN_00a190f0;
                  if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x488)) goto LAB_01d7c730;
                  *(undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x488) * 0x178 + 0x50) =
                       *unaff_x25;
                  thunk_FUN_00a502ec();
                  if ((*unaff_x29 == 0) || (lVar13 = *(long *)(*unaff_x29 + 0x38), lVar13 == 0))
                  goto thunk_FUN_00a190f0;
                  if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x488)) goto LAB_01d7c730;
                  uVar6 = *(uint *)(unaff_x19 + 0x118);
                  *(uint *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x488) * 0x178 + 0x58) = uVar6
                  ;
                  lVar13 = *plVar27;
                  if (*(int *)(lVar13 + 0xe0) == 0) {
                    thunk_FUN_009ddef4();
                    lVar13 = *plVar27;
                    uVar6 = *(uint *)(unaff_x19 + 0x118);
                  }
                  lVar14 = **(long **)(lVar13 + 0xb8);
                  if (lVar14 == 0) goto thunk_FUN_00a190f0;
                  if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_01d7c730;
                  *(bool *)(lVar14 + (long)(int)uVar6 * 0x38 + 0x41) = bVar4;
                  if (bVar4) {
                    if (*(int *)(lVar13 + 0xe0) == 0) {
                      thunk_FUN_009ddef4();
                      lVar14 = **(long **)(*plVar27 + 0xb8);
                      if (lVar14 == 0) goto thunk_FUN_00a190f0;
                      uVar6 = *(uint *)(unaff_x19 + 0x118);
                    }
                    if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_01d7c730;
                    puVar18 = (undefined8 *)(lVar14 + (long)(int)uVar6 * 0x38 + 0x48);
                    *puVar18 = uVar15;
                    thunk_FUN_00a502ec(puVar18,uVar15);
                    *(undefined8 *)(unaff_x19 + 0xf8) = uVar21;
                    thunk_FUN_00a502ec(unaff_x24);
                    *(undefined8 *)(unaff_x19 + 0x110) = uVar15;
                    thunk_FUN_00a502ec(unaff_x25,uVar15);
                    *(undefined4 *)(unaff_x19 + 0x118) = uVar10;
                  }
                  uVar6 = *(uint *)(unaff_x19 + 0x488);
                }
                goto LAB_01d7be8c;
              }
            }
          }
        }
      }
    }
  }
  goto LAB_01d7c730;
code_r0x01d7afa4:
  if (*(uint *)(unaff_x21 + 0x18) <= uVar9) goto LAB_01d7c730;
  param_1 = unaff_x21 + (long)(int)uVar9 * 0xc;
  goto code_r0x01d7afb8;
LAB_01d7c02c:
  do {
    if (uVar30 != 0) {
      lVar19 = *plVar24;
      if (lVar19 == 0) goto thunk_FUN_00a190f0;
      if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_01d7c730;
      uVar15 = *(undefined8 *)(lVar19 + uVar30 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_02bcd000 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
      }
      uVar16 = FUN_01ed7068(uVar15,0,0);
      if ((uVar16 & 1) != 0) {
        lVar19 = *plVar27;
        plVar26 = (long *)*plVar24;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
          lVar19 = *plVar27;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_01d7c730;
        lVar19 = lVar19 + lVar14;
        in_stack_00000160 = *(undefined8 *)(lVar19 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar19 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar19 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar19 + -0x1c);
        in_stack_00000140 = *(undefined8 *)(lVar19 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar19 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar19 + -0x34);
        lVar19 = FUN_01dce9d4();
        if (plVar26 == (long *)0x0) goto thunk_FUN_00a190f0;
        if ((lVar19 != 0) &&
           (lVar17 = thunk_FUN_00a05b84(lVar19,*(undefined8 *)(*plVar26 + 0x40)), lVar17 == 0)) {
LAB_01d7c734:
          uVar15 = thunk_FUN_00a1ec00();
                    /* WARNING: Subroutine does not return */
          FUN_00a190b8(uVar15,0);
        }
        if (*(uint *)(plVar26 + 3) <= uVar30) goto LAB_01d7c730;
        plVar26[uVar30 + 4] = lVar19;
        thunk_FUN_00a502ec((long)plVar26 + lVar29,lVar19);
        if ((*in_stack_00000038 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000038 + 0x60), lVar19 == 0)) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_01d7c730;
        puVar18 = (undefined8 *)(lVar19 + lVar13 + 0x30);
        *puVar18 = 0;
        thunk_FUN_00a502ec(puVar18,0);
      }
      lVar19 = *plVar24;
      if (lVar19 == 0) goto thunk_FUN_00a190f0;
      if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_01d7c730;
      lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
      if (lVar19 == 0) goto thunk_FUN_00a190f0;
      uVar15 = *(undefined8 *)(lVar19 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_02bcd000 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
      }
      uVar16 = FUN_01ed7068(uVar15,0,0);
      if ((uVar16 & 1) == 0) {
        lVar19 = *plVar24;
        if (lVar19 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_01d7c730;
        lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
        if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x30), lVar19 == 0))
        goto thunk_FUN_00a190f0;
        iVar11 = FUN_01ee807c(lVar19,0);
        lVar19 = *plVar27;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_009ddef4(lVar19);
          lVar19 = *plVar27;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_01d7c730;
        lVar19 = *(long *)(lVar19 + lVar14 + -0x1c);
        if (lVar19 == 0) goto thunk_FUN_00a190f0;
        iVar12 = FUN_01ee807c(lVar19,0);
        if (iVar11 != iVar12) goto LAB_01d7c218;
      }
      else {
LAB_01d7c218:
        lVar19 = *plVar24;
        if (lVar19 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_01d7c730;
        lVar17 = *plVar27;
        lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
          lVar17 = *plVar27;
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
        if (lVar17 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar17 + 0x18) <= uVar30) goto LAB_01d7c730;
        if (lVar19 == 0) goto thunk_FUN_00a190f0;
        thunk_FUN_01dce4ec(lVar19,*(undefined8 *)(lVar17 + lVar14 + -0x1c),0);
        lVar19 = *plVar24;
        if (lVar19 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_01d7c730;
        lVar17 = **(long **)(*plVar27 + 0xb8);
        if (lVar17 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar17 + 0x18) <= uVar30) goto LAB_01d7c730;
        lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
        if (lVar19 == 0) goto thunk_FUN_00a190f0;
        *(undefined8 *)(lVar19 + 0x18) = *(undefined8 *)(lVar17 + lVar14 + -0x2c);
        thunk_FUN_00a502ec();
        lVar19 = *plVar24;
        if (lVar19 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_01d7c730;
        lVar17 = **(long **)(*plVar27 + 0xb8);
        if (lVar17 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar17 + 0x18) <= uVar30) goto LAB_01d7c730;
        lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
        if (lVar19 == 0) goto thunk_FUN_00a190f0;
        *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(lVar17 + lVar14 + -0x24);
        thunk_FUN_00a502ec();
      }
      lVar19 = *plVar27;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
        lVar19 = *plVar27;
      }
      lVar17 = **(long **)(lVar19 + 0xb8);
      if (lVar17 == 0) goto thunk_FUN_00a190f0;
      if (*(uint *)(lVar17 + 0x18) <= uVar30) goto LAB_01d7c730;
      if (*(char *)(lVar17 + lVar14 + -0x13) != '\0') {
        lVar20 = *plVar24;
        if (lVar20 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_01d7c730;
        lVar20 = *(long *)(lVar20 + uVar30 * 8 + 0x20);
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
          lVar17 = **(long **)(*plVar27 + 0xb8);
          if (lVar17 == 0) goto thunk_FUN_00a190f0;
        }
        if (*(uint *)(lVar17 + 0x18) <= uVar30) goto LAB_01d7c730;
        if (lVar20 == 0) goto thunk_FUN_00a190f0;
        FUN_01dce51c(lVar20,*(undefined8 *)(lVar17 + lVar14 + -0x1c),0);
        lVar19 = *plVar24;
        if (lVar19 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_01d7c730;
        lVar17 = **(long **)(*plVar27 + 0xb8);
        if (lVar17 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar17 + 0x18) <= uVar30) goto LAB_01d7c730;
        lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
        if (lVar19 == 0) goto thunk_FUN_00a190f0;
        *(undefined8 *)(lVar19 + 0x40) = *(undefined8 *)(lVar17 + lVar14 + -0xc);
        thunk_FUN_00a502ec();
      }
    }
    lVar19 = *plVar27;
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_009ddef4();
      lVar19 = *plVar27;
    }
    lVar19 = **(long **)(lVar19 + 0xb8);
    if (lVar19 == 0) goto thunk_FUN_00a190f0;
    if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_01d7c730;
    if ((*in_stack_00000038 == 0) || (lVar17 = *(long *)(*in_stack_00000038 + 0x60), lVar17 == 0))
    goto thunk_FUN_00a190f0;
    if (*(uint *)(lVar17 + 0x18) <= uVar30) goto LAB_01d7c730;
    lVar20 = *(long *)(lVar17 + lVar13 + 0x30);
    iVar11 = *(int *)(lVar19 + lVar14);
    if (lVar20 == 0) {
      if (uVar30 == 0) {
        in_stack_00000118 = 0;
        in_stack_00000110 = 0;
        in_stack_00000128 = 0;
        in_stack_00000120 = 0;
        in_stack_000000f8 = 0;
        in_stack_000000f0 = 0;
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        FUN_01dc566c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x398),iVar11 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar17 + 0x18) == 0) goto LAB_01d7c730;
        memcpy((void *)(lVar17 + lVar13 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar17 + 0x20);
      }
      else {
        lVar19 = *plVar24;
        if (lVar19 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar19 + 0x18) <= uVar30) goto LAB_01d7c730;
        lVar19 = *(long *)(lVar19 + uVar30 * 8 + 0x20);
        if (lVar19 == 0) goto thunk_FUN_00a190f0;
        uVar15 = FUN_01dce864(lVar19,0);
        in_stack_00000118 = 0;
        in_stack_00000110 = 0;
        in_stack_00000128 = 0;
        in_stack_00000120 = 0;
        in_stack_000000f8 = 0;
        in_stack_000000f0 = 0;
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        FUN_01dc566c(&stack0x000000e0,uVar15,iVar11 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar17 + 0x18) <= uVar30) goto LAB_01d7c730;
        __dest = (void *)(lVar17 + lVar13 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      thunk_FUN_00a502ec(__dest,0);
    }
    else {
      iVar12 = *(int *)(lVar20 + 0x18);
      if (iVar12 < iVar11 * 4) {
LAB_01d7c45c:
        if (iVar11 < 0x401) {
          iVar11 = FUN_01ef5610(iVar11 + 1,0);
        }
        else {
          iVar11 = iVar11 + 0x100;
        }
        if (*(int *)(*(long *)PTR_DAT_02bbcde8 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
        }
        FUN_01dc6440(lVar17 + lVar13 + 0x20,iVar11,0);
      }
      else if ((0 < iVar11) && (*(char *)(unaff_x19 + 0x319) != '\0')) {
        iVar1 = iVar12 + 3;
        if (-1 < iVar12) {
          iVar1 = iVar12;
        }
        if (0x100 < (iVar1 >> 2) - iVar11) goto LAB_01d7c45c;
      }
    }
    plVar27 = (long *)PTR_DAT_02bcde18;
    if ((*in_stack_00000038 == 0) || (lVar19 = *(long *)(*in_stack_00000038 + 0x60), lVar19 == 0))
    goto thunk_FUN_00a190f0;
    lVar17 = *(long *)PTR_DAT_02bcde18;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_009ddef4();
      lVar17 = *plVar27;
    }
    lVar17 = **(long **)(lVar17 + 0xb8);
    if (lVar17 == 0) goto thunk_FUN_00a190f0;
    if ((*(uint *)(lVar17 + 0x18) <= uVar30) || (*(uint *)(lVar19 + 0x18) <= uVar30))
    goto LAB_01d7c730;
    *(undefined8 *)(lVar19 + lVar13 + 0x68) = *(undefined8 *)(lVar17 + lVar14 + -0x1c);
    thunk_FUN_00a502ec();
    uVar30 = uVar30 + 1;
    lVar13 = lVar13 + 0x50;
    lVar14 = lVar14 + 0x38;
    lVar29 = lVar29 + 8;
  } while (uVar9 != uVar30);
LAB_01d7c640:
  lVar13 = *plVar24;
  if (lVar13 != 0) {
    lVar14 = (long)(int)uVar9 * 0x50 + 0x20;
    lVar29 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3) + 0x20;
    do {
      uVar9 = (uint)uVar23;
      if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar9) {
LAB_01d7c70c:
        return *(undefined4 *)(unaff_x19 + 0x488);
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar9) {
LAB_01d7c730:
                    /* WARNING: Subroutine does not return */
        FUN_00a190f8();
      }
      uVar15 = *(undefined8 *)(lVar13 + lVar29);
      if (*(int *)(*(long *)PTR_DAT_02bcd000 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
      }
      uVar23 = FUN_01ee8fb4(uVar15,0,0);
      if ((uVar23 & 1) == 0) goto LAB_01d7c70c;
      if ((*in_stack_00000038 == 0) || (lVar13 = *(long *)(*in_stack_00000038 + 0x60), lVar13 == 0))
      break;
      uVar6 = *(uint *)(lVar13 + 0x18);
      if ((int)uVar9 < (int)uVar6) {
        if (*(int *)(*(long *)PTR_DAT_02bbcde8 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
          uVar6 = *(uint *)(lVar13 + 0x18);
        }
        if (uVar6 <= uVar9) goto LAB_01d7c730;
        FUN_01dc73d4(lVar13 + lVar14,0,1,0);
      }
      lVar13 = *plVar24;
      uVar23 = (ulong)(uVar9 + 1);
      lVar14 = lVar14 + 0x50;
      lVar29 = lVar29 + 8;
    } while (lVar13 != 0);
  }
thunk_FUN_00a190f0:
                    /* WARNING: Subroutine does not return */
  FUN_00a190f0();
}


