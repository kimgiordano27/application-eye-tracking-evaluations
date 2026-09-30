/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredTiler$$SignedSq
ENTRY_POINT: 023640e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;negative_framework_namespace_without_eye_use_flow
*/


long UnityEngine_Rendering_Universal_Internal_DeferredTiler__SignedSq(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 *unaff_x19;
  long lVar20;
  long unaff_x20;
  ulong uVar21;
  undefined8 unaff_x21;
  ulong uVar22;
  long unaff_x22;
  undefined8 uVar23;
  long in_stack_00000048;
  int iStack0000000000000050;
  int iStack0000000000000054;
  long in_stack_00000058;
  
  thunk_FUN_00d48444(StringLiteral_9263);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Edge,_List<Edge>>_Add__);
  thunk_FUN_00d48444(Newtonsoft_Json_Linq_JsonPath_ScanMultipleFilter_TypeInfo);
  thunk_FUN_00d48444(System_Collections_Generic_List<GraphicsDeviceType>_TypeInfo);
  thunk_FUN_00d48444(PTR_DAT_033f0910);
  thunk_FUN_00d48444(OVRFace_IMeshWeightsProvider_TypeInfo);
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_LowLevel_InputStateBlock_Write__);
  thunk_FUN_00d48444(StringLiteral_9579);
  thunk_FUN_00d48444(Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<BoundingSphere>__);
  thunk_FUN_00d48444(StringLiteral_1269);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_MoveNext__
                    );
  *(undefined1 *)(unaff_x20 + 0xd6e) = 1;
  in_stack_00000048 = 0;
  lVar10 = thunk_FUN_00d62348(*unaff_x19);
  puVar2 = Method_MedleyBossPhase1_OnProjectileDestroyed__;
  if (lVar10 != 0) {
    FUN_02365bf4(lVar10,0);
    *(undefined8 *)(lVar10 + 0x10) = unaff_x21;
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = StringLiteral_9263;
    if (lVar11 != 0) {
      FUN_012dd38c(lVar11,*(undefined8 *)Method_System_Reflection_FieldInfo_GetFieldOffset__);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if ((lVar12 != 0) &&
         (FUN_01320e50(lVar12,*(undefined8 *)PTR_DAT_033eeb30),
         puVar5 = Method_System_Xml_Schema_XdrBuilder_XDR_BuildAttributeType_DtMinLength__,
         puVar2 = OVRFace_IMeshWeightsProvider_TypeInfo, unaff_x22 != 0)) {
        if (0 < *(int *)(unaff_x22 + 0x18)) {
          iVar17 = 0;
          do {
            FUN_0132138c(unaff_x22,iVar17,&stack0x00000058,
                         *(undefined8 *)Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__);
            lVar16 = in_stack_00000058;
            if (in_stack_00000058 == 0) goto LAB_02364794;
            if ((*(long *)(in_stack_00000058 + 0x38) == 0) &&
               (uVar13 = FUN_012ddcec(lVar11,in_stack_00000058,*(undefined8 *)PTR_DAT_033eda08),
               (uVar13 & 1) == 0)) {
              if (*(long *)(lVar10 + 0x10) == 0) goto LAB_02364794;
              in_stack_00000058 =
                   CONCAT44(in_stack_00000058._4_4_,(int)*(undefined8 *)(lVar16 + 0x18));
              uVar13 = FUN_012ddcec(*(long *)(lVar10 + 0x10),&stack0x00000058,
                                    *(undefined8 *)StringLiteral_473);
              if ((uVar13 & 1) == 0) {
                if (*(long *)(lVar10 + 0x10) == 0) goto LAB_02364794;
                in_stack_00000058 = CONCAT44(in_stack_00000058._4_4_,*(undefined4 *)(lVar16 + 0x1c))
                ;
                uVar13 = FUN_012ddcec(*(long *)(lVar10 + 0x10),&stack0x00000058,
                                      *(undefined8 *)StringLiteral_473);
                if ((uVar13 & 1) == 0) goto LAB_02364750;
              }
              lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                           Newtonsoft_Json_Linq_JsonPath_ScanMultipleFilter_TypeInfo
                                         );
              if (lVar14 == 0) goto LAB_02364794;
              FUN_01320e50(lVar14,*(undefined8 *)
                                   Newtonsoft_Json_Serialization_ExtensionDataSetter_TypeInfo);
              puVar3 = StringLiteral_3649;
              puVar4 = Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__;
              puVar1 = Method_System_Collections_Generic_Dictionary<int,_TMP_Style>_ContainsKey__;
              iVar19 = *(int *)(lVar16 + 0x18);
              iVar7 = 0x801;
              lVar15 = lVar16;
              do {
                if ((lVar15 == 0) || (iVar7 = iVar7 + -1, iVar7 == 0)) break;
                FUN_012df150(lVar11,lVar15,*(undefined8 *)puVar1);
                FUN_00ca0800(lVar14,lVar15,*(undefined8 *)puVar3);
                bVar6 = iVar19 != *(int *)(lVar15 + 0x18);
                iVar19 = *(int *)(lVar15 + 0x1c);
                if (bVar6) {
                  iVar19 = *(int *)(lVar15 + 0x18);
                }
                if (*(int *)(*(long *)StringLiteral_14183 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar15 = FUN_0236479c(lVar15,iVar19);
              } while (lVar15 != lVar16);
              lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<Edge,_List<Edge>>_Add__
                                         );
              puVar3 = 
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
              ;
              puVar1 = System_Collections_Generic_List<GraphicsDeviceType>_TypeInfo;
              if (lVar16 == 0) goto LAB_02364794;
              FUN_01320e50(lVar16,*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<JObject>_get_IsCompleted__
                          );
              if (0 < *(int *)(lVar14 + 0x18)) {
                iVar19 = 0;
                do {
                  FUN_0132138c(lVar14,iVar19,&stack0x00000058,*(undefined8 *)puVar4);
                  lVar15 = in_stack_00000058;
                  iVar7 = iVar19;
                  do {
                    if (iVar7 < 1) goto LAB_02364434;
                    if (lVar15 == 0) goto LAB_02364794;
                    uVar23 = *(undefined8 *)(lVar15 + 0x18);
                    iVar7 = iVar7 + -1;
                    FUN_0132138c(lVar14,iVar7,&stack0x00000058,*(undefined8 *)puVar4);
                    if (in_stack_00000058 == 0) goto LAB_02364794;
                  } while ((int)((ulong)uVar23 >> 0x20) != *(int *)(in_stack_00000058 + 0x18));
                  in_stack_00000058 = 0;
                  iStack0000000000000050 = iVar19;
                  iStack0000000000000054 = iVar7;
                  FUN_013a23f0(&stack0x00000058,(long)&stack0x00000050 + 4,&stack0x00000050,
                               *(undefined8 *)puVar1);
                  FUN_00ca392c(lVar16,in_stack_00000058,*(undefined8 *)puVar3);
LAB_02364434:
                  iVar19 = iVar19 + 1;
                } while (iVar19 < *(int *)(lVar14 + 0x18));
              }
              puVar1 = 
              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_MoveNext__
              ;
              iVar19 = *(int *)(lVar16 + 0x18);
              lVar15 = *(long *)
                        Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_MoveNext__
              ;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar15 = *(long *)puVar1;
              }
              lVar20 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x70);
              if (lVar20 == 0) {
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar15 = *(long *)puVar1;
                }
                uVar23 = **(undefined8 **)(lVar15 + 0xb8);
                lVar20 = thunk_FUN_00d62348(*(undefined8 *)
                                             Method_System_Collections_Generic_List<Type>_ToArray__)
                ;
                if (lVar20 == 0) goto LAB_02364794;
                FUN_01267c10(lVar20,uVar23,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_LowLevel_InputStateBlock_Write__,0);
                *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70) = lVar20;
              }
              FUN_0132508c(lVar16,lVar20,
                           *(undefined8 *)
                            UnityEngine_XR_ARFoundation_ARParticipantsChangedEventArgs_TypeInfo);
              lVar15 = FUN_00da4fb8(*(undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,iVar19);
              if (-1 < iVar19 + -1) {
                uVar21 = (ulong)(iVar19 + -2);
                uVar13 = (long)(iVar19 + -1);
                do {
                  FUN_0132138c(lVar16,uVar13 & 0xffffffff,&stack0x00000058,*(undefined8 *)puVar5);
                  in_stack_00000048 = in_stack_00000058;
                  iVar7 = FUN_00ca3b24(&stack0x00000048,*(undefined8 *)PTR_DAT_033f0910);
                  FUN_0132138c(lVar16,uVar13 & 0xffffffff,&stack0x00000058,*(undefined8 *)puVar5);
                  in_stack_00000048 = in_stack_00000058;
                  iVar8 = FUN_00ca3c28(&stack0x00000048,*(undefined8 *)puVar2);
                  if (lVar15 == 0) goto LAB_02364794;
                  if (*(uint *)(lVar15 + 0x18) <= uVar13) {
LAB_02364798:
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  iVar8 = ((iVar8 - iVar7) - *(int *)(lVar15 + uVar13 * 4 + 0x20)) + 1;
                  uVar23 = FUN_0132363c(lVar14,iVar7,iVar8,
                                        *(undefined8 *)Method_System_Xml_XmlWriter_WriteNode__);
                  FUN_01324c7c(lVar14,iVar7,iVar8,
                               *(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_set_Capacity__
                              );
                  iVar18 = (int)(uVar13 - 1);
                  uVar22 = uVar21;
                  iVar7 = iVar18;
                  while (-1 < iVar7) {
                    FUN_0132138c(lVar16,uVar22 & 0xffffffff,&stack0x00000058,*(undefined8 *)puVar5);
                    in_stack_00000048 = in_stack_00000058;
                    iVar7 = FUN_00ca3c28(&stack0x00000048,*(undefined8 *)puVar2);
                    FUN_0132138c(lVar16,uVar13 & 0xffffffff,&stack0x00000058,*(undefined8 *)puVar5);
                    in_stack_00000048 = in_stack_00000058;
                    iVar9 = FUN_00ca3c28(&stack0x00000048,*(undefined8 *)puVar2);
                    if (iVar9 < iVar7) {
                      if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_02364798;
                      *(int *)(lVar15 + 0x20 + uVar22 * 4) =
                           *(int *)(lVar15 + 0x20 + uVar22 * 4) + iVar8;
                    }
                    uVar22 = uVar22 - 1;
                    iVar7 = (int)uVar22;
                  }
                  if (iVar19 < 2) {
LAB_02364728:
                    FUN_00ca3d30(lVar12,uVar23,*(undefined8 *)StringLiteral_4685);
                  }
                  else {
                    lVar20 = *(long *)(lVar10 + 0x18);
                    if (lVar20 == 0) {
                      lVar20 = thunk_FUN_00d62348(*(undefined8 *)
                                                   System_Action<FocusEnterEventArgs>_TypeInfo);
                      if (lVar20 == 0) goto LAB_02364794;
                      FUN_012d239c(lVar20,lVar10,*(undefined8 *)StringLiteral_9579,0);
                      *(long *)(lVar10 + 0x18) = lVar20;
                    }
                    uVar22 = FUN_010d7cf0(uVar23,lVar20,
                                          *(undefined8 *)
                                           System_Collections_Generic_HashSet<VoiceServiceRequest>_TypeInfo
                                         );
                    if ((uVar22 & 1) != 0) goto LAB_02364728;
                    lVar20 = *(long *)(lVar10 + 0x20);
                    if (lVar20 == 0) {
                      lVar20 = thunk_FUN_00d62348(*(undefined8 *)
                                                   System_Action<FocusEnterEventArgs>_TypeInfo);
                      if (lVar20 == 0) goto LAB_02364794;
                      FUN_012d239c(lVar20,lVar10,
                                   *(undefined8 *)
                                    Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<BoundingSphere>__
                                   ,0);
                      *(long *)(lVar10 + 0x20) = lVar20;
                    }
                    uVar22 = FUN_010d7cf0(uVar23,lVar20,
                                          *(undefined8 *)
                                           System_Collections_Generic_HashSet<VoiceServiceRequest>_TypeInfo
                                         );
                    if ((uVar22 & 1) != 0) goto LAB_02364728;
                  }
                  uVar21 = uVar21 - 1;
                  uVar13 = uVar13 - 1;
                } while (-1 < iVar18);
              }
            }
LAB_02364750:
            iVar17 = iVar17 + 1;
          } while (iVar17 < *(int *)(unaff_x22 + 0x18));
        }
        return lVar12;
      }
    }
  }
LAB_02364794:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


