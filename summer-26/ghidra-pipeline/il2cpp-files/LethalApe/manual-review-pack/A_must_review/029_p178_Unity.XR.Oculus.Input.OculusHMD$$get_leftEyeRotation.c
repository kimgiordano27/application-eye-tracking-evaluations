/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$get_leftEyeRotation
ENTRY_POINT: 01d7af58
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


undefined4
Unity_XR_Oculus_Input_OculusHMD__get_leftEyeRotation
          (long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

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
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  void *__dest;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long unaff_x19;
  uint *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *plVar23;
  undefined8 uVar24;
  long *plVar25;
  undefined8 *unaff_x25;
  undefined8 uVar26;
  long lVar27;
  long *unaff_x27;
  ulong uVar28;
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
  
  do {
    FUN_00bec8dc(param_1,param_2,param_3,param_4);
    uVar8 = *(uint *)(unaff_x21 + 0x18);
    do {
      if (uVar8 <= unaff_w22) goto LAB_01d7c730;
      uVar8 = *unaff_x20;
      if ((uVar8 == 0x3c) && (*(char *)(unaff_x19 + 0x2fa) != '\0')) {
        uVar9 = *(undefined4 *)(unaff_x19 + 0x118);
        uVar12 = FUN_01daf3ec();
        uVar6 = uStack00000000000001a8;
        if ((uVar12 & 1) == 0) goto LAB_01d7b1ac;
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_01d7c730;
        iVar10 = *(int *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
        if ((*(byte *)(unaff_x19 + 0x254) & 1) != 0) {
          *(undefined1 *)(unaff_x19 + 0x262) = 1;
        }
        puVar5 = PTR_DAT_02bcde18;
        plVar16 = (long *)PTR_DAT_02bcde18;
        unaff_w22 = uStack00000000000001a8;
        if (*(int *)(unaff_x19 + 0x63c) == 1) {
          lVar13 = *(long *)PTR_DAT_02bcde18;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_009ddef4();
            lVar13 = *(long *)puVar5;
          }
          lVar13 = **(long **)(lVar13 + 0xb8);
          if (lVar13 != 0) {
            if (*(uint *)(unaff_x19 + 0x118) < *(uint *)(lVar13 + 0x18)) {
              lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x118) * 0x38;
              *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
              if ((*unaff_x29 != 0) && (lVar13 = *(long *)(*unaff_x29 + 0x38), lVar13 != 0)) {
                if (*(uint *)(unaff_x19 + 0x488) < *(uint *)(lVar13 + 0x18)) {
                  uVar7 = *(undefined4 *)(unaff_x19 + 0x69c);
                  lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x488) * 0x178;
                  *(short *)(lVar13 + 0x20) = (short)uVar7 + -0x2000;
                  *(undefined4 *)(lVar13 + 0x48) = uVar7;
                  *(long *)(lVar13 + 0x38) = *unaff_x28;
                  thunk_FUN_00a502ec();
                  if ((*unaff_x29 != 0) && (lVar13 = *(long *)(*unaff_x29 + 0x38), lVar13 != 0)) {
                    if (*(uint *)(unaff_x19 + 0x488) < *(uint *)(lVar13 + 0x18)) {
                      *(undefined8 *)
                       (lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x488) * 0x178 + 0x40) =
                           *(undefined8 *)(unaff_x19 + 0x690);
                      thunk_FUN_00a502ec();
                      if ((*unaff_x29 != 0) && (lVar13 = *(long *)(*unaff_x29 + 0x38), lVar13 != 0))
                      {
                        uVar8 = *(uint *)(unaff_x19 + 0x488);
                        if (uVar8 < *(uint *)(lVar13 + 0x18)) {
                          *(undefined4 *)(lVar13 + (long)(int)uVar8 * 0x178 + 0x58) =
                               *(undefined4 *)(unaff_x19 + 0x118);
                          if ((*(long *)(unaff_x19 + 0x690) != 0) &&
                             (lVar14 = FUN_01dcb584(*(long *)(unaff_x19 + 0x690),0), lVar14 != 0)) {
                            uVar15 = FUN_010ee2fc(lVar14,*(undefined4 *)(unaff_x19 + 0x69c),
                                                  *(undefined8 *)PTR_DAT_02bc6930);
                            if (uVar8 < *(uint *)(lVar13 + 0x18)) {
                              *(undefined8 *)(lVar13 + (long)(int)uVar8 * 0x178 + 0x30) = uVar15;
                              thunk_FUN_00a502ec();
                              plVar16 = (long *)PTR_DAT_02bcde18;
                              if ((*unaff_x29 != 0) &&
                                 (lVar13 = *(long *)(*unaff_x29 + 0x38), lVar13 != 0)) {
                                uVar8 = *(uint *)(unaff_x19 + 0x488);
                                if (uVar8 < *(uint *)(lVar13 + 0x18)) {
                                  lVar14 = lVar13 + (long)(int)uVar8 * 0x178;
                                  *(undefined4 *)(lVar14 + 0x2c) =
                                       *(undefined4 *)(unaff_x19 + 0x63c);
                                  *(int *)(lVar14 + 0x24) = iVar10;
                                  if (uVar6 < *(uint *)(unaff_x21 + 0x18)) {
                                    *(int *)(lVar13 + (long)(int)uVar8 * 0x178 + 0x28) =
                                         (*(int *)(unaff_x21 + (long)(int)uVar6 * 0xc + 0x24) -
                                         iVar10) + 1;
                                    *(undefined4 *)(unaff_x19 + 0x63c) = 0;
                                    *(undefined4 *)(unaff_x19 + 0x118) = uVar9;
                                    in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
                                    unaff_x25 = in_stack_00000020;
                                    unaff_w22 = uVar6;
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
        }
      }
      else {
LAB_01d7b1ac:
        uVar22 = *(undefined8 *)(unaff_x19 + 0xf8);
        uVar15 = *(undefined8 *)(unaff_x19 + 0x110);
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
            uVar12 = FUN_0168f144(uVar8,0);
            if ((uVar12 & 1) != 0) {
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
          uVar12 = FUN_0168f200(uVar8,0);
          if ((uVar12 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_02bd29d0 + 0xe0) == 0) {
              thunk_FUN_009ddef4();
            }
            uVar8 = FUN_0168f4d4(uVar8,0);
LAB_01d7b274:
            uVar8 = uVar8 & 0xffff;
          }
        }
LAB_01d7b278:
        lVar13 = FUN_01dbeeb8();
        if (lVar13 == 0) {
          iVar10 = FUN_01dc86c0();
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_01d7c730;
          if (iVar10 == 0) {
            uVar6 = 0x25a1;
          }
          else {
            uVar6 = FUN_01dc86c0(0);
          }
          *unaff_x20 = uVar6;
          uVar24 = *(undefined8 *)(unaff_x19 + 0xf8);
          uVar7 = *(undefined4 *)(unaff_x19 + 0x254);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x20c);
          if (*(int *)(*(long *)PTR_DAT_02bcd7a0 + 0xe0) == 0) {
            thunk_FUN_009ddef4();
          }
          lVar13 = FUN_01d97ce0(uVar6,uVar24,1,uVar7,uVar2,(long)&stack0x000001a8 + 4,0);
          if ((lVar13 == 0) && (lVar14 = FUN_01dc8838(), lVar14 != 0)) {
            lVar14 = FUN_01dc8838(0);
            if (lVar14 == 0) goto thunk_FUN_00a190f0;
            if (0 < *(int *)(lVar14 + 0x18)) {
              uVar26 = *(undefined8 *)(unaff_x19 + 0xf8);
              uVar24 = FUN_01dc8838(0);
              uVar7 = *(undefined4 *)(unaff_x19 + 0x254);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x20c);
              if (*(int *)(*(long *)PTR_DAT_02bcd7a0 + 0xe0) == 0) {
                thunk_FUN_009ddef4(*(long *)PTR_DAT_02bcd7a0);
              }
              lVar13 = FUN_01d9821c(uVar6,uVar26,uVar24,1,uVar7,uVar2,(long)&stack0x000001a8 + 4,0);
            }
          }
          if (lVar13 == 0) {
            uVar24 = FUN_01dc8718(0);
            if (*(int *)(*(long *)PTR_DAT_02bcd000 + 0xe0) == 0) {
              thunk_FUN_009ddef4(*(long *)PTR_DAT_02bcd000);
            }
            uVar12 = FUN_01ee8fb4(uVar24,0,0);
            if ((uVar12 & 1) != 0) {
              uVar24 = FUN_01dc8718(0);
              uVar7 = *(undefined4 *)(unaff_x19 + 0x254);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x20c);
              if (*(int *)(*(long *)PTR_DAT_02bcd7a0 + 0xe0) == 0) {
                thunk_FUN_009ddef4(*(long *)PTR_DAT_02bcd7a0);
              }
              lVar13 = FUN_01d97ce0(uVar6,uVar24,1,uVar7,uVar2,(long)&stack0x000001a8 + 4,0);
              if (lVar13 != 0) goto LAB_01d7b508;
            }
            if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_01d7c730;
            *unaff_x20 = 0x20;
            uVar24 = *(undefined8 *)(unaff_x19 + 0xf8);
            uVar7 = *(undefined4 *)(unaff_x19 + 0x254);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x20c);
            if (*(int *)(*(long *)PTR_DAT_02bcd7a0 + 0xe0) == 0) {
              thunk_FUN_009ddef4();
            }
            uVar6 = 0x20;
            lVar13 = FUN_01d97ce0(0x20,uVar24,1,uVar7,uVar2,(long)&stack0x000001a8 + 4,0);
            if (lVar13 == 0) {
              if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_01d7c730;
              *unaff_x20 = 3;
              uVar24 = *(undefined8 *)(unaff_x19 + 0xf8);
              uVar7 = *(undefined4 *)(unaff_x19 + 0x254);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x20c);
              if (*(int *)(*(long *)PTR_DAT_02bcd7a0 + 0xe0) == 0) {
                thunk_FUN_009ddef4();
              }
              uVar6 = 3;
              lVar13 = FUN_01d97ce0(3,uVar24,1,uVar7,uVar2,(long)&stack0x000001a8 + 4,0);
            }
          }
LAB_01d7b508:
          uVar12 = FUN_01dc86fc(0);
          unaff_x29 = in_stack_00000038;
          if ((uVar12 & 1) == 0) {
            plVar16 = (long *)FUN_00a19040(*(undefined8 *)PTR_DAT_02c04c28,4);
            if ((int)uVar8 < 0x10000) {
              in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar8);
              lVar14 = thunk_FUN_00a058b4(*(undefined8 *)PTR_DAT_02bd8658,&stack0x000000e0);
              if (plVar16 == (long *)0x0) goto thunk_FUN_00a190f0;
              if ((lVar14 != 0) &&
                 (lVar27 = thunk_FUN_00a05b84(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar27 == 0)
                 ) goto LAB_01d7c734;
              if ((int)plVar16[3] == 0) goto LAB_01d7c730;
              plVar16[4] = lVar14;
              thunk_FUN_00a502ec(plVar16 + 4,lVar14);
              if (*(long *)(unaff_x19 + 0xf0) == 0) goto thunk_FUN_00a190f0;
              lVar14 = FUN_01ed0a38(*(long *)(unaff_x19 + 0xf0),0);
              if ((lVar14 != 0) &&
                 (lVar27 = thunk_FUN_00a05b84(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar27 == 0)
                 ) goto LAB_01d7c734;
              if (*(uint *)(plVar16 + 3) < 2) goto LAB_01d7c730;
              plVar16[5] = lVar14;
              thunk_FUN_00a502ec(plVar16 + 5,lVar14);
              if (lVar13 == 0) goto thunk_FUN_00a190f0;
              in_stack_00000170 = *(undefined4 *)(lVar13 + 0x14);
              lVar14 = thunk_FUN_00a058b4(*(undefined8 *)PTR_DAT_02bf4f30,&stack0x00000170);
              if ((lVar14 != 0) &&
                 (lVar27 = thunk_FUN_00a05b84(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar27 == 0)
                 ) goto LAB_01d7c734;
              if (*(uint *)(plVar16 + 3) < 3) goto LAB_01d7c730;
              plVar16[6] = lVar14;
              thunk_FUN_00a502ec(plVar16 + 6,lVar14);
              lVar14 = FUN_01ed0a38();
              if ((lVar14 != 0) &&
                 (lVar27 = thunk_FUN_00a05b84(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar27 == 0)
                 ) goto LAB_01d7c734;
              uVar8 = *(uint *)(plVar16 + 3);
              puVar19 = (undefined8 *)PTR_DAT_02c11188;
            }
            else {
              in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar8);
              lVar14 = thunk_FUN_00a058b4(*(undefined8 *)PTR_DAT_02bd8658,&stack0x000000e0);
              if (plVar16 == (long *)0x0) goto thunk_FUN_00a190f0;
              if ((lVar14 != 0) &&
                 (lVar27 = thunk_FUN_00a05b84(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar27 == 0)
                 ) goto LAB_01d7c734;
              if ((int)plVar16[3] == 0) goto LAB_01d7c730;
              plVar16[4] = lVar14;
              thunk_FUN_00a502ec(plVar16 + 4,lVar14);
              if (*(long *)(unaff_x19 + 0xf0) == 0) goto thunk_FUN_00a190f0;
              lVar14 = FUN_01ed0a38(*(long *)(unaff_x19 + 0xf0),0);
              if ((lVar14 != 0) &&
                 (lVar27 = thunk_FUN_00a05b84(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar27 == 0)
                 ) goto LAB_01d7c734;
              if (*(uint *)(plVar16 + 3) < 2) goto LAB_01d7c730;
              plVar16[5] = lVar14;
              thunk_FUN_00a502ec(plVar16 + 5,lVar14);
              if (lVar13 == 0) goto thunk_FUN_00a190f0;
              in_stack_00000170 = *(undefined4 *)(lVar13 + 0x14);
              lVar14 = thunk_FUN_00a058b4(*(undefined8 *)PTR_DAT_02bf4f30,&stack0x00000170);
              if ((lVar14 != 0) &&
                 (lVar27 = thunk_FUN_00a05b84(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar27 == 0)
                 ) goto LAB_01d7c734;
              if (*(uint *)(plVar16 + 3) < 3) goto LAB_01d7c730;
              plVar16[6] = lVar14;
              thunk_FUN_00a502ec(plVar16 + 6,lVar14);
              lVar14 = FUN_01ed0a38();
              if ((lVar14 != 0) &&
                 (lVar27 = thunk_FUN_00a05b84(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar27 == 0)
                 ) goto LAB_01d7c734;
              uVar8 = *(uint *)(plVar16 + 3);
              puVar19 = (undefined8 *)PTR_DAT_02bcf000;
            }
            if (uVar8 < 4) goto LAB_01d7c730;
            plVar16[7] = lVar14;
            thunk_FUN_00a502ec(plVar16 + 7,lVar14);
            uVar24 = FUN_0158e8dc(*puVar19,plVar16,0);
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
            if (lVar13 == 0) goto thunk_FUN_00a190f0;
          }
        }
        if (*(char *)(lVar13 + 0x10) == '\x01') {
          if (*(long *)(lVar13 + 0x18) == 0) goto thunk_FUN_00a190f0;
          iVar10 = FUN_01d87360(*(long *)(lVar13 + 0x18),0);
          if (*unaff_x28 == 0) goto thunk_FUN_00a190f0;
          iVar11 = FUN_01d87360(*unaff_x28,0);
          if (iVar10 == iVar11) goto LAB_01d7b828;
          plVar16 = *(long **)(lVar13 + 0x18);
          if (plVar16 == (long *)0x0) {
            plVar16 = (long *)0x0;
            *unaff_x28 = 0;
          }
          else {
            lVar14 = *(long *)PTR_DAT_02be86e8;
            bVar3 = *(byte *)(lVar14 + 300);
            if (*(byte *)(*plVar16 + 300) < bVar3) {
              plVar23 = (long *)0x0;
            }
            else {
              plVar23 = plVar16;
              if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar3 * 8 + -8) != lVar14) {
                plVar23 = (long *)0x0;
              }
            }
            *unaff_x28 = (long)plVar23;
            if (*(byte *)(*plVar16 + 300) < bVar3) {
              plVar16 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar3 * 8 + -8) != lVar14) {
              plVar16 = (long *)0x0;
            }
          }
          thunk_FUN_00a502ec(unaff_x28,plVar16);
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
        plVar16 = (long *)(lVar14 + 0x30);
        *plVar16 = lVar13;
        *(undefined4 *)(lVar14 + 0x2c) = 0;
        thunk_FUN_00a502ec(plVar16,lVar13);
        if ((*unaff_x29 == 0) || (lVar14 = *(long *)(*unaff_x29 + 0x38), lVar14 == 0))
        goto thunk_FUN_00a190f0;
        uVar6 = *(uint *)(unaff_x19 + 0x488);
        if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_01d7c730;
        lVar27 = lVar14 + (long)(int)uVar6 * 0x178;
        *(short *)(lVar27 + 0x20) = (short)uVar8;
        *(undefined1 *)(lVar27 + 0x5c) = uStack00000000000001ac;
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_01d7c730;
        lVar14 = lVar14 + (long)(int)uVar6 * 0x178;
        *(undefined8 *)(lVar14 + 0x24) =
             *(undefined8 *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
        *(long *)(lVar14 + 0x38) = *unaff_x28;
        thunk_FUN_00a502ec();
        plVar16 = (long *)PTR_DAT_02bcde18;
        if (*(char *)(lVar13 + 0x10) == '\x02') {
          plVar23 = *(long **)(lVar13 + 0x18);
          if (plVar23 == (long *)0x0) goto thunk_FUN_00a190f0;
          bVar3 = *(byte *)(*(long *)PTR_DAT_02c0fb18 + 300);
          if ((*(byte *)(*plVar23 + 300) < bVar3) ||
             (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_02c0fb18)) goto thunk_FUN_00a190f0;
          lVar27 = plVar23[4];
          lVar14 = *(long *)PTR_DAT_02bcde18;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_009ddef4();
            lVar14 = *plVar16;
          }
          uVar8 = FUN_01d75cd4(lVar27,plVar23,*(long *)(lVar14 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
          *(uint *)(unaff_x19 + 0x118) = uVar8;
          lVar14 = **(long **)(*plVar16 + 0xb8);
          if (lVar14 == 0) goto thunk_FUN_00a190f0;
          if (*(uint *)(lVar14 + 0x18) <= uVar8) goto LAB_01d7c730;
          lVar14 = lVar14 + (long)(int)uVar8 * 0x38;
          *(int *)(lVar14 + 0x54) = *(int *)(lVar14 + 0x54) + 1;
          if ((*unaff_x29 == 0) || (lVar14 = *(long *)(*unaff_x29 + 0x38), lVar14 == 0))
          goto thunk_FUN_00a190f0;
          if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x488)) goto LAB_01d7c730;
          lVar14 = lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x488) * 0x178;
          *(undefined4 *)(lVar14 + 0x2c) = 1;
          uVar7 = *(undefined4 *)(unaff_x19 + 0x118);
          *(undefined8 *)(lVar14 + 0x40) = plVar23;
          *(undefined4 *)(lVar14 + 0x58) = uVar7;
          thunk_FUN_00a502ec((undefined8 *)(lVar14 + 0x40),plVar23);
          plVar16 = (long *)PTR_DAT_02bcde18;
          if ((*(long *)(unaff_x19 + 0x360) == 0) ||
             (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x360) + 0x38), lVar14 == 0))
          goto thunk_FUN_00a190f0;
          uVar8 = *(uint *)(unaff_x19 + 0x488);
          if (*(uint *)(lVar14 + 0x18) <= uVar8) goto LAB_01d7c730;
          *(undefined4 *)(lVar14 + (long)(int)uVar8 * 0x178 + 0x48) = *(undefined4 *)(lVar13 + 0x28)
          ;
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
              uVar12 = FUN_01dc8854(0);
              if ((uVar12 & 1) == 0) {
                if (*unaff_x28 == 0) goto thunk_FUN_00a190f0;
                uVar24 = *(undefined8 *)(*unaff_x28 + 0x20);
              }
              else {
                if (*unaff_x28 == 0) goto thunk_FUN_00a190f0;
                uVar24 = *unaff_x25;
                uVar26 = *(undefined8 *)(*unaff_x28 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_02c0bad0 + 0xe0) == 0) {
                  thunk_FUN_009ddef4();
                }
                uVar24 = FUN_01dc4b48(uVar24,uVar26,0);
                unaff_x25 = in_stack_00000020;
              }
              *unaff_x25 = uVar24;
              thunk_FUN_00a502ec(unaff_x25);
              lVar14 = *plVar16;
              uVar24 = *unaff_x25;
              lVar27 = *unaff_x28;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_009ddef4();
                lVar14 = *plVar16;
              }
              uVar7 = FUN_01d75aa4(uVar24,lVar27,*(long *)(lVar14 + 0xb8),
                                   *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
              *(undefined4 *)(unaff_x19 + 0x118) = uVar7;
              unaff_x25 = in_stack_00000020;
            }
          }
          if (*(long *)(lVar13 + 0x20) == 0) goto thunk_FUN_00a190f0;
          iVar10 = FUN_01f49678(*(long *)(lVar13 + 0x20),0);
          if (0 < iVar10) {
            if (*(long *)(lVar13 + 0x20) == 0) goto thunk_FUN_00a190f0;
            lVar14 = *unaff_x28;
            uVar24 = *unaff_x25;
            uVar7 = FUN_01f49678(*(long *)(lVar13 + 0x20),0);
            if (*(int *)(*(long *)PTR_DAT_02c0bad0 + 0xe0) == 0) {
              thunk_FUN_009ddef4(*(long *)PTR_DAT_02c0bad0);
            }
            uVar24 = FUN_01dc45e4(lVar14,uVar24,uVar7,0);
            *unaff_x25 = uVar24;
            thunk_FUN_00a502ec(unaff_x25,uVar24);
            lVar13 = *plVar16;
            uVar24 = *unaff_x25;
            lVar14 = *unaff_x28;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_009ddef4();
              lVar13 = *plVar16;
            }
            uVar7 = FUN_01d75aa4(uVar24,lVar14,*(long *)(lVar13 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
            bVar4 = true;
            *(undefined4 *)(unaff_x19 + 0x118) = uVar7;
            unaff_x25 = in_stack_00000020;
          }
          if (*(int *)(*(long *)PTR_DAT_02bd29d0 + 0xe0) == 0) {
            thunk_FUN_009ddef4();
          }
          uVar12 = FUN_0168c82c(uVar8,0);
          unaff_x27 = (long *)PTR_DAT_02bc9b28;
          if ((uVar8 != 0x200b) && ((uVar12 & 1) == 0)) {
            lVar13 = *plVar16;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_009ddef4(lVar13);
              lVar13 = *plVar16;
            }
            lVar14 = **(long **)(lVar13 + 0xb8);
            if (lVar14 == 0) goto thunk_FUN_00a190f0;
            uVar8 = *(uint *)(unaff_x19 + 0x118);
            if (*(uint *)(lVar14 + 0x18) <= uVar8) goto LAB_01d7c730;
            if (*(int *)(lVar14 + (long)(int)uVar8 * 0x38 + 0x54) < 0x3fff) {
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_009ddef4(lVar13);
                lVar14 = **(long **)(*plVar16 + 0xb8);
                if (lVar14 == 0) goto thunk_FUN_00a190f0;
                uVar8 = *(uint *)(unaff_x19 + 0x118);
              }
            }
            else {
              uVar24 = *unaff_x25;
              lVar13 = thunk_FUN_00a05c70(*(undefined8 *)PTR_DAT_02c0ff78);
              if (lVar13 == 0) goto thunk_FUN_00a190f0;
              FUN_01edc188(lVar13,uVar24,0);
              lVar14 = *plVar16;
              lVar27 = *unaff_x28;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_009ddef4();
                lVar14 = *plVar16;
              }
              uVar8 = FUN_01d75aa4(lVar13,lVar27,*(long *)(lVar14 + 0xb8),
                                   *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
              *(uint *)(unaff_x19 + 0x118) = uVar8;
              lVar14 = **(long **)(*plVar16 + 0xb8);
              if (lVar14 == 0) goto thunk_FUN_00a190f0;
            }
            if (*(uint *)(lVar14 + 0x18) <= uVar8) goto LAB_01d7c730;
            lVar14 = lVar14 + (long)(int)uVar8 * 0x38;
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
          uVar8 = *(uint *)(unaff_x19 + 0x118);
          *(uint *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x488) * 0x178 + 0x58) = uVar8;
          lVar13 = *plVar16;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_009ddef4();
            lVar13 = *plVar16;
            uVar8 = *(uint *)(unaff_x19 + 0x118);
          }
          lVar14 = **(long **)(lVar13 + 0xb8);
          if (lVar14 == 0) goto thunk_FUN_00a190f0;
          if (*(uint *)(lVar14 + 0x18) <= uVar8) goto LAB_01d7c730;
          *(bool *)(lVar14 + (long)(int)uVar8 * 0x38 + 0x41) = bVar4;
          if (bVar4) {
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_009ddef4();
              lVar14 = **(long **)(*plVar16 + 0xb8);
              if (lVar14 == 0) goto thunk_FUN_00a190f0;
              uVar8 = *(uint *)(unaff_x19 + 0x118);
            }
            if (*(uint *)(lVar14 + 0x18) <= uVar8) goto LAB_01d7c730;
            puVar19 = (undefined8 *)(lVar14 + (long)(int)uVar8 * 0x38 + 0x48);
            *puVar19 = uVar15;
            thunk_FUN_00a502ec(puVar19,uVar15);
            *(undefined8 *)(unaff_x19 + 0xf8) = uVar22;
            thunk_FUN_00a502ec(unaff_x28);
            *(undefined8 *)(unaff_x19 + 0x110) = uVar15;
            thunk_FUN_00a502ec(unaff_x25,uVar15);
            *(undefined4 *)(unaff_x19 + 0x118) = uVar9;
          }
          uVar8 = *(uint *)(unaff_x19 + 0x488);
        }
LAB_01d7be8c:
        *(uint *)(unaff_x19 + 0x488) = uVar8 + 1;
      }
      uVar8 = *(uint *)(unaff_x21 + 0x18);
      unaff_w22 = unaff_w22 + 1;
      if ((int)uVar8 <= (int)unaff_w22) {
LAB_01d7beac:
        if (*(char *)(unaff_x19 + 0x3ed) != '\0') {
          *(undefined1 *)(unaff_x19 + 0x3ed) = 0;
          goto LAB_01d7c70c;
        }
        lVar13 = *unaff_x29;
        if (lVar13 == 0) goto thunk_FUN_00a190f0;
        *(int *)(lVar13 + 0x1c) = in_stack_00000018._4_4_;
        lVar14 = *plVar16;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
          lVar14 = *plVar16;
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
        if (lVar14 == 0) goto thunk_FUN_00a190f0;
        uVar8 = System_Array_EmptyInternalEnumerator<ProbeVolumeBakingProcessSettings>___ctor
                          (lVar14,*(undefined8 *)PTR_DAT_02bdbe60);
        *(uint *)(lVar13 + 0x34) = uVar8;
        puVar5 = PTR_DAT_02bd73e0;
        if (*unaff_x29 == 0) goto thunk_FUN_00a190f0;
        plVar23 = (long *)(*unaff_x29 + 0x60);
        lVar13 = *plVar23;
        if (lVar13 == 0) goto thunk_FUN_00a190f0;
        uVar12 = (ulong)uVar8;
        if (*(int *)(lVar13 + 0x18) < (int)uVar8) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_009ddef4();
          }
          FUN_00bec950(plVar23,uVar12,0,*(undefined8 *)puVar5);
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
          lVar13 = *plVar25;
          if (lVar13 == 0) goto thunk_FUN_00a190f0;
          iVar10 = *(int *)(unaff_x19 + 0x488);
          if (0x100 < *(int *)(lVar13 + 0x18) - iVar10) {
            iVar11 = 0x100;
            if (0x100 < iVar10 + 1) {
              iVar11 = iVar10 + 1;
            }
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_009ddef4();
            }
            FUN_00bec8dc(plVar25,iVar11,1,*(undefined8 *)PTR_DAT_02bddf10);
            plVar16 = (long *)PTR_DAT_02bcde18;
          }
        }
        if ((int)uVar8 < 1) goto LAB_01d7c640;
        lVar13 = 0;
        uVar28 = 0;
        lVar14 = 0x54;
        lVar27 = 0x20;
        goto LAB_01d7c02c;
      }
      if (uVar8 <= unaff_w22) goto LAB_01d7c730;
      unaff_x20 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
      if (*unaff_x20 == 0) goto LAB_01d7beac;
      if (*unaff_x29 == 0) goto thunk_FUN_00a190f0;
      param_1 = (long *)(*unaff_x29 + 0x38);
      iVar10 = *(int *)(unaff_x19 + 0x488);
    } while ((*param_1 != 0) && (iVar10 < *(int *)(*param_1 + 0x18)));
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_009ddef4();
    }
    param_2 = (ulong)(iVar10 + 1);
    param_3 = 1;
    param_4 = *(undefined8 *)PTR_DAT_02bddf10;
  } while( true );
LAB_01d7c02c:
  do {
    if (uVar28 != 0) {
      lVar20 = *plVar23;
      if (lVar20 == 0) goto thunk_FUN_00a190f0;
      if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_01d7c730;
      uVar15 = *(undefined8 *)(lVar20 + uVar28 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_02bcd000 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
      }
      uVar17 = FUN_01ed7068(uVar15,0,0);
      if ((uVar17 & 1) != 0) {
        lVar20 = *plVar16;
        plVar25 = (long *)*plVar23;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
          lVar20 = *plVar16;
        }
        lVar20 = **(long **)(lVar20 + 0xb8);
        if (lVar20 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_01d7c730;
        lVar20 = lVar20 + lVar14;
        in_stack_00000160 = *(undefined8 *)(lVar20 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar20 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar20 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar20 + -0x1c);
        in_stack_00000140 = *(undefined8 *)(lVar20 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar20 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar20 + -0x34);
        lVar20 = FUN_01dce9d4();
        if (plVar25 == (long *)0x0) goto thunk_FUN_00a190f0;
        if ((lVar20 != 0) &&
           (lVar18 = thunk_FUN_00a05b84(lVar20,*(undefined8 *)(*plVar25 + 0x40)), lVar18 == 0)) {
LAB_01d7c734:
          uVar15 = thunk_FUN_00a1ec00();
                    /* WARNING: Subroutine does not return */
          FUN_00a190b8(uVar15,0);
        }
        if (*(uint *)(plVar25 + 3) <= uVar28) goto LAB_01d7c730;
        plVar25[uVar28 + 4] = lVar20;
        thunk_FUN_00a502ec((long)plVar25 + lVar27,lVar20);
        if ((*in_stack_00000038 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000038 + 0x60), lVar20 == 0)) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_01d7c730;
        puVar19 = (undefined8 *)(lVar20 + lVar13 + 0x30);
        *puVar19 = 0;
        thunk_FUN_00a502ec(puVar19,0);
      }
      lVar20 = *plVar23;
      if (lVar20 == 0) goto thunk_FUN_00a190f0;
      if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_01d7c730;
      lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
      if (lVar20 == 0) goto thunk_FUN_00a190f0;
      uVar15 = *(undefined8 *)(lVar20 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_02bcd000 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
      }
      uVar17 = FUN_01ed7068(uVar15,0,0);
      if ((uVar17 & 1) == 0) {
        lVar20 = *plVar23;
        if (lVar20 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_01d7c730;
        lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
        if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x30), lVar20 == 0))
        goto thunk_FUN_00a190f0;
        iVar10 = FUN_01ee807c(lVar20,0);
        lVar20 = *plVar16;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_009ddef4(lVar20);
          lVar20 = *plVar16;
        }
        lVar20 = **(long **)(lVar20 + 0xb8);
        if (lVar20 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_01d7c730;
        lVar20 = *(long *)(lVar20 + lVar14 + -0x1c);
        if (lVar20 == 0) goto thunk_FUN_00a190f0;
        iVar11 = FUN_01ee807c(lVar20,0);
        if (iVar10 != iVar11) goto LAB_01d7c218;
      }
      else {
LAB_01d7c218:
        lVar20 = *plVar23;
        if (lVar20 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_01d7c730;
        lVar18 = *plVar16;
        lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
          lVar18 = *plVar16;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_01d7c730;
        if (lVar20 == 0) goto thunk_FUN_00a190f0;
        thunk_FUN_01dce4ec(lVar20,*(undefined8 *)(lVar18 + lVar14 + -0x1c),0);
        lVar20 = *plVar23;
        if (lVar20 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_01d7c730;
        lVar18 = **(long **)(*plVar16 + 0xb8);
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_01d7c730;
        lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
        if (lVar20 == 0) goto thunk_FUN_00a190f0;
        *(undefined8 *)(lVar20 + 0x18) = *(undefined8 *)(lVar18 + lVar14 + -0x2c);
        thunk_FUN_00a502ec();
        lVar20 = *plVar23;
        if (lVar20 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_01d7c730;
        lVar18 = **(long **)(*plVar16 + 0xb8);
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_01d7c730;
        lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
        if (lVar20 == 0) goto thunk_FUN_00a190f0;
        *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)(lVar18 + lVar14 + -0x24);
        thunk_FUN_00a502ec();
      }
      lVar20 = *plVar16;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
        lVar20 = *plVar16;
      }
      lVar18 = **(long **)(lVar20 + 0xb8);
      if (lVar18 == 0) goto thunk_FUN_00a190f0;
      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_01d7c730;
      if (*(char *)(lVar18 + lVar14 + -0x13) != '\0') {
        lVar21 = *plVar23;
        if (lVar21 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar21 + 0x18) <= uVar28) goto LAB_01d7c730;
        lVar21 = *(long *)(lVar21 + uVar28 * 8 + 0x20);
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
          lVar18 = **(long **)(*plVar16 + 0xb8);
          if (lVar18 == 0) goto thunk_FUN_00a190f0;
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_01d7c730;
        if (lVar21 == 0) goto thunk_FUN_00a190f0;
        FUN_01dce51c(lVar21,*(undefined8 *)(lVar18 + lVar14 + -0x1c),0);
        lVar20 = *plVar23;
        if (lVar20 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_01d7c730;
        lVar18 = **(long **)(*plVar16 + 0xb8);
        if (lVar18 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_01d7c730;
        lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
        if (lVar20 == 0) goto thunk_FUN_00a190f0;
        *(undefined8 *)(lVar20 + 0x40) = *(undefined8 *)(lVar18 + lVar14 + -0xc);
        thunk_FUN_00a502ec();
      }
    }
    lVar20 = *plVar16;
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_009ddef4();
      lVar20 = *plVar16;
    }
    lVar20 = **(long **)(lVar20 + 0xb8);
    if (lVar20 == 0) goto thunk_FUN_00a190f0;
    if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_01d7c730;
    if ((*in_stack_00000038 == 0) || (lVar18 = *(long *)(*in_stack_00000038 + 0x60), lVar18 == 0))
    goto thunk_FUN_00a190f0;
    if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_01d7c730;
    lVar21 = *(long *)(lVar18 + lVar13 + 0x30);
    iVar10 = *(int *)(lVar20 + lVar14);
    if (lVar21 == 0) {
      if (uVar28 == 0) {
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
        if (*(int *)(lVar18 + 0x18) == 0) goto LAB_01d7c730;
        memcpy((void *)(lVar18 + lVar13 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar18 + 0x20);
      }
      else {
        lVar20 = *plVar23;
        if (lVar20 == 0) goto thunk_FUN_00a190f0;
        if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_01d7c730;
        lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
        if (lVar20 == 0) goto thunk_FUN_00a190f0;
        uVar15 = FUN_01dce864(lVar20,0);
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
        FUN_01dc566c(&stack0x000000e0,uVar15,iVar10 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_01d7c730;
        __dest = (void *)(lVar18 + lVar13 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      thunk_FUN_00a502ec(__dest,0);
    }
    else {
      iVar11 = *(int *)(lVar21 + 0x18);
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
        FUN_01dc6440(lVar18 + lVar13 + 0x20,iVar10,0);
      }
      else if ((0 < iVar10) && (*(char *)(unaff_x19 + 0x319) != '\0')) {
        iVar1 = iVar11 + 3;
        if (-1 < iVar11) {
          iVar1 = iVar11;
        }
        if (0x100 < (iVar1 >> 2) - iVar10) goto LAB_01d7c45c;
      }
    }
    plVar16 = (long *)PTR_DAT_02bcde18;
    if ((*in_stack_00000038 == 0) || (lVar20 = *(long *)(*in_stack_00000038 + 0x60), lVar20 == 0))
    goto thunk_FUN_00a190f0;
    lVar18 = *(long *)PTR_DAT_02bcde18;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_009ddef4();
      lVar18 = *plVar16;
    }
    lVar18 = **(long **)(lVar18 + 0xb8);
    if (lVar18 == 0) goto thunk_FUN_00a190f0;
    if ((*(uint *)(lVar18 + 0x18) <= uVar28) || (*(uint *)(lVar20 + 0x18) <= uVar28))
    goto LAB_01d7c730;
    *(undefined8 *)(lVar20 + lVar13 + 0x68) = *(undefined8 *)(lVar18 + lVar14 + -0x1c);
    thunk_FUN_00a502ec();
    uVar28 = uVar28 + 1;
    lVar13 = lVar13 + 0x50;
    lVar14 = lVar14 + 0x38;
    lVar27 = lVar27 + 8;
  } while (uVar8 != uVar28);
LAB_01d7c640:
  lVar13 = *plVar23;
  if (lVar13 != 0) {
    lVar14 = (long)(int)uVar8 * 0x50 + 0x20;
    lVar27 = (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3) + 0x20;
    do {
      uVar8 = (uint)uVar12;
      if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar8) {
LAB_01d7c70c:
        return *(undefined4 *)(unaff_x19 + 0x488);
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar8) {
LAB_01d7c730:
                    /* WARNING: Subroutine does not return */
        FUN_00a190f8();
      }
      uVar15 = *(undefined8 *)(lVar13 + lVar27);
      if (*(int *)(*(long *)PTR_DAT_02bcd000 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
      }
      uVar12 = FUN_01ee8fb4(uVar15,0,0);
      if ((uVar12 & 1) == 0) goto LAB_01d7c70c;
      if ((*in_stack_00000038 == 0) || (lVar13 = *(long *)(*in_stack_00000038 + 0x60), lVar13 == 0))
      break;
      uVar6 = *(uint *)(lVar13 + 0x18);
      if ((int)uVar8 < (int)uVar6) {
        if (*(int *)(*(long *)PTR_DAT_02bbcde8 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
          uVar6 = *(uint *)(lVar13 + 0x18);
        }
        if (uVar6 <= uVar8) goto LAB_01d7c730;
        FUN_01dc73d4(lVar13 + lVar14,0,1,0);
      }
      lVar13 = *plVar23;
      uVar12 = (ulong)(uVar8 + 1);
      lVar14 = lVar14 + 0x50;
      lVar27 = lVar27 + 8;
    } while (lVar13 != 0);
  }
thunk_FUN_00a190f0:
                    /* WARNING: Subroutine does not return */
  FUN_00a190f0();
}


