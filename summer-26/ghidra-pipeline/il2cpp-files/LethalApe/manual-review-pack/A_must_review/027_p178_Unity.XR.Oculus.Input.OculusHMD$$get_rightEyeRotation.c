/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$get_rightEyeRotation
ENTRY_POINT: 01d7afd0
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


undefined4 Unity_XR_Oculus_Input_OculusHMD__get_rightEyeRotation(void)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  void *__dest;
  undefined1 in_w8;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long unaff_x19;
  int unaff_w20;
  uint *puVar21;
  long unaff_x21;
  ulong uVar22;
  uint unaff_w22;
  long *plVar23;
  undefined4 unaff_w23;
  undefined8 uVar24;
  long *plVar25;
  long *plVar26;
  undefined8 *unaff_x25;
  undefined8 uVar27;
  long lVar28;
  long *unaff_x27;
  ulong uVar29;
  long *unaff_x28;
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
  
code_r0x01d7afd0:
  *(undefined1 *)(unaff_x19 + 0x262) = in_w8;
LAB_01d7afd4:
  puVar5 = PTR_DAT_02bcde18;
  plVar26 = (long *)PTR_DAT_02bcde18;
  if (*(int *)(unaff_x19 + 0x63c) != 1) goto LAB_01d7be94;
  lVar12 = *(long *)PTR_DAT_02bcde18;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_009ddef4();
    lVar12 = *(long *)puVar5;
  }
  lVar12 = **(long **)(lVar12 + 0xb8);
  if (lVar12 != 0) {
    if (*(uint *)(unaff_x19 + 0x118) < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x118) * 0x38;
      *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
      if ((*unaff_x29 != 0) && (lVar12 = *(long *)(*unaff_x29 + 0x38), lVar12 != 0)) {
        if (*(uint *)(unaff_x19 + 0x488) < *(uint *)(lVar12 + 0x18)) {
          uVar9 = *(undefined4 *)(unaff_x19 + 0x69c);
          lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x488) * 0x178;
          *(short *)(lVar12 + 0x20) = (short)uVar9 + -0x2000;
          *(undefined4 *)(lVar12 + 0x48) = uVar9;
          *(long *)(lVar12 + 0x38) = *unaff_x28;
          thunk_FUN_00a502ec();
          if ((*unaff_x29 != 0) && (lVar12 = *(long *)(*unaff_x29 + 0x38), lVar12 != 0)) {
            if (*(uint *)(unaff_x19 + 0x488) < *(uint *)(lVar12 + 0x18)) {
              *(undefined8 *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x488) * 0x178 + 0x40) =
                   *(undefined8 *)(unaff_x19 + 0x690);
              thunk_FUN_00a502ec();
              if ((*unaff_x29 != 0) && (lVar12 = *(long *)(*unaff_x29 + 0x38), lVar12 != 0)) {
                uVar8 = *(uint *)(unaff_x19 + 0x488);
                if (uVar8 < *(uint *)(lVar12 + 0x18)) {
                  *(undefined4 *)(lVar12 + (long)(int)uVar8 * 0x178 + 0x58) =
                       *(undefined4 *)(unaff_x19 + 0x118);
                  if ((*(long *)(unaff_x19 + 0x690) != 0) &&
                     (lVar13 = FUN_01dcb584(*(long *)(unaff_x19 + 0x690),0), lVar13 != 0)) {
                    uVar14 = FUN_010ee2fc(lVar13,*(undefined4 *)(unaff_x19 + 0x69c),
                                          *(undefined8 *)PTR_DAT_02bc6930);
                    if (uVar8 < *(uint *)(lVar12 + 0x18)) {
                      *(undefined8 *)(lVar12 + (long)(int)uVar8 * 0x178 + 0x30) = uVar14;
                      thunk_FUN_00a502ec();
                      plVar26 = (long *)PTR_DAT_02bcde18;
                      if ((*unaff_x29 != 0) && (lVar12 = *(long *)(*unaff_x29 + 0x38), lVar12 != 0))
                      {
                        uVar8 = *(uint *)(unaff_x19 + 0x488);
                        if (uVar8 < *(uint *)(lVar12 + 0x18)) {
                          lVar13 = lVar12 + (long)(int)uVar8 * 0x178;
                          *(undefined4 *)(lVar13 + 0x2c) = *(undefined4 *)(unaff_x19 + 0x63c);
                          *(int *)(lVar13 + 0x24) = unaff_w20;
                          if (unaff_w22 < *(uint *)(unaff_x21 + 0x18)) {
                            *(int *)(lVar12 + (long)(int)uVar8 * 0x178 + 0x28) =
                                 (*(int *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24) -
                                 unaff_w20) + 1;
                            *(undefined4 *)(unaff_x19 + 0x63c) = 0;
                            *(undefined4 *)(unaff_x19 + 0x118) = unaff_w23;
                            in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
                            unaff_x25 = in_stack_00000020;
LAB_01d7be8c:
                            *(uint *)(unaff_x19 + 0x488) = uVar8 + 1;
LAB_01d7be94:
                            uVar8 = *(uint *)(unaff_x21 + 0x18);
                            unaff_w22 = unaff_w22 + 1;
                            if ((int)uVar8 <= (int)unaff_w22) {
LAB_01d7beac:
                              if (*(char *)(unaff_x19 + 0x3ed) != '\0') {
                                *(undefined1 *)(unaff_x19 + 0x3ed) = 0;
                                goto LAB_01d7c70c;
                              }
                              lVar12 = *unaff_x29;
                              if (lVar12 == 0) goto thunk_FUN_00a190f0;
                              *(int *)(lVar12 + 0x1c) = in_stack_00000018._4_4_;
                              lVar13 = *plVar26;
                              if (*(int *)(lVar13 + 0xe0) == 0) {
                                thunk_FUN_009ddef4();
                                lVar13 = *plVar26;
                              }
                              lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
                              if (lVar13 == 0) goto thunk_FUN_00a190f0;
                              uVar8 = System_Array_EmptyInternalEnumerator<ProbeVolumeBakingProcessSettings>___ctor
                                                (lVar13,*(undefined8 *)PTR_DAT_02bdbe60);
                              *(uint *)(lVar12 + 0x34) = uVar8;
                              puVar5 = PTR_DAT_02bd73e0;
                              if (*unaff_x29 == 0) goto thunk_FUN_00a190f0;
                              plVar23 = (long *)(*unaff_x29 + 0x60);
                              lVar12 = *plVar23;
                              if (lVar12 == 0) goto thunk_FUN_00a190f0;
                              uVar22 = (ulong)uVar8;
                              if (*(int *)(lVar12 + 0x18) < (int)uVar8) {
                                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                                  thunk_FUN_009ddef4();
                                }
                                FUN_00bec950(plVar23,uVar22,0,*(undefined8 *)puVar5);
                              }
                              puVar5 = PTR_DAT_02bea6e0;
                              if (*(long *)(unaff_x19 + 0x700) == 0) goto thunk_FUN_00a190f0;
                              plVar23 = (long *)(unaff_x19 + 0x700);
                              if (*(int *)(*(long *)(unaff_x19 + 0x700) + 0x18) < (int)uVar8) {
                                uVar9 = FUN_01ef5610(uVar8 + 1,0);
                                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                                  thunk_FUN_009ddef4(*unaff_x27);
                                }
                                FUN_00bec784(plVar23,uVar9,*(undefined8 *)puVar5);
                              }
                              if (*(char *)(unaff_x19 + 0x319) != '\0') {
                                if (*unaff_x29 == 0) goto thunk_FUN_00a190f0;
                                plVar25 = (long *)(*unaff_x29 + 0x38);
                                lVar12 = *plVar25;
                                if (lVar12 == 0) goto thunk_FUN_00a190f0;
                                iVar10 = *(int *)(unaff_x19 + 0x488);
                                if (0x100 < *(int *)(lVar12 + 0x18) - iVar10) {
                                  iVar11 = 0x100;
                                  if (0x100 < iVar10 + 1) {
                                    iVar11 = iVar10 + 1;
                                  }
                                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                                    thunk_FUN_009ddef4();
                                  }
                                  FUN_00bec8dc(plVar25,iVar11,1,*(undefined8 *)PTR_DAT_02bddf10);
                                  plVar26 = (long *)PTR_DAT_02bcde18;
                                }
                              }
                              if ((int)uVar8 < 1) goto LAB_01d7c640;
                              lVar12 = 0;
                              uVar29 = 0;
                              lVar13 = 0x54;
                              lVar28 = 0x20;
                              goto LAB_01d7c02c;
                            }
                            if (uVar8 <= unaff_w22) goto LAB_01d7c730;
                            puVar21 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
                            if (*puVar21 == 0) goto LAB_01d7beac;
                            if (*unaff_x29 == 0) goto thunk_FUN_00a190f0;
                            plVar26 = (long *)(*unaff_x29 + 0x38);
                            lVar12 = *plVar26;
                            iVar10 = *(int *)(unaff_x19 + 0x488);
                            if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) <= iVar10)) {
                              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                                thunk_FUN_009ddef4();
                              }
                              FUN_00bec8dc(plVar26,iVar10 + 1,1,*(undefined8 *)PTR_DAT_02bddf10);
                              uVar8 = *(uint *)(unaff_x21 + 0x18);
                            }
                            if (uVar8 <= unaff_w22) goto LAB_01d7c730;
                            uVar8 = *puVar21;
                            if ((uVar8 == 0x3c) && (*(char *)(unaff_x19 + 0x2fa) != '\0')) {
                              unaff_w23 = *(undefined4 *)(unaff_x19 + 0x118);
                              uVar22 = FUN_01daf3ec();
                              if ((uVar22 & 1) != 0) goto code_r0x01d7afa4;
                            }
                            uVar20 = *(undefined8 *)(unaff_x19 + 0xf8);
                            uVar14 = *(undefined8 *)(unaff_x19 + 0x110);
                            uVar9 = *(undefined4 *)(unaff_x19 + 0x118);
                            if (*(int *)(unaff_x19 + 0x63c) != 0) goto LAB_01d7b278;
                            uVar6 = *(uint *)(unaff_x19 + 0x254);
                            if ((uVar6 >> 4 & 1) == 0) {
                              if ((uVar6 >> 3 & 1) == 0) {
                                if ((uVar6 >> 5 & 1) != 0) goto LAB_01d7b1d8;
                              }
                              else {
                                if (*(int *)(*(long *)PTR_DAT_02bd29d0 + 0xe0) == 0) {
                                  thunk_FUN_009ddef4();
                                }
                                uVar22 = FUN_0168f144(uVar8,0);
                                if ((uVar22 & 1) != 0) {
                                  if (*(int *)(*(long *)PTR_DAT_02bd29d0 + 0xe0) == 0) {
                                    thunk_FUN_009ddef4();
                                  }
                                  uVar8 = FUN_0168f650(uVar8,0);
                                  goto LAB_01d7b274;
                                }
                              }
                            }
                            else {
LAB_01d7b1d8:
                              if (*(int *)(*(long *)PTR_DAT_02bd29d0 + 0xe0) == 0) {
                                thunk_FUN_009ddef4();
                              }
                              uVar22 = FUN_0168f200(uVar8,0);
                              if ((uVar22 & 1) != 0) {
                                if (*(int *)(*(long *)PTR_DAT_02bd29d0 + 0xe0) == 0) {
                                  thunk_FUN_009ddef4();
                                }
                                uVar8 = FUN_0168f4d4(uVar8,0);
LAB_01d7b274:
                                uVar8 = uVar8 & 0xffff;
                              }
                            }
LAB_01d7b278:
                            lVar12 = FUN_01dbeeb8();
                            if (lVar12 == 0) {
                              iVar10 = FUN_01dc86c0();
                              if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_01d7c730;
                              if (iVar10 == 0) {
                                uVar6 = 0x25a1;
                              }
                              else {
                                uVar6 = FUN_01dc86c0(0);
                              }
                              *puVar21 = uVar6;
                              uVar24 = *(undefined8 *)(unaff_x19 + 0xf8);
                              uVar7 = *(undefined4 *)(unaff_x19 + 0x254);
                              uVar2 = *(undefined4 *)(unaff_x19 + 0x20c);
                              if (*(int *)(*(long *)PTR_DAT_02bcd7a0 + 0xe0) == 0) {
                                thunk_FUN_009ddef4();
                              }
                              lVar12 = FUN_01d97ce0(uVar6,uVar24,1,uVar7,uVar2,
                                                    (long)&stack0x000001a8 + 4,0);
                              if ((lVar12 == 0) && (lVar13 = FUN_01dc8838(), lVar13 != 0)) {
                                lVar13 = FUN_01dc8838(0);
                                if (lVar13 == 0) goto thunk_FUN_00a190f0;
                                if (0 < *(int *)(lVar13 + 0x18)) {
                                  uVar27 = *(undefined8 *)(unaff_x19 + 0xf8);
                                  uVar24 = FUN_01dc8838(0);
                                  uVar7 = *(undefined4 *)(unaff_x19 + 0x254);
                                  uVar2 = *(undefined4 *)(unaff_x19 + 0x20c);
                                  if (*(int *)(*(long *)PTR_DAT_02bcd7a0 + 0xe0) == 0) {
                                    thunk_FUN_009ddef4(*(long *)PTR_DAT_02bcd7a0);
                                  }
                                  lVar12 = FUN_01d9821c(uVar6,uVar27,uVar24,1,uVar7,uVar2,
                                                        (long)&stack0x000001a8 + 4,0);
                                }
                              }
                              if (lVar12 == 0) {
                                uVar24 = FUN_01dc8718(0);
                                if (*(int *)(*(long *)PTR_DAT_02bcd000 + 0xe0) == 0) {
                                  thunk_FUN_009ddef4(*(long *)PTR_DAT_02bcd000);
                                }
                                uVar22 = FUN_01ee8fb4(uVar24,0,0);
                                if ((uVar22 & 1) != 0) {
                                  uVar24 = FUN_01dc8718(0);
                                  uVar7 = *(undefined4 *)(unaff_x19 + 0x254);
                                  uVar2 = *(undefined4 *)(unaff_x19 + 0x20c);
                                  if (*(int *)(*(long *)PTR_DAT_02bcd7a0 + 0xe0) == 0) {
                                    thunk_FUN_009ddef4(*(long *)PTR_DAT_02bcd7a0);
                                  }
                                  lVar12 = FUN_01d97ce0(uVar6,uVar24,1,uVar7,uVar2,
                                                        (long)&stack0x000001a8 + 4,0);
                                  if (lVar12 != 0) goto LAB_01d7b508;
                                }
                                if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_01d7c730;
                                *puVar21 = 0x20;
                                uVar24 = *(undefined8 *)(unaff_x19 + 0xf8);
                                uVar7 = *(undefined4 *)(unaff_x19 + 0x254);
                                uVar2 = *(undefined4 *)(unaff_x19 + 0x20c);
                                if (*(int *)(*(long *)PTR_DAT_02bcd7a0 + 0xe0) == 0) {
                                  thunk_FUN_009ddef4();
                                }
                                uVar6 = 0x20;
                                lVar12 = FUN_01d97ce0(0x20,uVar24,1,uVar7,uVar2,
                                                      (long)&stack0x000001a8 + 4,0);
                                if (lVar12 == 0) {
                                  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_01d7c730;
                                  *puVar21 = 3;
                                  uVar24 = *(undefined8 *)(unaff_x19 + 0xf8);
                                  uVar7 = *(undefined4 *)(unaff_x19 + 0x254);
                                  uVar2 = *(undefined4 *)(unaff_x19 + 0x20c);
                                  if (*(int *)(*(long *)PTR_DAT_02bcd7a0 + 0xe0) == 0) {
                                    thunk_FUN_009ddef4();
                                  }
                                  uVar6 = 3;
                                  lVar12 = FUN_01d97ce0(3,uVar24,1,uVar7,uVar2,
                                                        (long)&stack0x000001a8 + 4,0);
                                }
                              }
LAB_01d7b508:
                              uVar22 = FUN_01dc86fc(0);
                              unaff_x29 = in_stack_00000038;
                              if ((uVar22 & 1) == 0) {
                                plVar26 = (long *)FUN_00a19040(*(undefined8 *)PTR_DAT_02c04c28,4);
                                if ((int)uVar8 < 0x10000) {
                                  in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar8);
                                  lVar13 = thunk_FUN_00a058b4(*(undefined8 *)PTR_DAT_02bd8658,
                                                              &stack0x000000e0);
                                  if (plVar26 == (long *)0x0) goto thunk_FUN_00a190f0;
                                  if ((lVar13 != 0) &&
                                     (lVar28 = thunk_FUN_00a05b84(lVar13,*(undefined8 *)
                                                                          (*plVar26 + 0x40)),
                                     lVar28 == 0)) goto LAB_01d7c734;
                                  if ((int)plVar26[3] == 0) goto LAB_01d7c730;
                                  plVar26[4] = lVar13;
                                  thunk_FUN_00a502ec(plVar26 + 4,lVar13);
                                  if (*(long *)(unaff_x19 + 0xf0) == 0) goto thunk_FUN_00a190f0;
                                  lVar13 = FUN_01ed0a38(*(long *)(unaff_x19 + 0xf0),0);
                                  if ((lVar13 != 0) &&
                                     (lVar28 = thunk_FUN_00a05b84(lVar13,*(undefined8 *)
                                                                          (*plVar26 + 0x40)),
                                     lVar28 == 0)) goto LAB_01d7c734;
                                  if (*(uint *)(plVar26 + 3) < 2) goto LAB_01d7c730;
                                  plVar26[5] = lVar13;
                                  thunk_FUN_00a502ec(plVar26 + 5,lVar13);
                                  if (lVar12 == 0) goto thunk_FUN_00a190f0;
                                  in_stack_00000170 = *(undefined4 *)(lVar12 + 0x14);
                                  lVar13 = thunk_FUN_00a058b4(*(undefined8 *)PTR_DAT_02bf4f30,
                                                              &stack0x00000170);
                                  if ((lVar13 != 0) &&
                                     (lVar28 = thunk_FUN_00a05b84(lVar13,*(undefined8 *)
                                                                          (*plVar26 + 0x40)),
                                     lVar28 == 0)) goto LAB_01d7c734;
                                  if (*(uint *)(plVar26 + 3) < 3) goto LAB_01d7c730;
                                  plVar26[6] = lVar13;
                                  thunk_FUN_00a502ec(plVar26 + 6,lVar13);
                                  lVar13 = FUN_01ed0a38();
                                  if ((lVar13 != 0) &&
                                     (lVar28 = thunk_FUN_00a05b84(lVar13,*(undefined8 *)
                                                                          (*plVar26 + 0x40)),
                                     lVar28 == 0)) goto LAB_01d7c734;
                                  uVar8 = *(uint *)(plVar26 + 3);
                                  puVar17 = (undefined8 *)PTR_DAT_02c11188;
                                }
                                else {
                                  in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar8);
                                  lVar13 = thunk_FUN_00a058b4(*(undefined8 *)PTR_DAT_02bd8658,
                                                              &stack0x000000e0);
                                  if (plVar26 == (long *)0x0) goto thunk_FUN_00a190f0;
                                  if ((lVar13 != 0) &&
                                     (lVar28 = thunk_FUN_00a05b84(lVar13,*(undefined8 *)
                                                                          (*plVar26 + 0x40)),
                                     lVar28 == 0)) goto LAB_01d7c734;
                                  if ((int)plVar26[3] == 0) goto LAB_01d7c730;
                                  plVar26[4] = lVar13;
                                  thunk_FUN_00a502ec(plVar26 + 4,lVar13);
                                  if (*(long *)(unaff_x19 + 0xf0) == 0) goto thunk_FUN_00a190f0;
                                  lVar13 = FUN_01ed0a38(*(long *)(unaff_x19 + 0xf0),0);
                                  if ((lVar13 != 0) &&
                                     (lVar28 = thunk_FUN_00a05b84(lVar13,*(undefined8 *)
                                                                          (*plVar26 + 0x40)),
                                     lVar28 == 0)) goto LAB_01d7c734;
                                  if (*(uint *)(plVar26 + 3) < 2) goto LAB_01d7c730;
                                  plVar26[5] = lVar13;
                                  thunk_FUN_00a502ec(plVar26 + 5,lVar13);
                                  if (lVar12 == 0) goto thunk_FUN_00a190f0;
                                  in_stack_00000170 = *(undefined4 *)(lVar12 + 0x14);
                                  lVar13 = thunk_FUN_00a058b4(*(undefined8 *)PTR_DAT_02bf4f30,
                                                              &stack0x00000170);
                                  if ((lVar13 != 0) &&
                                     (lVar28 = thunk_FUN_00a05b84(lVar13,*(undefined8 *)
                                                                          (*plVar26 + 0x40)),
                                     lVar28 == 0)) goto LAB_01d7c734;
                                  if (*(uint *)(plVar26 + 3) < 3) goto LAB_01d7c730;
                                  plVar26[6] = lVar13;
                                  thunk_FUN_00a502ec(plVar26 + 6,lVar13);
                                  lVar13 = FUN_01ed0a38();
                                  if ((lVar13 != 0) &&
                                     (lVar28 = thunk_FUN_00a05b84(lVar13,*(undefined8 *)
                                                                          (*plVar26 + 0x40)),
                                     lVar28 == 0)) goto LAB_01d7c734;
                                  uVar8 = *(uint *)(plVar26 + 3);
                                  puVar17 = (undefined8 *)PTR_DAT_02bcf000;
                                }
                                if (uVar8 < 4) goto LAB_01d7c730;
                                plVar26[7] = lVar13;
                                thunk_FUN_00a502ec(plVar26 + 7,lVar13);
                                uVar24 = FUN_0158e8dc(*puVar17,plVar26,0);
                                if (*(int *)(*(long *)PTR_DAT_02c01348 + 0xe0) == 0) {
                                  thunk_FUN_009ddef4(*(long *)PTR_DAT_02c01348);
                                }
                                FUN_01ecb394(uVar24);
                                unaff_x25 = in_stack_00000020;
                                uVar8 = uVar6;
                              }
                              else {
                                unaff_x25 = in_stack_00000020;
                                uVar8 = uVar6;
                                if (lVar12 == 0) goto thunk_FUN_00a190f0;
                              }
                            }
                            if (*(char *)(lVar12 + 0x10) == '\x01') {
                              if (*(long *)(lVar12 + 0x18) == 0) goto thunk_FUN_00a190f0;
                              iVar10 = FUN_01d87360(*(long *)(lVar12 + 0x18),0);
                              if (*unaff_x28 == 0) goto thunk_FUN_00a190f0;
                              iVar11 = FUN_01d87360(*unaff_x28,0);
                              if (iVar10 == iVar11) goto LAB_01d7b828;
                              plVar26 = *(long **)(lVar12 + 0x18);
                              if (plVar26 == (long *)0x0) {
                                plVar26 = (long *)0x0;
                                *unaff_x28 = 0;
                              }
                              else {
                                lVar13 = *(long *)PTR_DAT_02be86e8;
                                bVar3 = *(byte *)(lVar13 + 300);
                                if (*(byte *)(*plVar26 + 300) < bVar3) {
                                  plVar23 = (long *)0x0;
                                }
                                else {
                                  plVar23 = plVar26;
                                  if (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar3 * 8 + -8)
                                      != lVar13) {
                                    plVar23 = (long *)0x0;
                                  }
                                }
                                *unaff_x28 = (long)plVar23;
                                if (*(byte *)(*plVar26 + 300) < bVar3) {
                                  plVar26 = (long *)0x0;
                                }
                                else if (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar3 * 8 + -8
                                                  ) != lVar13) {
                                  plVar26 = (long *)0x0;
                                }
                              }
                              thunk_FUN_00a502ec(unaff_x28,plVar26);
                              bVar4 = true;
                            }
                            else {
LAB_01d7b828:
                              bVar4 = false;
                            }
                            if ((*unaff_x29 == 0) ||
                               (lVar13 = *(long *)(*unaff_x29 + 0x38), lVar13 == 0))
                            goto thunk_FUN_00a190f0;
                            if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x488))
                            goto LAB_01d7c730;
                            lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x488) * 0x178;
                            plVar26 = (long *)(lVar13 + 0x30);
                            *plVar26 = lVar12;
                            *(undefined4 *)(lVar13 + 0x2c) = 0;
                            thunk_FUN_00a502ec(plVar26,lVar12);
                            if ((*unaff_x29 == 0) ||
                               (lVar13 = *(long *)(*unaff_x29 + 0x38), lVar13 == 0))
                            goto thunk_FUN_00a190f0;
                            uVar6 = *(uint *)(unaff_x19 + 0x488);
                            if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_01d7c730;
                            lVar28 = lVar13 + (long)(int)uVar6 * 0x178;
                            *(short *)(lVar28 + 0x20) = (short)uVar8;
                            *(undefined1 *)(lVar28 + 0x5c) = uStack00000000000001ac;
                            if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_01d7c730;
                            lVar13 = lVar13 + (long)(int)uVar6 * 0x178;
                            *(undefined8 *)(lVar13 + 0x24) =
                                 *(undefined8 *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
                            *(long *)(lVar13 + 0x38) = *unaff_x28;
                            thunk_FUN_00a502ec();
                            plVar26 = (long *)PTR_DAT_02bcde18;
                            if (*(char *)(lVar12 + 0x10) == '\x02') {
                              plVar23 = *(long **)(lVar12 + 0x18);
                              if (plVar23 == (long *)0x0) goto thunk_FUN_00a190f0;
                              bVar3 = *(byte *)(*(long *)PTR_DAT_02c0fb18 + 300);
                              if ((*(byte *)(*plVar23 + 300) < bVar3) ||
                                 (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) !=
                                  *(long *)PTR_DAT_02c0fb18)) goto thunk_FUN_00a190f0;
                              lVar28 = plVar23[4];
                              lVar13 = *(long *)PTR_DAT_02bcde18;
                              if (*(int *)(lVar13 + 0xe0) == 0) {
                                thunk_FUN_009ddef4();
                                lVar13 = *plVar26;
                              }
                              uVar8 = FUN_01d75cd4(lVar28,plVar23,*(long *)(lVar13 + 0xb8),
                                                   *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
                              *(uint *)(unaff_x19 + 0x118) = uVar8;
                              lVar13 = **(long **)(*plVar26 + 0xb8);
                              if (lVar13 == 0) goto thunk_FUN_00a190f0;
                              if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_01d7c730;
                              lVar13 = lVar13 + (long)(int)uVar8 * 0x38;
                              *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
                              if ((*unaff_x29 == 0) ||
                                 (lVar13 = *(long *)(*unaff_x29 + 0x38), lVar13 == 0))
                              goto thunk_FUN_00a190f0;
                              if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x488))
                              goto LAB_01d7c730;
                              lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x488) * 0x178;
                              *(undefined4 *)(lVar13 + 0x2c) = 1;
                              uVar7 = *(undefined4 *)(unaff_x19 + 0x118);
                              *(undefined8 *)(lVar13 + 0x40) = plVar23;
                              *(undefined4 *)(lVar13 + 0x58) = uVar7;
                              thunk_FUN_00a502ec((undefined8 *)(lVar13 + 0x40),plVar23);
                              plVar26 = (long *)PTR_DAT_02bcde18;
                              if ((*(long *)(unaff_x19 + 0x360) == 0) ||
                                 (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x360) + 0x38),
                                 lVar13 == 0)) goto thunk_FUN_00a190f0;
                              uVar8 = *(uint *)(unaff_x19 + 0x488);
                              if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_01d7c730;
                              *(undefined4 *)(lVar13 + (long)(int)uVar8 * 0x178 + 0x48) =
                                   *(undefined4 *)(lVar12 + 0x28);
                              *(undefined4 *)(unaff_x19 + 0x63c) = 0;
                              *(undefined4 *)(unaff_x19 + 0x118) = uVar9;
                              in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
                              unaff_x27 = (long *)PTR_DAT_02bc9b28;
                            }
                            else {
                              if (bVar4) {
                                if (*unaff_x28 == 0) goto thunk_FUN_00a190f0;
                                iVar10 = FUN_01d87360(*unaff_x28,0);
                                if (*(long *)(unaff_x19 + 0xf0) == 0) goto thunk_FUN_00a190f0;
                                iVar11 = FUN_01d87360(*(long *)(unaff_x19 + 0xf0),0);
                                if (iVar10 != iVar11) {
                                  uVar22 = FUN_01dc8854(0);
                                  if ((uVar22 & 1) == 0) {
                                    if (*unaff_x28 == 0) goto thunk_FUN_00a190f0;
                                    uVar24 = *(undefined8 *)(*unaff_x28 + 0x20);
                                  }
                                  else {
                                    if (*unaff_x28 == 0) goto thunk_FUN_00a190f0;
                                    uVar24 = *unaff_x25;
                                    uVar27 = *(undefined8 *)(*unaff_x28 + 0x20);
                                    if (*(int *)(*(long *)PTR_DAT_02c0bad0 + 0xe0) == 0) {
                                      thunk_FUN_009ddef4();
                                    }
                                    uVar24 = FUN_01dc4b48(uVar24,uVar27,0);
                                    unaff_x25 = in_stack_00000020;
                                  }
                                  *unaff_x25 = uVar24;
                                  thunk_FUN_00a502ec(unaff_x25);
                                  lVar13 = *plVar26;
                                  uVar24 = *unaff_x25;
                                  lVar28 = *unaff_x28;
                                  if (*(int *)(lVar13 + 0xe0) == 0) {
                                    thunk_FUN_009ddef4();
                                    lVar13 = *plVar26;
                                  }
                                  uVar7 = FUN_01d75aa4(uVar24,lVar28,*(long *)(lVar13 + 0xb8),
                                                       *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8)
                                                      );
                                  *(undefined4 *)(unaff_x19 + 0x118) = uVar7;
                                  unaff_x25 = in_stack_00000020;
                                }
                              }
                              if (*(long *)(lVar12 + 0x20) == 0) goto thunk_FUN_00a190f0;
                              iVar10 = FUN_01f49678(*(long *)(lVar12 + 0x20),0);
                              if (0 < iVar10) {
                                if (*(long *)(lVar12 + 0x20) == 0) goto thunk_FUN_00a190f0;
                                lVar13 = *unaff_x28;
                                uVar24 = *unaff_x25;
                                uVar7 = FUN_01f49678(*(long *)(lVar12 + 0x20),0);
                                if (*(int *)(*(long *)PTR_DAT_02c0bad0 + 0xe0) == 0) {
                                  thunk_FUN_009ddef4(*(long *)PTR_DAT_02c0bad0);
                                }
                                uVar24 = FUN_01dc45e4(lVar13,uVar24,uVar7,0);
                                *unaff_x25 = uVar24;
                                thunk_FUN_00a502ec(unaff_x25,uVar24);
                                lVar12 = *plVar26;
                                uVar24 = *unaff_x25;
                                lVar13 = *unaff_x28;
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_009ddef4();
                                  lVar12 = *plVar26;
                                }
                                uVar7 = FUN_01d75aa4(uVar24,lVar13,*(long *)(lVar12 + 0xb8),
                                                     *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
                                bVar4 = true;
                                *(undefined4 *)(unaff_x19 + 0x118) = uVar7;
                                unaff_x25 = in_stack_00000020;
                              }
                              if (*(int *)(*(long *)PTR_DAT_02bd29d0 + 0xe0) == 0) {
                                thunk_FUN_009ddef4();
                              }
                              uVar22 = FUN_0168c82c(uVar8,0);
                              unaff_x27 = (long *)PTR_DAT_02bc9b28;
                              if ((uVar8 != 0x200b) && ((uVar22 & 1) == 0)) {
                                lVar12 = *plVar26;
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_009ddef4(lVar12);
                                  lVar12 = *plVar26;
                                }
                                lVar13 = **(long **)(lVar12 + 0xb8);
                                if (lVar13 == 0) goto thunk_FUN_00a190f0;
                                uVar8 = *(uint *)(unaff_x19 + 0x118);
                                if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_01d7c730;
                                if (*(int *)(lVar13 + (long)(int)uVar8 * 0x38 + 0x54) < 0x3fff) {
                                  if (*(int *)(lVar12 + 0xe0) == 0) {
                                    thunk_FUN_009ddef4(lVar12);
                                    lVar13 = **(long **)(*plVar26 + 0xb8);
                                    if (lVar13 == 0) goto thunk_FUN_00a190f0;
                                    uVar8 = *(uint *)(unaff_x19 + 0x118);
                                  }
                                }
                                else {
                                  uVar24 = *unaff_x25;
                                  lVar12 = thunk_FUN_00a05c70(*(undefined8 *)PTR_DAT_02c0ff78);
                                  if (lVar12 == 0) goto thunk_FUN_00a190f0;
                                  FUN_01edc188(lVar12,uVar24,0);
                                  lVar13 = *plVar26;
                                  lVar28 = *unaff_x28;
                                  if (*(int *)(lVar13 + 0xe0) == 0) {
                                    thunk_FUN_009ddef4();
                                    lVar13 = *plVar26;
                                  }
                                  uVar8 = FUN_01d75aa4(lVar12,lVar28,*(long *)(lVar13 + 0xb8),
                                                       *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8)
                                                      );
                                  *(uint *)(unaff_x19 + 0x118) = uVar8;
                                  lVar13 = **(long **)(*plVar26 + 0xb8);
                                  if (lVar13 == 0) goto thunk_FUN_00a190f0;
                                }
                                if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_01d7c730;
                                lVar13 = lVar13 + (long)(int)uVar8 * 0x38;
                                *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
                              }
                              if ((*unaff_x29 == 0) ||
                                 (lVar12 = *(long *)(*unaff_x29 + 0x38), lVar12 == 0))
                              goto thunk_FUN_00a190f0;
                              if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x488))
                              goto LAB_01d7c730;
                              *(undefined8 *)
                               (lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x488) * 0x178 + 0x50) =
                                   *unaff_x25;
                              thunk_FUN_00a502ec();
                              if ((*unaff_x29 == 0) ||
                                 (lVar12 = *(long *)(*unaff_x29 + 0x38), lVar12 == 0))
                              goto thunk_FUN_00a190f0;
                              if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x488))
                              goto LAB_01d7c730;
                              uVar8 = *(uint *)(unaff_x19 + 0x118);
                              *(uint *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x488) * 0x178 +
                                       0x58) = uVar8;
                              lVar12 = *plVar26;
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                thunk_FUN_009ddef4();
                                lVar12 = *plVar26;
                                uVar8 = *(uint *)(unaff_x19 + 0x118);
                              }
                              lVar13 = **(long **)(lVar12 + 0xb8);
                              if (lVar13 == 0) goto thunk_FUN_00a190f0;
                              if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_01d7c730;
                              *(bool *)(lVar13 + (long)(int)uVar8 * 0x38 + 0x41) = bVar4;
                              if (bVar4) {
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_009ddef4();
                                  lVar13 = **(long **)(*plVar26 + 0xb8);
                                  if (lVar13 == 0) goto thunk_FUN_00a190f0;
                                  uVar8 = *(uint *)(unaff_x19 + 0x118);
                                }
                                if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_01d7c730;
                                puVar17 = (undefined8 *)(lVar13 + (long)(int)uVar8 * 0x38 + 0x48);
                                *puVar17 = uVar14;
                                thunk_FUN_00a502ec(puVar17,uVar14);
                                *(undefined8 *)(unaff_x19 + 0xf8) = uVar20;
                                thunk_FUN_00a502ec(unaff_x28);
                                *(undefined8 *)(unaff_x19 + 0x110) = uVar14;
                                thunk_FUN_00a502ec(unaff_x25,uVar14);
                                *(undefined4 *)(unaff_x19 + 0x118) = uVar9;
                              }
                              uVar8 = *(uint *)(unaff_x19 + 0x488);
                            }
                            goto LAB_01d7be8c;
                          }
                        }
                        goto LAB_01d7c730;
                      }
                      goto thunk_FUN_00a190f0;
                    }
                    goto LAB_01d7c730;
                  }
                  goto thunk_FUN_00a190f0;
                }
                goto LAB_01d7c730;
              }
              goto thunk_FUN_00a190f0;
            }
            goto LAB_01d7c730;
          }
          goto thunk_FUN_00a190f0;
        }
        goto LAB_01d7c730;
      }
      goto thunk_FUN_00a190f0;
    }
    goto LAB_01d7c730;
  }
  goto thunk_FUN_00a190f0;
code_r0x01d7afa4:
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_01d7c730;
  unaff_w20 = *(int *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
  unaff_w22 = uStack00000000000001a8;
  if ((*(byte *)(unaff_x19 + 0x254) & 1) != 0) goto code_r0x01d7afcc;
  goto LAB_01d7afd4;
code_r0x01d7afcc:
  in_w8 = 1;
  goto code_r0x01d7afd0;
LAB_01d7c02c:
  do {
    if (uVar29 != 0) {
      lVar18 = *plVar23;
      if (lVar18 == 0) goto thunk_FUN_00a190f0;
      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_01d7c730;
      uVar14 = *(undefined8 *)(lVar18 + uVar29 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_02bcd000 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
      }
      uVar15 = FUN_01ed7068(uVar14,0,0);
      if ((uVar15 & 1) != 0) {
        lVar18 = *plVar26;
        plVar25 = (long *)*plVar23;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
          lVar18 = *plVar26;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_01d7c730;
        lVar18 = lVar18 + lVar13;
        in_stack_00000160 = *(undefined8 *)(lVar18 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar18 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar18 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar18 + -0x1c);
        in_stack_00000140 = *(undefined8 *)(lVar18 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar18 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar18 + -0x34);
        lVar18 = FUN_01dce9d4();
        if (plVar25 == (long *)0x0) goto thunk_FUN_00a190f0;
        if ((lVar18 != 0) &&
           (lVar16 = thunk_FUN_00a05b84(lVar18,*(undefined8 *)(*plVar25 + 0x40)), lVar16 == 0)) {
LAB_01d7c734:
          uVar14 = thunk_FUN_00a1ec00();
                    /* WARNING: Subroutine does not return */
          FUN_00a190b8(uVar14,0);
        }
        if (*(uint *)(plVar25 + 3) <= uVar29) goto LAB_01d7c730;
        plVar25[uVar29 + 4] = lVar18;
        thunk_FUN_00a502ec((long)plVar25 + lVar28,lVar18);
        if ((*in_stack_00000038 == 0) ||
           (lVar18 = *(long *)(*in_stack_00000038 + 0x60), lVar18 == 0)) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_01d7c730;
        puVar17 = (undefined8 *)(lVar18 + lVar12 + 0x30);
        *puVar17 = 0;
        thunk_FUN_00a502ec(puVar17,0);
      }
      lVar18 = *plVar23;
      if (lVar18 == 0) goto thunk_FUN_00a190f0;
      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_01d7c730;
      lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
      if (lVar18 == 0) goto thunk_FUN_00a190f0;
      uVar14 = *(undefined8 *)(lVar18 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_02bcd000 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
      }
      uVar15 = FUN_01ed7068(uVar14,0,0);
      if ((uVar15 & 1) == 0) {
        lVar18 = *plVar23;
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_01d7c730;
        lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
        if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x30), lVar18 == 0))
        goto thunk_FUN_00a190f0;
        iVar10 = FUN_01ee807c(lVar18,0);
        lVar18 = *plVar26;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_009ddef4(lVar18);
          lVar18 = *plVar26;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_01d7c730;
        lVar18 = *(long *)(lVar18 + lVar13 + -0x1c);
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        iVar11 = FUN_01ee807c(lVar18,0);
        if (iVar10 != iVar11) goto LAB_01d7c218;
      }
      else {
LAB_01d7c218:
        lVar18 = *plVar23;
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_01d7c730;
        lVar16 = *plVar26;
        lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
          lVar16 = *plVar26;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_01d7c730;
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        thunk_FUN_01dce4ec(lVar18,*(undefined8 *)(lVar16 + lVar13 + -0x1c),0);
        lVar18 = *plVar23;
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_01d7c730;
        lVar16 = **(long **)(*plVar26 + 0xb8);
        if (lVar16 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_01d7c730;
        lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        *(undefined8 *)(lVar18 + 0x18) = *(undefined8 *)(lVar16 + lVar13 + -0x2c);
        thunk_FUN_00a502ec();
        lVar18 = *plVar23;
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_01d7c730;
        lVar16 = **(long **)(*plVar26 + 0xb8);
        if (lVar16 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_01d7c730;
        lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        *(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)(lVar16 + lVar13 + -0x24);
        thunk_FUN_00a502ec();
      }
      lVar18 = *plVar26;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
        lVar18 = *plVar26;
      }
      lVar16 = **(long **)(lVar18 + 0xb8);
      if (lVar16 == 0) goto thunk_FUN_00a190f0;
      if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_01d7c730;
      if (*(char *)(lVar16 + lVar13 + -0x13) != '\0') {
        lVar19 = *plVar23;
        if (lVar19 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar19 + 0x18) <= uVar29) goto LAB_01d7c730;
        lVar19 = *(long *)(lVar19 + uVar29 * 8 + 0x20);
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
          lVar16 = **(long **)(*plVar26 + 0xb8);
          if (lVar16 == 0) goto thunk_FUN_00a190f0;
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_01d7c730;
        if (lVar19 == 0) goto thunk_FUN_00a190f0;
        FUN_01dce51c(lVar19,*(undefined8 *)(lVar16 + lVar13 + -0x1c),0);
        lVar18 = *plVar23;
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_01d7c730;
        lVar16 = **(long **)(*plVar26 + 0xb8);
        if (lVar16 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_01d7c730;
        lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        *(undefined8 *)(lVar18 + 0x40) = *(undefined8 *)(lVar16 + lVar13 + -0xc);
        thunk_FUN_00a502ec();
      }
    }
    lVar18 = *plVar26;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_009ddef4();
      lVar18 = *plVar26;
    }
    lVar18 = **(long **)(lVar18 + 0xb8);
    if (lVar18 == 0) goto thunk_FUN_00a190f0;
    if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_01d7c730;
    if ((*in_stack_00000038 == 0) || (lVar16 = *(long *)(*in_stack_00000038 + 0x60), lVar16 == 0))
    goto thunk_FUN_00a190f0;
    if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_01d7c730;
    lVar19 = *(long *)(lVar16 + lVar12 + 0x30);
    iVar10 = *(int *)(lVar18 + lVar13);
    if (lVar19 == 0) {
      if (uVar29 == 0) {
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
        FUN_01dc566c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x398),iVar10 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar16 + 0x18) == 0) goto LAB_01d7c730;
        memcpy((void *)(lVar16 + lVar12 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar16 + 0x20);
      }
      else {
        lVar18 = *plVar23;
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_01d7c730;
        lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        uVar14 = FUN_01dce864(lVar18,0);
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
        FUN_01dc566c(&stack0x000000e0,uVar14,iVar10 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_01d7c730;
        __dest = (void *)(lVar16 + lVar12 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      thunk_FUN_00a502ec(__dest,0);
    }
    else {
      iVar11 = *(int *)(lVar19 + 0x18);
      if (iVar11 < iVar10 * 4) {
LAB_01d7c45c:
        if (iVar10 < 0x401) {
          iVar10 = FUN_01ef5610(iVar10 + 1,0);
        }
        else {
          iVar10 = iVar10 + 0x100;
        }
        if (*(int *)(*(long *)PTR_DAT_02bbcde8 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
        }
        FUN_01dc6440(lVar16 + lVar12 + 0x20,iVar10,0);
      }
      else if ((0 < iVar10) && (*(char *)(unaff_x19 + 0x319) != '\0')) {
        iVar1 = iVar11 + 3;
        if (-1 < iVar11) {
          iVar1 = iVar11;
        }
        if (0x100 < (iVar1 >> 2) - iVar10) goto LAB_01d7c45c;
      }
    }
    plVar26 = (long *)PTR_DAT_02bcde18;
    if ((*in_stack_00000038 == 0) || (lVar18 = *(long *)(*in_stack_00000038 + 0x60), lVar18 == 0))
    goto thunk_FUN_00a190f0;
    lVar16 = *(long *)PTR_DAT_02bcde18;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_009ddef4();
      lVar16 = *plVar26;
    }
    lVar16 = **(long **)(lVar16 + 0xb8);
    if (lVar16 == 0) goto thunk_FUN_00a190f0;
    if ((*(uint *)(lVar16 + 0x18) <= uVar29) || (*(uint *)(lVar18 + 0x18) <= uVar29))
    goto LAB_01d7c730;
    *(undefined8 *)(lVar18 + lVar12 + 0x68) = *(undefined8 *)(lVar16 + lVar13 + -0x1c);
    thunk_FUN_00a502ec();
    uVar29 = uVar29 + 1;
    lVar12 = lVar12 + 0x50;
    lVar13 = lVar13 + 0x38;
    lVar28 = lVar28 + 8;
  } while (uVar8 != uVar29);
LAB_01d7c640:
  lVar12 = *plVar23;
  if (lVar12 != 0) {
    lVar13 = (long)(int)uVar8 * 0x50 + 0x20;
    lVar28 = (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3) + 0x20;
    do {
      uVar8 = (uint)uVar22;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar8) {
LAB_01d7c70c:
        return *(undefined4 *)(unaff_x19 + 0x488);
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar8) {
LAB_01d7c730:
                    /* WARNING: Subroutine does not return */
        FUN_00a190f8();
      }
      uVar14 = *(undefined8 *)(lVar12 + lVar28);
      if (*(int *)(*(long *)PTR_DAT_02bcd000 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
      }
      uVar22 = FUN_01ee8fb4(uVar14,0,0);
      if ((uVar22 & 1) == 0) goto LAB_01d7c70c;
      if ((*in_stack_00000038 == 0) || (lVar12 = *(long *)(*in_stack_00000038 + 0x60), lVar12 == 0))
      break;
      uVar6 = *(uint *)(lVar12 + 0x18);
      if ((int)uVar8 < (int)uVar6) {
        if (*(int *)(*(long *)PTR_DAT_02bbcde8 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
          uVar6 = *(uint *)(lVar12 + 0x18);
        }
        if (uVar6 <= uVar8) goto LAB_01d7c730;
        FUN_01dc73d4(lVar12 + lVar13,0,1,0);
      }
      lVar12 = *plVar23;
      uVar22 = (ulong)(uVar8 + 1);
      lVar13 = lVar13 + 0x50;
      lVar28 = lVar28 + 8;
    } while (lVar12 != 0);
  }
thunk_FUN_00a190f0:
                    /* WARNING: Subroutine does not return */
  FUN_00a190f0();
}


