/*
FUNCTION_NAME: RealisticEyeMovements.LookTargetController$$OnDestroy
ENTRY_POINT: 0348b3fc
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


void RealisticEyeMovements_LookTargetController__OnDestroy(void)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  code *pcVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  float *pfVar10;
  long unaff_x19;
  long lVar11;
  undefined8 uVar12;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float unaff_s8;
  undefined8 unaff_d9;
  float fVar27;
  float fVar28;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  
  pcVar6 = (code *)FUN_033d1b68();
  *(code **)(unaff_x21 + 0xe10) = pcVar6;
  fVar13 = (float)(*pcVar6)();
  fVar19 = (float)unaff_d9 * (float)unaff_d9;
  fVar21 = (float)((ulong)unaff_d9 >> 0x20);
  fVar21 = fVar21 * fVar21;
  uVar26 = NEON_rev64(CONCAT44(fVar21,fVar19),4);
  fVar13 = fVar13 * DAT_012edea8;
  fVar18 = ((float)((ulong)uVar26 >> 0x20) + unaff_s8 * unaff_s8) * fVar13;
  fVar19 = (fVar19 + fVar21) * fVar13;
  FUN_07a858f8();
  uVar26 = *(undefined8 *)(unaff_x19 + 0xc0);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar7 = FUN_07a0d2c4(uVar26,0,0);
  if ((uVar7 & 1) == 0) {
    lVar11 = *(long *)(unaff_x19 + 0x20);
    if (lVar11 == 0) goto LAB_0348c898;
    if (DAT_086ef838 == (code *)0x0) {
      DAT_086ef838 = (code *)FUN_033d1b68("UnityEngine.Transform::GetParent()");
    }
    uVar26 = (*DAT_086ef838)(lVar11);
  }
  else {
    uVar26 = *(undefined8 *)(unaff_x19 + 0xc0);
  }
  *(undefined8 *)(unaff_x19 + 0x2e8) = uVar26;
  if (*(int *)(unaff_x25 + 0xcd0) != 0) {
    puVar2 = (ulong *)(unaff_x26 + (unaff_x19 + 0x2e8U >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 1L << (unaff_x19 + 0x2e8U >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar11 = *(long *)(unaff_x19 + 0x18);
  if (lVar11 != 0) {
    pcVar6 = *(code **)(unaff_x27 + 0x130);
    if (pcVar6 == (code *)0x0) {
      pcVar6 = (code *)FUN_033d1b68("UnityEngine.Joint::get_connectedBody()");
      *(code **)(unaff_x27 + 0x130) = pcVar6;
    }
    uVar26 = (*pcVar6)(lVar11);
    *(undefined8 *)(unaff_x19 + 0x140) = uVar26;
    if (*(int *)(unaff_x25 + 0xcd0) != 0) {
      puVar2 = (ulong *)(unaff_x26 + (unaff_x19 + 0x140U >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = *puVar2 | 1L << (unaff_x19 + 0x140U >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar11 = *(long *)(unaff_x19 + 0x20);
    if (lVar11 != 0) {
      if (DAT_086ef838 == (code *)0x0) {
        DAT_086ef838 = (code *)FUN_033d1b68("UnityEngine.Transform::GetParent()");
      }
      uVar26 = (*DAT_086ef838)(lVar11);
      *(undefined8 *)(unaff_x19 + 0x148) = uVar26;
      if (*(int *)(unaff_x25 + 0xcd0) != 0) {
        puVar2 = (ulong *)(unaff_x26 + (unaff_x19 + 0x148U >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = *puVar2 | 1L << (unaff_x19 + 0x148U >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar11 = *(long *)(unaff_x19 + 0x18);
      if (lVar11 != 0) {
        pcVar6 = *(code **)(unaff_x23 + 0x188);
        if (pcVar6 == (code *)0x0) {
          pcVar6 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          *(code **)(unaff_x23 + 0x188) = pcVar6;
        }
        lVar11 = (*pcVar6)(lVar11);
        if (lVar11 != 0) {
          if (DAT_086ef838 == (code *)0x0) {
            DAT_086ef838 = (code *)FUN_033d1b68("UnityEngine.Transform::GetParent()");
          }
          uVar26 = (*DAT_086ef838)(lVar11);
          *(undefined8 *)(unaff_x19 + 0x180) = uVar26;
          if (*(int *)(unaff_x25 + 0xcd0) != 0) {
            puVar2 = (ulong *)(unaff_x26 + (unaff_x19 + 0x180U >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = *puVar2 | 1L << (unaff_x19 + 0x180U >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lVar11 = *(long *)(unaff_x19 + 0x18);
          if (lVar11 != 0) {
            pcVar6 = *(code **)(unaff_x23 + 0x188);
            if (pcVar6 == (code *)0x0) {
              pcVar6 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
              *(code **)(unaff_x23 + 0x188) = pcVar6;
            }
            lVar11 = (*pcVar6)(lVar11);
            if (lVar11 != 0) {
              uVar14 = FUN_07a18d2c(lVar11,0);
              lVar11 = *(long *)(unaff_x19 + 0x18);
              *(undefined4 *)(unaff_x19 + 0x188) = uVar14;
              *(float *)(unaff_x19 + 0x18c) = fVar18;
              *(float *)(unaff_x19 + 400) = fVar19;
              if (lVar11 != 0) {
                pcVar6 = *(code **)(unaff_x23 + 0x188);
                if (pcVar6 == (code *)0x0) {
                  pcVar6 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
                  *(code **)(unaff_x23 + 0x188) = pcVar6;
                }
                lVar11 = (*pcVar6)(lVar11);
                if (lVar11 != 0) {
                  uVar14 = FUN_07a172b0(lVar11,0);
                  *(undefined4 *)(unaff_x19 + 0x194) = uVar14;
                  *(float *)(unaff_x19 + 0x198) = fVar18;
                  *(float *)(unaff_x19 + 0x19c) = fVar19;
                  *(float *)(unaff_x19 + 0x1a0) = fVar13;
                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                    uVar14 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x20),0);
                    *(undefined4 *)(unaff_x19 + 0x1a4) = uVar14;
                    *(float *)(unaff_x19 + 0x1a8) = fVar18;
                    *(float *)(unaff_x19 + 0x1ac) = fVar19;
                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                      uVar14 = FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0);
                      lVar11 = *(long *)(unaff_x19 + 0x18);
                      *(undefined4 *)(unaff_x19 + 0x1b0) = uVar14;
                      *(float *)(unaff_x19 + 0x1b4) = fVar18;
                      *(float *)(unaff_x19 + 0x1b8) = fVar19;
                      *(float *)(unaff_x19 + 0x1bc) = fVar13;
                      if (lVar11 != 0) {
                        if (DAT_086f22e0 == (code *)0x0) {
                          DAT_086f22e0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::get_angularXMotion()"
                                                  );
                        }
                        uVar14 = (*DAT_086f22e0)(lVar11);
                        lVar11 = *(long *)(unaff_x19 + 0x18);
                        *(undefined4 *)(unaff_x19 + 0x1c0) = uVar14;
                        if (lVar11 != 0) {
                          if (DAT_086f22f0 == (code *)0x0) {
                            DAT_086f22f0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::get_angularYMotion()"
                                                  );
                          }
                          uVar14 = (*DAT_086f22f0)(lVar11);
                          lVar11 = *(long *)(unaff_x19 + 0x18);
                          *(undefined4 *)(unaff_x19 + 0x1c4) = uVar14;
                          if (lVar11 != 0) {
                            if (DAT_086f2300 == (code *)0x0) {
                              DAT_086f2300 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::get_angularZMotion()"
                                                  );
                            }
                            uVar14 = (*DAT_086f2300)(lVar11);
                            *(undefined4 *)(unaff_x19 + 0x1c8) = uVar14;
                            uVar14 = FUN_0348ce8c();
                            *(undefined4 *)(unaff_x19 + 0x244) = uVar14;
                            *(float *)(unaff_x19 + 0x248) = fVar18;
                            *(float *)(unaff_x19 + 0x24c) = fVar19;
                            *(float *)(unaff_x19 + 0x250) = fVar13;
                            if (*(long *)(unaff_x19 + 0x18) != 0) {
                              fVar13 = (float)FUN_07a87af8(*(long *)(unaff_x19 + 0x18),0);
                              if (*(long *)(unaff_x19 + 0x18) != 0) {
                                fVar21 = fVar19;
                                fVar16 = fVar18;
                                fVar15 = (float)FUN_07a88e40(*(long *)(unaff_x19 + 0x18),0);
                                fVar22 = fVar13 * fVar21;
                                fVar21 = fVar18 * fVar21 - fVar19 * fVar16;
                                fVar19 = fVar19 * fVar15 - fVar22;
                                fVar13 = fVar13 * fVar16 - fVar18 * fVar15;
                                fStack0000000000000008 = fVar21;
                                fStack000000000000000c = fVar19;
                                in_stack_00000010 = fVar13;
                                if (DAT_086d7cc3 == '\0') {
                                  FUN_0335b6c8(&DAT_083ce8b0,1);
                                  DataMemoryBarrier(2,3);
                                  DAT_086d7cc3 = '\x01';
                                }
                                if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                                  FUN_033b9870();
                                }
                                fVar18 = DAT_012edb5c;
                                fVar15 = fVar13 * fVar13;
                                fVar16 = SQRT(fVar15 + fVar21 * fVar21 + fVar19 * fVar19);
                                if (fVar16 <= DAT_012edb5c) {
                                  if (DAT_086d7cc6 == '\0') {
                                    FUN_0335b6c8(&DAT_083d2c90,1);
                                    DataMemoryBarrier(2,3);
                                    DAT_086d7cc6 = '\x01';
                                  }
                                  pfVar10 = *(float **)(DAT_083d2c90 + 0xb8);
                                  fVar21 = *pfVar10;
                                  fVar19 = pfVar10[1];
                                  fVar13 = pfVar10[2];
                                }
                                else {
                                  fVar21 = fVar21 / fVar16;
                                  fVar19 = fVar19 / fVar16;
                                  fVar13 = fVar13 / fVar16;
                                }
                                if (*(long *)(unaff_x19 + 0x18) != 0) {
                                  fVar16 = (float)FUN_07a87af8(*(long *)(unaff_x19 + 0x18),0);
                                  fVar27 = fVar19 * fVar22 - fVar13 * fVar15;
                                  fVar24 = fVar13 * fVar16;
                                  fVar22 = fVar21 * fVar22;
                                  fVar28 = fVar24 - fVar22;
                                  fVar16 = fVar21 * fVar15 - fVar19 * fVar16;
                                  fStack0000000000000008 = fVar27;
                                  fStack000000000000000c = fVar28;
                                  in_stack_00000010 = fVar16;
                                  if (DAT_086d7cc3 == '\0') {
                                    FUN_0335b6c8(&DAT_083ce8b0,1);
                                    DataMemoryBarrier(2,3);
                                    DAT_086d7cc3 = '\x01';
                                  }
                                  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                                    FUN_033b9870();
                                  }
                                  fVar16 = SQRT(fVar16 * fVar16 + fVar27 * fVar27 + fVar28 * fVar28)
                                  ;
                                  if (fVar16 <= fVar18) {
                                    if (DAT_086d7cc6 == '\0') {
                                      FUN_0335b6c8(&DAT_083d2c90,1);
                                      DataMemoryBarrier(2,3);
                                      DAT_086d7cc6 = '\x01';
                                    }
                                    fVar28 = **(float **)(DAT_083d2c90 + 0xb8);
                                    fStack0000000000000004 = fVar28;
                                  }
                                  else {
                                    fVar22 = fVar27 / fVar16;
                                    fVar28 = fVar28 / fVar16;
                                    fStack0000000000000004 = fVar22;
                                  }
                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                    FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0);
                                    fVar18 = (float)FUN_07a00400(0);
                                    if (*unaff_x22 != 0) {
                                      fVar16 = fVar24;
                                      fVar15 = fVar28;
                                      fVar27 = fVar22;
                                      fVar17 = (float)FUN_07a172b0(*unaff_x22,0);
                                      fVar23 = fVar22 * fVar27;
                                      fVar25 = fVar18 * fVar15 + fVar24 * fVar27 + fVar22 * fVar16;
                                      fVar20 = ((fVar24 * fVar16 - fVar18 * fVar17) -
                                               fVar28 * fVar15) - fVar23;
                                      *(float *)(unaff_x19 + 0x2b4) =
                                           (fVar28 * fVar27 + fVar24 * fVar17 + fVar18 * fVar16) -
                                           fVar22 * fVar15;
                                      *(float *)(unaff_x19 + 0x2b8) =
                                           (fVar22 * fVar17 + fVar24 * fVar15 + fVar28 * fVar16) -
                                           fVar18 * fVar27;
                                      *(float *)(unaff_x19 + 700) = fVar25 - fVar28 * fVar17;
                                      *(float *)(unaff_x19 + 0x2c0) = fVar20;
                                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                                        lVar11 = *(long *)(unaff_x19 + 0xb0);
                                        FUN_07a18d2c(*(long *)(unaff_x19 + 0x20),0);
                                        if (lVar11 != 0) {
                                          uVar14 = FUN_07a1b4e0(lVar11,0);
                                          *(undefined4 *)(unaff_x19 + 0x150) = uVar14;
                                          *(float *)(unaff_x19 + 0x154) = fVar20;
                                          *(float *)(unaff_x19 + 0x158) = fVar23;
                                          if (*(long *)(unaff_x19 + 0xb0) != 0) {
                                            FUN_07a172b0(*(long *)(unaff_x19 + 0xb0),0);
                                            fVar18 = (float)FUN_07a00400(0);
                                            if (*(long *)(unaff_x19 + 0x20) != 0) {
                                              fVar16 = fVar25;
                                              fVar15 = fVar20;
                                              fVar22 = fVar23;
                                              fVar28 = (float)FUN_07a172b0(*(long *)(unaff_x19 +
                                                                                    0x20),0);
                                              fVar24 = (fVar23 * fVar28 +
                                                       fVar25 * fVar15 + fVar20 * fVar16) -
                                                       fVar18 * fVar22;
                                              fVar27 = (fVar18 * fVar15 +
                                                       fVar25 * fVar22 + fVar23 * fVar16) -
                                                       fVar20 * fVar28;
                                              fVar17 = ((fVar25 * fVar16 - fVar18 * fVar28) -
                                                       fVar20 * fVar15) - fVar23 * fVar22;
                                              *(float *)(unaff_x19 + 0x15c) =
                                                   (fVar20 * fVar22 +
                                                   fVar25 * fVar28 + fVar18 * fVar16) -
                                                   fVar23 * fVar15;
                                              *(float *)(unaff_x19 + 0x160) = fVar24;
                                              *(float *)(unaff_x19 + 0x164) = fVar27;
                                              *(float *)(unaff_x19 + 0x168) = fVar17;
                                              uVar14 = FUN_07a00400(0);
                                              *(undefined4 *)(unaff_x19 + 0x34c) = uVar14;
                                              *(float *)(unaff_x19 + 0x350) = fVar24;
                                              *(float *)(unaff_x19 + 0x354) = fVar27;
                                              *(float *)(unaff_x19 + 0x358) = fVar17;
                                              if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                uVar26 = FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0)
                                                ;
                                                if (*unaff_x22 != 0) {
                                                  FUN_07a172b0(*unaff_x22,0);
                                                  uVar14 = FUN_034213b8(uVar26,0);
                                                  *(float *)(unaff_x19 + 0x178) = fVar17;
                                                  *(undefined4 *)(unaff_x19 + 0x16c) = uVar14;
                                                  *(float *)(unaff_x19 + 0x170) = fVar24;
                                                  *(float *)(unaff_x19 + 0x174) = fVar27;
                                                  fVar15 = (float)FUN_07a009b0(fVar21,0);
                                                  fVar18 = fVar19;
                                                  fVar21 = fVar13;
                                                  fVar16 = fStack0000000000000004;
                                                  uVar14 = FUN_07a00400(0);
                                                  *(undefined4 *)(unaff_x19 + 0x274) = uVar14;
                                                  *(float *)(unaff_x19 + 0x278) = fVar18;
                                                  *(float *)(unaff_x19 + 0x27c) = fVar21;
                                                  *(float *)(unaff_x19 + 0x280) = fVar16;
                                                  fVar18 = *(float *)(unaff_x19 + 0x250);
                                                  fVar21 = *(float *)(unaff_x19 + 0x244);
                                                  fVar16 = *(float *)(unaff_x19 + 0x248);
                                                  fVar24 = *(float *)(unaff_x19 + 0x24c);
                                                  fVar27 = fVar13 * fVar24;
                                                  fVar22 = (fVar13 * fVar16 +
                                                           fStack0000000000000004 * fVar21 +
                                                           fVar15 * fVar18) - fVar19 * fVar24;
                                                  fVar28 = (fVar15 * fVar24 +
                                                           fStack0000000000000004 * fVar16 +
                                                           fVar19 * fVar18) - fVar13 * fVar21;
                                                  *(float *)(unaff_x19 + 0x284) = fVar22;
                                                  *(float *)(unaff_x19 + 0x288) = fVar28;
                                                  *(float *)(unaff_x19 + 0x28c) =
                                                       (fVar19 * fVar21 +
                                                       fStack0000000000000004 * fVar24 +
                                                       fVar13 * fVar18) - fVar15 * fVar16;
                                                  *(float *)(unaff_x19 + 0x290) =
                                                       ((fStack0000000000000004 * fVar18 -
                                                        fVar15 * fVar21) - fVar19 * fVar16) - fVar27
                                                  ;
                                                  FUN_0348cf4c();
                                                  fVar21 = (float)FUN_07a00400(0);
                                                  fVar13 = fVar27;
                                                  fVar18 = fVar22;
                                                  fVar19 = fVar28;
                                                  fVar16 = (float)FUN_0348d010();
                                                  fVar24 = fVar28 * fVar19;
                                                  fVar17 = fVar21 * fVar18 +
                                                           fVar27 * fVar19 + fVar28 * fVar13;
                                                  fVar15 = ((fVar27 * fVar13 - fVar21 * fVar16) -
                                                           fVar22 * fVar18) - fVar24;
                                                  *(float *)(unaff_x19 + 0x264) =
                                                       (fVar22 * fVar19 +
                                                       fVar27 * fVar16 + fVar21 * fVar13) -
                                                       fVar28 * fVar18;
                                                  *(float *)(unaff_x19 + 0x268) =
                                                       (fVar28 * fVar16 +
                                                       fVar27 * fVar18 + fVar22 * fVar13) -
                                                       fVar21 * fVar19;
                                                  *(float *)(unaff_x19 + 0x26c) =
                                                       fVar17 - fVar22 * fVar16;
                                                  *(float *)(unaff_x19 + 0x270) = fVar15;
                                                  FUN_0348d1dc();
                                                  fVar21 = (float)FUN_07a00400(0);
                                                  fVar13 = fVar17;
                                                  fVar18 = fVar15;
                                                  fVar19 = fVar24;
                                                  fVar16 = (float)FUN_0348ce8c();
                                                  lVar11 = *(long *)(unaff_x19 + 0x18);
                                                  fVar28 = fVar24 * fVar19;
                                                  fVar27 = fVar21 * fVar18 +
                                                           fVar17 * fVar19 + fVar24 * fVar13;
                                                  fVar22 = ((fVar17 * fVar13 - fVar21 * fVar16) -
                                                           fVar15 * fVar18) - fVar28;
                                                  *(float *)(unaff_x19 + 0x254) =
                                                       (fVar15 * fVar19 +
                                                       fVar17 * fVar16 + fVar21 * fVar13) -
                                                       fVar24 * fVar18;
                                                  *(float *)(unaff_x19 + 600) =
                                                       (fVar24 * fVar16 +
                                                       fVar17 * fVar18 + fVar15 * fVar13) -
                                                       fVar21 * fVar19;
                                                  *(float *)(unaff_x19 + 0x25c) =
                                                       fVar27 - fVar15 * fVar16;
                                                  *(float *)(unaff_x19 + 0x260) = fVar22;
                                                  if (lVar11 != 0) {
                                                    pcVar6 = *(code **)(unaff_x27 + 0x130);
                                                    if (pcVar6 == (code *)0x0) {
                                                      pcVar6 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Joint::get_connectedBody()");
                                                  *(code **)(unaff_x27 + 0x130) = pcVar6;
                                                  }
                                                  uVar26 = (*pcVar6)(lVar11);
                                                  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                                    FUN_033b9870(DAT_083cf7d8);
                                                  }
                                                  uVar7 = FUN_07a0d2c4(uVar26,0,0);
                                                  if ((uVar7 & 1) != 0) {
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
                                                  pcVar6 = *(code **)(unaff_x27 + 0x130);
                                                  if (pcVar6 == (code *)0x0) {
                                                    pcVar6 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Joint::get_connectedBody()");
                                                  *(code **)(unaff_x27 + 0x130) = pcVar6;
                                                  }
                                                  lVar11 = (*pcVar6)(lVar11);
                                                  if (lVar11 == 0) goto LAB_0348c898;
                                                  pcVar6 = *(code **)(unaff_x23 + 0x188);
                                                  if (pcVar6 == (code *)0x0) {
                                                    pcVar6 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                                  *(code **)(unaff_x23 + 0x188) = pcVar6;
                                                  }
                                                  uVar26 = (*pcVar6)(lVar11);
                                                  *(undefined8 *)(unaff_x19 + 0x2f0) = uVar26;
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar2 = &DAT_0873ccb0 +
                                                             (unaff_x19 + 0x2f0U >> 0x12 & 0x7fff);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar2,0x10);
                                                      if (bVar4) {
                                                        *puVar2 = *puVar2 | 1L << (unaff_x19 +
                                                                                   0x2f0U >> 0xc &
                                                                                  0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  lVar11 = *(long *)(unaff_x19 + 0x20);
                                                  if (lVar11 == 0) goto LAB_0348c898;
                                                  if (DAT_086ef838 == (code *)0x0) {
                                                    DAT_086ef838 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::GetParent()");
                                                  }
                                                  uVar26 = (*DAT_086ef838)(lVar11);
                                                  uVar12 = *(undefined8 *)(unaff_x19 + 0xc0);
                                                  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                                    FUN_033b9870(DAT_083cf7d8);
                                                  }
                                                  bVar5 = FUN_07a119fc(uVar26,uVar12,0);
                                                  *(byte *)(unaff_x19 + 0x304) = bVar5 & 1;
                                                  FUN_0348d31c();
                                                  }
                                                  lVar11 = *(long *)(unaff_x19 + 0x18);
                                                  if (lVar11 != 0) {
                                                    if (DAT_086f22e0 == (code *)0x0) {
                                                      DAT_086f22e0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::get_angularXMotion()"
                                                  );
                                                  }
                                                  uVar14 = (*DAT_086f22e0)(lVar11);
                                                  lVar11 = *(long *)(unaff_x19 + 0x18);
                                                  *(undefined4 *)(unaff_x19 + 0x2f8) = uVar14;
                                                  if (lVar11 != 0) {
                                                    if (DAT_086f22f0 == (code *)0x0) {
                                                      DAT_086f22f0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::get_angularYMotion()"
                                                  );
                                                  }
                                                  uVar14 = (*DAT_086f22f0)(lVar11);
                                                  lVar11 = *(long *)(unaff_x19 + 0x18);
                                                  *(undefined4 *)(unaff_x19 + 0x2fc) = uVar14;
                                                  if (lVar11 != 0) {
                                                    if (DAT_086f2300 == (code *)0x0) {
                                                      DAT_086f2300 = (code *)FUN_033d1b68(
                                                  "UnityEngine.ConfigurableJoint::get_angularZMotion()"
                                                  );
                                                  }
                                                  uVar14 = (*DAT_086f2300)(lVar11);
                                                  lVar11 = *(long *)(unaff_x19 + 0xb8);
                                                  *(undefined4 *)(unaff_x19 + 0x300) = uVar14;
                                                  if (lVar11 != 0) {
                                                    pcVar6 = *(code **)(unaff_x23 + 0x188);
                                                    if (pcVar6 == (code *)0x0) {
                                                      pcVar6 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                                  *(code **)(unaff_x23 + 0x188) = pcVar6;
                                                  }
                                                  lVar11 = (*pcVar6)(lVar11);
                                                  if (lVar11 != 0) {
                                                    FUN_07a172b0(lVar11,0);
                                                    fVar13 = (float)FUN_07a00400(0);
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      fVar18 = fVar27;
                                                      fVar19 = fVar22;
                                                      fVar21 = fVar28;
                                                      fVar16 = (float)FUN_07a172b0(*(long *)(
                                                  unaff_x19 + 0x20),0);
                                                  lVar11 = *(long *)(unaff_x19 + 0x18);
                                                  fVar24 = fVar28 * fVar21;
                                                  fVar17 = fVar13 * fVar19 +
                                                           fVar27 * fVar21 + fVar28 * fVar18;
                                                  fVar15 = ((fVar27 * fVar18 - fVar13 * fVar16) -
                                                           fVar22 * fVar19) - fVar24;
                                                  *(float *)(unaff_x19 + 300) =
                                                       (fVar22 * fVar21 +
                                                       fVar27 * fVar16 + fVar13 * fVar18) -
                                                       fVar28 * fVar19;
                                                  *(float *)(unaff_x19 + 0x130) =
                                                       (fVar28 * fVar16 +
                                                       fVar27 * fVar19 + fVar22 * fVar18) -
                                                       fVar13 * fVar21;
                                                  *(float *)(unaff_x19 + 0x134) =
                                                       fVar17 - fVar22 * fVar16;
                                                  *(float *)(unaff_x19 + 0x138) = fVar15;
                                                  if (lVar11 != 0) {
                                                    pcVar6 = *(code **)(unaff_x27 + 0x130);
                                                    if (pcVar6 == (code *)0x0) {
                                                      pcVar6 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Joint::get_connectedBody()");
                                                  *(code **)(unaff_x27 + 0x130) = pcVar6;
                                                  }
                                                  uVar26 = (*pcVar6)(lVar11);
                                                  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                                    FUN_033b9870(DAT_083cf7d8);
                                                  }
                                                  uVar7 = FUN_07a119fc(uVar26,0,0);
                                                  if ((uVar7 & 1) == 0) {
                                                    lVar11 = *(long *)(unaff_x19 + 0x18);
                                                    if (lVar11 == 0) goto LAB_0348c898;
                                                    pcVar6 = *(code **)(unaff_x27 + 0x130);
                                                    if (pcVar6 == (code *)0x0) {
                                                      pcVar6 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Joint::get_connectedBody()");
                                                  *(code **)(unaff_x27 + 0x130) = pcVar6;
                                                  }
                                                  lVar11 = (*pcVar6)(lVar11);
                                                  if (lVar11 == 0) goto LAB_0348c898;
                                                  pcVar6 = *(code **)(unaff_x23 + 0x188);
                                                  if (pcVar6 == (code *)0x0) {
                                                    pcVar6 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                                  *(code **)(unaff_x23 + 0x188) = pcVar6;
                                                  }
                                                  lVar11 = (*pcVar6)(lVar11);
                                                  if ((*unaff_x22 == 0) ||
                                                     (FUN_07a18d2c(*unaff_x22,0), lVar11 == 0))
                                                  goto LAB_0348c898;
                                                  uVar14 = FUN_07a1b4e0(lVar11,0);
                                                  lVar11 = *(long *)(unaff_x19 + 0x18);
                                                  *(undefined4 *)(unaff_x19 + 0x220) = uVar14;
                                                  *(float *)(unaff_x19 + 0x224) = fVar15;
                                                  *(float *)(unaff_x19 + 0x228) = fVar24;
                                                  if (lVar11 == 0) goto LAB_0348c898;
                                                  pcVar6 = *(code **)(unaff_x27 + 0x130);
                                                  if (pcVar6 == (code *)0x0) {
                                                    pcVar6 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Joint::get_connectedBody()");
                                                  *(code **)(unaff_x27 + 0x130) = pcVar6;
                                                  }
                                                  lVar11 = (*pcVar6)(lVar11);
                                                  if (lVar11 == 0) goto LAB_0348c898;
                                                  pcVar6 = *(code **)(unaff_x23 + 0x188);
                                                  if (pcVar6 == (code *)0x0) {
                                                    pcVar6 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                                  *(code **)(unaff_x23 + 0x188) = pcVar6;
                                                  }
                                                  lVar11 = (*pcVar6)(lVar11);
                                                  if (lVar11 == 0) goto LAB_0348c898;
                                                  FUN_07a172b0(lVar11,0);
                                                  fVar13 = (float)FUN_07a00400(0);
                                                  if (*unaff_x22 == 0) goto LAB_0348c898;
                                                  fVar18 = fVar17;
                                                  fVar19 = fVar15;
                                                  fVar21 = fVar24;
                                                  fVar16 = (float)FUN_07a172b0(*unaff_x22,0);
                                                  fVar27 = fVar15 * fVar16;
                                                  fVar22 = fVar15 * fVar19;
                                                  fVar20 = fVar24 * fVar21;
                                                  fVar28 = (fVar15 * fVar21 +
                                                           fVar17 * fVar16 + fVar13 * fVar18) -
                                                           fVar24 * fVar19;
                                                  fVar15 = (fVar24 * fVar16 +
                                                           fVar17 * fVar19 + fVar15 * fVar18) -
                                                           fVar13 * fVar21;
                                                  fVar24 = (fVar13 * fVar19 +
                                                           fVar17 * fVar21 + fVar24 * fVar18) -
                                                           fVar27;
                                                  fVar17 = ((fVar17 * fVar18 - fVar13 * fVar16) -
                                                           fVar22) - fVar20;
                                                  }
                                                  else {
                                                    if (*unaff_x22 == 0) goto LAB_0348c898;
                                                    uVar14 = FUN_07a181c8(*unaff_x22,0);
                                                    *(undefined4 *)(unaff_x19 + 0x220) = uVar14;
                                                    *(float *)(unaff_x19 + 0x224) = fVar15;
                                                    *(float *)(unaff_x19 + 0x228) = fVar24;
                                                    if (*(long *)(unaff_x19 + 0xb0) == 0)
                                                    goto LAB_0348c898;
                                                    fVar28 = (float)FUN_07a191d0(*(long *)(unaff_x19
                                                                                          + 0xb0),0)
                                                    ;
                                                  }
                                                  *(float *)(unaff_x19 + 0x2a4) = fVar28;
                                                  *(float *)(unaff_x19 + 0x2a8) = fVar15;
                                                  *(float *)(unaff_x19 + 0x2ac) = fVar24;
                                                  *(float *)(unaff_x19 + 0x2b0) = fVar17;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar14 = FUN_07a181c8(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x22c) = uVar14;
                                                    *(float *)(unaff_x19 + 0x230) = fVar15;
                                                    *(float *)(unaff_x19 + 0x234) = fVar24;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar14 = FUN_07a191d0(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      lVar11 = *(long *)(unaff_x19 + 0x18);
                                                      *(undefined4 *)(unaff_x19 + 0x2c4) = uVar14;
                                                      *(float *)(unaff_x19 + 0x2c8) = fVar15;
                                                      *(float *)(unaff_x19 + 0x2cc) = fVar24;
                                                      *(float *)(unaff_x19 + 0x2d0) = fVar17;
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
                                                  uVar7 = (*DAT_086ef288)(lVar11);
                                                  lVar11 = *(long *)(unaff_x19 + 0x18);
                                                  if (lVar11 != 0) {
                                                    if ((uVar7 & 1) == 0) {
                                                      pcVar6 = *(code **)(unaff_x23 + 0x188);
                                                      if (pcVar6 == (code *)0x0) {
                                                        pcVar6 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                                  *(code **)(unaff_x23 + 0x188) = pcVar6;
                                                  }
                                                  lVar11 = (*pcVar6)(lVar11);
                                                  uVar26 = DAT_08435940;
                                                  if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
                                                    FUN_033b9870(DAT_083ca458);
                                                    uVar26 = DAT_08435940;
                                                  }
LAB_0348c5ec:
                                                  FUN_079ca1d0(uVar26,lVar11,0);
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
                                                    fVar13 = (float)FUN_07a87c30(*(long *)(unaff_x19
                                                                                          + 0x18),0)
                                                    ;
                                                    if (DAT_086d7cc6 == '\0') {
                                                      FUN_0335b6c8(&DAT_083d2c90,1);
                                                      DataMemoryBarrier(2,3);
                                                      DAT_086d7cc6 = '\x01';
                                                    }
                                                    pfVar10 = *(float **)(DAT_083d2c90 + 0xb8);
                                                    fVar24 = fVar24 - pfVar10[2];
                                                    fVar18 = fVar24 * fVar24;
                                                    if (fVar18 + (fVar13 - *pfVar10) *
                                                                 (fVar13 - *pfVar10) +
                                                                 (fVar15 - pfVar10[1]) *
                                                                 (fVar15 - pfVar10[1]) <
                                                        DAT_012ed8ec) {
                                                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                        fVar13 = DAT_012ed8ec;
                                                        uVar14 = FUN_07a18d2c(*(long *)(unaff_x19 +
                                                                                       0x20),0);
                                                        *(undefined4 *)(unaff_x19 + 200) = uVar14;
                                                        *(float *)(unaff_x19 + 0xcc) = fVar18;
                                                        *(float *)(unaff_x19 + 0xd0) = fVar24;
                                                        if (*(long *)(unaff_x19 + 0xb8) != 0) {
                                                          uVar14 = FUN_07a85684(*(long *)(unaff_x19
                                                                                         + 0xb8),0);
                                                          *(undefined4 *)(unaff_x19 + 0x334) =
                                                               uVar14;
                                                          *(float *)(unaff_x19 + 0x338) = fVar18;
                                                          *(float *)(unaff_x19 + 0x33c) = fVar24;
                                                          if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                            uVar14 = FUN_07a172b0(*(long *)(
                                                  unaff_x19 + 0x20),0);
                                                  *(undefined4 *)(unaff_x19 + 0xd4) = uVar14;
                                                  *(float *)(unaff_x19 + 0xd8) = fVar18;
                                                  *(float *)(unaff_x19 + 0xdc) = fVar24;
                                                  *(float *)(unaff_x19 + 0xe0) = fVar13;
                                                  fVar19 = (float)FUN_0348d1dc();
                                                  fVar22 = *(float *)(unaff_x19 + 0x254);
                                                  fVar28 = *(float *)(unaff_x19 + 0x260);
                                                  fVar27 = *(float *)(unaff_x19 + 0x25c);
                                                  fVar17 = *(float *)(unaff_x19 + 600);
                                                  fVar16 = fVar24 * fVar27;
                                                  fVar21 = (fVar18 * fVar27 +
                                                           fVar13 * fVar22 + fVar19 * fVar28) -
                                                           fVar24 * fVar17;
                                                  fVar15 = (fVar24 * fVar22 +
                                                           fVar13 * fVar17 + fVar18 * fVar28) -
                                                           fVar19 * fVar27;
                                                  *(float *)(unaff_x19 + 0x294) = fVar21;
                                                  *(float *)(unaff_x19 + 0x298) = fVar15;
                                                  *(float *)(unaff_x19 + 0x29c) =
                                                       (fVar19 * fVar17 +
                                                       fVar13 * fVar27 + fVar24 * fVar28) -
                                                       fVar18 * fVar22;
                                                  *(float *)(unaff_x19 + 0x2a0) =
                                                       ((fVar13 * fVar28 - fVar19 * fVar22) -
                                                       fVar18 * fVar17) - fVar16;
                                                  FUN_0348d588();
                                                  if (DAT_086ef688 == (code *)0x0) {
                                                    DAT_086ef688 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Time::get_time()");
                                                  }
                                                  uVar14 = (*DAT_086ef688)();
                                                  *(undefined4 *)(unaff_x19 + 0x310) = uVar14;
                                                  if (DAT_086ef688 == (code *)0x0) {
                                                    DAT_086ef688 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Time::get_time()");
                                                  }
                                                  uVar14 = (*DAT_086ef688)();
                                                  *(undefined4 *)(unaff_x19 + 0x314) = uVar14;
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar14 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x20
                                                                                   ),0);
                                                    *(undefined4 *)(unaff_x19 + 0x238) = uVar14;
                                                    *(float *)(unaff_x19 + 0x23c) = fVar21;
                                                    *(float *)(unaff_x19 + 0x240) = fVar16;
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar14 = FUN_07a172b0(*(long *)(unaff_x19 +
                                                                                     0x20),0);
                                                      *(undefined4 *)(unaff_x19 + 0x2d4) = uVar14;
                                                      *(float *)(unaff_x19 + 0x2d8) = fVar21;
                                                      *(float *)(unaff_x19 + 0x2dc) = fVar16;
                                                      *(float *)(unaff_x19 + 0x2e0) = fVar15;
                                                      if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                                                         (lVar11 = *(long *)(*(long *)(unaff_x19 +
                                                                                      0x28) + 0x30),
                                                         lVar11 != 0)) {
                                                        plVar8 = (long *)FUN_03398188(DAT_083c81e0,
                                                                                      *(undefined4 *
                                                                                       )(lVar11 + 
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
                                                         (lVar11 = *(long *)(*(long *)(unaff_x19 +
                                                                                      0x28) + 0x30),
                                                         lVar11 == 0)) break;
                                                      if (*(uint *)(lVar11 + 0x18) <= uVar7) {
LAB_0348c8d4:
                    /* WARNING: Subroutine does not return */
                                                        FUN_033d1d44();
                                                      }
                                                      uVar26 = *(undefined8 *)
                                                                (lVar11 + uVar7 * 8 + 0x20);
                                                      lVar11 = FUN_03398a84(DAT_083d8080);
                                                      FUN_0348d8b4(lVar11,uVar26);
                                                      if ((lVar11 != 0) &&
                                                         (lVar9 = FUN_0339898c(lVar11,*(undefined8 *
                                                                                       )(*plVar8 +
                                                                                        0x40)),
                                                         lVar9 == 0)) {
                                                        uVar26 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
                                                        FUN_033d1c20(uVar26,0);
                                                      }
                                                      if (*(uint *)(plVar8 + 3) <= uVar7)
                                                      goto LAB_0348c8d4;
                                                      plVar8 = plVar8 + uVar7 + 4;
                                                      *plVar8 = lVar11;
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
                                                    uVar26 = FUN_07a11ba4(*unaff_x22,0);
                                                    if (*(long *)(unaff_x19 + 0x18) != 0) {
                                                      fStack0000000000000008 =
                                                           (float)FUN_07a87c30(*(long *)(unaff_x19 +
                                                                                        0x18),0);
                                                      fStack000000000000000c = fVar18;
                                                      in_stack_00000010 = fVar24;
                                                      uVar12 = FUN_034a8148(&stack0x00000008,0,0,0);
                                                      uVar26 = FUN_0666ed44(DAT_08444048,uVar26,
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


