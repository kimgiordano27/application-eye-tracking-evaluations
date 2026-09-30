/*
FUNCTION_NAME: FUN_036c61bc
ENTRY_POINT: 036c61bc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_3
*/


void FUN_036c61bc(undefined1 param_1 [16],undefined8 param_2,undefined1 param_3 [16],float param_4,
                 long *param_5)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
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
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 local_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 local_170;
  undefined8 local_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0 [2];
  
  if ((DAT_03ff754f & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_StringUtility_<>c_<ToSeparatedString>b__4_0__);
    thunk_FUN_01ad9084(PTR_DAT_03d9cfc8);
    thunk_FUN_01ad9084(PTR_DAT_03d9cc58);
    thunk_FUN_01ad9084(PTR_DAT_03d9cf38);
    thunk_FUN_01ad9084(PTR_DAT_03d9cf40);
    thunk_FUN_01ad9084(PTR_DAT_03d9ced0);
    thunk_FUN_01ad9084(StringLiteral_4340);
    thunk_FUN_01ad9084(StringLiteral_4342);
    thunk_FUN_01ad9084(PTR_DAT_03d9cf48);
    thunk_FUN_01ad9084(PTR_DAT_03d9ced8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_518);
    thunk_FUN_01ad9084(StringLiteral_980);
    thunk_FUN_01ad9084(PTR_DAT_03d9cc60);
    thunk_FUN_01ad9084(PTR_DAT_03d9cc68);
    thunk_FUN_01ad9084(PTR_DAT_03d9cc50);
    thunk_FUN_01ad9084(PTR_DAT_03d9cfd0);
    thunk_FUN_01ad9084(PTR_DAT_03d9cfd8);
    thunk_FUN_01ad9084(Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<get_indexCount>b__126_0__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<get_triangleCount>b__128_0__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(PTR_DAT_03d9cfe0);
    DAT_03ff754f = 1;
  }
  local_b0[0] = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  lStack_f8 = 0;
  local_100 = 0;
  local_e8 = 0;
  uStack_f0 = 0;
  if (param_5[0x2f] != 0) {
    FUN_03920f1c(param_5,param_5[0x2f],0);
    FUN_036c552c(param_5);
  }
  uVar8 = (**(code **)(*param_5 + 0x1c8))(param_5,*(undefined8 *)(*param_5 + 0x1d0));
  if (((uVar8 & 1) != 0) &&
     (uVar8 = (**(code **)(*param_5 + 0x2b8))(param_5,*(undefined8 *)(*param_5 + 0x2c0)),
     puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__,
     (uVar8 & 1) != 0)) {
    lVar16 = param_5[0x2a];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_0391f968(lVar16,0,0);
    puVar6 = PTR_DAT_03d9cc50;
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_03d9cc50 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar16 = FUN_02174fe4(*(undefined8 *)PTR_DAT_03d9cc60);
      lVar9 = FUN_0391c2b8(param_5,0);
      if ((lVar9 == 0) ||
         (FUN_01ed838c(lVar9,0,lVar16,*(undefined8 *)PTR_DAT_03d9cc58), puVar5 = StringLiteral_4342,
         lVar16 == 0)) {
LAB_036c6e38:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(int *)(lVar16 + 0x18) != 0) {
        lVar9 = FUN_02b59714(lVar16,*(int *)(lVar16 + 0x18) + -1,*(undefined8 *)StringLiteral_4342);
        fVar32 = (float)param_2;
        if (0 < *(int *)(lVar16 + 0x18)) {
          iVar17 = 0;
          do {
            lVar10 = FUN_02b59714(lVar16,iVar17,*(undefined8 *)puVar5);
            if (lVar10 == 0) goto LAB_036c6e38;
            uVar8 = FUN_03afa70c(lVar10,0);
            fVar32 = (float)param_2;
            if ((uVar8 & 1) != 0) {
              lVar9 = FUN_02b59714(lVar16,iVar17,*(undefined8 *)puVar5);
              break;
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 < *(int *)(lVar16 + 0x18));
        }
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_0217507c(lVar16,*(undefined8 *)PTR_DAT_03d9cc68);
        if (((char)param_5[0x2e] != '\0') || (FUN_036c5b1c(param_5), (char)param_5[0x2e] != '\0')) {
          if ((param_5[0x20] != 0) && (lVar16 = FUN_0391c2b8(param_5[0x20],0), lVar16 != 0)) {
            FUN_0391fb70(lVar16,1,0);
            if (((param_5[0x20] != 0) &&
                (lVar16 = FUN_01e8a9f8(param_5[0x20],
                                       *(undefined8 *)
                                        Method_Unity_VisualScripting_StringUtility_<>c_<ToSeparatedString>b__4_0__
                                      ), lVar9 != 0)) &&
               (uVar7 = FUN_03afac38(lVar9,0), lVar16 != 0)) {
              FUN_03afac74(lVar16,uVar7,0);
              if (param_5[0x20] != 0) {
                plVar13 = param_5 + 0x2a;
                uVar11 = FUN_0391c2b8(param_5[0x20],0);
                lVar16 = (**(code **)(*param_5 + 0x428))
                                   (param_5,uVar11,*(undefined8 *)(*param_5 + 0x430));
                param_5[0x2a] = lVar16;
                thunk_FUN_01b4f09c(plVar13,lVar16);
                if (param_5[0x2a] != 0) {
                  FUN_0392316c(param_5[0x2a],*(undefined8 *)PTR_DAT_03d9cfe0,0);
                  if (*plVar13 != 0) {
                    FUN_0391fb70(*plVar13,1,0);
                    if (*plVar13 != 0) {
                      plVar12 = (long *)FUN_0391fab4(*plVar13,0);
                      if (plVar12 == (long *)0x0) {
                        plVar12 = (long *)0x0;
                      }
                      else if (*plVar12 != *(long *)StringLiteral_980) {
                        plVar12 = (long *)0x0;
                      }
                      if (((param_5[0x20] != 0) &&
                          (lVar16 = FUN_0391c27c(param_5[0x20],0), lVar16 != 0)) &&
                         (uVar11 = FUN_03928c2c(lVar16,0), plVar12 != (long *)0x0)) {
                        FUN_03929660(plVar12,uVar11,0,0);
                        if (((*plVar13 != 0) &&
                            (lVar16 = FUN_01ed7390(*plVar13,*(undefined8 *)PTR_DAT_03d9cfc8),
                            lVar16 != 0)) &&
                           ((*(long *)(lVar16 + 0x30) != 0 &&
                            ((lVar10 = FUN_03928c2c(*(long *)(lVar16 + 0x30),0), lVar10 != 0 &&
                             (lVar10 = FUN_0391c2b8(lVar10,0), lVar10 != 0)))))) {
                          plVar13 = (long *)FUN_0391fab4(lVar10,0);
                          if (plVar13 == (long *)0x0) {
                            plVar13 = (long *)0x0;
                          }
                          else if (*plVar13 != *(long *)StringLiteral_980) {
                            plVar13 = (long *)0x0;
                          }
                          if (((*(long *)(lVar16 + 0x30) != 0) &&
                              (lVar10 = FUN_0391c2b8(*(long *)(lVar16 + 0x30),0), lVar10 != 0)) &&
                             (FUN_0391fb70(lVar10,1,0), plVar13 != (long *)0x0)) {
                            UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                                      (plVar13,0);
                            if (*(long *)(lVar16 + 0x30) != 0) {
                              fVar31 = param_4;
                              fVar27 = fVar32;
                              UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                                        (*(long *)(lVar16 + 0x30),0);
                              if (*(long *)(lVar16 + 0x30) != 0) {
                                fVar33 = fVar31;
                                fVar35 = fVar27;
                                FUN_03928280(*(long *)(lVar16 + 0x30),0);
                                if (*(long *)(lVar16 + 0x30) != 0) {
                                  fVar26 = fVar35;
                                  FUN_03928280(*(long *)(lVar16 + 0x30),0);
                                  lVar10 = param_5[0x2c];
                                  if (lVar10 != 0) {
                                    iVar17 = *(int *)(lVar10 + 0x18);
                                    *(undefined4 *)(lVar10 + 0x18) = 0;
                                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                    if (0 < iVar17) {
                                      FUN_03062488(*(undefined8 *)(lVar10 + 0x10),0,iVar17,0);
                                    }
                                    puVar5 = PTR_DAT_03d9cfd8;
                                    puVar6 = PTR_DAT_03d9ced8;
                                    lVar10 = param_5[0x27];
                                    if (lVar10 != 0) {
                                      fVar30 = fVar27 - fVar32;
                                      lVar22 = 0;
                                      iVar17 = 0;
                                      fVar35 = fVar30 + fVar35;
                                      while( true ) {
                                        if (*(long *)(lVar10 + 0x10) == 0) goto LAB_036c6e38;
                                        if (*(int *)(*(long *)(lVar10 + 0x10) + 0x18) <= iVar17)
                                        break;
                                        lVar10 = thunk_FUN_01afaadc(*(undefined8 *)puVar5);
                                        FUN_03081994(lVar10,0);
                                        if (lVar10 == 0) goto LAB_036c6e38;
                                        *(long *)(lVar10 + 0x18) = (long)param_5;
                                        thunk_FUN_01b4f09c((long *)(lVar10 + 0x18),param_5);
                                        if ((param_5[0x27] == 0) ||
                                           (lVar14 = *(long *)(param_5[0x27] + 0x10), lVar14 == 0))
                                        goto LAB_036c6e38;
                                        uVar11 = FUN_02b59714(lVar14,iVar17,*(undefined8 *)puVar6);
                                        lVar14 = FUN_036c6f80(param_5,uVar11,0,lVar16,param_5[0x2c])
                                        ;
                                        plVar20 = (long *)(lVar10 + 0x10);
                                        *plVar20 = lVar14;
                                        thunk_FUN_01b4f09c(plVar20,lVar14);
                                        lVar14 = *plVar20;
                                        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                          thunk_FUN_01ac7298();
                                        }
                                        uVar8 = FUN_03922f24(lVar14,0,0);
                                        if ((uVar8 & 1) == 0) {
                                          if ((*plVar20 == 0) ||
                                             (lVar14 = *(long *)(*plVar20 + 0x38), lVar14 == 0))
                                          goto LAB_036c6e38;
                                          FUN_03b1de40(lVar14,iVar17 == (int)param_5[0x26],0);
                                          if ((*plVar20 == 0) ||
                                             (lVar14 = *(long *)(*plVar20 + 0x38), lVar14 == 0))
                                          goto LAB_036c6e38;
                                          lVar14 = *(long *)(lVar14 + 0x118);
                                          uVar11 = thunk_FUN_01afaadc(*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<get_indexCount>b__126_0__
                                                  );
                                          FUN_021ffadc(uVar11,lVar10,*(undefined8 *)PTR_DAT_03d9cfd0
                                                       ,0);
                                          if (lVar14 == 0) goto LAB_036c6e38;
                                          FUN_022017b8(lVar14,uVar11,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<get_triangleCount>b__128_0__
                                                  );
                                          if ((*plVar20 == 0) ||
                                             (plVar15 = *(long **)(*plVar20 + 0x38),
                                             plVar15 == (long *)0x0)) goto LAB_036c6e38;
                                          if ((char)plVar15[0x24] != '\0') {
                                            (**(code **)(*plVar15 + 0x398))
                                                      (plVar15,*(undefined8 *)(*plVar15 + 0x3a0));
                                          }
                                          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                            thunk_FUN_01ac7298();
                                          }
                                          uVar8 = FUN_0391f968(lVar22,0,0);
                                          if ((uVar8 & 1) != 0) {
                                            if (lVar22 == 0) goto LAB_036c6e38;
                                            local_b0[0] = *(undefined8 *)(lVar22 + 0x48);
                                            uStack_b8 = *(undefined8 *)(lVar22 + 0x40);
                                            local_c0 = *(undefined8 *)(lVar22 + 0x38);
                                            uStack_c8 = *(undefined8 *)(lVar22 + 0x30);
                                            local_d0 = *(undefined8 *)(lVar22 + 0x28);
                                            if ((*plVar20 == 0) ||
                                               (lVar10 = *(long *)(*plVar20 + 0x38), lVar10 == 0))
                                            goto LAB_036c6e38;
                                            local_e0 = *(undefined8 *)(lVar10 + 0x48);
                                            lStack_f8 = *(long *)(lVar10 + 0x30);
                                            local_e8 = *(long *)(lVar10 + 0x40);
                                            uStack_f0 = *(undefined8 *)(lVar10 + 0x38);
                                            uVar8 = (ulong)local_d0 >> 0x20;
                                            local_d0 = CONCAT44((int)uVar8,4);
                                            local_100 = CONCAT44((int)((ulong)*(undefined8 *)
                                                                               (lVar10 + 0x28) >>
                                                                      0x20),4);
                                            if (*plVar20 == 0) goto LAB_036c6e38;
                                            local_c0 = *(undefined8 *)(*plVar20 + 0x38);
                                            thunk_FUN_01b4f09c(&local_c0);
                                            if (*plVar20 == 0) goto LAB_036c6e38;
                                            local_b0[0] = *(undefined8 *)(*plVar20 + 0x38);
                                            thunk_FUN_01b4f09c(local_b0);
                                            local_e8 = lVar22;
                                            thunk_FUN_01b4f09c(&local_e8,lVar22);
                                            lStack_f8 = lVar22;
                                            thunk_FUN_01b4f09c((ulong)&local_100 | 8,lVar22);
                                            uStack_128 = uStack_c8;
                                            local_130 = local_d0;
                                            uStack_118 = uStack_b8;
                                            uStack_120 = local_c0;
                                            local_110 = local_b0[0];
                                            FUN_03b17384(lVar22,&local_130,0);
                                            if (*plVar20 == 0) goto LAB_036c6e38;
                                            lVar10 = *(long *)(*plVar20 + 0x38);
                                            lStack_158 = lStack_f8;
                                            local_160 = local_100;
                                            lStack_148 = local_e8;
                                            uStack_150 = uStack_f0;
                                            local_140 = local_e0;
                                            if (lVar10 == 0) goto LAB_036c6e38;
                                            lStack_188 = lStack_f8;
                                            local_190 = local_100;
                                            lStack_178 = local_e8;
                                            uStack_180 = uStack_f0;
                                            local_170 = local_e0;
                                            FUN_03b17384(lVar10,&local_190,0);
                                          }
                                          if (*plVar20 == 0) goto LAB_036c6e38;
                                          lVar22 = *(long *)(*plVar20 + 0x38);
                                        }
                                        lVar10 = param_5[0x27];
                                        iVar17 = iVar17 + 1;
                                        if (lVar10 == 0) goto LAB_036c6e38;
                                      }
                                      FUN_03928018(plVar13,0);
                                      if (param_5[0x2c] == 0) goto LAB_036c6e38;
                                      uVar8 = (ulong)(uint)((fVar35 + fVar31 * (float)*(int *)(
                                                  param_5[0x2c] + 0x18)) -
                                                  (((fVar31 + fVar27) - (param_4 + fVar32)) + fVar26
                                                  ));
                                      FUN_039280a8(plVar13,0);
                                      UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                                                (plVar12,0);
                                      fVar32 = fVar33;
                                      UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                                                (plVar13,0);
                                      fVar27 = (float)uVar8;
                                      fVar33 = fVar33 - fVar32;
                                      if (0.0 < fVar33) {
                                        uVar11 = FUN_03928018(plVar12,0);
                                        FUN_03928018(plVar12,0);
                                        uVar8 = (ulong)(uint)(fVar27 - fVar33);
                                        FUN_039280a8(uVar11,plVar12,0);
                                      }
                                      lVar10 = FUN_01b47fd0(*(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__
                                                  ,4);
                                      FUN_039286f4(plVar12,lVar10,0);
                                      plVar13 = (long *)FUN_0391c27c(lVar9,0);
                                      if (((plVar13 == (long *)0x0) ||
                                          (*plVar13 != *(long *)StringLiteral_980)) ||
                                         (fVar33 = (float)
                                                  UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                                                            (plVar13,0),
                                         puVar4 = 
                                         Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__
                                         , fVar27 = DAT_00b55490, lVar10 == 0)) goto LAB_036c6e38;
                                      bVar3 = true;
                                      uVar21 = uVar8;
                                      iVar17 = 0;
                                      do {
                                        fVar26 = fVar33;
                                        if (!bVar3) {
                                          fVar26 = (float)uVar21;
                                        }
                                        uVar21 = 0;
                                        fVar34 = fVar30 + fVar33;
                                        if (!bVar3) {
                                          fVar34 = fVar32 + (float)uVar8;
                                        }
                                        puVar19 = (undefined4 *)(lVar10 + 0x28);
                                        do {
                                          if (*(uint *)(lVar10 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                                            FUN_01b48180();
                                          }
                                          fVar28 = (float)puVar19[-1];
                                          fVar23 = (float)FUN_0392a520(puVar19[-2],fVar28,*puVar19,
                                                                       plVar13,0);
                                          fVar25 = fVar23;
                                          if (!bVar3) {
                                            fVar25 = fVar28;
                                          }
                                          if (fVar25 < fVar26) {
                                            fVar25 = fVar23;
                                            if (!bVar3) {
                                              fVar25 = fVar28;
                                            }
                                            if (DAT_03fed263 == '\0') {
                                              thunk_FUN_01ad9084(puVar4);
                                              DAT_03fed263 = '\x01';
                                            }
                                            fVar24 = ABS(fVar25);
                                            if (ABS(fVar25) <= ABS(fVar26)) {
                                              fVar24 = ABS(fVar26);
                                            }
                                            fVar24 = fVar24 * fVar27;
                                            fVar29 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
                                            if (fVar24 <= fVar29) {
                                              fVar24 = fVar29;
                                            }
                                            if (ABS(fVar26 - fVar25) < fVar24) goto LAB_036c6bd0;
LAB_036c6c48:
                                            if (*(int *)(*(long *)StringLiteral_518 + 0xe0) == 0) {
                                              thunk_FUN_01ac7298();
                                            }
                                            FUN_03af9e08(plVar12,iVar17,0,0,0);
                                            break;
                                          }
LAB_036c6bd0:
                                          fVar25 = fVar23;
                                          if (!bVar3) {
                                            fVar25 = fVar28;
                                          }
                                          if (fVar34 < fVar25) {
                                            if (!bVar3) {
                                              fVar23 = fVar28;
                                            }
                                            if (DAT_03fed263 == '\0') {
                                              thunk_FUN_01ad9084(puVar4);
                                              DAT_03fed263 = '\x01';
                                            }
                                            fVar25 = ABS(fVar23);
                                            if (ABS(fVar23) <= ABS(fVar34)) {
                                              fVar25 = ABS(fVar34);
                                            }
                                            fVar25 = fVar25 * fVar27;
                                            fVar28 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
                                            if (fVar25 <= fVar28) {
                                              fVar25 = fVar28;
                                            }
                                            if (fVar25 <= ABS(fVar34 - fVar23)) goto LAB_036c6c48;
                                          }
                                          uVar21 = uVar21 + 1;
                                          puVar19 = puVar19 + 3;
                                        } while (uVar21 != 4);
                                        puVar6 = PTR_DAT_03d9cf48;
                                        uVar21 = uVar8 & 0xffffffff;
                                        bVar3 = false;
                                        bVar1 = iVar17 == 0;
                                        iVar17 = 1;
                                      } while (bVar1);
                                      lVar10 = param_5[0x2c];
                                      if (lVar10 == 0) goto LAB_036c6e38;
                                      iVar17 = 0;
                                      iVar18 = -1;
                                      while (iVar17 < *(int *)(lVar10 + 0x18)) {
                                        lVar10 = FUN_02b59714(lVar10,iVar17,*(undefined8 *)puVar6);
                                        if ((lVar10 == 0) ||
                                           (lVar10 = *(long *)(lVar10 + 0x30), lVar10 == 0))
                                        goto LAB_036c6e38;
                                        uVar11 = FUN_03927cc4(lVar10,0);
                                        FUN_03927d54(uVar11,0,lVar10,0);
                                        uVar11 = FUN_03927de0(lVar10,0);
                                        fVar32 = 0.0;
                                        UnityEngine_UIElements_StyleSheets_StyleSelectorHelper__MatchesSelector
                                                  (uVar11,0,lVar10,0);
                                        uVar11 = FUN_03927efc(lVar10,0);
                                        if (param_5[0x2c] == 0) goto LAB_036c6e38;
                                        iVar2 = *(int *)(param_5[0x2c] + 0x18);
                                        FUN_03928134(lVar10,0);
                                        FUN_03927f8c(uVar11,fVar31 * fVar32 +
                                                            fVar35 + fVar31 * (float)(iVar18 + iVar2
                                                                                     ),lVar10,0);
                                        uVar11 = FUN_03928018(lVar10,0);
                                        FUN_039280a8(uVar11,fVar31,lVar10,0);
                                        lVar10 = param_5[0x2c];
                                        iVar17 = iVar17 + 1;
                                        iVar18 = iVar18 + -1;
                                        if (lVar10 == 0) goto LAB_036c6e38;
                                      }
                                      FUN_036c7270((int)param_5[0x29],0,0x3f800000,param_5);
                                      if ((param_5[0x20] != 0) &&
                                         (lVar10 = FUN_0391c2b8(param_5[0x20],0), lVar10 != 0)) {
                                        FUN_0391fb70(lVar10,0,0);
                                        lVar16 = FUN_0391c2b8(lVar16,0);
                                        if (lVar16 != 0) {
                                          FUN_0391fb70(lVar16,0,0);
                                          lVar16 = (**(code **)(*param_5 + 0x408))
                                                             (param_5,lVar9,
                                                              *(undefined8 *)(*param_5 + 0x410));
                                          param_5[0x2b] = lVar16;
                                          thunk_FUN_01b4f09c(param_5 + 0x2b);
                                          return;
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
          goto LAB_036c6e38;
        }
      }
    }
  }
  return;
}


