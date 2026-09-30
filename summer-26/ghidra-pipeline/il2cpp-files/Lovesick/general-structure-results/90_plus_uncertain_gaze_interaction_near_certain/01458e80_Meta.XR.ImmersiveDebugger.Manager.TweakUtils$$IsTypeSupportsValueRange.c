/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils$$IsTypeSupportsValueRange
ENTRY_POINT: 01458e80
PROGRAM: Lovesick-libil2cpp.so
SCORE: 209
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_6;functionality_possible_biometrics_hits_1
*/


long Meta_XR_ImmersiveDebugger_Manager_TweakUtils__IsTypeSupportsValueRange(long param_1)

{
  char cVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined8 *puVar18;
  long unaff_x19;
  long unaff_x20;
  int iVar19;
  undefined8 *unaff_x21;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack000000000000003c;
  long in_stack_00000048;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xe70));
  thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
  thunk_FUN_00d48444(System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xa92) = 1;
  uStack000000000000003c = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000008 = 0;
  lVar8 = thunk_FUN_00d62348(*unaff_x21);
  if ((lVar8 != 0) && (FUN_0160aa4c(lVar8,0), unaff_x19 != 0)) {
    if ((DAT_03776a98 & 1) == 0) {
      thunk_FUN_00d48444(StringLiteral_11854);
      DAT_03776a98 = 1;
    }
    if ((*(long *)(unaff_x19 + 0x70) == 0) || (*(int *)(*(long *)(unaff_x19 + 0x70) + 0x18) < 1)) {
      return lVar8;
    }
    lVar8 = thunk_FUN_00d62348(*unaff_x21);
    puVar3 = PTR_DAT_033ee5a0;
    if (lVar8 != 0) {
      FUN_0160aa4c(lVar8,0);
      FUN_0160c8e8(lVar8,*(undefined8 *)puVar3,0);
      puVar3 = PTR_DAT_033f38b8;
      if (*(long *)(unaff_x19 + 0x78) != 0) {
        if (*(int *)(*(long *)(unaff_x19 + 0x78) + 0x18) < 1) {
LAB_01458fd8:
          puVar7 = StringLiteral_13560;
          puVar6 = StringLiteral_3287;
          puVar5 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__;
          puVar3 = Method_Obi_ObiNativeList<Aabb>_Dispose__;
          fVar2 = DAT_028aa020;
          lVar9 = *(long *)(unaff_x19 + 0x58);
          if (lVar9 != 0) {
            iVar19 = 0;
            plVar24 = (long *)StringLiteral_13336;
            plVar15 = (long *)PTR_DAT_033ead30;
            while( true ) {
              if (*(int *)(lVar9 + 0x18) <= iVar19) {
                return lVar8;
              }
              FUN_0132138c(lVar9,iVar19,&stack0x00000048,*(undefined8 *)PTR_DAT_033ee2d8);
              lVar9 = in_stack_00000048;
              FUN_0160c8e8(lVar8,*(undefined8 *)StringLiteral_8935,0);
              plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
              if (plVar10 == (long *)0x0) break;
              if ((*plVar24 != 0) &&
                 (lVar11 = thunk_FUN_00d6225c(*plVar24,*(undefined8 *)(*plVar10 + 0x40)),
                 lVar11 == 0)) {
LAB_01459954:
                uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar13,0);
              }
              if ((int)plVar10[3] == 0) goto LAB_01459950;
              plVar10[4] = *plVar24;
              if (lVar9 == 0) break;
              lVar11 = FUN_0176eb1c(lVar9 + 0x38,0);
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0)
                 ) goto LAB_01459954;
              uVar20 = *(uint *)(plVar10 + 3);
              if (uVar20 < 2) {
LAB_01459950:
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar10[5] = lVar11;
              if (*(long *)
                   Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                  != 0) {
                lVar11 = thunk_FUN_00d6225c(*(long *)
                                             Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                            ,*(undefined8 *)(*plVar10 + 0x40));
                if (lVar11 == 0) goto LAB_01459954;
                uVar20 = *(uint *)(plVar10 + 3);
              }
              if (uVar20 < 3) goto LAB_01459950;
              plVar10[6] = *(long *)
                            Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
              ;
              lVar11 = FUN_0176eb1c(lVar9 + 0x3c,0);
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0)
                 ) goto LAB_01459954;
              uVar20 = *(uint *)(plVar10 + 3);
              if (uVar20 < 4) goto LAB_01459950;
              plVar10[7] = lVar11;
              if (*plVar15 != 0) {
                lVar11 = thunk_FUN_00d6225c(*plVar15,*(undefined8 *)(*plVar10 + 0x40));
                if (lVar11 == 0) goto LAB_01459954;
                uVar20 = *(uint *)(plVar10 + 3);
              }
              if (uVar20 < 5) goto LAB_01459950;
              plVar10[8] = *plVar15;
              uVar13 = FUN_01600844(plVar10,0);
              FUN_0160c430(lVar8,uVar13,0);
              lVar11 = *(long *)(lVar9 + 0x10);
              if (lVar11 == 0) break;
              lVar12 = 4;
              while( true ) {
                uVar22 = lVar12 - 4;
                uVar20 = (uint)uVar22;
                if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar20) break;
                if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_01459950;
                lVar11 = *(long *)(lVar11 + lVar12 * 8);
                if (lVar11 == 0) goto LAB_01459920;
                uVar14 = FUN_014440c0(lVar11,0);
                if ((uVar14 & 1) == 0) {
                  plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,9);
                  if (plVar15 == (long *)0x0) goto LAB_01459920;
                  if ((*(long *)puVar3 != 0) &&
                     (lVar11 = thunk_FUN_00d6225c(*(long *)puVar3,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar11 == 0)) goto LAB_01459954;
                  if ((int)plVar15[3] == 0) goto LAB_01459950;
                  plVar15[4] = *(long *)puVar3;
                  if ((*(long *)(unaff_x19 + 0x70) == 0) ||
                     (FUN_0132138c(*(long *)(unaff_x19 + 0x70),uVar22 & 0xffffffff,&stack0x00000048,
                                   *(undefined8 *)StringLiteral_11624), in_stack_00000048 == 0))
                  goto LAB_01459920;
                  lVar11 = *(long *)(in_stack_00000048 + 0x10);
                  if ((lVar11 != 0) &&
                     (lVar23 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar23 == 0)) goto LAB_01459954;
                  uVar17 = *(uint *)(plVar15 + 3);
                  if (uVar17 < 2) goto LAB_01459950;
                  plVar15[5] = lVar11;
                  if (*(long *)puVar6 != 0) {
                    lVar11 = thunk_FUN_00d6225c(*(long *)puVar6,*(undefined8 *)(*plVar15 + 0x40));
                    if (lVar11 == 0) goto LAB_01459954;
                    uVar17 = *(uint *)(plVar15 + 3);
                  }
                  if (uVar17 < 3) goto LAB_01459950;
                  plVar15[6] = *(long *)puVar6;
                  lVar11 = *(long *)(lVar9 + 0x10);
                  if (lVar11 == 0) goto LAB_01459920;
                  if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_01459950;
                  lVar11 = *(long *)(lVar11 + lVar12 * 8);
                  if (lVar11 == 0) goto LAB_01459920;
                  lVar11 = FUN_01444238(lVar11,0);
                  if ((lVar11 != 0) &&
                     (lVar23 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar23 == 0)) goto LAB_01459954;
                  uVar17 = *(uint *)(plVar15 + 3);
                  if (uVar17 < 4) goto LAB_01459950;
                  plVar15[7] = lVar11;
                  if (*(long *)puVar6 != 0) {
                    lVar11 = thunk_FUN_00d6225c(*(long *)puVar6,*(undefined8 *)(*plVar15 + 0x40));
                    if (lVar11 == 0) goto LAB_01459954;
                    uVar17 = *(uint *)(plVar15 + 3);
                  }
                  if (uVar17 < 5) goto LAB_01459950;
                  plVar15[8] = *(long *)puVar6;
                  lVar11 = *(long *)(lVar9 + 0x10);
                  if (lVar11 == 0) goto LAB_01459920;
                  if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_01459950;
                  lVar11 = *(long *)(lVar11 + lVar12 * 8);
                  if (lVar11 == 0) goto LAB_01459920;
                  uStack000000000000003c = FUN_01444120(lVar11,0);
                  lVar11 = FUN_0176eb1c(&stack0x0000003c,0);
                  if ((lVar11 != 0) &&
                     (lVar23 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar23 == 0)) goto LAB_01459954;
                  uVar17 = *(uint *)(plVar15 + 3);
                  if (uVar17 < 6) goto LAB_01459950;
                  plVar15[9] = lVar11;
                  if (*(long *)
                       Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                      != 0) {
                    lVar11 = thunk_FUN_00d6225c(*(long *)
                                                 Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                                ,*(undefined8 *)(*plVar15 + 0x40));
                    if (lVar11 == 0) goto LAB_01459954;
                    uVar17 = *(uint *)(plVar15 + 3);
                  }
                  if (uVar17 < 7) goto LAB_01459950;
                  plVar15[10] = *(long *)
                                 Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                  ;
                  lVar11 = *(long *)(lVar9 + 0x10);
                  if (lVar11 == 0) goto LAB_01459920;
                  if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_01459950;
                  lVar11 = *(long *)(lVar11 + lVar12 * 8);
                  if (lVar11 == 0) goto LAB_01459920;
                  uStack000000000000003c = FUN_014441ac(lVar11,0);
                  lVar11 = FUN_0176eb1c(&stack0x0000003c,0);
                  if ((lVar11 != 0) &&
                     (lVar23 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar23 == 0)) goto LAB_01459954;
                  uVar17 = *(uint *)(plVar15 + 3);
                  if (uVar17 < 8) goto LAB_01459950;
                  plVar15[0xb] = lVar11;
                  if (*(long *)System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo
                      != 0) {
                    lVar11 = thunk_FUN_00d6225c(*(long *)
                                                 System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo
                                                ,*(undefined8 *)(*plVar15 + 0x40));
                    if (lVar11 == 0) goto LAB_01459954;
                    uVar17 = *(uint *)(plVar15 + 3);
                  }
                  if (uVar17 < 9) goto LAB_01459950;
                  plVar15[0xc] = *(long *)
                                  System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo
                  ;
                  uVar13 = FUN_01600844(plVar15,0);
                  FUN_0160c430(lVar8,uVar13,0);
                  lVar11 = *(long *)(lVar9 + 0x10);
                  if (lVar11 == 0) goto LAB_01459920;
                  if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_01459950;
                  lVar11 = *(long *)(lVar11 + lVar12 * 8);
                  if (lVar11 == 0) goto LAB_01459920;
                  in_stack_00000018 = *(undefined8 *)(lVar11 + 0x48);
                  uVar13 = *(undefined8 *)(lVar11 + 0x40);
                  in_stack_00000028 = *(undefined8 *)(lVar11 + 0x58);
                  in_stack_00000020 = *(undefined8 *)(lVar11 + 0x50);
                  in_stack_00000010 = uVar13;
                  fVar25 = (float)FUN_01431624(&stack0x00000010,0);
                  if (DAT_03774e1e == '\0') {
                    thunk_FUN_00d48444(puVar5);
                    DAT_03774e1e = '\x01';
                  }
                  fVar25 = fVar25 - *(float *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
                  fVar27 = (float)uVar13 - *(float *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc);
                  if (fVar2 <= fVar25 * fVar25 + fVar27 * fVar27) {
LAB_01459668:
                    lVar11 = *(long *)(lVar9 + 0x10);
                    if (lVar11 == 0) goto LAB_01459920;
                    if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_01459950;
                    lVar11 = *(long *)(lVar11 + lVar12 * 8);
                    if (lVar11 == 0) goto LAB_01459920;
                    in_stack_00000018 = *(undefined8 *)(lVar11 + 0x48);
                    uVar13 = *(undefined8 *)(lVar11 + 0x40);
                    in_stack_00000028 = *(undefined8 *)(lVar11 + 0x58);
                    in_stack_00000020 = *(undefined8 *)(lVar11 + 0x50);
                    in_stack_00000010 = uVar13;
                    uVar26 = FUN_01431624(&stack0x00000010,0);
                    in_stack_00000008 = CONCAT44((int)uVar13,uVar26);
                    uVar13 = FUN_02691230(&stack0x00000008,*(undefined8 *)puVar7,0);
                    lVar11 = *(long *)(lVar9 + 0x10);
                    if (lVar11 == 0) goto LAB_01459920;
                    if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_01459950;
                    lVar11 = *(long *)(lVar11 + lVar12 * 8);
                    if (lVar11 == 0) goto LAB_01459920;
                    in_stack_00000018 = *(undefined8 *)(lVar11 + 0x48);
                    uVar16 = *(undefined8 *)(lVar11 + 0x40);
                    in_stack_00000028 = *(undefined8 *)(lVar11 + 0x58);
                    in_stack_00000020 = *(undefined8 *)(lVar11 + 0x50);
                    in_stack_00000010 = uVar16;
                    uVar26 = FUN_01431600(&stack0x00000010,0);
                    in_stack_00000008 = CONCAT44((int)uVar16,uVar26);
                    uVar16 = FUN_02691230(&stack0x00000008,*(undefined8 *)puVar7,0);
                    FUN_0160dca4(lVar8,*(undefined8 *)Mono_Security_X509_X509Certificate_TypeInfo,
                                 uVar13,uVar16,0);
                  }
                  else {
                    lVar11 = *(long *)(lVar9 + 0x10);
                    if (lVar11 == 0) goto LAB_01459920;
                    if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_01459950;
                    lVar11 = *(long *)(lVar11 + lVar12 * 8);
                    if (lVar11 == 0) goto LAB_01459920;
                    in_stack_00000018 = *(undefined8 *)(lVar11 + 0x48);
                    uVar13 = *(undefined8 *)(lVar11 + 0x40);
                    in_stack_00000028 = *(undefined8 *)(lVar11 + 0x58);
                    in_stack_00000020 = *(undefined8 *)(lVar11 + 0x50);
                    in_stack_00000010 = uVar13;
                    fVar25 = (float)FUN_01431600(&stack0x00000010,0);
                    if (DAT_03774d77 == '\0') {
                      thunk_FUN_00d48444(puVar5);
                      DAT_03774d77 = '\x01';
                    }
                    fVar25 = fVar25 - **(float **)(*(long *)puVar5 + 0xb8);
                    fVar27 = (float)uVar13 - (*(float **)(*(long *)puVar5 + 0xb8))[1];
                    if (fVar2 <= fVar25 * fVar25 + fVar27 * fVar27) goto LAB_01459668;
                  }
                  uVar13 = *(undefined8 *)(lVar9 + 0x30);
                  if (DAT_03774e1e == '\0') {
                    thunk_FUN_00d48444(puVar5);
                    DAT_03774e1e = '\x01';
                  }
                  puVar18 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                  fVar25 = (float)uVar13 - (float)puVar18[1];
                  fVar27 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)puVar18[1] >> 0x20);
                  if (fVar2 <= fVar25 * fVar25 + fVar27 * fVar27) {
LAB_0145979c:
                    in_stack_00000008 = *(undefined8 *)(lVar9 + 0x30);
                    uVar13 = FUN_02691230(&stack0x00000008,*(undefined8 *)puVar7,0);
                    in_stack_00000008 = *(undefined8 *)(lVar9 + 0x28);
                    uVar16 = FUN_02691230(&stack0x00000008,*(undefined8 *)puVar7,0);
                    FUN_0160dca4(lVar8,*(undefined8 *)
                                        Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_SetResult__
                                 ,uVar13,uVar16,0);
                  }
                  else {
                    uVar13 = *(undefined8 *)(lVar9 + 0x28);
                    if (DAT_03774d77 == '\0') {
                      thunk_FUN_00d48444(puVar5);
                      DAT_03774d77 = '\x01';
                      puVar18 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                    }
                    fVar25 = (float)uVar13 - (float)*puVar18;
                    fVar27 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)*puVar18 >> 0x20);
                    if (fVar2 <= fVar25 * fVar25 + fVar27 * fVar27) goto LAB_0145979c;
                  }
                  FUN_0160c8e8(lVar8,*(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,0);
                }
                else {
                  if ((*(long *)(unaff_x19 + 0x70) == 0) ||
                     (FUN_0132138c(*(long *)(unaff_x19 + 0x70),uVar22 & 0xffffffff,&stack0x00000048,
                                   *(undefined8 *)StringLiteral_11624), in_stack_00000048 == 0))
                  goto LAB_01459920;
                  uVar13 = FUN_01600424(*(undefined8 *)puVar3,
                                        *(undefined8 *)(in_stack_00000048 + 0x10),
                                        *(undefined8 *)
                                         Method_System_Dynamic_Utils_ExpressionUtils_ValidateOneArgument__
                                        ,0);
                  FUN_0160c430(lVar8,uVar13,0);
                  cVar1 = *(char *)(unaff_x19 + 0x49);
                  uVar13 = *(undefined8 *)(unaff_x19 + 0x80);
                  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ +
                              0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar22 = FUN_01457470(uVar22 & 0xffffffff,cVar1 != '\0',uVar13);
                  if ((uVar22 & 1) == 0) {
                    FUN_0160c430(lVar8,*(undefined8 *)
                                        Method_System_Nullable<DesignerSerializationVisibility>__ctor__
                                 ,0);
                  }
                  else {
                    lVar23 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
                    lVar11 = *(long *)(lVar23 + 0x38);
                    if (lVar11 == 0) {
                      FUN_00d59478(lVar23);
                      lVar11 = *(long *)(lVar23 + 0x38);
                    }
                    lVar11 = *(long *)(lVar11 + 0x10);
                    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                      lVar11 = FUN_00d5941c();
                    }
                    if (*(int *)(lVar11 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar11 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
                    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                      lVar11 = FUN_00d5941c();
                    }
                    FUN_0160dd60(lVar8,*(undefined8 *)
                                        Method_Unity_Collections_NativeArray<int3>_get_IsCreated__,
                                 **(undefined8 **)(lVar11 + 0xb8),0);
                  }
                }
                lVar11 = *(long *)(lVar9 + 0x10);
                lVar12 = lVar12 + 1;
                if (lVar11 == 0) goto LAB_01459920;
              }
              FUN_0160c8e8(lVar8,*(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,0);
              FUN_0160c430(lVar8,*(undefined8 *)
                                  Method_Unity_Collections_NativeArray_Enumerator<XRRaycastHit>_MoveNext__
                           ,0);
              plVar24 = (long *)StringLiteral_13336;
              puVar4 = PTR_DAT_033f38b8;
              plVar15 = (long *)PTR_DAT_033ead30;
              lVar11 = *(long *)(lVar9 + 0x18);
              if (lVar11 == 0) break;
              iVar21 = 0;
              while( true ) {
                lVar11 = *(long *)(lVar11 + 0x10);
                if (lVar11 == 0) goto LAB_01459920;
                if (*(int *)(lVar11 + 0x18) <= iVar21) break;
                FUN_0132138c(lVar11,iVar21,&stack0x00000048,
                             *(undefined8 *)
                              Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                            );
                if ((in_stack_00000048 == 0) || (*(long *)(in_stack_00000048 + 0x10) == 0))
                goto LAB_01459920;
                uVar13 = FUN_0268b6ac(*(long *)(in_stack_00000048 + 0x10),0);
                uVar13 = FUN_015f5b28(uVar13,*(undefined8 *)puVar4,0);
                FUN_0160c430(lVar8,uVar13,0);
                lVar11 = *(long *)(lVar9 + 0x18);
                iVar21 = iVar21 + 1;
                if (lVar11 == 0) goto LAB_01459920;
              }
              FUN_0160c8e8(lVar8,*(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,0);
              lVar9 = *(long *)(unaff_x19 + 0x58);
              iVar19 = iVar19 + 1;
              if (lVar9 == 0) break;
            }
          }
        }
        else {
          FUN_0160c430(lVar8,*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_TryGetValue__
                       ,0);
          puVar5 = Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo;
          lVar9 = *(long *)(unaff_x19 + 0x78);
          if (lVar9 != 0) {
            iVar19 = 0;
            do {
              if (*(int *)(lVar9 + 0x18) <= iVar19) {
                FUN_0160c8c8(lVar8,0);
                goto LAB_01458fd8;
              }
              FUN_0132138c(lVar9,iVar19,&stack0x00000048,*(undefined8 *)puVar5);
              FUN_0160c430(lVar8,in_stack_00000048,0);
              FUN_0160c430(lVar8,*(undefined8 *)puVar3,0);
              lVar9 = *(long *)(unaff_x19 + 0x78);
              iVar19 = iVar19 + 1;
            } while (lVar9 != 0);
          }
        }
      }
    }
  }
LAB_01459920:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


