/*
FUNCTION_NAME: RealisticEyeMovements.LookTargetController$$OnPlayerCameraDisabled
ENTRY_POINT: 0348b67c
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_file_logging_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


void RealisticEyeMovements_LookTargetController__OnPlayerCameraDisabled
               (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,code *param_5
               )

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  float *pfVar11;
  long unaff_x19;
  undefined8 uVar12;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x27;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  
  *(code **)(unaff_x23 + 0x188) = param_5;
  lVar6 = (*param_5)();
  if (lVar6 != 0) {
    uVar13 = FUN_07a18d2c(lVar6,0);
    lVar6 = *(long *)(unaff_x19 + 0x18);
    *(undefined4 *)(unaff_x19 + 0x188) = uVar13;
    *(float *)(unaff_x19 + 0x18c) = param_2;
    *(float *)(unaff_x19 + 400) = param_3;
    if (lVar6 != 0) {
      pcVar10 = *(code **)(unaff_x23 + 0x188);
      if (pcVar10 == (code *)0x0) {
        pcVar10 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
        *(code **)(unaff_x23 + 0x188) = pcVar10;
      }
      lVar6 = (*pcVar10)(lVar6);
      if (lVar6 != 0) {
        uVar13 = FUN_07a172b0(lVar6,0);
        *(undefined4 *)(unaff_x19 + 0x194) = uVar13;
        *(float *)(unaff_x19 + 0x198) = param_2;
        *(float *)(unaff_x19 + 0x19c) = param_3;
        *(undefined4 *)(unaff_x19 + 0x1a0) = param_4;
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          uVar13 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x20),0);
          *(undefined4 *)(unaff_x19 + 0x1a4) = uVar13;
          *(float *)(unaff_x19 + 0x1a8) = param_2;
          *(float *)(unaff_x19 + 0x1ac) = param_3;
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            uVar13 = FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0);
            lVar6 = *(long *)(unaff_x19 + 0x18);
            *(undefined4 *)(unaff_x19 + 0x1b0) = uVar13;
            *(float *)(unaff_x19 + 0x1b4) = param_2;
            *(float *)(unaff_x19 + 0x1b8) = param_3;
            *(undefined4 *)(unaff_x19 + 0x1bc) = param_4;
            if (lVar6 != 0) {
              if (DAT_086f22e0 == (code *)0x0) {
                DAT_086f22e0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::get_angularXMotion()"
                                                  );
              }
              uVar13 = (*DAT_086f22e0)(lVar6);
              lVar6 = *(long *)(unaff_x19 + 0x18);
              *(undefined4 *)(unaff_x19 + 0x1c0) = uVar13;
              if (lVar6 != 0) {
                if (DAT_086f22f0 == (code *)0x0) {
                  DAT_086f22f0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::get_angularYMotion()"
                                                  );
                }
                uVar13 = (*DAT_086f22f0)(lVar6);
                lVar6 = *(long *)(unaff_x19 + 0x18);
                *(undefined4 *)(unaff_x19 + 0x1c4) = uVar13;
                if (lVar6 != 0) {
                  if (DAT_086f2300 == (code *)0x0) {
                    DAT_086f2300 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::get_angularZMotion()"
                                                  );
                  }
                  uVar13 = (*DAT_086f2300)(lVar6);
                  *(undefined4 *)(unaff_x19 + 0x1c8) = uVar13;
                  uVar13 = FUN_0348ce8c();
                  *(undefined4 *)(unaff_x19 + 0x244) = uVar13;
                  *(float *)(unaff_x19 + 0x248) = param_2;
                  *(float *)(unaff_x19 + 0x24c) = param_3;
                  *(undefined4 *)(unaff_x19 + 0x250) = param_4;
                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                    fVar14 = (float)FUN_07a87af8(*(long *)(unaff_x19 + 0x18),0);
                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                      fVar26 = param_3;
                      fVar16 = param_2;
                      fVar15 = (float)FUN_07a88e40(*(long *)(unaff_x19 + 0x18),0);
                      fVar21 = fVar14 * fVar26;
                      fVar25 = param_2 * fVar26 - param_3 * fVar16;
                      fVar26 = param_3 * fVar15 - fVar21;
                      fVar14 = fVar14 * fVar16 - param_2 * fVar15;
                      fStack0000000000000008 = fVar25;
                      fStack000000000000000c = fVar26;
                      in_stack_00000010 = fVar14;
                      if (DAT_086d7cc3 == '\0') {
                        FUN_0335b6c8(&DAT_083ce8b0,1);
                        DataMemoryBarrier(2,3);
                        DAT_086d7cc3 = '\x01';
                      }
                      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                        FUN_033b9870();
                      }
                      fVar16 = DAT_012edb5c;
                      fVar19 = fVar14 * fVar14;
                      fVar15 = SQRT(fVar19 + fVar25 * fVar25 + fVar26 * fVar26);
                      if (fVar15 <= DAT_012edb5c) {
                        if (DAT_086d7cc6 == '\0') {
                          FUN_0335b6c8(&DAT_083d2c90,1);
                          DataMemoryBarrier(2,3);
                          DAT_086d7cc6 = '\x01';
                        }
                        pfVar11 = *(float **)(DAT_083d2c90 + 0xb8);
                        fVar25 = *pfVar11;
                        fVar26 = pfVar11[1];
                        fVar14 = pfVar11[2];
                      }
                      else {
                        fVar25 = fVar25 / fVar15;
                        fVar26 = fVar26 / fVar15;
                        fVar14 = fVar14 / fVar15;
                      }
                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                        fVar15 = (float)FUN_07a87af8(*(long *)(unaff_x19 + 0x18),0);
                        fVar27 = fVar26 * fVar21 - fVar14 * fVar19;
                        fVar23 = fVar14 * fVar15;
                        fVar21 = fVar25 * fVar21;
                        fVar28 = fVar23 - fVar21;
                        fVar15 = fVar25 * fVar19 - fVar26 * fVar15;
                        fStack0000000000000008 = fVar27;
                        fStack000000000000000c = fVar28;
                        in_stack_00000010 = fVar15;
                        if (DAT_086d7cc3 == '\0') {
                          FUN_0335b6c8(&DAT_083ce8b0,1);
                          DataMemoryBarrier(2,3);
                          DAT_086d7cc3 = '\x01';
                        }
                        if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                          FUN_033b9870();
                        }
                        fVar15 = SQRT(fVar15 * fVar15 + fVar27 * fVar27 + fVar28 * fVar28);
                        if (fVar15 <= fVar16) {
                          if (DAT_086d7cc6 == '\0') {
                            FUN_0335b6c8(&DAT_083d2c90,1);
                            DataMemoryBarrier(2,3);
                            DAT_086d7cc6 = '\x01';
                          }
                          fVar28 = **(float **)(DAT_083d2c90 + 0xb8);
                          fStack0000000000000004 = fVar28;
                        }
                        else {
                          fVar21 = fVar27 / fVar15;
                          fVar28 = fVar28 / fVar15;
                          fStack0000000000000004 = fVar21;
                        }
                        if (*(long *)(unaff_x19 + 0x20) != 0) {
                          FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0);
                          fVar16 = (float)FUN_07a00400(0);
                          if (*unaff_x22 != 0) {
                            fVar15 = fVar23;
                            fVar19 = fVar28;
                            fVar27 = fVar21;
                            fVar17 = (float)FUN_07a172b0(*unaff_x22,0);
                            fVar22 = fVar21 * fVar27;
                            fVar24 = fVar16 * fVar19 + fVar23 * fVar27 + fVar21 * fVar15;
                            fVar20 = ((fVar23 * fVar15 - fVar16 * fVar17) - fVar28 * fVar19) -
                                     fVar22;
                            *(float *)(unaff_x19 + 0x2b4) =
                                 (fVar28 * fVar27 + fVar23 * fVar17 + fVar16 * fVar15) -
                                 fVar21 * fVar19;
                            *(float *)(unaff_x19 + 0x2b8) =
                                 (fVar21 * fVar17 + fVar23 * fVar19 + fVar28 * fVar15) -
                                 fVar16 * fVar27;
                            *(float *)(unaff_x19 + 700) = fVar24 - fVar28 * fVar17;
                            *(float *)(unaff_x19 + 0x2c0) = fVar20;
                            if (*(long *)(unaff_x19 + 0x20) != 0) {
                              lVar6 = *(long *)(unaff_x19 + 0xb0);
                              FUN_07a18d2c(*(long *)(unaff_x19 + 0x20),0);
                              if (lVar6 != 0) {
                                uVar13 = FUN_07a1b4e0(lVar6,0);
                                *(undefined4 *)(unaff_x19 + 0x150) = uVar13;
                                *(float *)(unaff_x19 + 0x154) = fVar20;
                                *(float *)(unaff_x19 + 0x158) = fVar22;
                                if (*(long *)(unaff_x19 + 0xb0) != 0) {
                                  FUN_07a172b0(*(long *)(unaff_x19 + 0xb0),0);
                                  fVar16 = (float)FUN_07a00400(0);
                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                    fVar15 = fVar24;
                                    fVar21 = fVar20;
                                    fVar19 = fVar22;
                                    fVar28 = (float)FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0);
                                    fVar23 = (fVar22 * fVar28 + fVar24 * fVar21 + fVar20 * fVar15) -
                                             fVar16 * fVar19;
                                    fVar27 = (fVar16 * fVar21 + fVar24 * fVar19 + fVar22 * fVar15) -
                                             fVar20 * fVar28;
                                    fVar17 = ((fVar24 * fVar15 - fVar16 * fVar28) - fVar20 * fVar21)
                                             - fVar22 * fVar19;
                                    *(float *)(unaff_x19 + 0x15c) =
                                         (fVar20 * fVar19 + fVar24 * fVar28 + fVar16 * fVar15) -
                                         fVar22 * fVar21;
                                    *(float *)(unaff_x19 + 0x160) = fVar23;
                                    *(float *)(unaff_x19 + 0x164) = fVar27;
                                    *(float *)(unaff_x19 + 0x168) = fVar17;
                                    uVar13 = FUN_07a00400(0);
                                    *(undefined4 *)(unaff_x19 + 0x34c) = uVar13;
                                    *(float *)(unaff_x19 + 0x350) = fVar23;
                                    *(float *)(unaff_x19 + 0x354) = fVar27;
                                    *(float *)(unaff_x19 + 0x358) = fVar17;
                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                      uVar18 = FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0);
                                      if (*unaff_x22 != 0) {
                                        FUN_07a172b0(*unaff_x22,0);
                                        uVar13 = FUN_034213b8(uVar18,0);
                                        *(float *)(unaff_x19 + 0x178) = fVar17;
                                        *(undefined4 *)(unaff_x19 + 0x16c) = uVar13;
                                        *(float *)(unaff_x19 + 0x170) = fVar23;
                                        *(float *)(unaff_x19 + 0x174) = fVar27;
                                        fVar25 = (float)FUN_07a009b0(fVar25,0);
                                        fVar16 = fVar26;
                                        fVar15 = fVar14;
                                        fVar21 = fStack0000000000000004;
                                        uVar13 = FUN_07a00400(0);
                                        *(undefined4 *)(unaff_x19 + 0x274) = uVar13;
                                        *(float *)(unaff_x19 + 0x278) = fVar16;
                                        *(float *)(unaff_x19 + 0x27c) = fVar15;
                                        *(float *)(unaff_x19 + 0x280) = fVar21;
                                        fVar16 = *(float *)(unaff_x19 + 0x250);
                                        fVar15 = *(float *)(unaff_x19 + 0x244);
                                        fVar21 = *(float *)(unaff_x19 + 0x248);
                                        fVar23 = *(float *)(unaff_x19 + 0x24c);
                                        fVar27 = fVar14 * fVar23;
                                        fVar19 = (fVar14 * fVar21 +
                                                 fStack0000000000000004 * fVar15 + fVar25 * fVar16)
                                                 - fVar26 * fVar23;
                                        fVar28 = (fVar25 * fVar23 +
                                                 fStack0000000000000004 * fVar21 + fVar26 * fVar16)
                                                 - fVar14 * fVar15;
                                        *(float *)(unaff_x19 + 0x284) = fVar19;
                                        *(float *)(unaff_x19 + 0x288) = fVar28;
                                        *(float *)(unaff_x19 + 0x28c) =
                                             (fVar26 * fVar15 +
                                             fStack0000000000000004 * fVar23 + fVar14 * fVar16) -
                                             fVar25 * fVar21;
                                        *(float *)(unaff_x19 + 0x290) =
                                             ((fStack0000000000000004 * fVar16 - fVar25 * fVar15) -
                                             fVar26 * fVar21) - fVar27;
                                        FUN_0348cf4c();
                                        fVar15 = (float)FUN_07a00400(0);
                                        fVar14 = fVar27;
                                        fVar26 = fVar19;
                                        fVar16 = fVar28;
                                        fVar21 = (float)FUN_0348d010();
                                        fVar23 = fVar28 * fVar16;
                                        fVar17 = fVar15 * fVar26 + fVar27 * fVar16 + fVar28 * fVar14
                                        ;
                                        fVar25 = ((fVar27 * fVar14 - fVar15 * fVar21) -
                                                 fVar19 * fVar26) - fVar23;
                                        *(float *)(unaff_x19 + 0x264) =
                                             (fVar19 * fVar16 + fVar27 * fVar21 + fVar15 * fVar14) -
                                             fVar28 * fVar26;
                                        *(float *)(unaff_x19 + 0x268) =
                                             (fVar28 * fVar21 + fVar27 * fVar26 + fVar19 * fVar14) -
                                             fVar15 * fVar16;
                                        *(float *)(unaff_x19 + 0x26c) = fVar17 - fVar19 * fVar21;
                                        *(float *)(unaff_x19 + 0x270) = fVar25;
                                        FUN_0348d1dc();
                                        fVar15 = (float)FUN_07a00400(0);
                                        fVar14 = fVar17;
                                        fVar26 = fVar25;
                                        fVar16 = fVar23;
                                        fVar21 = (float)FUN_0348ce8c();
                                        lVar6 = *(long *)(unaff_x19 + 0x18);
                                        fVar28 = fVar23 * fVar16;
                                        fVar27 = fVar15 * fVar26 + fVar17 * fVar16 + fVar23 * fVar14
                                        ;
                                        fVar19 = ((fVar17 * fVar14 - fVar15 * fVar21) -
                                                 fVar25 * fVar26) - fVar28;
                                        *(float *)(unaff_x19 + 0x254) =
                                             (fVar25 * fVar16 + fVar17 * fVar21 + fVar15 * fVar14) -
                                             fVar23 * fVar26;
                                        *(float *)(unaff_x19 + 600) =
                                             (fVar23 * fVar21 + fVar17 * fVar26 + fVar25 * fVar14) -
                                             fVar15 * fVar16;
                                        *(float *)(unaff_x19 + 0x25c) = fVar27 - fVar25 * fVar21;
                                        *(float *)(unaff_x19 + 0x260) = fVar19;
                                        if (lVar6 != 0) {
                                          pcVar10 = *(code **)(unaff_x27 + 0x130);
                                          if (pcVar10 == (code *)0x0) {
                                            pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Joint::get_connectedBody()");
                                            *(code **)(unaff_x27 + 0x130) = pcVar10;
                                          }
                                          uVar18 = (*pcVar10)(lVar6);
                                          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                            FUN_033b9870(DAT_083cf7d8);
                                          }
                                          uVar7 = FUN_07a0d2c4(uVar18,0,0);
                                          if ((uVar7 & 1) != 0) {
                                            lVar6 = *(long *)(unaff_x19 + 0x18);
                                            if (lVar6 == 0) goto LAB_0348c898;
                                            if (DAT_086f2148 == (code *)0x0) {
                                              DAT_086f2148 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Joint::set_autoConfigureConnectedAnchor(System.Boolean)"
                                                  );
                                            }
                                            (*DAT_086f2148)(lVar6,0);
                                            lVar6 = *(long *)(unaff_x19 + 0x18);
                                            if (lVar6 == 0) goto LAB_0348c898;
                                            pcVar10 = *(code **)(unaff_x27 + 0x130);
                                            if (pcVar10 == (code *)0x0) {
                                              pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Joint::get_connectedBody()");
                                              *(code **)(unaff_x27 + 0x130) = pcVar10;
                                            }
                                            lVar6 = (*pcVar10)(lVar6);
                                            if (lVar6 == 0) goto LAB_0348c898;
                                            pcVar10 = *(code **)(unaff_x23 + 0x188);
                                            if (pcVar10 == (code *)0x0) {
                                              pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                              *(code **)(unaff_x23 + 0x188) = pcVar10;
                                            }
                                            uVar18 = (*pcVar10)(lVar6);
                                            *(undefined8 *)(unaff_x19 + 0x2f0) = uVar18;
                                            if (DAT_08908cd0 != 0) {
                                              puVar2 = &DAT_0873ccb0 +
                                                       (unaff_x19 + 0x2f0U >> 0x12 & 0x7fff);
                                              do {
                                                cVar3 = '\x01';
                                                bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                                                if (bVar4) {
                                                  *puVar2 = *puVar2 | 1L << (unaff_x19 + 0x2f0U >>
                                                                             0xc & 0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar3 != '\0');
                                            }
                                            lVar6 = *(long *)(unaff_x19 + 0x20);
                                            if (lVar6 == 0) goto LAB_0348c898;
                                            pcVar10 = *(code **)(unaff_x21 + 0x838);
                                            if (pcVar10 == (code *)0x0) {
                                              pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::GetParent()");
                                              *(code **)(unaff_x21 + 0x838) = pcVar10;
                                            }
                                            uVar18 = (*pcVar10)(lVar6);
                                            uVar12 = *(undefined8 *)(unaff_x19 + 0xc0);
                                            if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                              FUN_033b9870(DAT_083cf7d8);
                                            }
                                            bVar5 = FUN_07a119fc(uVar18,uVar12,0);
                                            *(byte *)(unaff_x19 + 0x304) = bVar5 & 1;
                                            FUN_0348d31c();
                                          }
                                          lVar6 = *(long *)(unaff_x19 + 0x18);
                                          if (lVar6 != 0) {
                                            if (DAT_086f22e0 == (code *)0x0) {
                                              DAT_086f22e0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::get_angularXMotion()"
                                                  );
                                            }
                                            uVar13 = (*DAT_086f22e0)(lVar6);
                                            lVar6 = *(long *)(unaff_x19 + 0x18);
                                            *(undefined4 *)(unaff_x19 + 0x2f8) = uVar13;
                                            if (lVar6 != 0) {
                                              if (DAT_086f22f0 == (code *)0x0) {
                                                DAT_086f22f0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::get_angularYMotion()"
                                                  );
                                              }
                                              uVar13 = (*DAT_086f22f0)(lVar6);
                                              lVar6 = *(long *)(unaff_x19 + 0x18);
                                              *(undefined4 *)(unaff_x19 + 0x2fc) = uVar13;
                                              if (lVar6 != 0) {
                                                if (DAT_086f2300 == (code *)0x0) {
                                                  DAT_086f2300 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::get_angularZMotion()"
                                                  );
                                                }
                                                uVar13 = (*DAT_086f2300)(lVar6);
                                                lVar6 = *(long *)(unaff_x19 + 0xb8);
                                                *(undefined4 *)(unaff_x19 + 0x300) = uVar13;
                                                if (lVar6 != 0) {
                                                  pcVar10 = *(code **)(unaff_x23 + 0x188);
                                                  if (pcVar10 == (code *)0x0) {
                                                    pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                                  *(code **)(unaff_x23 + 0x188) = pcVar10;
                                                  }
                                                  lVar6 = (*pcVar10)(lVar6);
                                                  if (lVar6 != 0) {
                                                    FUN_07a172b0(lVar6,0);
                                                    fVar14 = (float)FUN_07a00400(0);
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      fVar26 = fVar27;
                                                      fVar16 = fVar19;
                                                      fVar15 = fVar28;
                                                      fVar21 = (float)FUN_07a172b0(*(long *)(
                                                  unaff_x19 + 0x20),0);
                                                  lVar6 = *(long *)(unaff_x19 + 0x18);
                                                  fVar23 = fVar28 * fVar15;
                                                  fVar17 = fVar14 * fVar16 +
                                                           fVar27 * fVar15 + fVar28 * fVar26;
                                                  fVar25 = ((fVar27 * fVar26 - fVar14 * fVar21) -
                                                           fVar19 * fVar16) - fVar23;
                                                  *(float *)(unaff_x19 + 300) =
                                                       (fVar19 * fVar15 +
                                                       fVar27 * fVar21 + fVar14 * fVar26) -
                                                       fVar28 * fVar16;
                                                  *(float *)(unaff_x19 + 0x130) =
                                                       (fVar28 * fVar21 +
                                                       fVar27 * fVar16 + fVar19 * fVar26) -
                                                       fVar14 * fVar15;
                                                  *(float *)(unaff_x19 + 0x134) =
                                                       fVar17 - fVar19 * fVar21;
                                                  *(float *)(unaff_x19 + 0x138) = fVar25;
                                                  if (lVar6 != 0) {
                                                    pcVar10 = *(code **)(unaff_x27 + 0x130);
                                                    if (pcVar10 == (code *)0x0) {
                                                      pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Joint::get_connectedBody()");
                                                  *(code **)(unaff_x27 + 0x130) = pcVar10;
                                                  }
                                                  uVar18 = (*pcVar10)(lVar6);
                                                  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                                    FUN_033b9870(DAT_083cf7d8);
                                                  }
                                                  uVar7 = FUN_07a119fc(uVar18,0,0);
                                                  if ((uVar7 & 1) == 0) {
                                                    lVar6 = *(long *)(unaff_x19 + 0x18);
                                                    if (lVar6 == 0) goto LAB_0348c898;
                                                    pcVar10 = *(code **)(unaff_x27 + 0x130);
                                                    if (pcVar10 == (code *)0x0) {
                                                      pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Joint::get_connectedBody()");
                                                  *(code **)(unaff_x27 + 0x130) = pcVar10;
                                                  }
                                                  lVar6 = (*pcVar10)(lVar6);
                                                  if (lVar6 == 0) goto LAB_0348c898;
                                                  pcVar10 = *(code **)(unaff_x23 + 0x188);
                                                  if (pcVar10 == (code *)0x0) {
                                                    pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                                  *(code **)(unaff_x23 + 0x188) = pcVar10;
                                                  }
                                                  lVar6 = (*pcVar10)(lVar6);
                                                  if ((*unaff_x22 == 0) ||
                                                     (FUN_07a18d2c(*unaff_x22,0), lVar6 == 0))
                                                  goto LAB_0348c898;
                                                  uVar13 = FUN_07a1b4e0(lVar6,0);
                                                  lVar6 = *(long *)(unaff_x19 + 0x18);
                                                  *(undefined4 *)(unaff_x19 + 0x220) = uVar13;
                                                  *(float *)(unaff_x19 + 0x224) = fVar25;
                                                  *(float *)(unaff_x19 + 0x228) = fVar23;
                                                  if (lVar6 == 0) goto LAB_0348c898;
                                                  pcVar10 = *(code **)(unaff_x27 + 0x130);
                                                  if (pcVar10 == (code *)0x0) {
                                                    pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Joint::get_connectedBody()");
                                                  *(code **)(unaff_x27 + 0x130) = pcVar10;
                                                  }
                                                  lVar6 = (*pcVar10)(lVar6);
                                                  if (lVar6 == 0) goto LAB_0348c898;
                                                  pcVar10 = *(code **)(unaff_x23 + 0x188);
                                                  if (pcVar10 == (code *)0x0) {
                                                    pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                                  *(code **)(unaff_x23 + 0x188) = pcVar10;
                                                  }
                                                  lVar6 = (*pcVar10)(lVar6);
                                                  if (lVar6 == 0) goto LAB_0348c898;
                                                  FUN_07a172b0(lVar6,0);
                                                  fVar14 = (float)FUN_07a00400(0);
                                                  if (*unaff_x22 == 0) goto LAB_0348c898;
                                                  fVar26 = fVar17;
                                                  fVar16 = fVar25;
                                                  fVar15 = fVar23;
                                                  fVar21 = (float)FUN_07a172b0(*unaff_x22,0);
                                                  fVar27 = fVar25 * fVar21;
                                                  fVar19 = fVar25 * fVar16;
                                                  fVar20 = fVar23 * fVar15;
                                                  fVar28 = (fVar25 * fVar15 +
                                                           fVar17 * fVar21 + fVar14 * fVar26) -
                                                           fVar23 * fVar16;
                                                  fVar25 = (fVar23 * fVar21 +
                                                           fVar17 * fVar16 + fVar25 * fVar26) -
                                                           fVar14 * fVar15;
                                                  fVar23 = (fVar14 * fVar16 +
                                                           fVar17 * fVar15 + fVar23 * fVar26) -
                                                           fVar27;
                                                  fVar17 = ((fVar17 * fVar26 - fVar14 * fVar21) -
                                                           fVar19) - fVar20;
                                                  }
                                                  else {
                                                    if (*unaff_x22 == 0) goto LAB_0348c898;
                                                    uVar13 = FUN_07a181c8(*unaff_x22,0);
                                                    *(undefined4 *)(unaff_x19 + 0x220) = uVar13;
                                                    *(float *)(unaff_x19 + 0x224) = fVar25;
                                                    *(float *)(unaff_x19 + 0x228) = fVar23;
                                                    if (*(long *)(unaff_x19 + 0xb0) == 0)
                                                    goto LAB_0348c898;
                                                    fVar28 = (float)FUN_07a191d0(*(long *)(unaff_x19
                                                                                          + 0xb0),0)
                                                    ;
                                                  }
                                                  *(float *)(unaff_x19 + 0x2a4) = fVar28;
                                                  *(float *)(unaff_x19 + 0x2a8) = fVar25;
                                                  *(float *)(unaff_x19 + 0x2ac) = fVar23;
                                                  *(float *)(unaff_x19 + 0x2b0) = fVar17;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar13 = FUN_07a181c8(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x22c) = uVar13;
                                                    *(float *)(unaff_x19 + 0x230) = fVar25;
                                                    *(float *)(unaff_x19 + 0x234) = fVar23;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar13 = FUN_07a191d0(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      lVar6 = *(long *)(unaff_x19 + 0x18);
                                                      *(undefined4 *)(unaff_x19 + 0x2c4) = uVar13;
                                                      *(float *)(unaff_x19 + 0x2c8) = fVar25;
                                                      *(float *)(unaff_x19 + 0x2cc) = fVar23;
                                                      *(float *)(unaff_x19 + 0x2d0) = fVar17;
                                                      if (lVar6 != 0) {
                                                        if (DAT_086f2318 == (code *)0x0) {
                                                          DAT_086f2318 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::set_rotationDriveMode(UnityEngine.RotationDriveMode)"
                                                  );
                                                  }
                                                  (*DAT_086f2318)(lVar6,1);
                                                  lVar6 = *(long *)(unaff_x19 + 0x18);
                                                  if (lVar6 != 0) {
                                                    if (DAT_086ef190 == (code *)0x0) {
                                                      DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                                  }
                                                  lVar6 = (*DAT_086ef190)(lVar6);
                                                  if (lVar6 != 0) {
                                                    if (DAT_086ef288 == (code *)0x0) {
                                                      DAT_086ef288 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_activeInHierarchy()")
                                                  ;
                                                  }
                                                  uVar7 = (*DAT_086ef288)(lVar6);
                                                  lVar6 = *(long *)(unaff_x19 + 0x18);
                                                  if (lVar6 != 0) {
                                                    if ((uVar7 & 1) == 0) {
                                                      pcVar10 = *(code **)(unaff_x23 + 0x188);
                                                      if (pcVar10 == (code *)0x0) {
                                                        pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                                  *(code **)(unaff_x23 + 0x188) = pcVar10;
                                                  }
                                                  lVar6 = (*pcVar10)(lVar6);
                                                  uVar18 = DAT_08435940;
                                                  if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
                                                    FUN_033b9870(DAT_083ca458);
                                                    uVar18 = DAT_08435940;
                                                  }
LAB_0348c5ec:
                                                  FUN_079ca1d0(uVar18,lVar6,0);
                                                  return;
                                                  }
                                                  if (DAT_086f2358 == (code *)0x0) {
                                                    DAT_086f2358 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::set_configuredInWorldSpace(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086f2358)(lVar6,0);
                                                  lVar6 = *(long *)(unaff_x19 + 0x18);
                                                  if (lVar6 != 0) {
                                                    if (DAT_086f2328 == (code *)0x0) {
                                                      DAT_086f2328 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::set_projectionMode(UnityEngine.JointProjectionMode)"
                                                  );
                                                  }
                                                  (*DAT_086f2328)(lVar6,0);
                                                  if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                    fVar14 = (float)FUN_07a87c30(*(long *)(unaff_x19
                                                                                          + 0x18),0)
                                                    ;
                                                    if (DAT_086d7cc6 == '\0') {
                                                      FUN_0335b6c8(&DAT_083d2c90,1);
                                                      DataMemoryBarrier(2,3);
                                                      DAT_086d7cc6 = '\x01';
                                                    }
                                                    pfVar11 = *(float **)(DAT_083d2c90 + 0xb8);
                                                    fVar23 = fVar23 - pfVar11[2];
                                                    fVar26 = fVar23 * fVar23;
                                                    if (fVar26 + (fVar14 - *pfVar11) *
                                                                 (fVar14 - *pfVar11) +
                                                                 (fVar25 - pfVar11[1]) *
                                                                 (fVar25 - pfVar11[1]) <
                                                        DAT_012ed8ec) {
                                                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                        fVar14 = DAT_012ed8ec;
                                                        uVar13 = FUN_07a18d2c(*(long *)(unaff_x19 +
                                                                                       0x20),0);
                                                        *(undefined4 *)(unaff_x19 + 200) = uVar13;
                                                        *(float *)(unaff_x19 + 0xcc) = fVar26;
                                                        *(float *)(unaff_x19 + 0xd0) = fVar23;
                                                        if (*(long *)(unaff_x19 + 0xb8) != 0) {
                                                          uVar13 = FUN_07a85684(*(long *)(unaff_x19
                                                                                         + 0xb8),0);
                                                          *(undefined4 *)(unaff_x19 + 0x334) =
                                                               uVar13;
                                                          *(float *)(unaff_x19 + 0x338) = fVar26;
                                                          *(float *)(unaff_x19 + 0x33c) = fVar23;
                                                          if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                            uVar13 = FUN_07a172b0(*(long *)(
                                                  unaff_x19 + 0x20),0);
                                                  *(undefined4 *)(unaff_x19 + 0xd4) = uVar13;
                                                  *(float *)(unaff_x19 + 0xd8) = fVar26;
                                                  *(float *)(unaff_x19 + 0xdc) = fVar23;
                                                  *(float *)(unaff_x19 + 0xe0) = fVar14;
                                                  fVar16 = (float)FUN_0348d1dc();
                                                  fVar19 = *(float *)(unaff_x19 + 0x254);
                                                  fVar28 = *(float *)(unaff_x19 + 0x260);
                                                  fVar27 = *(float *)(unaff_x19 + 0x25c);
                                                  fVar17 = *(float *)(unaff_x19 + 600);
                                                  fVar21 = fVar23 * fVar27;
                                                  fVar15 = (fVar26 * fVar27 +
                                                           fVar14 * fVar19 + fVar16 * fVar28) -
                                                           fVar23 * fVar17;
                                                  fVar25 = (fVar23 * fVar19 +
                                                           fVar14 * fVar17 + fVar26 * fVar28) -
                                                           fVar16 * fVar27;
                                                  *(float *)(unaff_x19 + 0x294) = fVar15;
                                                  *(float *)(unaff_x19 + 0x298) = fVar25;
                                                  *(float *)(unaff_x19 + 0x29c) =
                                                       (fVar16 * fVar17 +
                                                       fVar14 * fVar27 + fVar23 * fVar28) -
                                                       fVar26 * fVar19;
                                                  *(float *)(unaff_x19 + 0x2a0) =
                                                       ((fVar14 * fVar28 - fVar16 * fVar19) -
                                                       fVar26 * fVar17) - fVar21;
                                                  FUN_0348d588();
                                                  if (DAT_086ef688 == (code *)0x0) {
                                                    DAT_086ef688 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Time::get_time()");
                                                  }
                                                  uVar13 = (*DAT_086ef688)();
                                                  *(undefined4 *)(unaff_x19 + 0x310) = uVar13;
                                                  if (DAT_086ef688 == (code *)0x0) {
                                                    DAT_086ef688 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Time::get_time()");
                                                  }
                                                  uVar13 = (*DAT_086ef688)();
                                                  *(undefined4 *)(unaff_x19 + 0x314) = uVar13;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar13 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x238) = uVar13;
                                                    *(float *)(unaff_x19 + 0x23c) = fVar15;
                                                    *(float *)(unaff_x19 + 0x240) = fVar21;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar13 = FUN_07a172b0(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      *(undefined4 *)(unaff_x19 + 0x2d4) = uVar13;
                                                      *(float *)(unaff_x19 + 0x2d8) = fVar15;
                                                      *(float *)(unaff_x19 + 0x2dc) = fVar21;
                                                      *(float *)(unaff_x19 + 0x2e0) = fVar25;
                                                      if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                                                         (lVar6 = *(long *)(*(long *)(unaff_x19 +
                                                                                     0x28) + 0x30),
                                                         lVar6 != 0)) {
                                                        plVar8 = (long *)FUN_03398188(DAT_083c81e0,
                                                                                      *(undefined4 *
                                                                                       )(lVar6 + 
                                                  0x18));
                                                  *(long **)(unaff_x19 + 800) = plVar8;
                                                  plVar1 = (long *)(unaff_x19 + 800);
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar2 = &DAT_0873ccb0 +
                                                             ((ulong)plVar1 >> 0x12 & 0x7fff);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar2,0x10);
                                                      if (bVar4) {
                                                        *puVar2 = *puVar2 | 1L << ((ulong)plVar1 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                    plVar8 = (long *)*plVar1;
                                                  }
                                                  if (plVar8 != (long *)0x0) {
                                                    uVar7 = 0;
                                                    do {
                                                      if ((long)(int)plVar8[3] <= (long)uVar7) {
                                                        *(undefined1 *)(unaff_x19 + 0x305) = 1;
                                                        return;
                                                      }
                                                      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                                                         (lVar6 = *(long *)(*(long *)(unaff_x19 +
                                                                                     0x28) + 0x30),
                                                         lVar6 == 0)) break;
                                                      if (*(uint *)(lVar6 + 0x18) <= uVar7) {
LAB_0348c8d4:
                    /* WARNING: Subroutine does not return */
                                                        FUN_033d1d44();
                                                      }
                                                      uVar18 = *(undefined8 *)
                                                                (lVar6 + uVar7 * 8 + 0x20);
                                                      lVar6 = FUN_03398a84(DAT_083d8080);
                                                      FUN_0348d8b4(lVar6,uVar18);
                                                      if ((lVar6 != 0) &&
                                                         (lVar9 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                      (*plVar8 +
                                                                                      0x40)),
                                                         lVar9 == 0)) {
                                                        uVar18 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
                                                        FUN_033d1c20(uVar18,0);
                                                      }
                                                      if (*(uint *)(plVar8 + 3) <= uVar7)
                                                      goto LAB_0348c8d4;
                                                      plVar8 = plVar8 + uVar7 + 4;
                                                      *plVar8 = lVar6;
                                                      if (DAT_08908cd0 != 0) {
                                                        puVar2 = &DAT_0873ccb0 +
                                                                 ((ulong)plVar8 >> 0x12 & 0x7fff);
                                                        do {
                                                          cVar3 = '\x01';
                                                          bVar4 = (bool)ExclusiveMonitorPass
                                                                                  (puVar2,0x10);
                                                          if (bVar4) {
                                                            *puVar2 = *puVar2 | 1L << ((ulong)plVar8
                                                                                       >> 0xc & 0x3f
                                                                                      );
                                                            cVar3 = ExclusiveMonitorsStatus();
                                                          }
                                                        } while (cVar3 != '\0');
                                                      }
                                                      plVar8 = (long *)*plVar1;
                                                      uVar7 = uVar7 + 1;
                                                    } while (plVar8 != (long *)0x0);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else if (*unaff_x22 != 0) {
                                                    uVar18 = FUN_07a11ba4(*unaff_x22,0);
                                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                      fStack0000000000000008 =
                                                           (float)FUN_07a87c30(*(long *)(unaff_x19 +
                                                                                        0x18),0);
                                                      fStack000000000000000c = fVar26;
                                                      in_stack_00000010 = fVar23;
                                                      uVar12 = FUN_034a8148(&stack0x00000008,0,0,0);
                                                      uVar18 = FUN_0666ed44(DAT_08444048,uVar18,
                                                                            DAT_0842e6b0,uVar12,0);
                                                      lVar6 = *unaff_x22;
                                                      if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
                                                        FUN_033b9870(DAT_083ca458);
                                                      }
                                                      goto LAB_0348c5ec;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0348c898:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


