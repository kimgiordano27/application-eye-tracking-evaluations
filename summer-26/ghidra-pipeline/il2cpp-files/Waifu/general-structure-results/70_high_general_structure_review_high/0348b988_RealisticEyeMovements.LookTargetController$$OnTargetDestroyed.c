/*
FUNCTION_NAME: RealisticEyeMovements.LookTargetController$$OnTargetDestroyed
ENTRY_POINT: 0348b988
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


void RealisticEyeMovements_LookTargetController__OnTargetDestroyed
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  float *pfVar10;
  long unaff_x19;
  long lVar11;
  undefined8 uVar12;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float unaff_s9;
  float unaff_s10;
  float fVar26;
  float fStack0000000000000004;
  undefined4 uStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  
  if (DAT_086d7cc6 == '\0') {
    FUN_0335b6c8(&DAT_083d2c90,1);
    DataMemoryBarrier(2,3);
    DAT_086d7cc6 = '\x01';
  }
  fStack0000000000000004 = **(float **)(DAT_083d2c90 + 0xb8);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar16 = fStack0000000000000004;
    FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0);
    fVar13 = (float)FUN_07a00400(0);
    if (*unaff_x22 != 0) {
      fVar23 = param_4;
      fVar18 = fVar16;
      fVar17 = param_3;
      fVar14 = (float)FUN_07a172b0(*unaff_x22,0);
      fVar21 = param_3 * fVar17;
      fVar24 = fVar13 * fVar18 + param_4 * fVar17 + param_3 * fVar23;
      fVar20 = ((param_4 * fVar23 - fVar13 * fVar14) - fVar16 * fVar18) - fVar21;
      *(float *)(unaff_x19 + 0x2b4) =
           (fVar16 * fVar17 + param_4 * fVar14 + fVar13 * fVar23) - param_3 * fVar18;
      *(float *)(unaff_x19 + 0x2b8) =
           (param_3 * fVar14 + param_4 * fVar18 + fVar16 * fVar23) - fVar13 * fVar17;
      *(float *)(unaff_x19 + 700) = fVar24 - fVar16 * fVar14;
      *(float *)(unaff_x19 + 0x2c0) = fVar20;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        lVar11 = *(long *)(unaff_x19 + 0xb0);
        FUN_07a18d2c(*(long *)(unaff_x19 + 0x20),0);
        if (lVar11 != 0) {
          uVar15 = FUN_07a1b4e0(lVar11,0);
          *(undefined4 *)(unaff_x19 + 0x150) = uVar15;
          *(float *)(unaff_x19 + 0x154) = fVar20;
          *(float *)(unaff_x19 + 0x158) = fVar21;
          if (*(long *)(unaff_x19 + 0xb0) != 0) {
            FUN_07a172b0(*(long *)(unaff_x19 + 0xb0),0);
            fVar16 = (float)FUN_07a00400(0);
            if (*(long *)(unaff_x19 + 0x20) != 0) {
              fVar13 = fVar24;
              fVar23 = fVar20;
              fVar18 = fVar21;
              fVar17 = (float)FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0);
              fVar14 = (fVar21 * fVar17 + fVar24 * fVar23 + fVar20 * fVar13) - fVar16 * fVar18;
              fVar22 = (fVar16 * fVar23 + fVar24 * fVar18 + fVar21 * fVar13) - fVar20 * fVar17;
              fVar25 = ((fVar24 * fVar13 - fVar16 * fVar17) - fVar20 * fVar23) - fVar21 * fVar18;
              *(float *)(unaff_x19 + 0x15c) =
                   (fVar20 * fVar18 + fVar24 * fVar17 + fVar16 * fVar13) - fVar21 * fVar23;
              *(float *)(unaff_x19 + 0x160) = fVar14;
              *(float *)(unaff_x19 + 0x164) = fVar22;
              *(float *)(unaff_x19 + 0x168) = fVar25;
              uVar15 = FUN_07a00400(0);
              *(undefined4 *)(unaff_x19 + 0x34c) = uVar15;
              *(float *)(unaff_x19 + 0x350) = fVar14;
              *(float *)(unaff_x19 + 0x354) = fVar22;
              *(float *)(unaff_x19 + 0x358) = fVar25;
              if (*(long *)(unaff_x19 + 0x20) != 0) {
                uVar19 = FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0);
                if (*unaff_x22 != 0) {
                  FUN_07a172b0(*unaff_x22,0);
                  uVar15 = FUN_034213b8(uVar19,0);
                  *(float *)(unaff_x19 + 0x178) = fVar25;
                  *(undefined4 *)(unaff_x19 + 0x16c) = uVar15;
                  *(float *)(unaff_x19 + 0x170) = fVar14;
                  *(float *)(unaff_x19 + 0x174) = fVar22;
                  fVar18 = fStack0000000000000004;
                  fVar17 = (float)FUN_07a009b0(0);
                  fVar16 = unaff_s9;
                  fVar13 = unaff_s10;
                  fVar23 = fVar18;
                  uVar15 = FUN_07a00400(0);
                  *(undefined4 *)(unaff_x19 + 0x274) = uVar15;
                  *(float *)(unaff_x19 + 0x278) = fVar16;
                  *(float *)(unaff_x19 + 0x27c) = fVar13;
                  *(float *)(unaff_x19 + 0x280) = fVar23;
                  fVar16 = *(float *)(unaff_x19 + 0x250);
                  fVar13 = *(float *)(unaff_x19 + 0x244);
                  fVar23 = *(float *)(unaff_x19 + 0x248);
                  fVar20 = *(float *)(unaff_x19 + 0x24c);
                  fVar22 = unaff_s10 * fVar20;
                  fVar14 = (unaff_s10 * fVar23 + fVar18 * fVar13 + fVar17 * fVar16) -
                           unaff_s9 * fVar20;
                  fVar21 = (fVar17 * fVar20 + fVar18 * fVar23 + unaff_s9 * fVar16) -
                           unaff_s10 * fVar13;
                  *(float *)(unaff_x19 + 0x284) = fVar14;
                  *(float *)(unaff_x19 + 0x288) = fVar21;
                  *(float *)(unaff_x19 + 0x28c) =
                       (unaff_s9 * fVar13 + fVar18 * fVar20 + unaff_s10 * fVar16) - fVar17 * fVar23;
                  *(float *)(unaff_x19 + 0x290) =
                       ((fVar18 * fVar16 - fVar17 * fVar13) - unaff_s9 * fVar23) - fVar22;
                  FUN_0348cf4c();
                  fVar18 = (float)FUN_07a00400(0);
                  fVar16 = fVar22;
                  fVar13 = fVar14;
                  fVar23 = fVar21;
                  fVar17 = (float)FUN_0348d010();
                  fVar24 = fVar21 * fVar23;
                  fVar25 = fVar18 * fVar13 + fVar22 * fVar23 + fVar21 * fVar16;
                  fVar20 = ((fVar22 * fVar16 - fVar18 * fVar17) - fVar14 * fVar13) - fVar24;
                  *(float *)(unaff_x19 + 0x264) =
                       (fVar14 * fVar23 + fVar22 * fVar17 + fVar18 * fVar16) - fVar21 * fVar13;
                  *(float *)(unaff_x19 + 0x268) =
                       (fVar21 * fVar17 + fVar22 * fVar13 + fVar14 * fVar16) - fVar18 * fVar23;
                  *(float *)(unaff_x19 + 0x26c) = fVar25 - fVar14 * fVar17;
                  *(float *)(unaff_x19 + 0x270) = fVar20;
                  FUN_0348d1dc();
                  fVar18 = (float)FUN_07a00400(0);
                  fVar16 = fVar25;
                  fVar13 = fVar20;
                  fVar23 = fVar24;
                  fVar17 = (float)FUN_0348ce8c();
                  lVar11 = *(long *)(unaff_x19 + 0x18);
                  fVar21 = fVar24 * fVar23;
                  fVar22 = fVar18 * fVar13 + fVar25 * fVar23 + fVar24 * fVar16;
                  fVar14 = ((fVar25 * fVar16 - fVar18 * fVar17) - fVar20 * fVar13) - fVar21;
                  *(float *)(unaff_x19 + 0x254) =
                       (fVar20 * fVar23 + fVar25 * fVar17 + fVar18 * fVar16) - fVar24 * fVar13;
                  *(float *)(unaff_x19 + 600) =
                       (fVar24 * fVar17 + fVar25 * fVar13 + fVar20 * fVar16) - fVar18 * fVar23;
                  *(float *)(unaff_x19 + 0x25c) = fVar22 - fVar20 * fVar17;
                  *(float *)(unaff_x19 + 0x260) = fVar14;
                  if (lVar11 != 0) {
                    pcVar9 = *(code **)(unaff_x27 + 0x130);
                    if (pcVar9 == (code *)0x0) {
                      pcVar9 = (code *)FUN_033d1b68("UnityEngine.Joint::get_connectedBody()");
                      *(code **)(unaff_x27 + 0x130) = pcVar9;
                    }
                    uVar19 = (*pcVar9)(lVar11);
                    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                      FUN_033b9870(DAT_083cf7d8);
                    }
                    uVar6 = FUN_07a0d2c4(uVar19,0,0);
                    if ((uVar6 & 1) != 0) {
                      lVar11 = *(long *)(unaff_x19 + 0x18);
                      if (lVar11 == 0) goto LAB_0348c898;
                      if (DAT_086f2148 == (code *)0x0) {
                        DAT_086f2148 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Joint::set_autoConfigureConnectedAnchor(System.Boolean)"
                                                  );
                      }
                      (*DAT_086f2148)(lVar11,0);
                      lVar11 = *(long *)(unaff_x19 + 0x18);
                      if (lVar11 == 0) goto LAB_0348c898;
                      pcVar9 = *(code **)(unaff_x27 + 0x130);
                      if (pcVar9 == (code *)0x0) {
                        pcVar9 = (code *)FUN_033d1b68("UnityEngine.Joint::get_connectedBody()");
                        *(code **)(unaff_x27 + 0x130) = pcVar9;
                      }
                      lVar11 = (*pcVar9)(lVar11);
                      if (lVar11 == 0) goto LAB_0348c898;
                      pcVar9 = *(code **)(unaff_x23 + 0x188);
                      if (pcVar9 == (code *)0x0) {
                        pcVar9 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
                        *(code **)(unaff_x23 + 0x188) = pcVar9;
                      }
                      uVar19 = (*pcVar9)(lVar11);
                      *(undefined8 *)(unaff_x19 + 0x2f0) = uVar19;
                      if (DAT_08908cd0 != 0) {
                        puVar2 = &DAT_0873ccb0 + (unaff_x19 + 0x2f0U >> 0x12 & 0x7fff);
                        do {
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                          if (bVar4) {
                            *puVar2 = *puVar2 | 1L << (unaff_x19 + 0x2f0U >> 0xc & 0x3f);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                      }
                      lVar11 = *(long *)(unaff_x19 + 0x20);
                      if (lVar11 == 0) goto LAB_0348c898;
                      pcVar9 = *(code **)(unaff_x21 + 0x838);
                      if (pcVar9 == (code *)0x0) {
                        pcVar9 = (code *)FUN_033d1b68("UnityEngine.Transform::GetParent()");
                        *(code **)(unaff_x21 + 0x838) = pcVar9;
                      }
                      uVar19 = (*pcVar9)(lVar11);
                      uVar12 = *(undefined8 *)(unaff_x19 + 0xc0);
                      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                        FUN_033b9870(DAT_083cf7d8);
                      }
                      bVar5 = FUN_07a119fc(uVar19,uVar12,0);
                      *(byte *)(unaff_x19 + 0x304) = bVar5 & 1;
                      FUN_0348d31c();
                    }
                    lVar11 = *(long *)(unaff_x19 + 0x18);
                    if (lVar11 != 0) {
                      pcVar9 = *(code **)(unaff_x26 + 0x2e0);
                      if (pcVar9 == (code *)0x0) {
                        pcVar9 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::get_angularXMotion()"
                                                  );
                        *(code **)(unaff_x26 + 0x2e0) = pcVar9;
                      }
                      uVar15 = (*pcVar9)(lVar11);
                      lVar11 = *(long *)(unaff_x19 + 0x18);
                      *(undefined4 *)(unaff_x19 + 0x2f8) = uVar15;
                      if (lVar11 != 0) {
                        pcVar9 = *(code **)(unaff_x29 + 0x2f0);
                        if (pcVar9 == (code *)0x0) {
                          pcVar9 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::get_angularYMotion()"
                                                  );
                          *(code **)(unaff_x29 + 0x2f0) = pcVar9;
                        }
                        uVar15 = (*pcVar9)(lVar11);
                        lVar11 = *(long *)(unaff_x19 + 0x18);
                        *(undefined4 *)(unaff_x19 + 0x2fc) = uVar15;
                        if (lVar11 != 0) {
                          pcVar9 = *(code **)(unaff_x28 + 0x300);
                          if (pcVar9 == (code *)0x0) {
                            pcVar9 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::get_angularZMotion()"
                                                  );
                            *(code **)(unaff_x28 + 0x300) = pcVar9;
                          }
                          uVar15 = (*pcVar9)(lVar11);
                          lVar11 = *(long *)(unaff_x19 + 0xb8);
                          *(undefined4 *)(unaff_x19 + 0x300) = uVar15;
                          if (lVar11 != 0) {
                            pcVar9 = *(code **)(unaff_x23 + 0x188);
                            if (pcVar9 == (code *)0x0) {
                              pcVar9 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()"
                                                           );
                              *(code **)(unaff_x23 + 0x188) = pcVar9;
                            }
                            lVar11 = (*pcVar9)(lVar11);
                            if (lVar11 != 0) {
                              FUN_07a172b0(lVar11,0);
                              fVar16 = (float)FUN_07a00400(0);
                              if (*(long *)(unaff_x19 + 0x20) != 0) {
                                fVar13 = fVar22;
                                fVar23 = fVar14;
                                fVar18 = fVar21;
                                fVar17 = (float)FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0);
                                lVar11 = *(long *)(unaff_x19 + 0x18);
                                fVar24 = fVar21 * fVar18;
                                fVar25 = fVar16 * fVar23 + fVar22 * fVar18 + fVar21 * fVar13;
                                fVar20 = ((fVar22 * fVar13 - fVar16 * fVar17) - fVar14 * fVar23) -
                                         fVar24;
                                *(float *)(unaff_x19 + 300) =
                                     (fVar14 * fVar18 + fVar22 * fVar17 + fVar16 * fVar13) -
                                     fVar21 * fVar23;
                                *(float *)(unaff_x19 + 0x130) =
                                     (fVar21 * fVar17 + fVar22 * fVar23 + fVar14 * fVar13) -
                                     fVar16 * fVar18;
                                *(float *)(unaff_x19 + 0x134) = fVar25 - fVar14 * fVar17;
                                *(float *)(unaff_x19 + 0x138) = fVar20;
                                if (lVar11 != 0) {
                                  pcVar9 = *(code **)(unaff_x27 + 0x130);
                                  if (pcVar9 == (code *)0x0) {
                                    pcVar9 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Joint::get_connectedBody()");
                                    *(code **)(unaff_x27 + 0x130) = pcVar9;
                                  }
                                  uVar19 = (*pcVar9)(lVar11);
                                  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                    FUN_033b9870(DAT_083cf7d8);
                                  }
                                  uVar6 = FUN_07a119fc(uVar19,0,0);
                                  if ((uVar6 & 1) == 0) {
                                    lVar11 = *(long *)(unaff_x19 + 0x18);
                                    if (lVar11 == 0) goto LAB_0348c898;
                                    pcVar9 = *(code **)(unaff_x27 + 0x130);
                                    if (pcVar9 == (code *)0x0) {
                                      pcVar9 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Joint::get_connectedBody()");
                                      *(code **)(unaff_x27 + 0x130) = pcVar9;
                                    }
                                    lVar11 = (*pcVar9)(lVar11);
                                    if (lVar11 == 0) goto LAB_0348c898;
                                    pcVar9 = *(code **)(unaff_x23 + 0x188);
                                    if (pcVar9 == (code *)0x0) {
                                      pcVar9 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                      *(code **)(unaff_x23 + 0x188) = pcVar9;
                                    }
                                    lVar11 = (*pcVar9)(lVar11);
                                    if ((*unaff_x22 == 0) ||
                                       (FUN_07a18d2c(*unaff_x22,0), lVar11 == 0)) goto LAB_0348c898;
                                    uVar15 = FUN_07a1b4e0(lVar11,0);
                                    lVar11 = *(long *)(unaff_x19 + 0x18);
                                    *(undefined4 *)(unaff_x19 + 0x220) = uVar15;
                                    *(float *)(unaff_x19 + 0x224) = fVar20;
                                    *(float *)(unaff_x19 + 0x228) = fVar24;
                                    if (lVar11 == 0) goto LAB_0348c898;
                                    pcVar9 = *(code **)(unaff_x27 + 0x130);
                                    if (pcVar9 == (code *)0x0) {
                                      pcVar9 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Joint::get_connectedBody()");
                                      *(code **)(unaff_x27 + 0x130) = pcVar9;
                                    }
                                    lVar11 = (*pcVar9)(lVar11);
                                    if (lVar11 == 0) goto LAB_0348c898;
                                    pcVar9 = *(code **)(unaff_x23 + 0x188);
                                    if (pcVar9 == (code *)0x0) {
                                      pcVar9 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                      *(code **)(unaff_x23 + 0x188) = pcVar9;
                                    }
                                    lVar11 = (*pcVar9)(lVar11);
                                    if (lVar11 == 0) goto LAB_0348c898;
                                    FUN_07a172b0(lVar11,0);
                                    fVar16 = (float)FUN_07a00400(0);
                                    if (*unaff_x22 == 0) goto LAB_0348c898;
                                    fVar13 = fVar25;
                                    fVar23 = fVar20;
                                    fVar18 = fVar24;
                                    fVar17 = (float)FUN_07a172b0(*unaff_x22,0);
                                    fVar22 = fVar20 * fVar17;
                                    fVar14 = fVar20 * fVar23;
                                    fVar26 = fVar24 * fVar18;
                                    fVar21 = (fVar20 * fVar18 + fVar25 * fVar17 + fVar16 * fVar13) -
                                             fVar24 * fVar23;
                                    fVar20 = (fVar24 * fVar17 + fVar25 * fVar23 + fVar20 * fVar13) -
                                             fVar16 * fVar18;
                                    fVar24 = (fVar16 * fVar23 + fVar25 * fVar18 + fVar24 * fVar13) -
                                             fVar22;
                                    fVar25 = ((fVar25 * fVar13 - fVar16 * fVar17) - fVar14) - fVar26
                                    ;
                                  }
                                  else {
                                    if (*unaff_x22 == 0) goto LAB_0348c898;
                                    uVar15 = FUN_07a181c8(*unaff_x22,0);
                                    *(undefined4 *)(unaff_x19 + 0x220) = uVar15;
                                    *(float *)(unaff_x19 + 0x224) = fVar20;
                                    *(float *)(unaff_x19 + 0x228) = fVar24;
                                    if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0348c898;
                                    fVar21 = (float)FUN_07a191d0(*(long *)(unaff_x19 + 0xb0),0);
                                  }
                                  *(float *)(unaff_x19 + 0x2a4) = fVar21;
                                  *(float *)(unaff_x19 + 0x2a8) = fVar20;
                                  *(float *)(unaff_x19 + 0x2ac) = fVar24;
                                  *(float *)(unaff_x19 + 0x2b0) = fVar25;
                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                    uVar15 = FUN_07a181c8(*(long *)(unaff_x19 + 0x20),0);
                                    *(undefined4 *)(unaff_x19 + 0x22c) = uVar15;
                                    *(float *)(unaff_x19 + 0x230) = fVar20;
                                    *(float *)(unaff_x19 + 0x234) = fVar24;
                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                      uVar15 = FUN_07a191d0(*(long *)(unaff_x19 + 0x20),0);
                                      lVar11 = *(long *)(unaff_x19 + 0x18);
                                      *(undefined4 *)(unaff_x19 + 0x2c4) = uVar15;
                                      *(float *)(unaff_x19 + 0x2c8) = fVar20;
                                      *(float *)(unaff_x19 + 0x2cc) = fVar24;
                                      *(float *)(unaff_x19 + 0x2d0) = fVar25;
                                      if (lVar11 != 0) {
                                        if (DAT_086f2318 == (code *)0x0) {
                                          DAT_086f2318 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::set_rotationDriveMode(UnityEngine.RotationDriveMode)"
                                                  );
                                        }
                                        (*DAT_086f2318)(lVar11,1);
                                        lVar11 = *(long *)(unaff_x19 + 0x18);
                                        if (lVar11 != 0) {
                                          if (DAT_086ef190 == (code *)0x0) {
                                            DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                          }
                                          lVar11 = (*DAT_086ef190)(lVar11);
                                          if (lVar11 != 0) {
                                            if (DAT_086ef288 == (code *)0x0) {
                                              DAT_086ef288 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_activeInHierarchy()")
                                              ;
                                            }
                                            uVar6 = (*DAT_086ef288)(lVar11);
                                            lVar11 = *(long *)(unaff_x19 + 0x18);
                                            if (lVar11 != 0) {
                                              if ((uVar6 & 1) == 0) {
                                                pcVar9 = *(code **)(unaff_x23 + 0x188);
                                                if (pcVar9 == (code *)0x0) {
                                                  pcVar9 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                                  *(code **)(unaff_x23 + 0x188) = pcVar9;
                                                }
                                                lVar11 = (*pcVar9)(lVar11);
                                                uVar19 = DAT_08435940;
                                                if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
                                                  FUN_033b9870(DAT_083ca458);
                                                  uVar19 = DAT_08435940;
                                                }
LAB_0348c5ec:
                                                FUN_079ca1d0(uVar19,lVar11,0);
                                                return;
                                              }
                                              if (DAT_086f2358 == (code *)0x0) {
                                                DAT_086f2358 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::set_configuredInWorldSpace(System.Boolean)"
                                                  );
                                              }
                                              (*DAT_086f2358)(lVar11,0);
                                              lVar11 = *(long *)(unaff_x19 + 0x18);
                                              if (lVar11 != 0) {
                                                if (DAT_086f2328 == (code *)0x0) {
                                                  DAT_086f2328 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::set_projectionMode(UnityEngine.JointProjectionMode)"
                                                  );
                                                }
                                                (*DAT_086f2328)(lVar11,0);
                                                if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                  fVar16 = (float)FUN_07a87c30(*(long *)(unaff_x19 +
                                                                                        0x18),0);
                                                  if (DAT_086d7cc6 == '\0') {
                                                    FUN_0335b6c8(&DAT_083d2c90,1);
                                                    DataMemoryBarrier(2,3);
                                                    DAT_086d7cc6 = '\x01';
                                                  }
                                                  pfVar10 = *(float **)(DAT_083d2c90 + 0xb8);
                                                  fVar24 = fVar24 - pfVar10[2];
                                                  fStack000000000000000c = fVar24 * fVar24;
                                                  if (fStack000000000000000c +
                                                      (fVar16 - *pfVar10) * (fVar16 - *pfVar10) +
                                                      (fVar20 - pfVar10[1]) * (fVar20 - pfVar10[1])
                                                      < DAT_012ed8ec) {
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      fVar16 = DAT_012ed8ec;
                                                      fVar13 = fStack000000000000000c;
                                                      uVar15 = FUN_07a18d2c(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      *(undefined4 *)(unaff_x19 + 200) = uVar15;
                                                      *(float *)(unaff_x19 + 0xcc) = fVar13;
                                                      *(float *)(unaff_x19 + 0xd0) = fVar24;
                                                      if (*(long *)(unaff_x19 + 0xb8) != 0) {
                                                        uVar15 = FUN_07a85684(*(long *)(unaff_x19 +
                                                                                       0xb8),0);
                                                        *(undefined4 *)(unaff_x19 + 0x334) = uVar15;
                                                        *(float *)(unaff_x19 + 0x338) = fVar13;
                                                        *(float *)(unaff_x19 + 0x33c) = fVar24;
                                                        if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                          uVar15 = FUN_07a172b0(*(long *)(unaff_x19
                                                                                         + 0x20),0);
                                                          *(undefined4 *)(unaff_x19 + 0xd4) = uVar15
                                                          ;
                                                          *(float *)(unaff_x19 + 0xd8) = fVar13;
                                                          *(float *)(unaff_x19 + 0xdc) = fVar24;
                                                          *(float *)(unaff_x19 + 0xe0) = fVar16;
                                                          fVar23 = (float)FUN_0348d1dc();
                                                          fVar20 = *(float *)(unaff_x19 + 0x254);
                                                          fVar21 = *(float *)(unaff_x19 + 0x260);
                                                          fVar22 = *(float *)(unaff_x19 + 0x25c);
                                                          fVar25 = *(float *)(unaff_x19 + 600);
                                                          fVar17 = fVar24 * fVar22;
                                                          fVar18 = (fVar13 * fVar22 +
                                                                   fVar16 * fVar20 + fVar23 * fVar21
                                                                   ) - fVar24 * fVar25;
                                                          fVar14 = (fVar24 * fVar20 +
                                                                   fVar16 * fVar25 + fVar13 * fVar21
                                                                   ) - fVar23 * fVar22;
                                                          *(float *)(unaff_x19 + 0x294) = fVar18;
                                                          *(float *)(unaff_x19 + 0x298) = fVar14;
                                                          *(float *)(unaff_x19 + 0x29c) =
                                                               (fVar23 * fVar25 +
                                                               fVar16 * fVar22 + fVar24 * fVar21) -
                                                               fVar13 * fVar20;
                                                          *(float *)(unaff_x19 + 0x2a0) =
                                                               ((fVar16 * fVar21 - fVar23 * fVar20)
                                                               - fVar13 * fVar25) - fVar17;
                                                          FUN_0348d588();
                                                          if (DAT_086ef688 == (code *)0x0) {
                                                            DAT_086ef688 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Time::get_time()");
                                                  }
                                                  uVar15 = (*DAT_086ef688)();
                                                  *(undefined4 *)(unaff_x19 + 0x310) = uVar15;
                                                  if (DAT_086ef688 == (code *)0x0) {
                                                    DAT_086ef688 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Time::get_time()");
                                                  }
                                                  uVar15 = (*DAT_086ef688)();
                                                  *(undefined4 *)(unaff_x19 + 0x314) = uVar15;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar15 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x238) = uVar15;
                                                    *(float *)(unaff_x19 + 0x23c) = fVar18;
                                                    *(float *)(unaff_x19 + 0x240) = fVar17;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar15 = FUN_07a172b0(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      *(undefined4 *)(unaff_x19 + 0x2d4) = uVar15;
                                                      *(float *)(unaff_x19 + 0x2d8) = fVar18;
                                                      *(float *)(unaff_x19 + 0x2dc) = fVar17;
                                                      *(float *)(unaff_x19 + 0x2e0) = fVar14;
                                                      if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                                                         (lVar11 = *(long *)(*(long *)(unaff_x19 +
                                                                                      0x28) + 0x30),
                                                         lVar11 != 0)) {
                                                        plVar7 = (long *)FUN_03398188(DAT_083c81e0,
                                                                                      *(undefined4 *
                                                                                       )(lVar11 + 
                                                  0x18));
                                                  *(long **)(unaff_x19 + 800) = plVar7;
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
                                                    plVar7 = (long *)*plVar1;
                                                  }
                                                  if (plVar7 != (long *)0x0) {
                                                    uVar6 = 0;
                                                    do {
                                                      if ((long)(int)plVar7[3] <= (long)uVar6) {
                                                        *(undefined1 *)(unaff_x19 + 0x305) = 1;
                                                        return;
                                                      }
                                                      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                                                         (lVar11 = *(long *)(*(long *)(unaff_x19 +
                                                                                      0x28) + 0x30),
                                                         lVar11 == 0)) break;
                                                      if (*(uint *)(lVar11 + 0x18) <= uVar6) {
LAB_0348c8d4:
                    /* WARNING: Subroutine does not return */
                                                        FUN_033d1d44();
                                                      }
                                                      uVar19 = *(undefined8 *)
                                                                (lVar11 + uVar6 * 8 + 0x20);
                                                      lVar11 = FUN_03398a84(DAT_083d8080);
                                                      FUN_0348d8b4(lVar11,uVar19);
                                                      if ((lVar11 != 0) &&
                                                         (lVar8 = FUN_0339898c(lVar11,*(undefined8 *
                                                                                       )(*plVar7 +
                                                                                        0x40)),
                                                         lVar8 == 0)) {
                                                        uVar19 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
                                                        FUN_033d1c20(uVar19,0);
                                                      }
                                                      if (*(uint *)(plVar7 + 3) <= uVar6)
                                                      goto LAB_0348c8d4;
                                                      plVar7 = plVar7 + uVar6 + 4;
                                                      *plVar7 = lVar11;
                                                      if (DAT_08908cd0 != 0) {
                                                        puVar2 = &DAT_0873ccb0 +
                                                                 ((ulong)plVar7 >> 0x12 & 0x7fff);
                                                        do {
                                                          cVar3 = '\x01';
                                                          bVar4 = (bool)ExclusiveMonitorPass
                                                                                  (puVar2,0x10);
                                                          if (bVar4) {
                                                            *puVar2 = *puVar2 | 1L << ((ulong)plVar7
                                                                                       >> 0xc & 0x3f
                                                                                      );
                                                            cVar3 = ExclusiveMonitorsStatus();
                                                          }
                                                        } while (cVar3 != '\0');
                                                      }
                                                      plVar7 = (long *)*plVar1;
                                                      uVar6 = uVar6 + 1;
                                                    } while (plVar7 != (long *)0x0);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else if (*unaff_x22 != 0) {
                                                    uVar19 = FUN_07a11ba4(*unaff_x22,0);
                                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                      uStack0000000000000008 =
                                                           FUN_07a87c30(*(long *)(unaff_x19 + 0x18),
                                                                        0);
                                                      in_stack_00000010 = fVar24;
                                                      uVar12 = FUN_034a8148(&stack0x00000008,0,0,0);
                                                      uVar19 = FUN_0666ed44(DAT_08444048,uVar19,
                                                                            DAT_0842e6b0,uVar12,0);
                                                      lVar11 = *unaff_x22;
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
LAB_0348c898:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


