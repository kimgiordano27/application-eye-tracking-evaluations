/*
FUNCTION_NAME: thunk_FUN_06f710a8
ENTRY_POINT: 06f710a4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void thunk_FUN_06f710a8(undefined1 param_1 [16],undefined8 param_2,undefined1 param_3 [16],
                       float param_4,long *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  long *plVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 auStack_b0 [2];
  
  if ((DAT_07a599c5 & 1) == 0) {
    FUN_031f20f4(OVRManager_TypeInfo);
    FUN_031f20f4(OVRMeshRenderer_TypeInfo);
    FUN_031f20f4(OVRMixedReality_TypeInfo);
    FUN_031f20f4(OVRMixedRealityCaptureConfiguration_TypeInfo);
    FUN_031f20f4(PTR_DAT_076361e0);
    FUN_031f20f4(OVRHandSkeletonVersion_TypeInfo);
    FUN_031f20f4(OVRControllerTest_TypeInfo);
    FUN_031f20f4(OVRHandTest_TypeInfo);
    FUN_031f20f4(PTR_DAT_076361e8);
    FUN_031f20f4(OVRHaptics_TypeInfo);
    FUN_031f20f4(PTR_DAT_076361f0);
    FUN_031f20f4(OVRDisplay_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    FUN_031f20f4(PTR_DAT_075de030);
    FUN_031f20f4(PTR_DAT_075d5f30);
    FUN_031f20f4(OVRNativeBuffer_TypeInfo);
    FUN_031f20f4(OVRNodeStateProperties_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b360);
    FUN_031f20f4(PTR_DAT_0759b368);
    FUN_031f20f4(PTR_DAT_075dc570);
    FUN_031f20f4(PTR_DAT_07636580);
    DAT_07a599c5 = 1;
  }
  auStack_b0[0] = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_f8 = 0;
  uStack_100 = 0;
  lStack_e8 = 0;
  uStack_f0 = 0;
  uVar5 = (**(code **)(*param_5 + 0x1c8))(param_5,*(undefined8 *)(*param_5 + 0x1d0));
  if (((uVar5 & 1) != 0) &&
     (uVar5 = (**(code **)(*param_5 + 0x2b8))(param_5,*(undefined8 *)(*param_5 + 0x2c0)),
     plVar13 = (long *)PTR_DAT_0759b2a8, (uVar5 & 1) != 0)) {
    lVar14 = param_5[0x29];
    if (*(int *)(*(long *)PTR_DAT_0759b2a8 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar5 = FUN_06e587d8(lVar14,0,0);
    puVar3 = OVRMixedReality_TypeInfo;
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)OVRMixedReality_TypeInfo + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      lVar14 = FUN_054e0254(*(undefined8 *)OVRManager_TypeInfo);
      lVar6 = FUN_06e550fc(param_5,0);
      if ((lVar6 == 0) ||
         (FUN_03e0e8fc(lVar6,0,lVar14,*(undefined8 *)PTR_DAT_076361e0), puVar4 = PTR_DAT_076361f0,
         lVar14 == 0)) {
LAB_06f71ce0:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      iVar16 = *(int *)(lVar14 + 0x18);
      if (iVar16 != 0) {
        lVar6 = FUN_047af170(lVar14,iVar16 + -1,*(undefined8 *)PTR_DAT_076361f0);
        fVar30 = (float)param_2;
        if (0 < iVar16) {
          iVar15 = 0;
          do {
            lVar7 = FUN_047af170(lVar14,iVar15,*(undefined8 *)puVar4);
            if (lVar7 == 0) goto LAB_06f71ce0;
            uVar5 = FUN_0713cd2c(lVar7,0);
            fVar30 = (float)param_2;
            if ((uVar5 & 1) != 0) {
LAB_06f71330:
              lVar6 = FUN_047af170(lVar14,iVar15,*(undefined8 *)puVar4);
              plVar13 = (long *)PTR_DAT_0759b2a8;
              break;
            }
            lVar7 = FUN_047af170(lVar14,iVar15,*(undefined8 *)puVar4);
            if (lVar7 == 0) goto LAB_06f71ce0;
            uVar5 = FUN_0713d86c(lVar7,0);
            fVar30 = (float)param_2;
            if ((uVar5 & 1) != 0) goto LAB_06f71330;
            iVar15 = iVar15 + 1;
            plVar13 = (long *)PTR_DAT_0759b2a8;
          } while (iVar16 != iVar15);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_054e0394(lVar14,*(undefined8 *)OVRMeshRenderer_TypeInfo);
        if (((char)param_5[0x2d] != '\0') ||
           (FUN_06f709e0(param_5,lVar6), (char)param_5[0x2d] != '\0')) {
          if ((param_5[0x20] != 0) && (lVar14 = FUN_06e550fc(param_5[0x20],0), lVar14 != 0)) {
            FUN_06e59c44(lVar14,1,0);
            if (param_5[0x20] != 0) {
              plVar10 = param_5 + 0x29;
              uVar8 = FUN_06e550fc(param_5[0x20],0);
              lVar14 = (**(code **)(*param_5 + 0x428))
                                 (param_5,uVar8,*(undefined8 *)(*param_5 + 0x430));
              param_5[0x29] = lVar14;
              thunk_FUN_0329bf60(plVar10,lVar14);
              if (param_5[0x29] != 0) {
                thunk_FUN_06e5f83c(param_5[0x29],*(undefined8 *)PTR_DAT_07636580,0);
                if (*plVar10 != 0) {
                  FUN_06e59c44(*plVar10,1,0);
                  if (*plVar10 != 0) {
                    plVar9 = (long *)FUN_06e59884(*plVar10,0);
                    if (plVar9 == (long *)0x0) {
                      plVar9 = (long *)0x0;
                    }
                    else if (*plVar9 != *(long *)PTR_DAT_075d5f30) {
                      plVar9 = (long *)0x0;
                    }
                    if (((param_5[0x20] != 0) &&
                        (lVar14 = FUN_06e5502c(param_5[0x20],0), lVar14 != 0)) &&
                       (uVar8 = thunk_FUN_06e6b484(lVar14,0), plVar9 != (long *)0x0)) {
                      FUN_06e6b558(plVar9,uVar8,0,0);
                      if (((*plVar10 != 0) &&
                          (lVar14 = FUN_03e0da18(*plVar10,*(undefined8 *)
                                                                                                                      
                                                  OVRMixedRealityCaptureConfiguration_TypeInfo),
                          lVar14 != 0)) &&
                         ((*(long *)(lVar14 + 0x30) != 0 &&
                          ((lVar7 = thunk_FUN_06e6b484(*(long *)(lVar14 + 0x30),0), lVar7 != 0 &&
                           (lVar7 = FUN_06e550fc(lVar7,0), lVar7 != 0)))))) {
                        plVar10 = (long *)FUN_06e59884(lVar7,0);
                        if (plVar10 == (long *)0x0) {
                          plVar10 = (long *)0x0;
                        }
                        else if (*plVar10 != *(long *)PTR_DAT_075d5f30) {
                          plVar10 = (long *)0x0;
                        }
                        if (((*(long *)(lVar14 + 0x30) != 0) &&
                            (lVar7 = FUN_06e550fc(*(long *)(lVar14 + 0x30),0), lVar7 != 0)) &&
                           (FUN_06e59c44(lVar7,1,0), plVar10 != (long *)0x0)) {
                          FUN_06e68cac(plVar10,0);
                          if (*(long *)(lVar14 + 0x30) != 0) {
                            fVar28 = param_4;
                            fVar24 = fVar30;
                            FUN_06e68cac(*(long *)(lVar14 + 0x30),0);
                            if (*(long *)(lVar14 + 0x30) != 0) {
                              fVar31 = fVar24;
                              FUN_06e69570(*(long *)(lVar14 + 0x30),0);
                              if (*(long *)(lVar14 + 0x30) != 0) {
                                fVar20 = fVar31;
                                FUN_06e69570(*(long *)(lVar14 + 0x30),0);
                                lVar7 = param_5[0x2b];
                                if (lVar7 != 0) {
                                  iVar16 = *(int *)(lVar7 + 0x18);
                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                  if (0 < iVar16) {
                                    FUN_05e24380(*(undefined8 *)(lVar7 + 0x10),0,iVar16,0);
                                  }
                                  puVar4 = OVRNodeStateProperties_TypeInfo;
                                  puVar3 = OVRDisplay_TypeInfo;
                                  if ((param_5[0x26] != 0) &&
                                     (lVar7 = *(long *)(param_5[0x26] + 0x10), lVar7 != 0)) {
                                    iVar16 = *(int *)(lVar7 + 0x18);
                                    if (0 < iVar16) {
                                      lVar7 = 0;
                                      iVar15 = 0;
                                      do {
                                        lVar11 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
                                        FUN_05e44034(lVar11,0);
                                        if (lVar11 == 0) goto LAB_06f71ce0;
                                        *(long *)(lVar11 + 0x18) = (long)param_5;
                                        thunk_FUN_0329bf60((long *)(lVar11 + 0x18),param_5);
                                        if ((param_5[0x26] == 0) ||
                                           (lVar12 = *(long *)(param_5[0x26] + 0x10), lVar12 == 0))
                                        goto LAB_06f71ce0;
                                        uVar8 = FUN_047af170(lVar12,iVar15,*(undefined8 *)puVar3);
                                        lVar12 = FUN_06f71e00(param_5,uVar8,0,lVar14,param_5[0x2b]);
                                        plVar18 = (long *)(lVar11 + 0x10);
                                        *plVar18 = lVar12;
                                        thunk_FUN_0329bf60(plVar18,lVar12);
                                        lVar12 = *plVar18;
                                        if (*(int *)(*plVar13 + 0xe4) == 0) {
                                          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                                    ();
                                        }
                                        uVar5 = FUN_06e5ba28(lVar12,0,0);
                                        if ((uVar5 & 1) == 0) {
                                          if ((*plVar18 == 0) ||
                                             (lVar12 = *(long *)(*plVar18 + 0x38), lVar12 == 0))
                                          goto LAB_06f71ce0;
                                          FUN_07161cdc(lVar12,iVar15 == (int)param_5[0x25],0);
                                          if ((*plVar18 == 0) ||
                                             (lVar12 = *(long *)(*plVar18 + 0x38), lVar12 == 0))
                                          goto LAB_06f71ce0;
                                          lVar12 = *(long *)(lVar12 + 0x118);
                                          uVar8 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759b360
                                                                    );
                                          FUN_0520c94c(uVar8,lVar11,
                                                       *(undefined8 *)OVRNativeBuffer_TypeInfo,0);
                                          if (lVar12 == 0) goto LAB_06f71ce0;
                                          FUN_052115a4(lVar12,uVar8,*(undefined8 *)PTR_DAT_0759b368)
                                          ;
                                          if ((*plVar18 == 0) ||
                                             (plVar13 = *(long **)(*plVar18 + 0x38),
                                             plVar13 == (long *)0x0)) goto LAB_06f71ce0;
                                          if ((char)plVar13[0x24] != '\0') {
                                            (**(code **)(*plVar13 + 0x398))
                                                      (plVar13,*(undefined8 *)(*plVar13 + 0x3a0));
                                          }
                                          plVar13 = (long *)PTR_DAT_0759b2a8;
                                          if (*(int *)(*(long *)PTR_DAT_0759b2a8 + 0xe4) == 0) {
                                            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                                      ();
                                          }
                                          uVar5 = FUN_06e587d8(lVar7,0,0);
                                          if ((uVar5 & 1) != 0) {
                                            if (lVar7 == 0) goto LAB_06f71ce0;
                                            auStack_b0[0] = *(undefined8 *)(lVar7 + 0x48);
                                            uStack_b8 = *(undefined8 *)(lVar7 + 0x40);
                                            uStack_c0 = *(undefined8 *)(lVar7 + 0x38);
                                            uStack_c8 = *(undefined8 *)(lVar7 + 0x30);
                                            uStack_d0 = *(undefined8 *)(lVar7 + 0x28);
                                            if ((*plVar18 == 0) ||
                                               (lVar11 = *(long *)(*plVar18 + 0x38), lVar11 == 0))
                                            goto LAB_06f71ce0;
                                            uStack_e0 = *(undefined8 *)(lVar11 + 0x48);
                                            lStack_f8 = *(long *)(lVar11 + 0x30);
                                            lStack_e8 = *(long *)(lVar11 + 0x40);
                                            uStack_f0 = *(undefined8 *)(lVar11 + 0x38);
                                            uVar5 = (ulong)uStack_d0 >> 0x20;
                                            uStack_d0 = CONCAT44((int)uVar5,4);
                                            uStack_100 = CONCAT44((int)((ulong)*(undefined8 *)
                                                                                (lVar11 + 0x28) >>
                                                                       0x20),4);
                                            if (*plVar18 == 0) goto LAB_06f71ce0;
                                            uStack_c0 = *(undefined8 *)(*plVar18 + 0x38);
                                            thunk_FUN_0329bf60(&uStack_c0);
                                            if (*plVar18 == 0) goto LAB_06f71ce0;
                                            auStack_b0[0] = *(undefined8 *)(*plVar18 + 0x38);
                                            thunk_FUN_0329bf60(auStack_b0);
                                            lStack_e8 = lVar7;
                                            thunk_FUN_0329bf60(&lStack_e8,lVar7);
                                            lStack_f8 = lVar7;
                                            thunk_FUN_0329bf60((ulong)&uStack_100 | 8,lVar7);
                                            uStack_128 = uStack_c8;
                                            uStack_130 = uStack_d0;
                                            uStack_118 = uStack_b8;
                                            uStack_120 = uStack_c0;
                                            uStack_110 = auStack_b0[0];
                                            FUN_0715b260(lVar7,&uStack_130,0);
                                            if (*plVar18 == 0) goto LAB_06f71ce0;
                                            lVar7 = *(long *)(*plVar18 + 0x38);
                                            lStack_158 = lStack_f8;
                                            uStack_160 = uStack_100;
                                            lStack_148 = lStack_e8;
                                            uStack_150 = uStack_f0;
                                            uStack_140 = uStack_e0;
                                            if (lVar7 == 0) goto LAB_06f71ce0;
                                            lStack_188 = lStack_f8;
                                            uStack_190 = uStack_100;
                                            lStack_178 = lStack_e8;
                                            uStack_180 = uStack_f0;
                                            uStack_170 = uStack_e0;
                                            FUN_0715b260(lVar7,&uStack_190,0);
                                          }
                                          if (*plVar18 == 0) goto LAB_06f71ce0;
                                          lVar7 = *(long *)(*plVar18 + 0x38);
                                        }
                                        iVar15 = iVar15 + 1;
                                      } while (iVar16 != iVar15);
                                    }
                                    FUN_06e69224(plVar10,0);
                                    if (param_5[0x2b] != 0) {
                                      fVar29 = fVar24 - fVar30;
                                      fVar31 = fVar29 + fVar31;
                                      fVar27 = fVar31 + fVar28 * (float)*(int *)(param_5[0x2b] +
                                                                                0x18);
                                      uVar5 = (ulong)(uint)(fVar27 - (((fVar28 + fVar24) -
                                                                      (param_4 + fVar30)) + fVar20))
                                      ;
                                      FUN_06e692ec(plVar10,0);
                                      FUN_06e68cac(plVar9,0);
                                      fVar30 = fVar29;
                                      FUN_06e68cac(plVar10,0);
                                      fVar24 = (float)uVar5;
                                      fVar29 = fVar29 - fVar30;
                                      if (0.0 < fVar29) {
                                        uVar8 = FUN_06e69224(plVar9,0);
                                        FUN_06e69224(plVar9,0);
                                        uVar5 = (ulong)(uint)(fVar24 - fVar29);
                                        FUN_06e692ec(uVar8,plVar9,0);
                                      }
                                      lVar7 = FUN_031f21dc(*(undefined8 *)PTR_DAT_075dc570,4);
                                      FUN_06e69e5c(plVar9,lVar7,0);
                                      if ((((lVar6 != 0) &&
                                           (plVar13 = (long *)FUN_06e5502c(lVar6,0),
                                           plVar13 != (long *)0x0)) &&
                                          (*plVar13 == *(long *)PTR_DAT_075d5f30)) &&
                                         (fVar20 = (float)FUN_06e68cac(plVar13,0),
                                         puVar3 = PTR_DAT_075b9420, fVar24 = DAT_014bab34,
                                         lVar7 != 0)) {
                                        bVar2 = true;
                                        uVar19 = uVar5;
                                        iVar16 = 0;
                                        do {
                                          fVar29 = fVar20;
                                          if (!bVar2) {
                                            fVar29 = (float)uVar19;
                                          }
                                          uVar19 = 0;
                                          fVar32 = fVar27 + fVar20;
                                          if (!bVar2) {
                                            fVar32 = fVar30 + (float)uVar5;
                                          }
                                          puVar17 = (undefined4 *)(lVar7 + 0x28);
                                          do {
                                            if (*(uint *)(lVar7 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                                              FUN_031f2398();
                                            }
                                            fVar25 = (float)puVar17[-1];
                                            fVar21 = (float)FUN_06e6d6d4(puVar17[-2],fVar25,*puVar17
                                                                         ,plVar13,0);
                                            fVar23 = fVar21;
                                            if (!bVar2) {
                                              fVar23 = fVar25;
                                            }
                                            if (fVar23 < fVar29) {
                                              fVar23 = fVar21;
                                              if (!bVar2) {
                                                fVar23 = fVar25;
                                              }
                                              if (DAT_07a3fba2 == '\0') {
                                                FUN_031f20f4(puVar3);
                                                DAT_07a3fba2 = '\x01';
                                              }
                                              fVar22 = ABS(fVar23);
                                              if (ABS(fVar23) <= ABS(fVar29)) {
                                                fVar22 = ABS(fVar29);
                                              }
                                              fVar22 = fVar22 * fVar24;
                                              fVar26 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
                                              if (fVar22 <= fVar26) {
                                                fVar22 = fVar26;
                                              }
                                              if (ABS(fVar29 - fVar23) < fVar22) goto LAB_06f71a88;
LAB_06f71b00:
                                              if (*(int *)(*(long *)PTR_DAT_075de030 + 0xe4) == 0) {
                                                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                                          ();
                                              }
                                              FUN_0713c330(plVar9,iVar16,0,0,0);
                                              break;
                                            }
LAB_06f71a88:
                                            fVar23 = fVar21;
                                            if (!bVar2) {
                                              fVar23 = fVar25;
                                            }
                                            if (fVar32 < fVar23) {
                                              if (!bVar2) {
                                                fVar21 = fVar25;
                                              }
                                              if (DAT_07a3fba2 == '\0') {
                                                FUN_031f20f4(puVar3);
                                                DAT_07a3fba2 = '\x01';
                                              }
                                              fVar23 = ABS(fVar21);
                                              if (ABS(fVar21) <= ABS(fVar32)) {
                                                fVar23 = ABS(fVar32);
                                              }
                                              fVar23 = fVar23 * fVar24;
                                              fVar25 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
                                              if (fVar23 <= fVar25) {
                                                fVar23 = fVar25;
                                              }
                                              if (fVar23 <= ABS(fVar32 - fVar21)) goto LAB_06f71b00;
                                            }
                                            uVar19 = uVar19 + 1;
                                            puVar17 = puVar17 + 3;
                                          } while (uVar19 != 4);
                                          puVar4 = OVRHaptics_TypeInfo;
                                          uVar19 = uVar5 & 0xffffffff;
                                          bVar2 = false;
                                          bVar1 = iVar16 == 0;
                                          iVar16 = 1;
                                        } while (bVar1);
                                        lVar7 = param_5[0x2b];
                                        if (lVar7 != 0) {
                                          iVar16 = *(int *)(lVar7 + 0x18);
                                          if (iVar16 < 1) {
LAB_06f71c30:
                                            FUN_06f720f0((int)param_5[0x28],0,0x3f800000,param_5);
                                            if ((param_5[0x20] != 0) &&
                                               (lVar7 = FUN_06e550fc(param_5[0x20],0), lVar7 != 0))
                                            {
                                              FUN_06e59c44(lVar7,0,0);
                                              lVar14 = FUN_06e550fc(lVar14,0);
                                              if (lVar14 != 0) {
                                                FUN_06e59c44(lVar14,0,0);
                                                lVar14 = (**(code **)(*param_5 + 0x408))
                                                                   (param_5,lVar6,
                                                                    *(undefined8 *)
                                                                     (*param_5 + 0x410));
                                                param_5[0x2a] = lVar14;
                                                thunk_FUN_0329bf60(param_5 + 0x2a);
                                                return;
                                              }
                                            }
                                          }
                                          else {
                                            iVar15 = 0;
                                            do {
                                              iVar16 = iVar16 + -1;
                                              lVar7 = FUN_047af170(lVar7,iVar15,
                                                                   *(undefined8 *)puVar4);
                                              if ((lVar7 == 0) ||
                                                 (lVar7 = *(long *)(lVar7 + 0x30), lVar7 == 0))
                                              break;
                                              uVar8 = FUN_06e68d80(lVar7,0);
                                              FUN_06e68e48(uVar8,0,lVar7,0);
                                              uVar8 = FUN_06e68f0c(lVar7,0);
                                              fVar30 = 0.0;
                                              FUN_06e68fd4(uVar8,0,lVar7,0);
                                              uVar8 = FUN_06e69098(lVar7,0);
                                              FUN_06e693b0(lVar7,0);
                                              FUN_06e69160(uVar8,fVar31 + fVar28 * (float)iVar16 +
                                                                 fVar28 * fVar30,lVar7,0);
                                              uVar8 = FUN_06e69224(lVar7,0);
                                              FUN_06e692ec(uVar8,fVar28,lVar7,0);
                                              if (iVar16 == 0) goto LAB_06f71c30;
                                              lVar7 = param_5[0x2b];
                                              iVar15 = iVar15 + 1;
                                            } while (lVar7 != 0);
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
          goto LAB_06f71ce0;
        }
      }
    }
  }
  return;
}


