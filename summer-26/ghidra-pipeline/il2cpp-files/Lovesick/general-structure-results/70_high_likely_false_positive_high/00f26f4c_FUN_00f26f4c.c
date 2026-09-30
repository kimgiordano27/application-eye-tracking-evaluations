/*
FUNCTION_NAME: FUN_00f26f4c
ENTRY_POINT: 00f26f4c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_00f26f4c(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar17;
  uint uVar18;
  uint local_64;
  
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__;
  if ((DAT_03775590 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(System_Data_LikeNode_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1342);
    thunk_FUN_00d48444(Meta_Voice_Logging_LoggerRegistry_<>c__DisplayClass34_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ParseCommentAsync>d__16>__
                      );
    thunk_FUN_00d48444(System_Security_SecurityElement_SecurityAttribute_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<MRUKAnchor,_EffectMesh_EffectMeshObject>_MoveNext__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<DFNode>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3951);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_u8__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_IEnumerator<KeyValuePair<string,_Variant>>_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRReferencePoint,_ARReferencePoint>_get_trackableId__
                      );
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<Vector3>_Copy__);
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10706);
    thunk_FUN_00d48444(System_Func<EnumMemberAttribute,_string>_TypeInfo);
    thunk_FUN_00d48444(System_Func<STMAutoDelayData,_string>_TypeInfo);
    thunk_FUN_00d48444(System_Linq_Expressions_TypedConstantExpression_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3c10);
    thunk_FUN_00d48444(StringLiteral_10578);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_f32__);
    thunk_FUN_00d48444(StringLiteral_6104);
    thunk_FUN_00d48444(System_Xml_Serialization_XmlEnumAttribute_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2542);
    thunk_FUN_00d48444(Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_ButtonDown__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<Camera>__);
    thunk_FUN_00d48444(StringLiteral_7861);
    thunk_FUN_00d48444(Method_System_Security_Cryptography_Oid_FromOidValue__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_List<MB3_TextureCombiner_TemporaryTexture>_TypeInfo
                      );
    thunk_FUN_00d48444(FullSerializer_fsAotCompilationManager_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_UIElements_DefaultEventSystem_Input_TypeInfo);
    thunk_FUN_00d48444(Oculus_Platform_Request<PlatformInitialize>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_OrderBy<SpriteGlyph,_uint>__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_PanelEventHandler_OnPanelDestroyed__);
    thunk_FUN_00d48444(OVRVirtualKeyboard_KeyboardEventListener_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10110);
    thunk_FUN_00d48444(
                      Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                      );
    thunk_FUN_00d48444(
                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_14253);
    thunk_FUN_00d48444(StringLiteral_4745);
    DAT_03775590 = 1;
  }
  local_64 = 0;
  plVar10 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar7 = StringLiteral_10110;
  puVar6 = Method_UnityEngine_UIElements_PanelEventHandler_OnPanelDestroyed__;
  puVar5 = Meta_Voice_Logging_LoggerRegistry_<>c__DisplayClass34_0_TypeInfo;
  puVar4 = Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter_TypeInfo;
  puVar3 = PTR_DAT_033ea8a0;
  if (plVar10 != (long *)0x0) {
    FUN_0160aa4c(plVar10,0);
    lVar11 = FUN_00f34e74(param_1,1,0);
    lVar12 = FUN_00f35494(param_1,1,1,0);
    FUN_0160c8e8(plVar10,*(undefined8 *)puVar6,0);
    FUN_0160c8e8(plVar10,*(undefined8 *)puVar4,0);
    FUN_0160c8c8(plVar10,0);
    FUN_0160c8e8(plVar10,*(undefined8 *)puVar7,0);
    FUN_0160c8e8(plVar10,*(undefined8 *)puVar5,0);
    plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,5);
    puVar3 = System_Data_LikeNode_TypeInfo;
    if (plVar13 != (long *)0x0) {
      if ((*(long *)System_Data_LikeNode_TypeInfo != 0) &&
         (lVar14 = thunk_FUN_00d6225c(*(long *)System_Data_LikeNode_TypeInfo,
                                      *(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
      goto LAB_00f27db4;
      uVar17 = *(uint *)(plVar13 + 3);
      if (uVar17 != 0) {
        plVar13[4] = *(long *)puVar3;
        if (lVar12 != 0) {
          lVar14 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar14 == 0) goto LAB_00f27db4;
          uVar17 = *(uint *)(plVar13 + 3);
        }
        puVar3 = System_Linq_Expressions_TypedConstantExpression_TypeInfo;
        if (1 < uVar17) {
          plVar13[5] = lVar12;
          lVar14 = *(long *)puVar3;
          if (lVar14 != 0) {
            lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar14 == 0) goto LAB_00f27db4;
            uVar17 = *(uint *)(plVar13 + 3);
          }
          if (2 < uVar17) {
            plVar13[6] = *(long *)puVar3;
            if (lVar12 != 0) {
              lVar14 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar13 + 0x40));
              if (lVar14 == 0) goto LAB_00f27db4;
              uVar17 = *(uint *)(plVar13 + 3);
            }
            puVar3 = UnityEngine_UIElements_DefaultEventSystem_Input_TypeInfo;
            if (3 < uVar17) {
              plVar13[7] = lVar12;
              if (*(long *)puVar3 != 0) {
                lVar14 = thunk_FUN_00d6225c(*(long *)puVar3,*(undefined8 *)(*plVar13 + 0x40));
                if (lVar14 == 0) goto LAB_00f27db4;
                uVar17 = *(uint *)(plVar13 + 3);
              }
              puVar6 = StringLiteral_2542;
              puVar5 = 
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ParseCommentAsync>d__16>__
              ;
              puVar4 = System_Func<STMAutoDelayData,_string>_TypeInfo;
              if (4 < uVar17) {
                plVar13[8] = *(long *)puVar3;
                uVar15 = FUN_01600844(plVar13,0);
                FUN_0160c8e8(plVar10,uVar15,0);
                FUN_0160c8e8(plVar10,*(undefined8 *)puVar6,0);
                FUN_0160c8e8(plVar10,*(undefined8 *)puVar4,0);
                FUN_0160c8c8(plVar10,0);
                FUN_0160c8e8(plVar10,*(undefined8 *)puVar5,0);
                plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
                puVar4 = StringLiteral_10578;
                if (plVar13 == (long *)0x0) goto LAB_00f27dc0;
                if ((*(long *)StringLiteral_10578 != 0) &&
                   (lVar14 = thunk_FUN_00d6225c(*(long *)StringLiteral_10578,
                                                *(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
LAB_00f27db4:
                  uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar15,0);
                }
                uVar17 = *(uint *)(plVar13 + 3);
                if (uVar17 != 0) {
                  plVar13[4] = *(long *)puVar4;
                  if (lVar12 != 0) {
                    lVar14 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar13 + 0x40));
                    if (lVar14 == 0) goto LAB_00f27db4;
                    uVar17 = *(uint *)(plVar13 + 3);
                  }
                  puVar4 = 
                  System_Collections_Generic_IEnumerator<KeyValuePair<string,_Variant>>_TypeInfo;
                  if (1 < uVar17) {
                    plVar13[5] = lVar12;
                    lVar12 = *(long *)puVar4;
                    if (lVar12 != 0) {
                      lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar13 + 0x40));
                      if (lVar12 == 0) goto LAB_00f27db4;
                      uVar17 = *(uint *)(plVar13 + 3);
                    }
                    if (2 < uVar17) {
                      plVar13[6] = *(long *)puVar4;
                      if (lVar11 != 0) {
                        lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40));
                        if (lVar12 == 0) goto LAB_00f27db4;
                        uVar17 = *(uint *)(plVar13 + 3);
                      }
                      puVar4 = 
                      Method_System_Collections_Generic_Dictionary_Enumerator<MRUKAnchor,_EffectMesh_EffectMeshObject>_MoveNext__
                      ;
                      if (3 < uVar17) {
                        plVar13[7] = lVar11;
                        lVar12 = *(long *)puVar4;
                        if (lVar12 != 0) {
                          lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar13 + 0x40));
                          if (lVar12 == 0) goto LAB_00f27db4;
                          uVar17 = *(uint *)(plVar13 + 3);
                        }
                        puVar9 = StringLiteral_6104;
                        puVar8 = StringLiteral_4745;
                        puVar7 = StringLiteral_1342;
                        puVar6 = OVRVirtualKeyboard_KeyboardEventListener_TypeInfo;
                        puVar5 = Oculus_Platform_Request<PlatformInitialize>_TypeInfo;
                        if (4 < uVar17) {
                          plVar13[8] = *(long *)puVar4;
                          uVar15 = FUN_01600844(plVar13,0);
                          FUN_0160c8e8(plVar10,uVar15,0);
                          uVar15 = extraout_x1;
                          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            uVar15 = extraout_x1_00;
                          }
                          uVar15 = FUN_00f27dc4(*(undefined8 *)puVar9,uVar15,param_2,param_3 & 1);
                          uVar15 = FUN_01600424(*(undefined8 *)puVar6,uVar15,*(undefined8 *)puVar3,0
                                               );
                          FUN_0160c8e8(plVar10,uVar15,0);
                          FUN_0160c8e8(plVar10,*(undefined8 *)puVar5,0);
                          FUN_0160c8c8(plVar10,0);
                          uVar15 = FUN_01600424(*(undefined8 *)
                                                 Method_System_Linq_Enumerable_OrderBy<SpriteGlyph,_uint>__
                                                ,lVar11,*(undefined8 *)
                                                                                                                  
                                                  FullSerializer_fsAotCompilationManager_TypeInfo,0)
                          ;
                          FUN_0160c8e8(plVar10,uVar15,0);
                          FUN_0160c8e8(plVar10,*(undefined8 *)puVar7,0);
                          FUN_0160c8c8(plVar10,0);
                          puVar7 = Method_UnityEngine_Component_GetComponent<Camera>__;
                          puVar6 = System_Security_SecurityElement_SecurityAttribute_TypeInfo;
                          puVar5 = System_Collections_Generic_List<DFNode>_TypeInfo;
                          puVar4 = System_Func<EnumMemberAttribute,_string>_TypeInfo;
                          if (param_2 != 0) {
                            uVar17 = *(uint *)(param_2 + 0x18);
                            if (0 < (int)uVar17) {
                              uVar18 = 0;
                              do {
                                if (uVar17 <= uVar18) goto LAB_00f27db0;
                                lVar12 = *(long *)(param_2 + (long)(int)uVar18 * 8 + 0x20);
                                plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,7);
                                if (plVar13 == (long *)0x0) goto LAB_00f27dc0;
                                lVar14 = *(long *)puVar6;
                                if ((lVar14 != 0) &&
                                   (lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                        (*plVar13 + 0x40)),
                                   lVar14 == 0)) goto LAB_00f27db4;
                                if ((int)plVar13[3] == 0) goto LAB_00f27db0;
                                plVar13[4] = *(long *)puVar6;
                                if (*(int *)(*(long *)StringLiteral_4745 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                lVar14 = FUN_00f28198(lVar12);
                                if ((lVar14 != 0) &&
                                   (lVar16 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                        (*plVar13 + 0x40)),
                                   lVar16 == 0)) goto LAB_00f27db4;
                                uVar17 = *(uint *)(plVar13 + 3);
                                if (uVar17 < 2) goto LAB_00f27db0;
                                plVar13[5] = lVar14;
                                if (*(long *)puVar7 != 0) {
                                  lVar14 = thunk_FUN_00d6225c(*(long *)puVar7,
                                                              *(undefined8 *)(*plVar13 + 0x40));
                                  if (lVar14 == 0) goto LAB_00f27db4;
                                  uVar17 = *(uint *)(plVar13 + 3);
                                }
                                if (uVar17 < 3) goto LAB_00f27db0;
                                plVar13[6] = *(long *)puVar7;
                                if (lVar12 == 0) goto LAB_00f27dc0;
                                lVar14 = *(long *)(lVar12 + 0x30);
                                if (lVar14 != 0) {
                                  lVar16 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                      (*plVar13 + 0x40));
                                  if (lVar16 == 0) goto LAB_00f27db4;
                                  uVar17 = *(uint *)(plVar13 + 3);
                                }
                                if (uVar17 < 4) goto LAB_00f27db0;
                                plVar13[7] = lVar14;
                                lVar14 = *(long *)puVar5;
                                if (lVar14 != 0) {
                                  lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                      (*plVar13 + 0x40));
                                  if (lVar14 == 0) goto LAB_00f27db4;
                                  uVar17 = *(uint *)(plVar13 + 3);
                                }
                                if (uVar17 < 5) goto LAB_00f27db0;
                                plVar13[8] = *(long *)puVar5;
                                lVar12 = *(long *)(lVar12 + 0x38);
                                if (lVar12 != 0) {
                                  lVar14 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)
                                                                      (*plVar13 + 0x40));
                                  if (lVar14 == 0) goto LAB_00f27db4;
                                  uVar17 = *(uint *)(plVar13 + 3);
                                }
                                if (uVar17 < 6) goto LAB_00f27db0;
                                plVar13[9] = lVar12;
                                if (*(long *)puVar4 != 0) {
                                  lVar12 = thunk_FUN_00d6225c(*(long *)puVar4,
                                                              *(undefined8 *)(*plVar13 + 0x40));
                                  if (lVar12 == 0) goto LAB_00f27db4;
                                  uVar17 = *(uint *)(plVar13 + 3);
                                }
                                if (uVar17 < 7) goto LAB_00f27db0;
                                plVar13[10] = *(long *)puVar4;
                                uVar15 = FUN_01600844(plVar13,0);
                                FUN_0160c8e8(plVar10,uVar15,0);
                                uVar17 = *(uint *)(param_2 + 0x18);
                                uVar18 = uVar18 + 1;
                              } while ((int)uVar18 < (int)uVar17);
                            }
                            puVar9 = StringLiteral_10706;
                            puVar8 = StringLiteral_3951;
                            puVar6 = Method_System_Security_Cryptography_Oid_FromOidValue__;
                            puVar5 = System_Xml_Serialization_XmlEnumAttribute_TypeInfo;
                            FUN_0160c8c8(plVar10,0);
                            FUN_0160c8e8(plVar10,*(undefined8 *)puVar5,0);
                            FUN_0160c8e8(plVar10,*(undefined8 *)puVar6,0);
                            FUN_0160c8c8(plVar10,0);
                            uVar15 = FUN_01600424(*(undefined8 *)puVar9,lVar11,*(undefined8 *)puVar8
                                                  ,0);
                            FUN_0160c8e8(plVar10,uVar15,0);
                            FUN_0160c8e8(plVar10,*(undefined8 *)StringLiteral_1342,0);
                            FUN_0160c8c8(plVar10,0);
                            puVar8 = StringLiteral_7861;
                            puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_u8__;
                            puVar5 = 
                            Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                            ;
                            local_64 = 0;
                            uVar17 = *(uint *)(param_2 + 0x18);
                            if (0 < (int)uVar17) {
                              do {
                                if (uVar17 <= local_64) goto LAB_00f27db0;
                                lVar12 = *(long *)(param_2 + (long)(int)local_64 * 8 + 0x20);
                                plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
                                if (plVar13 == (long *)0x0) goto LAB_00f27dc0;
                                lVar14 = *(long *)puVar8;
                                if ((lVar14 != 0) &&
                                   (lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                        (*plVar13 + 0x40)),
                                   lVar14 == 0)) goto LAB_00f27db4;
                                if ((int)plVar13[3] == 0) goto LAB_00f27db0;
                                plVar13[4] = *(long *)puVar8;
                                lVar14 = FUN_0176eb1c(&local_64,0);
                                if ((lVar14 != 0) &&
                                   (lVar16 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                        (*plVar13 + 0x40)),
                                   lVar16 == 0)) goto LAB_00f27db4;
                                uVar17 = *(uint *)(plVar13 + 3);
                                if (uVar17 < 2) goto LAB_00f27db0;
                                plVar13[5] = lVar14;
                                if (*(long *)Method_Unity_Collections_NativeArray<Vector3>_Copy__ !=
                                    0) {
                                  lVar14 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Unity_Collections_NativeArray<Vector3>_Copy__
                                                  ,*(undefined8 *)(*plVar13 + 0x40));
                                  if (lVar14 == 0) goto LAB_00f27db4;
                                  uVar17 = *(uint *)(plVar13 + 3);
                                }
                                if (uVar17 < 3) goto LAB_00f27db0;
                                plVar13[6] = *(long *)
                                              Method_Unity_Collections_NativeArray<Vector3>_Copy__;
                                if (lVar12 == 0) goto LAB_00f27dc0;
                                lVar14 = *(long *)(lVar12 + 0x38);
                                if (lVar14 != 0) {
                                  lVar16 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                      (*plVar13 + 0x40));
                                  if (lVar16 == 0) goto LAB_00f27db4;
                                  uVar17 = *(uint *)(plVar13 + 3);
                                }
                                if (uVar17 < 4) goto LAB_00f27db0;
                                plVar13[7] = lVar14;
                                if (*(long *)puVar3 != 0) {
                                  lVar14 = thunk_FUN_00d6225c(*(long *)puVar3,
                                                              *(undefined8 *)(*plVar13 + 0x40));
                                  if (lVar14 == 0) goto LAB_00f27db4;
                                  uVar17 = *(uint *)(plVar13 + 3);
                                }
                                if (uVar17 < 5) goto LAB_00f27db0;
                                plVar13[8] = *(long *)puVar3;
                                uVar15 = FUN_01600844(plVar13,0);
                                FUN_0160c8e8(plVar10,uVar15,0);
                                plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,7);
                                if (plVar13 == (long *)0x0) goto LAB_00f27dc0;
                                if ((*(long *)PTR_DAT_033f3c10 != 0) &&
                                   (lVar14 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f3c10,
                                                                *(undefined8 *)(*plVar13 + 0x40)),
                                   lVar14 == 0)) goto LAB_00f27db4;
                                if ((int)plVar13[3] == 0) goto LAB_00f27db0;
                                plVar13[4] = *(long *)PTR_DAT_033f3c10;
                                if (*(int *)(*(long *)StringLiteral_4745 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                lVar14 = FUN_00f28198(lVar12);
                                if ((lVar14 != 0) &&
                                   (lVar16 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                        (*plVar13 + 0x40)),
                                   lVar16 == 0)) goto LAB_00f27db4;
                                uVar17 = *(uint *)(plVar13 + 3);
                                if (uVar17 < 2) goto LAB_00f27db0;
                                plVar13[5] = lVar14;
                                if (*(long *)puVar7 != 0) {
                                  lVar14 = thunk_FUN_00d6225c(*(long *)puVar7,
                                                              *(undefined8 *)(*plVar13 + 0x40));
                                  if (lVar14 == 0) goto LAB_00f27db4;
                                  uVar17 = *(uint *)(plVar13 + 3);
                                }
                                if (uVar17 < 3) goto LAB_00f27db0;
                                plVar13[6] = *(long *)puVar7;
                                lVar14 = *(long *)(lVar12 + 0x30);
                                if (lVar14 != 0) {
                                  lVar16 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                      (*plVar13 + 0x40));
                                  if (lVar16 == 0) goto LAB_00f27db4;
                                  uVar17 = *(uint *)(plVar13 + 3);
                                }
                                if (uVar17 < 4) goto LAB_00f27db0;
                                plVar13[7] = lVar14;
                                if (*(long *)
                                     Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_ButtonDown__
                                    != 0) {
                                  lVar14 = thunk_FUN_00d6225c(*(long *)
                                                  Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_ButtonDown__
                                                  ,*(undefined8 *)(*plVar13 + 0x40));
                                  if (lVar14 == 0) goto LAB_00f27db4;
                                  uVar17 = *(uint *)(plVar13 + 3);
                                }
                                if (uVar17 < 5) goto LAB_00f27db0;
                                plVar13[8] = *(long *)
                                              Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_ButtonDown__
                                ;
                                lVar14 = FUN_0176eb1c(&local_64,0);
                                if ((lVar14 != 0) &&
                                   (lVar16 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                        (*plVar13 + 0x40)),
                                   lVar16 == 0)) goto LAB_00f27db4;
                                uVar17 = *(uint *)(plVar13 + 3);
                                if (uVar17 < 6) goto LAB_00f27db0;
                                plVar13[9] = lVar14;
                                if (*(long *)puVar4 != 0) {
                                  lVar14 = thunk_FUN_00d6225c(*(long *)puVar4,
                                                              *(undefined8 *)(*plVar13 + 0x40));
                                  if (lVar14 == 0) goto LAB_00f27db4;
                                  uVar17 = *(uint *)(plVar13 + 3);
                                }
                                if (uVar17 < 7) goto LAB_00f27db0;
                                plVar13[10] = *(long *)puVar4;
                                uVar15 = FUN_01600844(plVar13,0);
                                FUN_0160c8e8(plVar10,uVar15,0);
                                plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
                                if (plVar13 == (long *)0x0) goto LAB_00f27dc0;
                                lVar14 = *(long *)puVar6;
                                if ((lVar14 != 0) &&
                                   (lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                        (*plVar13 + 0x40)),
                                   lVar14 == 0)) goto LAB_00f27db4;
                                uVar17 = *(uint *)(plVar13 + 3);
                                if (uVar17 == 0) goto LAB_00f27db0;
                                plVar13[4] = *(long *)puVar6;
                                lVar12 = *(long *)(lVar12 + 0x38);
                                if (lVar12 != 0) {
                                  lVar14 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)
                                                                      (*plVar13 + 0x40));
                                  if (lVar14 == 0) goto LAB_00f27db4;
                                  uVar17 = *(uint *)(plVar13 + 3);
                                }
                                if (uVar17 < 2) goto LAB_00f27db0;
                                plVar13[5] = lVar12;
                                lVar12 = *(long *)puVar5;
                                if (lVar12 != 0) {
                                  lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)
                                                                      (*plVar13 + 0x40));
                                  if (lVar12 == 0) goto LAB_00f27db4;
                                  uVar17 = *(uint *)(plVar13 + 3);
                                }
                                if (uVar17 < 3) goto LAB_00f27db0;
                                plVar13[6] = *(long *)puVar5;
                                lVar12 = FUN_0176eb1c(&local_64,0);
                                if ((lVar12 != 0) &&
                                   (lVar14 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)
                                                                        (*plVar13 + 0x40)),
                                   lVar14 == 0)) goto LAB_00f27db4;
                                uVar17 = *(uint *)(plVar13 + 3);
                                if (uVar17 < 4) goto LAB_00f27db0;
                                plVar13[7] = lVar12;
                                if (*(long *)puVar3 != 0) {
                                  lVar12 = thunk_FUN_00d6225c(*(long *)puVar3,
                                                              *(undefined8 *)(*plVar13 + 0x40));
                                  if (lVar12 == 0) goto LAB_00f27db4;
                                  uVar17 = *(uint *)(plVar13 + 3);
                                }
                                if (uVar17 < 5) goto LAB_00f27db0;
                                plVar13[8] = *(long *)puVar3;
                                uVar15 = FUN_01600844(plVar13,0);
                                FUN_0160c8e8(plVar10,uVar15,0);
                                FUN_0160c8c8(plVar10,0);
                                local_64 = local_64 + 1;
                                uVar17 = *(uint *)(param_2 + 0x18);
                              } while ((int)local_64 < (int)uVar17);
                            }
                            puVar1 = (undefined8 *)StringLiteral_14253;
                            puVar2 = (undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_f32__;
                            puVar5 = 
                            Method_UnityEngine_XR_ARFoundation_ARTrackable<XRReferencePoint,_ARReferencePoint>_get_trackableId__
                            ;
                            puVar4 = 
                            System_Collections_Generic_List<MB3_TextureCombiner_TemporaryTexture>_TypeInfo
                            ;
                            puVar3 = 
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_TypeInfo
                            ;
                            FUN_0160c8e8(plVar10,*(undefined8 *)
                                                  System_Xml_Serialization_XmlEnumAttribute_TypeInfo
                                         ,0);
                            puVar6 = Method_System_Security_Cryptography_Oid_FromOidValue__;
                            FUN_0160c8e8(plVar10,*(undefined8 *)
                                                  Method_System_Security_Cryptography_Oid_FromOidValue__
                                         ,0);
                            FUN_0160c8c8(plVar10,0);
                            FUN_0160c8e8(plVar10,*(undefined8 *)puVar3,0);
                            if ((param_3 & 1) == 0) {
                              puVar1 = (undefined8 *)puVar5;
                              puVar2 = (undefined8 *)puVar4;
                            }
                            uVar15 = FUN_01600424(*puVar2,lVar11,*puVar1,0);
                            FUN_0160c8e8(plVar10,uVar15,0);
                            FUN_0160c8e8(plVar10,*(undefined8 *)puVar6,0);
                            FUN_0160c8e8(plVar10,*(undefined8 *)StringLiteral_2542,0);
                            FUN_0160c8e8(plVar10,*(undefined8 *)
                                                  System_Func<STMAutoDelayData,_string>_TypeInfo,0);
                            (**(code **)(*plVar10 + 0x168))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x170));
                            return;
                          }
                          goto LAB_00f27dc0;
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
LAB_00f27db0:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
LAB_00f27dc0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


