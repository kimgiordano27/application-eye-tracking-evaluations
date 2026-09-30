/*
FUNCTION_NAME: SFTPManager.<>c__DisplayClass17_2$$<UploadAllChildrenToIonos>b__2
ENTRY_POINT: 03fc9454
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 SFTPManager_<>c__DisplayClass17_2__<UploadAllChildrenToIonos>b__2(long param_1)

{
  bool bVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  int *piVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined4 *puVar17;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar18;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 uVar19;
  float fVar20;
  ulong uVar21;
  undefined8 uVar22;
  double dVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  
code_r0x03fc9454:
  if (param_1 != 0) {
    FUN_08a50fa8(param_1,1,0);
    lVar5 = *unaff_x24;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar5 = *unaff_x24;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
    if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0xc0), lVar5 != 0)) &&
       (lVar5 = FUN_04f83194(lVar5,*unaff_x21), lVar5 != 0)) {
      FUN_08a200c4(lVar5,1,0);
      if (*(long *)(unaff_x20 + 0x220) != 0) {
        lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x220),0);
        lVar10 = *(long *)(unaff_x20 + 0xb98);
        if ((lVar10 != 0) && (lVar5 != 0)) {
          FUN_08a5d494(*(undefined4 *)(lVar10 + 0x30),*(undefined4 *)(lVar10 + 0x34),
                       *(undefined4 *)(lVar10 + 0x38),lVar5,0);
LAB_03fc9528:
          FUN_03e46b78();
          if (*(long *)(unaff_x20 + 0x228) != 0) {
            FUN_08a50fa8(*(long *)(unaff_x20 + 0x228),0,0);
            *(undefined1 *)(unaff_x20 + 0xbab) = 0;
            FUN_03e44770();
            if (*(long *)(unaff_x20 + 0xbb0) != 0) {
              FUN_08a52950();
            }
            if (((*(long *)(unaff_x19 + 0x28) == 0) ||
                (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x18), lVar5 == 0)) ||
               (lVar5 = FUN_05a39464(lVar5,*(undefined4 *)(unaff_x20 + 0x23c),*unaff_x29),
               lVar5 == 0)) goto LAB_03fc915c;
            if ((*(char *)(lVar5 + 0x2c) == '\0') || (*(char *)(unaff_x20 + 0xc20) != '\0')) {
              if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                 ((lVar5 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x18), lVar5 == 0 ||
                  (lVar5 = FUN_05a39464(lVar5,*(undefined4 *)(unaff_x20 + 0x23c),*unaff_x29),
                  lVar5 == 0)))) goto LAB_03fc915c;
              if ((*(char *)(lVar5 + 0x2c) != '\0') || (*(char *)(unaff_x20 + 0xc20) == '\0')) {
                if (((*(long *)(unaff_x19 + 0x28) == 0) ||
                    (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x18), lVar5 == 0)) ||
                   (lVar5 = FUN_05a39464(lVar5,*(undefined4 *)(unaff_x20 + 0x23c),*unaff_x29),
                   lVar5 == 0)) goto LAB_03fc915c;
                if ((*(char *)(lVar5 + 0x2c) != '\0') || (*(char *)(unaff_x20 + 0xc20) == '\0'))
                goto LAB_03fc961c;
              }
              FUN_03e452c4();
            }
            else {
              FUN_03e462e0();
            }
LAB_03fc961c:
            lVar5 = *(long *)(unaff_x20 + 0xb98);
            if (((lVar5 == 0) || (lVar10 = *(long *)(lVar5 + 0x60), lVar10 == 0)) ||
               (*(long *)(lVar10 + 0x58) == 0)) goto LAB_03fc915c;
            iVar4 = *(int *)(*(long *)(lVar10 + 0x58) + 0x30);
            if (((iVar4 == 0) || (*(char *)(lVar10 + 0x50) == '\0')) ||
               (*(char *)(lVar5 + 0x58) == '\0')) {
              FUN_03e471b4();
            }
            else if (iVar4 == 1) {
              FUN_03e471b4();
              plVar18 = *(long **)(unaff_x20 + 0x368);
              *(undefined4 *)(unaff_x20 + 900) = 0;
              uVar6 = FUN_0718a9b8(unaff_x20 + 900,0);
              if (plVar18 == (long *)0x0) goto LAB_03fc915c;
              (**(code **)(*plVar18 + 0x558))(plVar18,uVar6,*(undefined8 *)(*plVar18 + 0x560));
              plVar18 = *(long **)(unaff_x20 + 0x370);
              *(undefined4 *)(unaff_x20 + 0x388) = 0;
              uVar6 = FUN_07175a38(unaff_x20 + 0x388,0);
              if (plVar18 == (long *)0x0) goto LAB_03fc915c;
              (**(code **)(*plVar18 + 0x558))(plVar18,uVar6,*(undefined8 *)(*plVar18 + 0x560));
              plVar18 = *(long **)(unaff_x20 + 0x378);
              *(undefined4 *)(unaff_x20 + 0x38c) = 0;
              uVar6 = FUN_0718a9b8(unaff_x20 + 0x38c,0);
              uVar6 = FUN_06fc5244(uVar6,*(undefined8 *)PTR_DAT_091a1cf8,0);
              if (plVar18 == (long *)0x0) goto LAB_03fc915c;
              (**(code **)(*plVar18 + 0x558))(plVar18,uVar6,*(undefined8 *)(*plVar18 + 0x560));
              *(undefined4 *)(unaff_x20 + 0x380) = 0;
              *(undefined4 *)(unaff_x20 + 0x330) = *(undefined4 *)(unaff_x20 + 0x23c);
            }
            if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x60), lVar5 == 0)) ||
               ((lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0 || (*(long *)(unaff_x20 + 0x338) == 0))
               )) goto LAB_03fc915c;
            FUN_08a50fa8(*(long *)(unaff_x20 + 0x338),*(undefined1 *)(lVar5 + 0x34),0);
            if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
            if (*(char *)(*(long *)(unaff_x20 + 0xb98) + 200) == '\0') {
              CoursesShadowCoachManager__ShadowCoachComeBackToPosition();
            }
            else {
              if (*(long *)(unaff_x20 + 0x890) == 0) goto LAB_03fc915c;
              lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x890),0);
              if ((*(long *)(unaff_x20 + 0x890) == 0) ||
                 (lVar10 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x890),0), lVar10 == 0))
              goto LAB_03fc915c;
              uVar6 = FUN_08a5d3f4(lVar10,0);
              if ((*(long *)(unaff_x20 + 0x890) == 0) ||
                 (lVar10 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x890),0), lVar10 == 0))
              goto LAB_03fc915c;
              FUN_08a5d3f4(lVar10,0);
              if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                  (*(long *)(*(long *)(unaff_x20 + 0xb98) + 0xd0) == 0)) || (lVar5 == 0))
              goto LAB_03fc915c;
              FUN_08a5d494(uVar6,lVar5,0);
              CoursesShadowCoachManager__ShadowCoachComeBackToPosition();
              lVar5 = *(long *)(unaff_x20 + 0xb98);
              if ((lVar5 == 0) || (*(long *)(lVar5 + 0xd0) == 0)) goto LAB_03fc915c;
              if (*(char *)(*(long *)(lVar5 + 0xd0) + 0x14) != '\0') {
                FUN_03e4d4f4();
                lVar5 = *(long *)(unaff_x20 + 0xb98);
                if (lVar5 == 0) goto LAB_03fc915c;
              }
              if (*(long *)(lVar5 + 0xd0) == 0) goto LAB_03fc915c;
              if (*(char *)(*(long *)(lVar5 + 0xd0) + 0x15) != '\0') {
                FUN_03e4d5b4();
                lVar5 = *(long *)(unaff_x20 + 0xb98);
                if (lVar5 == 0) goto LAB_03fc915c;
              }
              if (*(long *)(lVar5 + 0xd0) == 0) goto LAB_03fc915c;
              if (*(char *)(*(long *)(lVar5 + 0xd0) + 0x16) != '\0') {
                FUN_03e4d624();
                lVar5 = *(long *)(unaff_x20 + 0xb98);
                if (lVar5 == 0) goto LAB_03fc915c;
              }
              if (*(long *)(lVar5 + 0xd0) == 0) goto LAB_03fc915c;
              if (*(char *)(*(long *)(lVar5 + 0xd0) + 0x17) != '\0') {
                FUN_03e4d694();
                lVar5 = *(long *)(unaff_x20 + 0xb98);
                if (lVar5 == 0) goto LAB_03fc915c;
              }
              if (*(long *)(lVar5 + 0xd0) == 0) goto LAB_03fc915c;
              if (*(char *)(*(long *)(lVar5 + 0xd0) + 0x18) != '\0') {
                FUN_03e52990();
                lVar5 = *(long *)(unaff_x20 + 0xb98);
                if (lVar5 == 0) goto LAB_03fc915c;
              }
              if (*(long *)(lVar5 + 0xd0) == 0) goto LAB_03fc915c;
              if (*(char *)(*(long *)(lVar5 + 0xd0) + 0x19) != '\0') {
                FUN_03e52a00();
              }
            }
            iVar4 = 0;
            *(undefined4 *)(unaff_x19 + 0x30) = 0;
            if (unaff_x20 != 0) {
LAB_03fcb4d0:
              lVar5 = *(long *)(unaff_x20 + 0xb98);
              if (lVar5 == 0) goto LAB_03fc915c;
              if (*(int *)(lVar5 + 0x1c) <= iVar4) goto code_r0x03fcb4e4;
              *(undefined4 *)(unaff_x20 + 0xb8c) = 0;
              *(undefined4 *)(unaff_x20 + 0x280) = 0;
              *(undefined1 *)(unaff_x20 + 0x7f0) = 0;
              *(undefined1 *)(unaff_x20 + 0xb89) = 0;
              *(undefined1 *)(unaff_x20 + 0x53) = 0;
              if (*(long *)(unaff_x20 + 0xbc0) != 0) {
                FUN_08a52950();
              }
              if (*(long *)(unaff_x20 + 3000) != 0) {
                FUN_08a52950();
                *(undefined1 *)(unaff_x20 + 0x240) = 0;
              }
              lVar5 = *(long *)(unaff_x20 + 0xb98);
              if (lVar5 == 0) goto LAB_03fc915c;
              if (*(char *)(lVar5 + 0x78) != '\0') {
                lVar10 = *(long *)(unaff_x19 + 0x28);
                if (*(char *)(lVar5 + 0x88) == '\0') {
                  if ((((lVar10 != 0) && (*(long *)(lVar10 + 0x18) != 0)) &&
                      (lVar5 = FUN_05a39464(*(long *)(lVar10 + 0x18),
                                            *(undefined4 *)(unaff_x20 + 0x23c),*unaff_x29),
                      lVar5 != 0)) &&
                     ((*(long *)(lVar5 + 0x80) != 0 &&
                      (plVar18 = (long *)FUN_04f82e34(*(long *)(lVar5 + 0x80),
                                                      *(undefined8 *)PTR_DAT_091a73e0),
                      plVar18 != (long *)0x0)))) {
                    lVar5 = *plVar18;
                    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar8 != 0) {
                      piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_091a73d8) {
                          puVar7 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_03fc9aa0;
                        }
                        uVar8 = uVar8 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_03d8f370(plVar18,*(long *)PTR_DAT_091a73d8,0);
LAB_03fc9aa0:
                    (*(code *)*puVar7)(plVar18,puVar7[1]);
                    lVar5 = *(long *)(unaff_x20 + 0xb98);
                    if (lVar5 != 0) goto LAB_03fc9ab4;
                  }
                  goto LAB_03fc915c;
                }
                if (((lVar10 == 0) || (*(long *)(lVar10 + 0x18) == 0)) ||
                   ((lVar5 = FUN_05a39464(*(long *)(lVar10 + 0x18),
                                          *(undefined4 *)(unaff_x20 + 0x23c),*unaff_x29), lVar5 == 0
                    || ((*(long *)(lVar5 + 0x80) == 0 ||
                        (plVar18 = (long *)FUN_04f82e34(*(long *)(lVar5 + 0x80),
                                                        *(undefined8 *)PTR_DAT_091a73e0),
                        plVar18 == (long *)0x0)))))) goto LAB_03fc915c;
                lVar5 = *plVar18;
                uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar8 != 0) {
                  piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_091a73d8) {
                      puVar7 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_03fc9a74;
                    }
                    uVar8 = uVar8 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar8 != 0);
                }
                puVar7 = (undefined8 *)FUN_03d8f370(plVar18,*(long *)PTR_DAT_091a73d8,0);
LAB_03fc9a74:
                (*(code *)*puVar7)(plVar18,puVar7[1]);
                if (unaff_x20 == 0) goto LAB_03fc915c;
                if (*(char *)(unaff_x20 + 0xb88) == '\0') {
                  *(undefined8 *)(unaff_x19 + 0x18) =
                       *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
                  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                  uVar19 = 2;
                  goto LAB_03fcbe38;
                }
                *(undefined1 *)(unaff_x20 + 0xb88) = 0;
                goto switchD_03fcb718_default;
              }
LAB_03fc9ab4:
              if (*(char *)(lVar5 + 0x3d) == '\0') {
                if ((*(long *)(unaff_x20 + 0x390) != 0) &&
                   (lVar5 = FUN_04f82e34(*(long *)(unaff_x20 + 0x390),
                                         *(undefined8 *)PTR_DAT_091a1bc0), lVar5 != 0)) {
                  FUN_08ca89f0(lVar5,0);
                  if (*(long *)(unaff_x20 + 0x398) != 0) {
                    FUN_08a50fa8(*(long *)(unaff_x20 + 0x398),0,0);
                    if (*(long *)(unaff_x20 + 0x390) != 0) {
                      FUN_08a50fa8(*(long *)(unaff_x20 + 0x390),0,0);
                      goto LAB_03fca480;
                    }
                  }
                }
                goto LAB_03fc915c;
              }
              if (*(long *)(unaff_x20 + 0x398) == 0) goto LAB_03fc915c;
              uVar8 = FUN_08a51028(*(long *)(unaff_x20 + 0x398),0);
              if ((uVar8 & 1) == 0) {
LAB_03fc9ae4:
                if (*(long *)(unaff_x20 + 0x398) == 0) goto LAB_03fc915c;
                FUN_08a50fa8(*(long *)(unaff_x20 + 0x398),1,0);
                if (*(long *)(unaff_x20 + 0x390) == 0) goto LAB_03fc915c;
                FUN_08a50fa8(*(long *)(unaff_x20 + 0x390),1,0);
              }
              else {
                if (*(long *)(unaff_x20 + 0x390) == 0) goto LAB_03fc915c;
                uVar8 = FUN_08a51028(*(long *)(unaff_x20 + 0x390),0);
                if ((uVar8 & 1) == 0) goto LAB_03fc9ae4;
              }
              if ((*(int *)(unaff_x20 + 0x23c) == 0) && (*(char *)(unaff_x20 + 0xa72) == '\0')) {
                if (*(long *)(unaff_x20 + 0x398) == 0) goto LAB_03fc915c;
                lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x398),0);
                if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                    (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar10 == 0)) ||
                   (lVar5 == 0)) goto LAB_03fc915c;
                FUN_08a5d494(*(undefined4 *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x24),
                             *(undefined4 *)(lVar10 + 0x28),lVar5,0);
                if (*(long *)(unaff_x20 + 0x398) == 0) goto LAB_03fc915c;
                lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x398),0);
                if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                    (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar10 == 0)) ||
                   (FUN_08a447dc(*(float *)(lVar10 + 0x2c) * DAT_01914568,
                                 *(float *)(lVar10 + 0x30) * DAT_01914568,
                                 *(float *)(lVar10 + 0x34) * DAT_01914568,0), lVar5 == 0))
                goto LAB_03fc915c;
                FUN_08a5d814(lVar5,0);
                *(undefined8 *)(unaff_x19 + 0x18) =
                     *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
                thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                uVar19 = 3;
                goto LAB_03fcbe38;
              }
              if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                 (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0))
              goto LAB_03fc915c;
              fVar20 = *(float *)(unaff_x20 + 0x3cc) - *(float *)(lVar5 + 0x20);
              fVar24 = (float)*(undefined8 *)(unaff_x20 + 0x3d0) -
                       (float)*(undefined8 *)(lVar5 + 0x24);
              fVar26 = (float)((ulong)*(undefined8 *)(unaff_x20 + 0x3d0) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(lVar5 + 0x24) >> 0x20);
              if (DAT_01913f10 <= fVar26 * fVar26 + fVar20 * fVar20 + fVar24 * fVar24) {
                *(undefined1 *)(unaff_x20 + 0x3c8) = 1;
                FUN_03e47228();
                FUN_08a52818();
                if (*(long *)(unaff_x20 + 0x3d8) == 0) goto LAB_03fc915c;
                FUN_089f6760(*(long *)(unaff_x20 + 0x3d8),*(undefined8 *)PTR_DAT_091a68e0,0);
                if (*(long *)(unaff_x20 + 1000) == 0) goto LAB_03fc915c;
                uVar22 = FUN_089f5af8(*(long *)(unaff_x20 + 1000),0);
                uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
                FUN_08a57768(uVar22,uVar6,0);
                *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
                thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar6);
                uVar19 = 5;
                goto LAB_03fcbe38;
              }
              if (*(char *)(lVar5 + 0x3c) == '\0') {
                FUN_03e47228();
                FUN_08a52818();
              }
              if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                 (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0))
              goto LAB_03fc915c;
              uVar6 = *(undefined8 *)(lVar5 + 0x20);
              *(undefined4 *)(unaff_x20 + 0x3d4) = *(undefined4 *)(lVar5 + 0x28);
              *(undefined8 *)(unaff_x20 + 0x3cc) = uVar6;
              if (*(long *)(unaff_x20 + 0x390) == 0) goto LAB_03fc915c;
              uVar6 = FUN_04f82e34(*(long *)(unaff_x20 + 0x390),*(undefined8 *)PTR_DAT_091a1bc0);
              plVar18 = (long *)(unaff_x20 + 0x3a8);
              *(undefined8 *)(unaff_x20 + 0x3a8) = uVar6;
              thunk_FUN_03d1023c(plVar18,uVar6);
              puVar3 = PTR_DAT_091a73f0;
              if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                 (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0))
              goto LAB_03fc915c;
              if (*(char *)(lVar5 + 0x60) == '\0') {
                if (*(char *)(lVar5 + 0x88) == '\0') {
                  if (*(char *)(lVar5 + 0x3d) != '\0') goto LAB_03fc9dc0;
                  lVar5 = *unaff_x24;
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_03db619c();
                    lVar5 = *unaff_x24;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
                  if (lVar5 == 0) goto LAB_03fc915c;
                  uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar5 + 0x200),
                                             *(undefined8 *)PTR_DAT_091a1c80,0);
                  if ((uVar8 & 1) == 0) {
                    lVar5 = *unaff_x24;
                    if (*(int *)(lVar5 + 0xe0) == 0) {
                      thunk_FUN_03db619c();
                      lVar5 = *unaff_x24;
                    }
                    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
                    if (lVar5 == 0) goto LAB_03fc915c;
                    uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar5 + 0x200),
                                               *(undefined8 *)PTR_DAT_091a1c88,0);
                    if ((uVar8 & 1) != 0) goto LAB_03fca0e0;
                    if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                        (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0)) ||
                       (lVar10 = *(long *)(unaff_x20 + 0x3a8), lVar10 == 0)) goto LAB_03fc915c;
                    puVar7 = (undefined8 *)(lVar5 + 0x18);
                  }
                  else {
LAB_03fca0e0:
                    if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                        (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0)) ||
                       (lVar10 = *(long *)(unaff_x20 + 0x3a8), lVar10 == 0)) goto LAB_03fc915c;
                    puVar7 = (undefined8 *)(lVar5 + 0x10);
                  }
                  FUN_08ca87f8(lVar10,*puVar7,0);
                  if (*plVar18 == 0) goto LAB_03fc915c;
                  uVar6 = FUN_08ca87bc(*plVar18,0);
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_03db619c(*unaff_x27);
                  }
                  uVar8 = FUN_08a508b0(uVar6,0,0);
                  if ((uVar8 & 1) != 0) {
                    if (*plVar18 == 0) goto LAB_03fc915c;
                    FUN_08ca8900(*plVar18,0);
                    if (*(long *)(unaff_x20 + 0x3a8) == 0) goto LAB_03fc915c;
                    uVar8 = FUN_08ca893c(*(long *)(unaff_x20 + 0x3a8),0);
                    if ((uVar8 & 1) == 0) {
                      *(undefined8 *)(unaff_x19 + 0x18) =
                           *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
                      thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                      uVar19 = 7;
                      goto LAB_03fcbe38;
                    }
                  }
                  if (*(long *)(unaff_x20 + 0x3a0) != 0) {
                    FUN_08a200c4(*(long *)(unaff_x20 + 0x3a0),1,0);
                    lVar5 = *(long *)(unaff_x20 + 0x3a8);
joined_r0x03fca474:
                    if (lVar5 != 0) goto LAB_03fca478;
                  }
                  goto LAB_03fc915c;
                }
                if (*(char *)(lVar5 + 0x3d) == '\0') {
                  lVar5 = *(long *)(unaff_x20 + 0x960);
                  if (lVar5 == 0) goto LAB_03fc915c;
                  iVar4 = *(int *)(lVar5 + 0x18);
                  if (iVar4 == 0) {
                    FUN_03e44cdc();
                  }
                  else {
                    if (iVar4 == 1) {
                      lVar10 = *plVar18;
                      uVar6 = FUN_05a39464(lVar5,0,*(undefined8 *)PTR_DAT_091a73f0);
                      if (lVar10 != 0) {
                        FUN_08ca87f8(lVar10,uVar6,0);
                        lVar5 = *plVar18;
                        goto joined_r0x03fca474;
                      }
                      goto LAB_03fc915c;
                    }
                    if (iVar4 == 2) {
                      lVar10 = *plVar18;
                      uVar6 = FUN_05a39464(lVar5,0,*(undefined8 *)PTR_DAT_091a73f0);
                      if (lVar10 == 0) goto LAB_03fc915c;
                      FUN_08ca87f8(lVar10,uVar6,0);
                      if (*plVar18 == 0) goto LAB_03fc915c;
                      FUN_08ca8978(*plVar18,0);
                      if ((*(long *)(unaff_x20 + 0x960) == 0) ||
                         (lVar5 = FUN_05a39464(*(long *)(unaff_x20 + 0x960),0,*(undefined8 *)puVar3)
                         , lVar5 == 0)) goto LAB_03fc915c;
                      dVar23 = (double)FUN_08ca86f8(lVar5,0);
                      uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
                      FUN_08a57768((float)dVar23,uVar6,0);
                      *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
                      thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar6);
                      uVar19 = 0xc;
                      goto LAB_03fcbe38;
                    }
                  }
                }
                else {
LAB_03fc9dc0:
                  uVar8 = FUN_03e52a70();
                  if ((uVar8 & 1) == 0) {
                    uVar8 = FUN_03e52a70();
                    if ((uVar8 & 1) == 0) {
                      lVar5 = *unaff_x24;
                      if (*(int *)(lVar5 + 0xe0) == 0) {
                        thunk_FUN_03db619c();
                        lVar5 = *unaff_x24;
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
                      if (lVar5 == 0) goto LAB_03fc915c;
                      uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar5 + 0x200),
                                                 *(undefined8 *)PTR_DAT_091a1c80,0);
                      if ((uVar8 & 1) == 0) {
                        lVar5 = *unaff_x24;
                        if (*(int *)(lVar5 + 0xe0) == 0) {
                          thunk_FUN_03db619c();
                          lVar5 = *unaff_x24;
                        }
                        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
                        if (lVar5 == 0) goto LAB_03fc915c;
                        uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar5 + 0x200),
                                                   *(undefined8 *)PTR_DAT_091a1c88,0);
                        if ((uVar8 & 1) != 0) goto LAB_03fc9ef0;
                        if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                            (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0)) ||
                           (lVar10 = *(long *)(unaff_x20 + 0x3a8), lVar10 == 0)) goto LAB_03fc915c;
                        puVar7 = (undefined8 *)(lVar5 + 0x48);
                      }
                      else {
LAB_03fc9ef0:
                        if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                            (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0)) ||
                           (lVar10 = *(long *)(unaff_x20 + 0x3a8), lVar10 == 0)) goto LAB_03fc915c;
                        puVar7 = (undefined8 *)(lVar5 + 0x40);
                      }
                      FUN_08ca87f8(lVar10,*puVar7,0);
                      if (*plVar18 == 0) goto LAB_03fc915c;
                      uVar6 = FUN_08ca87bc(*plVar18,0);
                      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                        thunk_FUN_03db619c(*unaff_x27);
                      }
                      uVar8 = FUN_08a508b0(uVar6,0,0);
                      if ((uVar8 & 1) == 0) goto LAB_03fca188;
                      if (*plVar18 == 0) goto LAB_03fc915c;
                      FUN_08ca8900(*plVar18,0);
                      if (*(long *)(unaff_x20 + 0x3a8) == 0) goto LAB_03fc915c;
                      uVar8 = FUN_08ca893c(*(long *)(unaff_x20 + 0x3a8),0);
                      if ((uVar8 & 1) == 0) {
                        *(undefined8 *)(unaff_x19 + 0x18) =
                             *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
                        thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                        uVar19 = 9;
                        goto LAB_03fcbe38;
                      }
                      goto LAB_03fca188;
                    }
                  }
                  else {
                    lVar5 = *unaff_x24;
                    if (*(int *)(lVar5 + 0xe0) == 0) {
                      thunk_FUN_03db619c();
                      lVar5 = *unaff_x24;
                    }
                    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
                    if (lVar5 == 0) goto LAB_03fc915c;
                    uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar5 + 0x200),
                                               *(undefined8 *)PTR_DAT_091a1c80,0);
                    if ((uVar8 & 1) == 0) {
                      lVar5 = *unaff_x24;
                      if (*(int *)(lVar5 + 0xe0) == 0) {
                        thunk_FUN_03db619c();
                        lVar5 = *unaff_x24;
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
                      if (lVar5 == 0) goto LAB_03fc915c;
                      uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar5 + 0x200),
                                                 *(undefined8 *)PTR_DAT_091a1c88,0);
                      if ((uVar8 & 1) != 0) goto LAB_03fc9e48;
                      if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                          (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0)) ||
                         (lVar10 = *(long *)(unaff_x20 + 0x3a8), lVar10 == 0)) goto LAB_03fc915c;
                      puVar7 = (undefined8 *)(lVar5 + 0x58);
                    }
                    else {
LAB_03fc9e48:
                      if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                          (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0)) ||
                         (lVar10 = *(long *)(unaff_x20 + 0x3a8), lVar10 == 0)) goto LAB_03fc915c;
                      puVar7 = (undefined8 *)(lVar5 + 0x50);
                    }
                    FUN_08ca87f8(lVar10,*puVar7,0);
                    if (*plVar18 == 0) goto LAB_03fc915c;
                    uVar6 = FUN_08ca87bc(*plVar18,0);
                    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                      thunk_FUN_03db619c(*unaff_x27);
                    }
                    uVar8 = FUN_08a508b0(uVar6,0,0);
                    if ((uVar8 & 1) != 0) {
                      if (*plVar18 == 0) goto LAB_03fc915c;
                      FUN_08ca8900(*plVar18,0);
                      if (*(long *)(unaff_x20 + 0x3a8) == 0) goto LAB_03fc915c;
                      uVar8 = FUN_08ca893c(*(long *)(unaff_x20 + 0x3a8),0);
                      if ((uVar8 & 1) == 0) {
                        *(undefined8 *)(unaff_x19 + 0x18) =
                             *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
                        thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                        uVar19 = 8;
                        goto LAB_03fcbe38;
                      }
                    }
LAB_03fca188:
                    if (*(long *)(unaff_x20 + 0x3a0) == 0) goto LAB_03fc915c;
                    FUN_08a200c4(*(long *)(unaff_x20 + 0x3a0),1,0);
                    if (*(long *)(unaff_x20 + 0x3a8) == 0) goto LAB_03fc915c;
                    FUN_08ca8978(*(long *)(unaff_x20 + 0x3a8),0);
                  }
                  FUN_03e4d438();
                }
              }
              else {
                if (*(char *)(lVar5 + 0x3d) != '\0') goto LAB_03fc9dc0;
                uVar8 = FUN_03e52aa4();
                if ((uVar8 & 1) == 0) {
                  uVar8 = FUN_03e52aa4();
                  if ((uVar8 & 1) != 0) goto LAB_03fca480;
                  lVar5 = *unaff_x24;
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_03db619c();
                    lVar5 = *unaff_x24;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
                  if (lVar5 == 0) goto LAB_03fc915c;
                  uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar5 + 0x200),
                                             *(undefined8 *)PTR_DAT_091a1c80,0);
                  if ((uVar8 & 1) == 0) {
                    lVar5 = *unaff_x24;
                    if (*(int *)(lVar5 + 0xe0) == 0) {
                      thunk_FUN_03db619c();
                      lVar5 = *unaff_x24;
                    }
                    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
                    if (lVar5 == 0) goto LAB_03fc915c;
                    uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar5 + 0x200),
                                               *(undefined8 *)PTR_DAT_091a1c88,0);
                    if ((uVar8 & 1) != 0) goto LAB_03fc9f98;
                    if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                        (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0)) ||
                       (lVar10 = *(long *)(unaff_x20 + 0x3a8), lVar10 == 0)) goto LAB_03fc915c;
                    puVar7 = (undefined8 *)(lVar5 + 0x70);
                  }
                  else {
LAB_03fc9f98:
                    if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                        (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0)) ||
                       (lVar10 = *(long *)(unaff_x20 + 0x3a8), lVar10 == 0)) goto LAB_03fc915c;
                    puVar7 = (undefined8 *)(lVar5 + 0x68);
                  }
                  FUN_08ca87f8(lVar10,*puVar7,0);
                  if (*plVar18 == 0) goto LAB_03fc915c;
                  uVar6 = FUN_08ca87bc(*plVar18,0);
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_03db619c(*unaff_x27);
                  }
                  uVar8 = FUN_08a508b0(uVar6,0,0);
                  if ((uVar8 & 1) != 0) {
                    if (*plVar18 == 0) goto LAB_03fc915c;
                    FUN_08ca8900(*plVar18,0);
                    if (*(long *)(unaff_x20 + 0x3a8) == 0) goto LAB_03fc915c;
                    uVar8 = FUN_08ca893c(*(long *)(unaff_x20 + 0x3a8),0);
                    if ((uVar8 & 1) == 0) {
                      *(undefined8 *)(unaff_x19 + 0x18) =
                           *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
                      thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                      uVar19 = 0xb;
                      goto LAB_03fcbe38;
                    }
                  }
                }
                else {
                  lVar5 = *unaff_x24;
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_03db619c();
                    lVar5 = *unaff_x24;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
                  if (lVar5 == 0) goto LAB_03fc915c;
                  uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar5 + 0x200),
                                             *(undefined8 *)PTR_DAT_091a1c80,0);
                  if ((uVar8 & 1) == 0) {
                    lVar5 = *unaff_x24;
                    if (*(int *)(lVar5 + 0xe0) == 0) {
                      thunk_FUN_03db619c();
                      lVar5 = *unaff_x24;
                    }
                    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
                    if (lVar5 == 0) goto LAB_03fc915c;
                    uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar5 + 0x200),
                                               *(undefined8 *)PTR_DAT_091a1c88,0);
                    if ((uVar8 & 1) != 0) goto LAB_03fc9c84;
                    if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                        (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0)) ||
                       (lVar10 = *(long *)(unaff_x20 + 0x3a8), lVar10 == 0)) goto LAB_03fc915c;
                    puVar7 = (undefined8 *)(lVar5 + 0x80);
                  }
                  else {
LAB_03fc9c84:
                    if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                        (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0)) ||
                       (lVar10 = *(long *)(unaff_x20 + 0x3a8), lVar10 == 0)) goto LAB_03fc915c;
                    puVar7 = (undefined8 *)(lVar5 + 0x78);
                  }
                  FUN_08ca87f8(lVar10,*puVar7,0);
                  if (*plVar18 == 0) goto LAB_03fc915c;
                  uVar6 = FUN_08ca87bc(*plVar18,0);
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_03db619c(*unaff_x27);
                  }
                  uVar8 = FUN_08a508b0(uVar6,0,0);
                  if ((uVar8 & 1) != 0) {
                    if (*plVar18 == 0) goto LAB_03fc915c;
                    FUN_08ca8900(*plVar18,0);
                    if (*(long *)(unaff_x20 + 0x3a8) == 0) goto LAB_03fc915c;
                    uVar8 = FUN_08ca893c(*(long *)(unaff_x20 + 0x3a8),0);
                    if ((uVar8 & 1) == 0) {
                      *(undefined8 *)(unaff_x19 + 0x18) =
                           *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
                      thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                      uVar19 = 10;
                      goto LAB_03fcbe38;
                    }
                  }
                }
                if (*(long *)(unaff_x20 + 0x3a0) == 0) goto LAB_03fc915c;
                FUN_08a200c4(*(long *)(unaff_x20 + 0x3a0),1,0);
                lVar5 = *(long *)(unaff_x20 + 0x3a8);
                if (lVar5 == 0) goto LAB_03fc915c;
LAB_03fca478:
                FUN_08ca8978(lVar5,0);
              }
LAB_03fca480:
              if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
              if (*(char *)(*(long *)(unaff_x20 + 0xb98) + 0x48) == '\0') {
                if (*(long *)(unaff_x20 + 0x7c0) == 0) goto LAB_03fc915c;
                FUN_08a50fa8(*(long *)(unaff_x20 + 0x7c0),0,0);
                if (*(long *)(unaff_x20 + 0x7c8) == 0) goto LAB_03fc915c;
                FUN_08a50fa8(*(long *)(unaff_x20 + 0x7c8),0,0);
                if (*(long *)(unaff_x20 + 0x810) == 0) goto LAB_03fc915c;
                FUN_08a50fa8(*(long *)(unaff_x20 + 0x810),0,0);
                ConfigurableBallThrowerGameModeScript_<forcedConfigurableBallThrowerThrowTimer>d__53__System_Collections_IEnumerator_get_Current
                          ();
                if (*(long *)(unaff_x20 + 0x7b8) == 0) goto LAB_03fc915c;
                uVar8 = FUN_08a51028(*(long *)(unaff_x20 + 0x7b8),0);
                if ((uVar8 & 1) == 0) {
                  lVar5 = *(long *)(unaff_x20 + 0x7b8);
                  goto LAB_03fca848;
                }
                FUN_03e42ca4();
                FUN_08a52818();
              }
              else {
                if (*(long *)(unaff_x20 + 0x7b0) == 0) goto LAB_03fc915c;
                lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x7b0),0);
                if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                    (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar10 == 0)) ||
                   (lVar5 == 0)) goto LAB_03fc915c;
                FUN_08a5d494(*(undefined4 *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x24),
                             *(undefined4 *)(lVar10 + 0x28),lVar5,0);
                if (*(long *)(unaff_x20 + 0x7b0) == 0) goto LAB_03fc915c;
                lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x7b0),0);
                fVar20 = DAT_01914568;
                if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                    (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar10 == 0)) ||
                   (FUN_08a447dc(*(float *)(lVar10 + 0x2c) * DAT_01914568,
                                 *(float *)(lVar10 + 0x30) * DAT_01914568,
                                 *(float *)(lVar10 + 0x34) * DAT_01914568,0), lVar5 == 0))
                goto LAB_03fc915c;
                FUN_08a5d814(lVar5,0);
                if ((*(long *)(unaff_x20 + 0x7b8) == 0) ||
                   (lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x7b8),0), lVar5 == 0))
                goto LAB_03fc915c;
                FUN_08a5caa0(0,0,0,lVar5,0);
                if (*(long *)(unaff_x20 + 0x7b8) == 0) goto LAB_03fc915c;
                lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x7b8),0);
                if (DAT_098362c8 == '\0') {
                  FUN_03d2d2b0(PTR_DAT_091a0f90);
                  DAT_098362c8 = '\x01';
                }
                puVar3 = PTR_DAT_091a0f90;
                if (lVar5 == 0) goto LAB_03fc915c;
                puVar11 = *(undefined4 **)(*(long *)PTR_DAT_091a0f90 + 0xb8);
                FUN_08a5d920(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar5,0);
                if (*(long *)(unaff_x20 + 0x7b8) == 0) goto LAB_03fc915c;
                lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x7b8),0);
                if (DAT_098362c8 == '\0') {
                  FUN_03d2d2b0(PTR_DAT_091a0f90);
                  DAT_098362c8 = '\x01';
                }
                if (lVar5 == 0) goto LAB_03fc915c;
                puVar11 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                FUN_08a5d814(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar5,0);
                if (*(long *)(unaff_x20 + 0x7b8) == 0) goto LAB_03fc915c;
                uVar8 = FUN_08a51028(*(long *)(unaff_x20 + 0x7b8),0);
                if ((uVar8 & 1) == 0) {
                  FUN_03e42c30();
                  FUN_08a52818();
                }
                else {
                  if (*(long *)(unaff_x20 + 0x7b8) == 0) goto LAB_03fc915c;
                  FUN_08a50fa8(*(long *)(unaff_x20 + 0x7b8),1,0);
                }
                if (*(long *)(unaff_x20 + 0x7c0) == 0) goto LAB_03fc915c;
                FUN_08a50fa8(*(long *)(unaff_x20 + 0x7c0),0,0);
                if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                    (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar5 == 0)) ||
                   (*(long *)(unaff_x20 + 0x7c8) == 0)) goto LAB_03fc915c;
                FUN_08a50fa8(*(long *)(unaff_x20 + 0x7c8),*(undefined1 *)(lVar5 + 0x60),0);
                if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                    (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar5 == 0)) ||
                   (*(long *)(unaff_x20 + 0x818) == 0)) goto LAB_03fc915c;
                FUN_08a50fa8(*(long *)(unaff_x20 + 0x818),*(undefined1 *)(lVar5 + 0x7c),0);
                uVar6 = FUN_03e447e4();
                *(undefined8 *)(unaff_x20 + 0xbc0) = uVar6;
                thunk_FUN_03d1023c(unaff_x20 + 0xbc0);
                FUN_08a52818();
                FUN_03e45b88();
                if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                   (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar5 == 0))
                goto LAB_03fc915c;
                if (*(char *)(lVar5 + 0x19) == '\0') {
                  ConfigurableBallThrowerGameModeScript_<forcedConfigurableBallThrowerThrowTimer>d__53__System_Collections_IEnumerator_get_Current
                            ();
                }
                else {
                  FUN_03e44858();
                  FUN_08a52818();
                }
                if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                   (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar10 == 0))
                goto LAB_03fc915c;
                lVar5 = *(long *)(unaff_x20 + 0x810);
                if (*(char *)(lVar10 + 0x60) == '\0') {
LAB_03fca848:
                  if (lVar5 == 0) goto LAB_03fc915c;
                  FUN_08a50fa8(lVar5,0,0);
                }
                else {
                  if (lVar5 == 0) goto LAB_03fc915c;
                  FUN_08a50fa8(lVar5,1,0);
                  if (*(long *)(unaff_x20 + 0x810) == 0) goto LAB_03fc915c;
                  lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x810),0);
                  if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                      (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar10 == 0)) ||
                     (lVar5 == 0)) goto LAB_03fc915c;
                  FUN_08a5d494(*(undefined4 *)(lVar10 + 100),*(undefined4 *)(lVar10 + 0x68),
                               *(undefined4 *)(lVar10 + 0x6c),lVar5,0);
                  if (*(long *)(unaff_x20 + 0x810) == 0) goto LAB_03fc915c;
                  lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x810),0);
                  if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                      (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar10 == 0)) ||
                     (FUN_08a447dc(*(float *)(lVar10 + 0x70) * fVar20,
                                   *(float *)(lVar10 + 0x74) * fVar20,
                                   *(float *)(lVar10 + 0x78) * fVar20,0), lVar5 == 0))
                  goto LAB_03fc915c;
                  FUN_08a5d814(lVar5,0);
                }
              }
              if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                 (lVar5 = *(long *)(unaff_x20 + 0x840), lVar5 == 0)) goto LAB_03fc915c;
              if (*(char *)(*(long *)(unaff_x20 + 0xb98) + 0xe8) == '\0') {
                uVar8 = FUN_08a51028(lVar5,0);
                if ((uVar8 & 1) != 0) {
                  lVar5 = *(long *)(unaff_x20 + 0x860);
                  if (lVar5 == 0) goto LAB_03fc915c;
                  *(undefined1 *)(lVar5 + 0x109) = 0;
                  FUN_03f4ccb4(lVar5,0);
                  FUN_08a52950();
                  if (*(long *)(unaff_x20 + 0x860) == 0) goto LAB_03fc915c;
                  FUN_03f4cd48(*(long *)(unaff_x20 + 0x860),0);
                  FUN_08a52950();
                  if (*(long *)(unaff_x20 + 0x868) == 0) goto LAB_03fc915c;
                  FUN_08a50fa8(*(long *)(unaff_x20 + 0x868),0,0);
                  if (*(long *)(unaff_x20 + 0x840) == 0) goto LAB_03fc915c;
                  FUN_08a50fa8(*(long *)(unaff_x20 + 0x840),0,0);
                  if (*(long *)(unaff_x20 + 0x858) == 0) goto LAB_03fc915c;
                  FUN_08a50fa8(*(long *)(unaff_x20 + 0x858),0,0);
                  if (*(long *)(unaff_x20 + 0x878) == 0) goto LAB_03fc915c;
                  uVar8 = FUN_08a51028(*(long *)(unaff_x20 + 0x878),0);
                  if ((uVar8 & 1) != 0) {
                    if (*(long *)(unaff_x20 + 0x878) == 0) goto LAB_03fc915c;
                    FUN_08a50fa8(*(long *)(unaff_x20 + 0x878),0,0);
                    if (*(long *)(unaff_x20 + 0x880) == 0) goto LAB_03fc915c;
                    FUN_08a50fa8(*(long *)(unaff_x20 + 0x880),0,0);
                    if (*(long *)(unaff_x20 + 0x888) == 0) goto LAB_03fc915c;
                    FUN_08a50fa8(*(long *)(unaff_x20 + 0x888),0,0);
                  }
                  if (*(long *)(unaff_x20 + 0x870) == 0) goto LAB_03fc915c;
                  FUN_08a50fa8(*(long *)(unaff_x20 + 0x870),0,0);
                }
              }
              else {
                FUN_08a50fa8(lVar5,1,0);
                if (*(long *)(unaff_x20 + 0x840) == 0) goto LAB_03fc915c;
                lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x840),0);
                if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                    (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xf0), lVar10 == 0)) ||
                   (lVar5 == 0)) goto LAB_03fc915c;
                FUN_08a5d494(*(undefined4 *)(lVar10 + 0x18),*(undefined4 *)(lVar10 + 0x1c),
                             *(undefined4 *)(lVar10 + 0x20),lVar5,0);
                if (*(long *)(unaff_x20 + 0x840) == 0) goto LAB_03fc915c;
                lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x840),0);
                fVar20 = DAT_01914568;
                if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                   (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xf0), lVar10 == 0))
                goto LAB_03fc915c;
                uVar8 = (ulong)(uint)(*(float *)(lVar10 + 0x28) * DAT_01914568);
                FUN_08a447dc(*(float *)(lVar10 + 0x24) * DAT_01914568,uVar8,
                             *(float *)(lVar10 + 0x2c) * DAT_01914568,0);
                if (lVar5 == 0) goto LAB_03fc915c;
                FUN_08a5d814(lVar5,0);
                FUN_03e52ae4();
                lVar5 = *unaff_x24;
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  thunk_FUN_03db619c();
                  lVar5 = *unaff_x24;
                }
                lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
                if (lVar10 == 0) goto LAB_03fc915c;
                if (*(char *)(lVar10 + 0x20) == '\0') {
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_03db619c();
                    lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x30);
                    if (lVar10 == 0) goto LAB_03fc915c;
                  }
                  if (*(char *)(lVar10 + 0x20) == '\0') {
                    if (*(long *)(unaff_x20 + 0x848) != 0) {
                      lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x848),0);
                      if ((*(long *)(unaff_x20 + 0x848) != 0) &&
                         (lVar10 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x848),0), lVar10 != 0)) {
                        fVar24 = (float)FUN_08a5de1c(lVar10,0);
                        if ((*(long *)(unaff_x20 + 0x848) != 0) &&
                           (lVar10 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x848),0), lVar10 != 0)) {
                          FUN_08a5de1c(lVar10,0);
                          if (((*(long *)(unaff_x20 + 0x848) != 0) &&
                              (lVar10 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x848),0), lVar10 != 0))
                             && (FUN_08a5de1c(lVar10,0), lVar5 != 0)) {
                            uVar21 = (ulong)(uint)-fVar24;
                            goto LAB_03fca9b4;
                          }
                        }
                      }
                    }
                    goto LAB_03fc915c;
                  }
                }
                else {
                  if (*(long *)(unaff_x20 + 0x848) == 0) goto LAB_03fc915c;
                  lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x848),0);
                  if ((*(long *)(unaff_x20 + 0x848) == 0) ||
                     (lVar10 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x848),0), lVar10 == 0))
                  goto LAB_03fc915c;
                  uVar21 = FUN_08a5de1c(lVar10,0);
                  if ((*(long *)(unaff_x20 + 0x848) == 0) ||
                     (lVar10 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x848),0), lVar10 == 0))
                  goto LAB_03fc915c;
                  FUN_08a5de1c(lVar10,0);
                  if (((*(long *)(unaff_x20 + 0x848) == 0) ||
                      (lVar10 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x848),0), lVar10 == 0)) ||
                     (FUN_08a5de1c(lVar10,0), lVar5 == 0)) goto LAB_03fc915c;
LAB_03fca9b4:
                  FUN_08a5debc(uVar21,uVar8,lVar5,0);
                }
                if (*(long *)(unaff_x20 + 0x858) == 0) goto LAB_03fc915c;
                FUN_08a50fa8(*(long *)(unaff_x20 + 0x858),1,0);
                if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                    (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xf0), lVar5 == 0)) ||
                   (lVar5 = *(long *)(lVar5 + 0x10), lVar5 == 0)) goto LAB_03fc915c;
                lVar10 = *(long *)(unaff_x20 + 0x860);
                uVar6 = FUN_08a550fc(lVar5,0);
                if (lVar10 == 0) goto LAB_03fc915c;
                *(undefined8 *)(lVar10 + 0x100) = uVar6;
                thunk_FUN_03d1023c(lVar10 + 0x100);
                if (*(long *)(unaff_x20 + 0x860) == 0) goto LAB_03fc915c;
                FUN_03f4ccb4(*(long *)(unaff_x20 + 0x860),0);
                FUN_08a52818();
                if (*(long *)(unaff_x20 + 0x868) == 0) goto LAB_03fc915c;
                FUN_08a50fa8(*(long *)(unaff_x20 + 0x868),1,0);
                if (*(long *)(unaff_x20 + 0x868) == 0) goto LAB_03fc915c;
                lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x868),0);
                if ((*(long *)(unaff_x20 + 0x868) == 0) ||
                   (lVar10 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x868),0), lVar10 == 0))
                goto LAB_03fc915c;
                uVar6 = FUN_08a5d3f4(lVar10,0);
                if ((*(long *)(unaff_x20 + 0x868) == 0) ||
                   (lVar10 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x868),0), lVar10 == 0))
                goto LAB_03fc915c;
                FUN_08a5d3f4(lVar10,0);
                if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                    (*(long *)(*(long *)(unaff_x20 + 0xb98) + 0xf0) == 0)) || (lVar5 == 0))
                goto LAB_03fc915c;
                FUN_08a5d494(uVar6,lVar5,0);
                if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                    (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xf0), lVar5 == 0)) ||
                   (lVar10 = *(long *)(unaff_x20 + 0x870), lVar10 == 0)) goto LAB_03fc915c;
                if (*(char *)(lVar5 + 0x48) == '\0') {
                  FUN_08a50fa8(lVar10,0,0);
                }
                else {
                  FUN_08a50fa8(lVar10,1,0);
                  if (*(long *)(unaff_x20 + 0x870) == 0) goto LAB_03fc915c;
                  lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x870),0);
                  if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                      (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xf0), lVar10 == 0)) ||
                     (lVar5 == 0)) goto LAB_03fc915c;
                  FUN_08a5d494(*(undefined4 *)(lVar10 + 0x4c),*(undefined4 *)(lVar10 + 0x50),
                               *(undefined4 *)(lVar10 + 0x54),lVar5,0);
                  if (*(long *)(unaff_x20 + 0x870) == 0) goto LAB_03fc915c;
                  lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x870),0);
                  if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                      (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xf0), lVar10 == 0)) ||
                     (FUN_08a447dc(*(float *)(lVar10 + 0x58) * fVar20,
                                   *(float *)(lVar10 + 0x5c) * fVar20,
                                   *(float *)(lVar10 + 0x60) * fVar20,0), lVar5 == 0))
                  goto LAB_03fc915c;
                  FUN_08a5d814(lVar5,0);
                }
                if (*(long *)(unaff_x20 + 0x878) == 0) goto LAB_03fc915c;
                uVar8 = FUN_08a51028(*(long *)(unaff_x20 + 0x878),0);
                if ((uVar8 & 1) != 0) {
                  FUN_03e45e58();
                }
              }
              if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
              if (*(char *)(*(long *)(unaff_x20 + 0xb98) + 0x58) == '\0') {
                lVar5 = *unaff_x24;
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  thunk_FUN_03db619c();
                  lVar5 = *unaff_x24;
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
                if (lVar5 == 0) goto LAB_03fc915c;
LAB_03fcad64:
                *(undefined1 *)(lVar5 + 0xb3) = 0;
                *(undefined2 *)(unaff_x20 + 0xba9) = 0;
              }
              else {
                *(undefined1 *)(unaff_x20 + 0x268) = 0;
                lVar5 = *unaff_x24;
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  thunk_FUN_03db619c();
                  lVar5 = *unaff_x24;
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x78);
                if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0))
                goto LAB_03fc915c;
                FUN_08a50fa8(lVar5,1,0);
                lVar5 = *(long *)(unaff_x20 + 0xb98);
                if ((lVar5 == 0) || (lVar10 = *(long *)(lVar5 + 0x60), lVar10 == 0))
                goto LAB_03fc915c;
                if (*(char *)(lVar10 + 0x34) == '\0') {
                  lVar5 = *(long *)(lVar5 + 0x50);
                  if ((lVar5 == 0) || (*(long *)(lVar10 + 0x48) == 0)) goto LAB_03fc915c;
                  puVar17 = (undefined4 *)(lVar5 + 0x44);
                  puVar11 = (undefined4 *)(lVar5 + 0x3c);
                  puVar15 = (undefined4 *)(lVar5 + 0x40);
                }
                else {
                  puVar11 = (undefined4 *)(lVar10 + 0x1c);
                  puVar15 = (undefined4 *)(lVar10 + 0x20);
                  puVar17 = (undefined4 *)(lVar10 + 0x24);
                }
                FUN_03e46bd8(*(undefined4 *)(lVar10 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                             *(undefined4 *)(lVar10 + 0x18),*puVar11,*puVar15,*puVar17,
                             *(undefined4 *)(lVar10 + 0x28));
                if ((*(char *)(unaff_x20 + 0x593) != '\0') || (*(char *)(unaff_x20 + 0x788) != '\0')
                   ) {
                  *(undefined8 *)(unaff_x19 + 0x18) =
                       *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
                  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                  uVar19 = 0xd;
                  goto LAB_03fcbe38;
                }
                if (*(long *)(unaff_x20 + 0xa8) == 0) {
                  uVar6 = FUN_03e44538();
                  *(undefined8 *)(unaff_x20 + 3000) = uVar6;
                  thunk_FUN_03d1023c(unaff_x20 + 3000);
                }
                if (*(char *)(unaff_x20 + 0x240) == '\0') {
                  FUN_08a52818();
                }
                if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                   (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x60), lVar5 == 0))
                goto LAB_03fc915c;
                if (*(char *)(lVar5 + 0x50) == '\0') {
                  lVar5 = *unaff_x24;
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_03db619c();
                    lVar5 = *unaff_x24;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
                  if (lVar5 != 0) goto LAB_03fcad64;
                  goto LAB_03fc915c;
                }
                lVar5 = *(long *)(lVar5 + 0x58);
                if (lVar5 == 0) goto LAB_03fc915c;
                if (*(char *)(lVar5 + 0x35) != '\0') {
                  *(undefined4 *)(unaff_x20 + 0x330) = *(undefined4 *)(unaff_x20 + 0x23c);
                }
                lVar10 = *unaff_x24;
                cVar2 = *(char *)(lVar5 + 0x11);
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_03db619c();
                  lVar10 = *unaff_x24;
                }
                lVar5 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x98);
                if (lVar5 == 0) goto LAB_03fc915c;
                bVar1 = cVar2 == '\0';
                if (bVar1) {
                  *(undefined1 *)(lVar5 + 0xb3) = 0;
                  *(undefined1 *)(unaff_x20 + 0xba9) = 0;
                }
                else {
                  *(undefined1 *)(lVar5 + 0xb3) = 1;
                }
                *(bool *)(unaff_x20 + 0xbaa) = !bVar1;
                if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                    (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x60), lVar5 == 0)) ||
                   (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) goto LAB_03fc915c;
                if (*(char *)(lVar5 + 0x10) == '\0') {
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_03db619c();
                    lVar10 = *unaff_x24;
                  }
                  lVar5 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x98);
                  if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) ||
                     (lVar5 = FUN_04f82e34(lVar5,*unaff_x28), lVar5 == 0)) goto LAB_03fc915c;
                  *(undefined1 *)(lVar5 + 0x1a0) = 0;
                }
                else {
                  if (*(long *)(unaff_x20 + 0x228) == 0) goto LAB_03fc915c;
                  FUN_08a50fa8(*(long *)(unaff_x20 + 0x228),1,0);
                  if (*(long *)(unaff_x20 + 0x228) == 0) goto LAB_03fc915c;
                  lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x228),0);
                  if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                      (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x60), lVar10 == 0)) ||
                     ((lVar10 = *(long *)(lVar10 + 0x58), lVar10 == 0 || (lVar5 == 0))))
                  goto LAB_03fc915c;
                  FUN_08a5d494(*(undefined4 *)(lVar10 + 0x14),*(undefined4 *)(lVar10 + 0x18),
                               *(undefined4 *)(lVar10 + 0x1c),lVar5,0);
                  if (*(long *)(unaff_x20 + 0x228) == 0) goto LAB_03fc915c;
                  lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x228),0);
                  if ((((*(long *)(unaff_x20 + 0xb98) == 0) ||
                       (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x60), lVar10 == 0)) ||
                      (lVar10 = *(long *)(lVar10 + 0x58), lVar10 == 0)) || (lVar5 == 0))
                  goto LAB_03fc915c;
                  FUN_08a5debc(*(undefined4 *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x24),
                               *(undefined4 *)(lVar10 + 0x28),lVar5,0);
                  *(undefined1 *)(unaff_x20 + 0xbab) = 1;
                  lVar5 = *unaff_x24;
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_03db619c();
                    lVar5 = *unaff_x24;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
                  if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) ||
                     (lVar5 = FUN_04f82e34(lVar5,*unaff_x28), lVar5 == 0)) goto LAB_03fc915c;
                  *(undefined1 *)(lVar5 + 0x1a0) = 1;
                }
              }
              if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
              if (*(char *)(*(long *)(unaff_x20 + 0xb98) + 0x89) != '\0') {
                *(undefined8 *)(unaff_x19 + 0x18) =
                     *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
                thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                uVar19 = 0xe;
                goto LAB_03fcbe38;
              }
              if (*(long *)(unaff_x20 + 0x308) == 0) goto LAB_03fc915c;
              FUN_08a50fa8(*(long *)(unaff_x20 + 0x308),0,0);
              if (*(long *)(unaff_x20 + 0x310) == 0) goto LAB_03fc915c;
              FUN_08a50fa8(*(long *)(unaff_x20 + 0x310),0,0);
              if (*(long *)(unaff_x20 + 0x318) == 0) goto LAB_03fc915c;
              FUN_08a50fa8(*(long *)(unaff_x20 + 0x318),0,0);
              if (*(long *)(unaff_x20 + 800) == 0) goto LAB_03fc915c;
              FUN_08a50fa8(*(long *)(unaff_x20 + 800),0,0);
              if (*(long *)(unaff_x20 + 0x300) == 0) goto LAB_03fc915c;
              FUN_08a50fa8(*(long *)(unaff_x20 + 0x300),0,0);
              if (*(long *)(unaff_x20 + 0x328) == 0) goto LAB_03fc915c;
              FUN_08a50fa8(*(long *)(unaff_x20 + 0x328),0,0);
              if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
              if (*(char *)(*(long *)(unaff_x20 + 0xb98) + 0x69) == '\0') {
                FUN_03e4c9e0();
                puVar3 = PTR_DAT_091a13f8;
                plVar18 = *(long **)(unaff_x20 + 0x5a0);
                if (plVar18 == (long *)0x0) goto LAB_03fc915c;
                (**(code **)(*plVar18 + 0x558))
                          (plVar18,**(undefined8 **)(*(long *)PTR_DAT_091a13f8 + 0xb8),
                           *(undefined8 *)(*plVar18 + 0x560));
                if (*(long *)(unaff_x20 + 0x598) == 0) goto LAB_03fc915c;
                FUN_08a50fa8(*(long *)(unaff_x20 + 0x598),0,0);
                plVar18 = *(long **)(unaff_x20 + 0x5b0);
                if (plVar18 == (long *)0x0) goto LAB_03fc915c;
                (**(code **)(*plVar18 + 0x558))
                          (plVar18,**(undefined8 **)(*(long *)puVar3 + 0xb8),
                           *(undefined8 *)(*plVar18 + 0x560));
                if (*(long *)(unaff_x20 + 0x5a8) == 0) goto LAB_03fc915c;
                FUN_08a50fa8(*(long *)(unaff_x20 + 0x5a8),0,0);
                lVar5 = *(long *)(unaff_x20 + 0x2f0);
                if (lVar5 == 0) goto LAB_03fc915c;
LAB_03fcb0cc:
                uVar6 = 0;
              }
              else {
                FUN_03e4729c();
                puVar3 = PTR_DAT_091a13f8;
                if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                    (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x60), lVar5 == 0)) ||
                   (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) goto LAB_03fc915c;
                if (*(int *)(lVar5 + 0x30) != 0) {
                  plVar18 = *(long **)(unaff_x20 + 0x5a0);
                  if (plVar18 != (long *)0x0) {
                    (**(code **)(*plVar18 + 0x558))
                              (plVar18,**(undefined8 **)(*(long *)PTR_DAT_091a13f8 + 0xb8),
                               *(undefined8 *)(*plVar18 + 0x560));
                    if (*(long *)(unaff_x20 + 0x598) != 0) {
                      FUN_08a50fa8(*(long *)(unaff_x20 + 0x598),0,0);
                      plVar18 = *(long **)(unaff_x20 + 0x5b0);
                      if (plVar18 != (long *)0x0) {
                        (**(code **)(*plVar18 + 0x558))
                                  (plVar18,**(undefined8 **)(*(long *)puVar3 + 0xb8),
                                   *(undefined8 *)(*plVar18 + 0x560));
                        if (*(long *)(unaff_x20 + 0x5a8) != 0) {
                          FUN_08a50fa8(*(long *)(unaff_x20 + 0x5a8),0,0);
                          lVar5 = *(long *)(unaff_x20 + 0x2f0);
                          if (lVar5 != 0) goto LAB_03fcb0cc;
                        }
                      }
                    }
                  }
                  goto LAB_03fc915c;
                }
                if (*(int *)(*(long *)PTR_DAT_091a1120 + 0xe0) == 0) {
                  thunk_FUN_03db619c();
                }
                FUN_08a0ff80(*(undefined8 *)PTR_DAT_091a7400,0);
                if (*(long *)(unaff_x20 + 0x598) == 0) goto LAB_03fc915c;
                FUN_08a50fa8(*(long *)(unaff_x20 + 0x598),1,0);
                if (*(long *)(unaff_x20 + 0x5a8) == 0) goto LAB_03fc915c;
                FUN_08a50fa8(*(long *)(unaff_x20 + 0x5a8),1,0);
                lVar5 = *(long *)(unaff_x20 + 0x2f0);
                if (lVar5 == 0) goto LAB_03fc915c;
                uVar6 = 1;
              }
              FUN_08a50fa8(lVar5,uVar6,0);
              uVar6 = *(undefined8 *)(unaff_x20 + 0x790);
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_03db619c();
              }
              puVar7 = (undefined8 *)(unaff_x20 + 0x790);
              uVar8 = FUN_08a508b0(uVar6,0,0);
              if ((uVar8 & 1) != 0) {
                uVar6 = *puVar7;
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_03db619c();
                }
                FUN_08a55c38(uVar6,0);
              }
              if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
              cVar2 = *(char *)(*(long *)(unaff_x20 + 0xb98) + 0xd8);
              uVar6 = *puVar7;
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_03db619c();
              }
              uVar8 = FUN_08a508b0(uVar6,0,0);
              if (cVar2 == '\0') {
                if ((uVar8 & 1) != 0) {
                  uVar6 = *puVar7;
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_03db619c();
                  }
                  FUN_08a55c38(uVar6,0);
                }
              }
              else {
                if ((uVar8 & 1) != 0) {
                  uVar6 = *puVar7;
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_03db619c();
                  }
                  FUN_08a55c38(uVar6,0);
                }
                if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                   (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xe0), lVar5 == 0))
                goto LAB_03fc915c;
                uVar6 = *(undefined8 *)(lVar5 + 0x10);
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_03db619c();
                }
                uVar8 = FUN_08a508b0(uVar6,0,0);
                if ((uVar8 & 1) != 0) {
                  if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                     (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xe0), lVar5 == 0))
                  goto LAB_03fc915c;
                  uVar6 = *(undefined8 *)(lVar5 + 0x10);
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_03db619c();
                  }
                  uVar6 = FUN_050a0f30(uVar6,*(undefined8 *)PTR_DAT_091a11c8);
                  *(undefined8 *)(unaff_x20 + 0x790) = uVar6;
                  thunk_FUN_03d1023c(puVar7,uVar6);
                  if (*(long *)(unaff_x20 + 0x790) == 0) goto LAB_03fc915c;
                  fVar24 = *(float *)(unaff_x20 + 0x77c);
                  fVar26 = *(float *)(unaff_x20 + 0x780);
                  fVar20 = *(float *)(unaff_x20 + 0x784);
                  lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x790),0);
                  if (fVar20 * fVar20 + fVar24 * fVar24 + fVar26 * fVar26 < DAT_01913f10) {
                    if (((*(long *)(unaff_x20 + 0xb98) == 0) ||
                        (lVar10 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0xe0), lVar10 == 0)) ||
                       (lVar5 == 0)) goto LAB_03fc915c;
                    uVar25 = *(undefined4 *)(lVar10 + 0x1c);
                    uVar27 = *(undefined4 *)(lVar10 + 0x20);
                    uVar19 = *(undefined4 *)(lVar10 + 0x18);
                  }
                  else {
                    if (lVar5 == 0) goto LAB_03fc915c;
                    uVar27 = *(undefined4 *)(unaff_x20 + 0x784);
                    uVar25 = *(undefined4 *)(unaff_x20 + 0x780);
                    uVar19 = *(undefined4 *)(unaff_x20 + 0x77c);
                  }
                  FUN_08a5d494(uVar19,uVar25,uVar27,lVar5,0);
                }
              }
              if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                 (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x60), lVar5 == 0))
              goto LAB_03fc915c;
              lVar10 = *unaff_x24;
              uVar9 = *(undefined1 *)(lVar5 + 0x50);
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_03db619c();
                lVar10 = *unaff_x24;
              }
              lVar5 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x98);
              if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) ||
                 (lVar5 = FUN_04f82e34(lVar5,*unaff_x28), lVar5 == 0)) goto LAB_03fc915c;
              *(undefined1 *)(lVar5 + 0x1a0) = uVar9;
              lVar5 = *(long *)(unaff_x20 + 0xb98);
              if (lVar5 == 0) goto LAB_03fc915c;
              switch(*(undefined4 *)(lVar5 + 0x18)) {
              case 0:
                *(undefined4 *)(unaff_x19 + 0x34) = 0;
                if (*(long *)(lVar5 + 0x40) == 0) goto LAB_03fc915c;
                fVar20 = 0.0;
                if (*(char *)(*(long *)(lVar5 + 0x40) + 0x88) == '\0') {
                  lVar5 = *unaff_x24;
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_03db619c();
                    lVar5 = *unaff_x24;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
                  if (lVar5 == 0) goto LAB_03fc915c;
                  uVar6 = *(undefined8 *)(lVar5 + 0x200);
                  uVar8 = thunk_FUN_06fd18b4(uVar6,*(undefined8 *)PTR_DAT_091a1c90,0);
                  if ((uVar8 & 1) == 0) {
                    uVar8 = thunk_FUN_06fd18b4(uVar6,*(undefined8 *)PTR_DAT_091a1c80,0);
                    if ((uVar8 & 1) == 0) {
                      uVar8 = thunk_FUN_06fd18b4(uVar6,*(undefined8 *)PTR_DAT_091a1c88,0);
                      if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                         (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0))
                      goto LAB_03fc915c;
                      if ((uVar8 & 1) == 0) {
                        lVar5 = *(long *)(lVar5 + 0x18);
                        goto joined_r0x03fcbcb0;
                      }
                    }
                    else if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                            (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0))
                    goto LAB_03fc915c;
                    lVar5 = *(long *)(lVar5 + 0x10);
                  }
                  else {
                    if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                       (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0))
                    goto LAB_03fc915c;
                    lVar5 = *(long *)(lVar5 + 0x18);
                  }
joined_r0x03fcbcb0:
                  if (lVar5 == 0) goto LAB_03fc915c;
                  dVar23 = (double)FUN_08ca86f8(lVar5,0);
                  fVar20 = (float)dVar23 + 0.5;
                  *(float *)(unaff_x19 + 0x34) = fVar20;
                }
                if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                   (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0))
                goto LAB_03fc915c;
                if (*(char *)(lVar5 + 0x88) != '\0') {
                  lVar5 = *(long *)(unaff_x20 + 0x960);
                  if (lVar5 == 0) goto LAB_03fc915c;
                  if (*(int *)(lVar5 + 0x18) == 2) {
                    uVar6 = 1;
                  }
                  else {
                    if (*(int *)(lVar5 + 0x18) != 1) goto LAB_03fcbd38;
                    uVar6 = 0;
                  }
                  lVar5 = FUN_05a39464(lVar5,uVar6,*(undefined8 *)PTR_DAT_091a73f0);
                  if (lVar5 == 0) goto LAB_03fc915c;
                  dVar23 = (double)FUN_08ca86f8(lVar5,0);
                  fVar20 = (float)dVar23;
                  *(float *)(unaff_x19 + 0x34) = fVar20;
                }
LAB_03fcbd38:
                if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                   (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar5 == 0))
                goto LAB_03fc915c;
                if (*(int *)(lVar5 + 0x1c) == 1) {
                  uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
                  FUN_08a57768(fVar20,uVar6,0);
                  *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
                  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar6);
                  uVar19 = 0x15;
                  goto LAB_03fcbe38;
                }
                *(undefined4 *)(unaff_x19 + 0x38) = 0;
                if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                   (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar5 == 0))
                goto LAB_03fc915c;
                if (0 < *(int *)(lVar5 + 0x1c)) {
                  if (*(long *)(lVar5 + 0x10) == 0) goto LAB_03fc915c;
                  uVar22 = FUN_089f5af8(*(long *)(lVar5 + 0x10),0);
                  uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
                  FUN_08a57768(uVar22,uVar6,0);
                  *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
                  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar6);
                  uVar19 = 0x13;
                  goto LAB_03fcbe38;
                }
                if (0.0 < fVar20) {
                  uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
                  FUN_08a57768(fVar20,uVar6,0);
                  *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
                  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar6);
                  uVar19 = 0x14;
                  goto LAB_03fcbe38;
                }
                lVar5 = *unaff_x23;
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  thunk_FUN_03db619c();
                  lVar5 = *unaff_x23;
                }
                if (*(char *)(*(long *)(lVar5 + 0xb8) + 2) == '\0') {
                  if (unaff_x20 == 0) goto LAB_03fc915c;
                  uVar19 = *(undefined4 *)(unaff_x20 + 0x7a4);
                  uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
                  FUN_08a57768(uVar19,uVar6,0);
                  *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
                  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar6);
                  uVar19 = 0x17;
                }
                else {
                  *(undefined8 *)(unaff_x19 + 0x18) =
                       *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0x50);
                  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                  uVar19 = 0x16;
                }
                goto LAB_03fcbe38;
              case 1:
                if ((*(long *)(lVar5 + 0x50) == 0) ||
                   (lVar5 = *(long *)(*(long *)(lVar5 + 0x50) + 0x10), lVar5 == 0))
                goto LAB_03fc915c;
                fVar20 = (float)FUN_089f5af8(lVar5,0);
                if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
                   (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x50), lVar5 == 0))
                goto LAB_03fc915c;
                fVar20 = (fVar20 + 0.75) * (float)*(int *)(lVar5 + 0x1c);
                if (*(char *)(lVar5 + 0x50) != '\0') {
                  fVar20 = fVar20 + *(float *)(lVar5 + 0x54);
                }
                if (*(char *)(lVar5 + 0x58) != '\0') {
                  fVar20 = fVar20 + *(float *)(lVar5 + 0x5c);
                }
                uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
                FUN_08a57768(fVar20,uVar6,0);
                *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
                thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar6);
                uVar19 = 0x18;
                goto LAB_03fcbe38;
              case 2:
                lVar5 = *(long *)(unaff_x20 + 0xb98);
                if (*(char *)(unaff_x20 + 0xb89) == '\0') {
                  if (((lVar5 == 0) || (lVar10 = *(long *)(lVar5 + 0x60), lVar10 == 0)) ||
                     (lVar16 = *(long *)(lVar10 + 0x58), lVar16 == 0)) goto LAB_03fc915c;
                  if (*(char *)(lVar16 + 0x2c) != '\0') goto LAB_03fcb838;
                }
                else {
                  if (lVar5 == 0) goto LAB_03fc915c;
LAB_03fcb838:
                  lVar10 = *(long *)(lVar5 + 0x60);
                  if ((lVar10 == 0) || (lVar16 = *(long *)(lVar10 + 0x58), lVar16 == 0))
                  goto LAB_03fc915c;
                  if ((*(char *)(lVar16 + 0x2c) == '\0') ||
                     (*(char *)(unaff_x20 + 0x53) != '\0' || *(char *)(unaff_x20 + 0xb89) != '\0'))
                  {
                    *(undefined8 *)(unaff_x19 + 0x18) =
                         *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
                    thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                    uVar19 = 0x1d;
                    goto LAB_03fcbe38;
                  }
                }
                if (*(char *)(lVar16 + 0x11) == '\0') {
                  uVar19 = *(undefined4 *)(lVar10 + 0x30);
                  uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
                  FUN_08a57768(uVar19,uVar6,0);
                  *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
                  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar6);
                  uVar19 = 0x1b;
                }
                else {
                  *(undefined8 *)(unaff_x19 + 0x18) =
                       *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0x50);
                  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
                  uVar19 = 0x1c;
                }
                goto LAB_03fcbe38;
              case 3:
                uVar19 = *(undefined4 *)(lVar5 + 0x20);
                uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a1098);
                FUN_08a57768(uVar19,uVar6,0);
                *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
                thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar6);
                uVar19 = 0x24;
                goto LAB_03fcbe38;
              }
switchD_03fcb718_default:
              iVar4 = *(int *)(unaff_x19 + 0x30) + 1;
              *(int *)(unaff_x19 + 0x30) = iVar4;
              if (unaff_x20 == 0) goto LAB_03fc915c;
              goto LAB_03fcb4d0;
            }
          }
        }
      }
    }
  }
LAB_03fc915c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
code_r0x03fc9450:
  param_1 = *(long *)(unaff_x20 + 0x220);
  unaff_x21 = (undefined8 *)PTR_DAT_091a3928;
  goto code_r0x03fc9454;
code_r0x03fcb4e4:
  if (*(char *)(lVar5 + 0x24) != '\0') {
    FUN_03e448cc();
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar5 = *unaff_x23;
    }
    *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 3) = 1;
    if (*(char *)(unaff_x20 + 0xc20) != '\0') {
      FUN_03e452c4();
      if ((*(long *)(unaff_x20 + 0x2c8) == 0) ||
         (lVar5 = FUN_04f82e34(*(long *)(unaff_x20 + 0x2c8),*unaff_x26), lVar5 == 0))
      goto LAB_03fc915c;
      FUN_04022424(lVar5,0);
      lVar5 = *unaff_x23;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar5 = *unaff_x23;
    }
    if ((*(char *)(*(long *)(lVar5 + 0xb8) + 1) == '\0') &&
       (*(undefined1 *)(unaff_x20 + 0x2d0) = 0, *(char *)(unaff_x20 + 0x2d0) == '\0')) {
      *(undefined8 *)(unaff_x19 + 0x18) =
           *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
      thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
      uVar19 = 0x25;
      goto LAB_03fcbe38;
    }
    if ((*(long *)(unaff_x20 + 0x2c8) == 0) ||
       (lVar5 = FUN_04f82e34(*(long *)(unaff_x20 + 0x2c8),*unaff_x26), lVar5 == 0))
    goto LAB_03fc915c;
    FUN_04021da4(lVar5,0);
    if (*(long *)(unaff_x20 + 0x270) == 0) goto LAB_03fc915c;
    FUN_08a50fa8(*(long *)(unaff_x20 + 0x270),0,0);
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar5 = *unaff_x23;
    }
    puVar12 = *(undefined1 **)(lVar5 + 0xb8);
    *(undefined2 *)(puVar12 + 2) = 0;
    *puVar12 = 0;
  }
  lVar5 = *unaff_x23;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar5 = *unaff_x23;
  }
  pcVar13 = *(char **)(lVar5 + 0xb8);
  if (pcVar13[1] != '\0') {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar5 = *unaff_x23;
      pcVar13 = *(char **)(lVar5 + 0xb8);
    }
    if (*pcVar13 == '\0') {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        pcVar13 = *(char **)(*unaff_x23 + 0xb8);
      }
      *pcVar13 = '\0';
      if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0xb98) == 0)) goto LAB_03fc915c;
      if (*(char *)(*(long *)(unaff_x20 + 0xb98) + 0x8a) != '\0') {
        *(undefined8 *)(unaff_x19 + 0x18) =
             *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0x98);
        thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
        uVar19 = 0x27;
        goto LAB_03fcbe38;
      }
      *(int *)(unaff_x20 + 0x23c) = *(int *)(unaff_x20 + 0x23c) + 1;
      *(undefined4 *)(unaff_x20 + 0x7a4) = 0;
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x18), lVar5 == 0)) goto LAB_03fc915c;
      if (*(int *)(unaff_x20 + 0x23c) < *(int *)(lVar5 + 0x18)) {
        uVar6 = FUN_05a39464(lVar5,*(int *)(unaff_x20 + 0x23c),*unaff_x29);
        *(undefined8 *)(unaff_x20 + 0xb98) = uVar6;
        thunk_FUN_03d1023c(unaff_x20 + 0xb98);
        FUN_03e52fd0();
        if (*(char *)(unaff_x20 + 0xa70) != '\0') {
          *(undefined8 *)(unaff_x19 + 0x18) =
               *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
          thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
          *(undefined4 *)(unaff_x19 + 0x10) = 1;
          return 1;
        }
        if (*(char *)(unaff_x20 + 0x74a) == '\0') {
          uVar6 = *(undefined8 *)(unaff_x20 + 0x5d8);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          uVar8 = FUN_08a508b0(uVar6,0,0);
          if ((uVar8 & 1) != 0) {
            if (*(long *)(unaff_x20 + 0x5d8) == 0) goto LAB_03fc915c;
            uVar8 = FUN_08a50fec(*(long *)(unaff_x20 + 0x5d8),0);
            if ((uVar8 & 1) != 0) {
              FUN_03e3fbe4(*(undefined4 *)(unaff_x20 + 0x77c),*(undefined4 *)(unaff_x20 + 0x780),
                           *(undefined4 *)(unaff_x20 + 0x784));
            }
          }
        }
        else {
          FUN_03e3fab0();
        }
        if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
        FUN_08a550fc(*(long *)(unaff_x20 + 0xb98),0);
        iVar4 = FUN_03e41f50();
        if (iVar4 != 2) {
          if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
          FUN_08a550fc(*(long *)(unaff_x20 + 0xb98),0);
          iVar4 = FUN_03e41f50();
          if (iVar4 != 3) {
            if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
            FUN_08a550fc(*(long *)(unaff_x20 + 0xb98),0);
            iVar4 = FUN_03e41f50();
            if (iVar4 != 4) {
              if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
              FUN_08a550fc(*(long *)(unaff_x20 + 0xb98),0);
              iVar4 = FUN_03e41f50();
              if (iVar4 != 5) {
                if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                FUN_08a550fc(*(long *)(unaff_x20 + 0xb98),0);
                iVar4 = FUN_03e41f50();
                if (iVar4 != 7) {
                  if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                  FUN_08a550fc(*(long *)(unaff_x20 + 0xb98),0);
                  iVar4 = FUN_03e41f50();
                  if (iVar4 != 8) {
                    if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                    FUN_08a550fc(*(long *)(unaff_x20 + 0xb98),0);
                    iVar4 = FUN_03e41f50();
                    if (iVar4 != 6) {
                      if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
                      FUN_08a550fc(*(long *)(unaff_x20 + 0xb98),0);
                      iVar4 = FUN_03e41f50();
                      if (iVar4 != 9) {
                        uVar9 = 0;
                        goto LAB_03fc9388;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        FUN_03e40470();
        uVar9 = 1;
LAB_03fc9388:
        *(undefined1 *)(unaff_x20 + 0x5e8) = uVar9;
        if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
           (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x70), lVar5 == 0)) goto LAB_03fc915c;
        if ((*(char *)(lVar5 + 0x3c9) == '\0') || (*(char *)(lVar5 + 0x3c8) == '\0')) {
          *(undefined1 *)(unaff_x20 + 0x5e8) = 0;
        }
        if (*(long *)(unaff_x20 + 0x220) == 0) goto LAB_03fc915c;
        FUN_08a50fa8(*(long *)(unaff_x20 + 0x220),1,0);
        if (*(long *)(unaff_x20 + 0x220) == 0) goto LAB_03fc915c;
        lVar5 = FUN_08a50e6c(*(long *)(unaff_x20 + 0x220),0);
        lVar10 = *(long *)(unaff_x20 + 0xb98);
        if ((lVar10 == 0) || (lVar5 == 0)) goto LAB_03fc915c;
        FUN_08a5d494(*(undefined4 *)(lVar10 + 0x30),*(undefined4 *)(lVar10 + 0x34),
                     *(undefined4 *)(lVar10 + 0x38),lVar5,0);
        lVar5 = *(long *)(unaff_x20 + 0xb98);
        if (lVar5 == 0) goto LAB_03fc915c;
        if (*(char *)(lVar5 + 0x2d) != '\0') {
          lVar10 = *unaff_x24;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_03db619c();
            lVar5 = *(long *)(unaff_x20 + 0xb98);
            if (lVar5 == 0) goto LAB_03fc915c;
            lVar10 = *unaff_x24;
          }
          if (**(long **)(lVar10 + 0xb8) == 0) goto LAB_03fc915c;
          FUN_040daa24(*(undefined4 *)(lVar5 + 0x30),*(undefined4 *)(lVar5 + 0x34),
                       *(undefined4 *)(lVar5 + 0x38),**(long **)(lVar10 + 0xb8),0);
          lVar5 = *(long *)(unaff_x20 + 0xb98);
          if (lVar5 == 0) goto LAB_03fc915c;
        }
        puVar3 = PTR_DAT_091a3928;
        if (*(char *)(lVar5 + 0x3c) != '\0') goto code_r0x03fc9450;
        lVar5 = *unaff_x24;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar5 = *unaff_x24;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
        if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0xc0), lVar5 == 0)) ||
           (lVar5 = FUN_04f83194(lVar5,*(undefined8 *)puVar3), lVar5 == 0)) goto LAB_03fc915c;
        FUN_08a200c4(lVar5,0,0);
        if (*(long *)(unaff_x20 + 0x220) == 0) goto LAB_03fc915c;
        FUN_08a50fa8(*(long *)(unaff_x20 + 0x220),0,0);
        goto LAB_03fc9528;
      }
      if (*(long *)(unaff_x20 + 0xb98) == 0) goto LAB_03fc915c;
      if (*(char *)(*(long *)(unaff_x20 + 0xb98) + 0x3d) == '\0') {
        fVar20 = 10.0;
        goto LAB_03fcbb28;
      }
      lVar5 = *unaff_x24;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar5 = *unaff_x24;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
      if (lVar5 == 0) goto LAB_03fc915c;
      uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar5 + 0x200),*(undefined8 *)PTR_DAT_091a1c80,0);
      if ((uVar8 & 1) == 0) {
        lVar5 = *unaff_x24;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar5 = *unaff_x24;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
        if (lVar5 == 0) goto LAB_03fc915c;
        uVar8 = thunk_FUN_06fd18b4(*(undefined8 *)(lVar5 + 0x200),*(undefined8 *)PTR_DAT_091a1c88,0)
        ;
        if ((uVar8 & 1) != 0) goto LAB_03fcb6e8;
        if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
           (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0)) goto LAB_03fc915c;
        lVar5 = *(long *)(lVar5 + 0x18);
      }
      else {
LAB_03fcb6e8:
        if ((*(long *)(unaff_x20 + 0xb98) == 0) ||
           (lVar5 = *(long *)(*(long *)(unaff_x20 + 0xb98) + 0x40), lVar5 == 0)) goto LAB_03fc915c;
        lVar5 = *(long *)(lVar5 + 0x10);
      }
      if (lVar5 == 0) goto LAB_03fc915c;
      dVar23 = (double)FUN_08ca86f8(lVar5,0);
      fVar20 = (float)dVar23 + 10.0;
LAB_03fcbb28:
      FUN_03e42b50(fVar20);
      FUN_08a52818();
      lVar5 = *unaff_x24;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar5 = *unaff_x24;
      }
      lVar10 = *(long *)(lVar5 + 0xb8);
      if (*(long *)(lVar10 + 0x98) == 0) goto LAB_03fc915c;
      if (*(char *)(*(long *)(lVar10 + 0x98) + 0x76) != '\0') {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar10 = *(long *)(*unaff_x24 + 0xb8);
        }
        if ((*(long *)(lVar10 + 0xa0) == 0) ||
           (lVar5 = *(long *)(*(long *)(lVar10 + 0xa0) + 0x40), lVar5 == 0)) goto LAB_03fc915c;
        FUN_08a50fa8(lVar5,1,0);
        lVar5 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x2a0);
        if (lVar5 == 0) goto LAB_03fc915c;
        FUN_03fb6678(lVar5,0);
      }
      return 0;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x18) =
       *(undefined8 *)(*(long *)(*(long *)PTR_DAT_091a31d8 + 0xb8) + 0xb0);
  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18));
  uVar19 = 0x26;
LAB_03fcbe38:
  *(undefined4 *)(unaff_x19 + 0x10) = uVar19;
  return 1;
}


