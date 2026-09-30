/*
FUNCTION_NAME: thunk_FUN_039aa4e4
ENTRY_POINT: 039ab120
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_7
*/


void thunk_FUN_039aa4e4(undefined1 param_1 [16],undefined8 param_2,undefined1 param_3 [16],
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
  
  if ((DAT_03ffc78c & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03dada80);
    thunk_FUN_01ad9084(PTR_DAT_03dada88);
    thunk_FUN_01ad9084(PTR_DAT_03dada90);
    thunk_FUN_01ad9084(PTR_DAT_03dada98);
    thunk_FUN_01ad9084(PTR_DAT_03d9cc58);
    thunk_FUN_01ad9084(PTR_DAT_03dada48);
    thunk_FUN_01ad9084(PTR_DAT_03dad9d8);
    thunk_FUN_01ad9084(PTR_DAT_03dada50);
    thunk_FUN_01ad9084(StringLiteral_4340);
    thunk_FUN_01ad9084(PTR_DAT_03dada58);
    thunk_FUN_01ad9084(StringLiteral_4342);
    thunk_FUN_01ad9084(Method_OVRSpatialAnchor_UnboundAnchor_BindTo__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_518);
    thunk_FUN_01ad9084(StringLiteral_980);
    thunk_FUN_01ad9084(PTR_DAT_03dadaa0);
    thunk_FUN_01ad9084(PTR_DAT_03dadaa8);
    thunk_FUN_01ad9084(Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<get_indexCount>b__126_0__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<get_triangleCount>b__128_0__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(PTR_DAT_03d9cfe0);
    DAT_03ffc78c = 1;
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
     plVar13 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__,
     (uVar5 & 1) != 0)) {
    lVar14 = param_5[0x29];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_0391f968(lVar14,0,0);
    puVar3 = PTR_DAT_03dada90;
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_03dada90 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar14 = FUN_0246f960(*(undefined8 *)PTR_DAT_03dada80);
      lVar6 = FUN_0391c2b8(param_5,0);
      if ((lVar6 == 0) ||
         (FUN_01ed838c(lVar6,0,lVar14,*(undefined8 *)PTR_DAT_03d9cc58), puVar4 = StringLiteral_4342,
         lVar14 == 0)) {
LAB_039ab11c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      iVar16 = *(int *)(lVar14 + 0x18);
      if (iVar16 != 0) {
        lVar6 = FUN_02b59714(lVar14,iVar16 + -1,*(undefined8 *)StringLiteral_4342);
        fVar30 = (float)param_2;
        if (0 < iVar16) {
          iVar15 = 0;
          do {
            lVar7 = FUN_02b59714(lVar14,iVar15,*(undefined8 *)puVar4);
            if (lVar7 == 0) goto LAB_039ab11c;
            uVar5 = FUN_03afa70c(lVar7,0);
            fVar30 = (float)param_2;
            if ((uVar5 & 1) != 0) {
LAB_039aa76c:
              lVar6 = FUN_02b59714(lVar14,iVar15,*(undefined8 *)puVar4);
              plVar13 = (long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
              break;
            }
            lVar7 = FUN_02b59714(lVar14,iVar15,*(undefined8 *)puVar4);
            if (lVar7 == 0) goto LAB_039ab11c;
            uVar5 = FUN_03afaab8(lVar7,0);
            fVar30 = (float)param_2;
            if ((uVar5 & 1) != 0) goto LAB_039aa76c;
            iVar15 = iVar15 + 1;
            plVar13 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
            ;
          } while (iVar16 != iVar15);
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_0246faa0(lVar14,*(undefined8 *)PTR_DAT_03dada88);
        if (((char)param_5[0x2d] != '\0') ||
           (FUN_039a9e1c(param_5,lVar6), (char)param_5[0x2d] != '\0')) {
          if ((param_5[0x20] != 0) && (lVar14 = FUN_0391c2b8(param_5[0x20],0), lVar14 != 0)) {
            FUN_0391fb70(lVar14,1,0);
            if (param_5[0x20] != 0) {
              plVar10 = param_5 + 0x29;
              uVar8 = FUN_0391c2b8(param_5[0x20],0);
              lVar14 = (**(code **)(*param_5 + 0x428))
                                 (param_5,uVar8,*(undefined8 *)(*param_5 + 0x430));
              param_5[0x29] = lVar14;
              thunk_FUN_01b4f09c(plVar10,lVar14);
              if (param_5[0x29] != 0) {
                FUN_0392316c(param_5[0x29],*(undefined8 *)PTR_DAT_03d9cfe0,0);
                if (*plVar10 != 0) {
                  FUN_0391fb70(*plVar10,1,0);
                  if (*plVar10 != 0) {
                    plVar9 = (long *)FUN_0391fab4(*plVar10,0);
                    if (plVar9 == (long *)0x0) {
                      plVar9 = (long *)0x0;
                    }
                    else if (*plVar9 != *(long *)StringLiteral_980) {
                      plVar9 = (long *)0x0;
                    }
                    if (((param_5[0x20] != 0) &&
                        (lVar14 = FUN_0391c27c(param_5[0x20],0), lVar14 != 0)) &&
                       (uVar8 = FUN_03928c2c(lVar14,0), plVar9 != (long *)0x0)) {
                      FUN_03929660(plVar9,uVar8,0,0);
                      if (((*plVar10 != 0) &&
                          (lVar14 = FUN_01ed7390(*plVar10,*(undefined8 *)PTR_DAT_03dada98),
                          lVar14 != 0)) &&
                         ((*(long *)(lVar14 + 0x30) != 0 &&
                          ((lVar7 = FUN_03928c2c(*(long *)(lVar14 + 0x30),0), lVar7 != 0 &&
                           (lVar7 = FUN_0391c2b8(lVar7,0), lVar7 != 0)))))) {
                        plVar10 = (long *)FUN_0391fab4(lVar7,0);
                        if (plVar10 == (long *)0x0) {
                          plVar10 = (long *)0x0;
                        }
                        else if (*plVar10 != *(long *)StringLiteral_980) {
                          plVar10 = (long *)0x0;
                        }
                        if (((*(long *)(lVar14 + 0x30) != 0) &&
                            (lVar7 = FUN_0391c2b8(*(long *)(lVar14 + 0x30),0), lVar7 != 0)) &&
                           (FUN_0391fb70(lVar7,1,0), plVar10 != (long *)0x0)) {
                          UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                                    (plVar10,0);
                          if (*(long *)(lVar14 + 0x30) != 0) {
                            fVar28 = param_4;
                            fVar24 = fVar30;
                            UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                                      (*(long *)(lVar14 + 0x30),0);
                            if (*(long *)(lVar14 + 0x30) != 0) {
                              fVar31 = fVar24;
                              FUN_03928280(*(long *)(lVar14 + 0x30),0);
                              if (*(long *)(lVar14 + 0x30) != 0) {
                                fVar20 = fVar31;
                                FUN_03928280(*(long *)(lVar14 + 0x30),0);
                                lVar7 = param_5[0x2b];
                                if (lVar7 != 0) {
                                  iVar16 = *(int *)(lVar7 + 0x18);
                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                  if (0 < iVar16) {
                                    FUN_03062488(*(undefined8 *)(lVar7 + 0x10),0,iVar16,0);
                                  }
                                  puVar4 = PTR_DAT_03dadaa8;
                                  puVar3 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
                                  if ((param_5[0x26] != 0) &&
                                     (lVar7 = *(long *)(param_5[0x26] + 0x10), lVar7 != 0)) {
                                    iVar16 = *(int *)(lVar7 + 0x18);
                                    if (0 < iVar16) {
                                      lVar7 = 0;
                                      iVar15 = 0;
                                      do {
                                        lVar11 = thunk_FUN_01afaadc(*(undefined8 *)puVar4);
                                        FUN_03081994(lVar11,0);
                                        if (lVar11 == 0) goto LAB_039ab11c;
                                        *(long *)(lVar11 + 0x18) = (long)param_5;
                                        thunk_FUN_01b4f09c((long *)(lVar11 + 0x18),param_5);
                                        if ((param_5[0x26] == 0) ||
                                           (lVar12 = *(long *)(param_5[0x26] + 0x10), lVar12 == 0))
                                        goto LAB_039ab11c;
                                        uVar8 = FUN_02b59714(lVar12,iVar15,*(undefined8 *)puVar3);
                                        lVar12 = FUN_039ab23c(param_5,uVar8,0,lVar14,param_5[0x2b]);
                                        plVar18 = (long *)(lVar11 + 0x10);
                                        *plVar18 = lVar12;
                                        thunk_FUN_01b4f09c(plVar18,lVar12);
                                        lVar12 = *plVar18;
                                        if (*(int *)(*plVar13 + 0xe0) == 0) {
                                          thunk_FUN_01ac7298();
                                        }
                                        uVar5 = FUN_03922f24(lVar12,0,0);
                                        if ((uVar5 & 1) == 0) {
                                          if ((*plVar18 == 0) ||
                                             (lVar12 = *(long *)(*plVar18 + 0x38), lVar12 == 0))
                                          goto LAB_039ab11c;
                                          FUN_03b1de40(lVar12,iVar15 == (int)param_5[0x25],0);
                                          if ((*plVar18 == 0) ||
                                             (lVar12 = *(long *)(*plVar18 + 0x38), lVar12 == 0))
                                          goto LAB_039ab11c;
                                          lVar12 = *(long *)(lVar12 + 0x118);
                                          uVar8 = thunk_FUN_01afaadc(*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<get_indexCount>b__126_0__
                                                  );
                                          FUN_021ffadc(uVar8,lVar11,*(undefined8 *)PTR_DAT_03dadaa0,
                                                       0);
                                          if (lVar12 == 0) goto LAB_039ab11c;
                                          FUN_022017b8(lVar12,uVar8,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<get_triangleCount>b__128_0__
                                                  );
                                          if ((*plVar18 == 0) ||
                                             (plVar13 = *(long **)(*plVar18 + 0x38),
                                             plVar13 == (long *)0x0)) goto LAB_039ab11c;
                                          if ((char)plVar13[0x24] != '\0') {
                                            (**(code **)(*plVar13 + 0x398))
                                                      (plVar13,*(undefined8 *)(*plVar13 + 0x3a0));
                                          }
                                          plVar13 = (long *)
                                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                          ;
                                          if (*(int *)(*(long *)
                                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                                  + 0xe0) == 0) {
                                            thunk_FUN_01ac7298();
                                          }
                                          uVar5 = FUN_0391f968(lVar7,0,0);
                                          if ((uVar5 & 1) != 0) {
                                            if (lVar7 == 0) goto LAB_039ab11c;
                                            auStack_b0[0] = *(undefined8 *)(lVar7 + 0x48);
                                            uStack_b8 = *(undefined8 *)(lVar7 + 0x40);
                                            uStack_c0 = *(undefined8 *)(lVar7 + 0x38);
                                            uStack_c8 = *(undefined8 *)(lVar7 + 0x30);
                                            uStack_d0 = *(undefined8 *)(lVar7 + 0x28);
                                            if ((*plVar18 == 0) ||
                                               (lVar11 = *(long *)(*plVar18 + 0x38), lVar11 == 0))
                                            goto LAB_039ab11c;
                                            uStack_e0 = *(undefined8 *)(lVar11 + 0x48);
                                            lStack_f8 = *(long *)(lVar11 + 0x30);
                                            lStack_e8 = *(long *)(lVar11 + 0x40);
                                            uStack_f0 = *(undefined8 *)(lVar11 + 0x38);
                                            uVar5 = (ulong)uStack_d0 >> 0x20;
                                            uStack_d0 = CONCAT44((int)uVar5,4);
                                            uStack_100 = CONCAT44((int)((ulong)*(undefined8 *)
                                                                                (lVar11 + 0x28) >>
                                                                       0x20),4);
                                            if (*plVar18 == 0) goto LAB_039ab11c;
                                            uStack_c0 = *(undefined8 *)(*plVar18 + 0x38);
                                            thunk_FUN_01b4f09c(&uStack_c0);
                                            if (*plVar18 == 0) goto LAB_039ab11c;
                                            auStack_b0[0] = *(undefined8 *)(*plVar18 + 0x38);
                                            thunk_FUN_01b4f09c(auStack_b0);
                                            lStack_e8 = lVar7;
                                            thunk_FUN_01b4f09c(&lStack_e8,lVar7);
                                            lStack_f8 = lVar7;
                                            thunk_FUN_01b4f09c((ulong)&uStack_100 | 8,lVar7);
                                            uStack_128 = uStack_c8;
                                            uStack_130 = uStack_d0;
                                            uStack_118 = uStack_b8;
                                            uStack_120 = uStack_c0;
                                            uStack_110 = auStack_b0[0];
                                            FUN_03b17384(lVar7,&uStack_130,0);
                                            if (*plVar18 == 0) goto LAB_039ab11c;
                                            lVar7 = *(long *)(*plVar18 + 0x38);
                                            lStack_158 = lStack_f8;
                                            uStack_160 = uStack_100;
                                            lStack_148 = lStack_e8;
                                            uStack_150 = uStack_f0;
                                            uStack_140 = uStack_e0;
                                            if (lVar7 == 0) goto LAB_039ab11c;
                                            lStack_188 = lStack_f8;
                                            uStack_190 = uStack_100;
                                            lStack_178 = lStack_e8;
                                            uStack_180 = uStack_f0;
                                            uStack_170 = uStack_e0;
                                            FUN_03b17384(lVar7,&uStack_190,0);
                                          }
                                          if (*plVar18 == 0) goto LAB_039ab11c;
                                          lVar7 = *(long *)(*plVar18 + 0x38);
                                        }
                                        iVar15 = iVar15 + 1;
                                      } while (iVar16 != iVar15);
                                    }
                                    FUN_03928018(plVar10,0);
                                    if (param_5[0x2b] != 0) {
                                      fVar29 = fVar24 - fVar30;
                                      fVar31 = fVar29 + fVar31;
                                      fVar27 = fVar31 + fVar28 * (float)*(int *)(param_5[0x2b] +
                                                                                0x18);
                                      uVar5 = (ulong)(uint)(fVar27 - (((fVar28 + fVar24) -
                                                                      (param_4 + fVar30)) + fVar20))
                                      ;
                                      FUN_039280a8(plVar10,0);
                                      UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                                                (plVar9,0);
                                      fVar30 = fVar29;
                                      UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                                                (plVar10,0);
                                      fVar24 = (float)uVar5;
                                      fVar29 = fVar29 - fVar30;
                                      if (0.0 < fVar29) {
                                        uVar8 = FUN_03928018(plVar9,0);
                                        FUN_03928018(plVar9,0);
                                        uVar5 = (ulong)(uint)(fVar24 - fVar29);
                                        FUN_039280a8(uVar8,plVar9,0);
                                      }
                                      lVar7 = FUN_01b47fd0(*(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__
                                                  ,4);
                                      FUN_039286f4(plVar9,lVar7,0);
                                      if ((((lVar6 != 0) &&
                                           (plVar13 = (long *)FUN_0391c27c(lVar6,0),
                                           plVar13 != (long *)0x0)) &&
                                          (*plVar13 == *(long *)StringLiteral_980)) &&
                                         (fVar20 = (float)
                                                  UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                                                            (plVar13,0),
                                         puVar3 = 
                                         Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__
                                         , fVar24 = DAT_00b55490, lVar7 != 0)) {
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
                                              FUN_01b48180();
                                            }
                                            fVar25 = (float)puVar17[-1];
                                            fVar21 = (float)FUN_0392a520(puVar17[-2],fVar25,*puVar17
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
                                              if (DAT_03fed263 == '\0') {
                                                thunk_FUN_01ad9084(puVar3);
                                                DAT_03fed263 = '\x01';
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
                                              if (ABS(fVar29 - fVar23) < fVar22) goto LAB_039aaec4;
LAB_039aaf3c:
                                              if (*(int *)(*(long *)StringLiteral_518 + 0xe0) == 0)
                                              {
                                                thunk_FUN_01ac7298();
                                              }
                                              FUN_03af9e08(plVar9,iVar16,0,0,0);
                                              break;
                                            }
LAB_039aaec4:
                                            fVar23 = fVar21;
                                            if (!bVar2) {
                                              fVar23 = fVar25;
                                            }
                                            if (fVar32 < fVar23) {
                                              if (!bVar2) {
                                                fVar21 = fVar25;
                                              }
                                              if (DAT_03fed263 == '\0') {
                                                thunk_FUN_01ad9084(puVar3);
                                                DAT_03fed263 = '\x01';
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
                                              if (fVar23 <= ABS(fVar32 - fVar21)) goto LAB_039aaf3c;
                                            }
                                            uVar19 = uVar19 + 1;
                                            puVar17 = puVar17 + 3;
                                          } while (uVar19 != 4);
                                          puVar4 = PTR_DAT_03dada58;
                                          uVar19 = uVar5 & 0xffffffff;
                                          bVar2 = false;
                                          bVar1 = iVar16 == 0;
                                          iVar16 = 1;
                                        } while (bVar1);
                                        lVar7 = param_5[0x2b];
                                        if (lVar7 != 0) {
                                          iVar16 = *(int *)(lVar7 + 0x18);
                                          if (iVar16 < 1) {
LAB_039ab06c:
                                            FUN_039ab528((int)param_5[0x28],0,0x3f800000,param_5);
                                            if ((param_5[0x20] != 0) &&
                                               (lVar7 = FUN_0391c2b8(param_5[0x20],0), lVar7 != 0))
                                            {
                                              FUN_0391fb70(lVar7,0,0);
                                              lVar14 = FUN_0391c2b8(lVar14,0);
                                              if (lVar14 != 0) {
                                                FUN_0391fb70(lVar14,0,0);
                                                lVar14 = (**(code **)(*param_5 + 0x408))
                                                                   (param_5,lVar6,
                                                                    *(undefined8 *)
                                                                     (*param_5 + 0x410));
                                                param_5[0x2a] = lVar14;
                                                thunk_FUN_01b4f09c(param_5 + 0x2a);
                                                return;
                                              }
                                            }
                                          }
                                          else {
                                            iVar15 = 0;
                                            do {
                                              iVar16 = iVar16 + -1;
                                              lVar7 = FUN_02b59714(lVar7,iVar15,
                                                                   *(undefined8 *)puVar4);
                                              if ((lVar7 == 0) ||
                                                 (lVar7 = *(long *)(lVar7 + 0x30), lVar7 == 0))
                                              break;
                                              uVar8 = FUN_03927cc4(lVar7,0);
                                              FUN_03927d54(uVar8,0,lVar7,0);
                                              uVar8 = FUN_03927de0(lVar7,0);
                                              fVar30 = 0.0;
                                              UnityEngine_UIElements_StyleSheets_StyleSelectorHelper__MatchesSelector
                                                        (uVar8,0,lVar7,0);
                                              uVar8 = FUN_03927efc(lVar7,0);
                                              FUN_03928134(lVar7,0);
                                              FUN_03927f8c(uVar8,fVar31 + fVar28 * (float)iVar16 +
                                                                 fVar28 * fVar30,lVar7,0);
                                              uVar8 = FUN_03928018(lVar7,0);
                                              FUN_039280a8(uVar8,fVar28,lVar7,0);
                                              if (iVar16 == 0) goto LAB_039ab06c;
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
          goto LAB_039ab11c;
        }
      }
    }
  }
  return;
}


