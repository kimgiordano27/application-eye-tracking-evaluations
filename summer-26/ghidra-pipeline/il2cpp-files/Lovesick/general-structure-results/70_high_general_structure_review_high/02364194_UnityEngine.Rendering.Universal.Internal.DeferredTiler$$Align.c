/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredTiler$$Align
ENTRY_POINT: 02364194
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;negative_framework_namespace_without_eye_use_flow
*/


long UnityEngine_Rendering_Universal_Internal_DeferredTiler__Align(void)

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
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 *unaff_x19;
  long lVar19;
  long unaff_x20;
  ulong uVar20;
  ulong uVar21;
  long unaff_x22;
  undefined8 uVar22;
  long in_stack_00000048;
  int iStack0000000000000050;
  int iStack0000000000000054;
  long in_stack_00000058;
  
  lVar10 = thunk_FUN_00d62348(*unaff_x19);
  puVar2 = StringLiteral_9263;
  if (lVar10 != 0) {
    FUN_012dd38c(lVar10,*(undefined8 *)Method_System_Reflection_FieldInfo_GetFieldOffset__);
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar11 != 0) &&
       (FUN_01320e50(lVar11,*(undefined8 *)PTR_DAT_033eeb30),
       puVar5 = Method_System_Xml_Schema_XdrBuilder_XDR_BuildAttributeType_DtMinLength__,
       puVar2 = OVRFace_IMeshWeightsProvider_TypeInfo, unaff_x22 != 0)) {
      if (0 < *(int *)(unaff_x22 + 0x18)) {
        iVar16 = 0;
        do {
          FUN_0132138c(unaff_x22,iVar16,&stack0x00000058,
                       *(undefined8 *)Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__);
          lVar15 = in_stack_00000058;
          if (in_stack_00000058 == 0) goto LAB_02364794;
          if ((*(long *)(in_stack_00000058 + 0x38) == 0) &&
             (uVar12 = FUN_012ddcec(lVar10,in_stack_00000058,*(undefined8 *)PTR_DAT_033eda08),
             (uVar12 & 1) == 0)) {
            if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_02364794;
            in_stack_00000058 =
                 CONCAT44(in_stack_00000058._4_4_,(int)*(undefined8 *)(lVar15 + 0x18));
            uVar12 = FUN_012ddcec(*(long *)(unaff_x20 + 0x10),&stack0x00000058,
                                  *(undefined8 *)StringLiteral_473);
            if ((uVar12 & 1) == 0) {
              if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_02364794;
              in_stack_00000058 = CONCAT44(in_stack_00000058._4_4_,*(undefined4 *)(lVar15 + 0x1c));
              uVar12 = FUN_012ddcec(*(long *)(unaff_x20 + 0x10),&stack0x00000058,
                                    *(undefined8 *)StringLiteral_473);
              if ((uVar12 & 1) == 0) goto LAB_02364750;
            }
            lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                         Newtonsoft_Json_Linq_JsonPath_ScanMultipleFilter_TypeInfo);
            if (lVar13 == 0) goto LAB_02364794;
            FUN_01320e50(lVar13,*(undefined8 *)
                                 Newtonsoft_Json_Serialization_ExtensionDataSetter_TypeInfo);
            puVar3 = StringLiteral_3649;
            puVar4 = Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__;
            puVar1 = Method_System_Collections_Generic_Dictionary<int,_TMP_Style>_ContainsKey__;
            iVar18 = *(int *)(lVar15 + 0x18);
            iVar7 = 0x801;
            lVar14 = lVar15;
            do {
              if ((lVar14 == 0) || (iVar7 = iVar7 + -1, iVar7 == 0)) break;
              FUN_012df150(lVar10,lVar14,*(undefined8 *)puVar1);
              FUN_00ca0800(lVar13,lVar14,*(undefined8 *)puVar3);
              bVar6 = iVar18 != *(int *)(lVar14 + 0x18);
              iVar18 = *(int *)(lVar14 + 0x1c);
              if (bVar6) {
                iVar18 = *(int *)(lVar14 + 0x18);
              }
              if (*(int *)(*(long *)StringLiteral_14183 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar14 = FUN_0236479c(lVar14,iVar18);
            } while (lVar14 != lVar15);
            lVar15 = thunk_FUN_00d62348(*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<Edge,_List<Edge>>_Add__
                                       );
            puVar3 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
            ;
            puVar1 = System_Collections_Generic_List<GraphicsDeviceType>_TypeInfo;
            if (lVar15 == 0) goto LAB_02364794;
            FUN_01320e50(lVar15,*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<JObject>_get_IsCompleted__
                        );
            if (0 < *(int *)(lVar13 + 0x18)) {
              iVar18 = 0;
              do {
                FUN_0132138c(lVar13,iVar18,&stack0x00000058,*(undefined8 *)puVar4);
                lVar14 = in_stack_00000058;
                iVar7 = iVar18;
                do {
                  if (iVar7 < 1) goto LAB_02364434;
                  if (lVar14 == 0) goto LAB_02364794;
                  uVar22 = *(undefined8 *)(lVar14 + 0x18);
                  iVar7 = iVar7 + -1;
                  FUN_0132138c(lVar13,iVar7,&stack0x00000058,*(undefined8 *)puVar4);
                  if (in_stack_00000058 == 0) goto LAB_02364794;
                } while ((int)((ulong)uVar22 >> 0x20) != *(int *)(in_stack_00000058 + 0x18));
                in_stack_00000058 = 0;
                iStack0000000000000050 = iVar18;
                iStack0000000000000054 = iVar7;
                FUN_013a23f0(&stack0x00000058,(long)&stack0x00000050 + 4,&stack0x00000050,
                             *(undefined8 *)puVar1);
                FUN_00ca392c(lVar15,in_stack_00000058,*(undefined8 *)puVar3);
LAB_02364434:
                iVar18 = iVar18 + 1;
              } while (iVar18 < *(int *)(lVar13 + 0x18));
            }
            puVar1 = 
            Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_MoveNext__
            ;
            iVar18 = *(int *)(lVar15 + 0x18);
            lVar14 = *(long *)
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_MoveNext__
            ;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar14 = *(long *)puVar1;
            }
            lVar19 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x70);
            if (lVar19 == 0) {
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar14 = *(long *)puVar1;
              }
              uVar22 = **(undefined8 **)(lVar14 + 0xb8);
              lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_System_Collections_Generic_List<Type>_ToArray__);
              if (lVar19 == 0) goto LAB_02364794;
              FUN_01267c10(lVar19,uVar22,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_LowLevel_InputStateBlock_Write__,0);
              *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70) = lVar19;
            }
            FUN_0132508c(lVar15,lVar19,
                         *(undefined8 *)
                          UnityEngine_XR_ARFoundation_ARParticipantsChangedEventArgs_TypeInfo);
            lVar14 = FUN_00da4fb8(*(undefined8 *)
                                   Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,iVar18);
            if (-1 < iVar18 + -1) {
              uVar20 = (ulong)(iVar18 + -2);
              uVar12 = (long)(iVar18 + -1);
              do {
                FUN_0132138c(lVar15,uVar12 & 0xffffffff,&stack0x00000058,*(undefined8 *)puVar5);
                in_stack_00000048 = in_stack_00000058;
                iVar7 = FUN_00ca3b24(&stack0x00000048,*(undefined8 *)PTR_DAT_033f0910);
                FUN_0132138c(lVar15,uVar12 & 0xffffffff,&stack0x00000058,*(undefined8 *)puVar5);
                in_stack_00000048 = in_stack_00000058;
                iVar8 = FUN_00ca3c28(&stack0x00000048,*(undefined8 *)puVar2);
                if (lVar14 == 0) goto LAB_02364794;
                if (*(uint *)(lVar14 + 0x18) <= uVar12) {
LAB_02364798:
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                iVar8 = ((iVar8 - iVar7) - *(int *)(lVar14 + uVar12 * 4 + 0x20)) + 1;
                uVar22 = FUN_0132363c(lVar13,iVar7,iVar8,
                                      *(undefined8 *)Method_System_Xml_XmlWriter_WriteNode__);
                FUN_01324c7c(lVar13,iVar7,iVar8,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<VisualElement>_set_Capacity__);
                iVar17 = (int)(uVar12 - 1);
                uVar21 = uVar20;
                iVar7 = iVar17;
                while (-1 < iVar7) {
                  FUN_0132138c(lVar15,uVar21 & 0xffffffff,&stack0x00000058,*(undefined8 *)puVar5);
                  in_stack_00000048 = in_stack_00000058;
                  iVar7 = FUN_00ca3c28(&stack0x00000048,*(undefined8 *)puVar2);
                  FUN_0132138c(lVar15,uVar12 & 0xffffffff,&stack0x00000058,*(undefined8 *)puVar5);
                  in_stack_00000048 = in_stack_00000058;
                  iVar9 = FUN_00ca3c28(&stack0x00000048,*(undefined8 *)puVar2);
                  if (iVar9 < iVar7) {
                    if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_02364798;
                    *(int *)(lVar14 + 0x20 + uVar21 * 4) =
                         *(int *)(lVar14 + 0x20 + uVar21 * 4) + iVar8;
                  }
                  uVar21 = uVar21 - 1;
                  iVar7 = (int)uVar21;
                }
                if (iVar18 < 2) {
LAB_02364728:
                  FUN_00ca3d30(lVar11,uVar22,*(undefined8 *)StringLiteral_4685);
                }
                else {
                  lVar19 = *(long *)(unaff_x20 + 0x18);
                  if (lVar19 == 0) {
                    lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                                 System_Action<FocusEnterEventArgs>_TypeInfo);
                    if (lVar19 == 0) goto LAB_02364794;
                    FUN_012d239c(lVar19,unaff_x20,*(undefined8 *)StringLiteral_9579,0);
                    *(long *)(unaff_x20 + 0x18) = lVar19;
                  }
                  uVar21 = FUN_010d7cf0(uVar22,lVar19,
                                        *(undefined8 *)
                                         System_Collections_Generic_HashSet<VoiceServiceRequest>_TypeInfo
                                       );
                  if ((uVar21 & 1) != 0) goto LAB_02364728;
                  lVar19 = *(long *)(unaff_x20 + 0x20);
                  if (lVar19 == 0) {
                    lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                                 System_Action<FocusEnterEventArgs>_TypeInfo);
                    if (lVar19 == 0) goto LAB_02364794;
                    FUN_012d239c(lVar19,unaff_x20,
                                 *(undefined8 *)
                                  Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<BoundingSphere>__
                                 ,0);
                    *(long *)(unaff_x20 + 0x20) = lVar19;
                  }
                  uVar21 = FUN_010d7cf0(uVar22,lVar19,
                                        *(undefined8 *)
                                         System_Collections_Generic_HashSet<VoiceServiceRequest>_TypeInfo
                                       );
                  if ((uVar21 & 1) != 0) goto LAB_02364728;
                }
                uVar20 = uVar20 - 1;
                uVar12 = uVar12 - 1;
              } while (-1 < iVar17);
            }
          }
LAB_02364750:
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(unaff_x22 + 0x18));
      }
      return lVar11;
    }
  }
LAB_02364794:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


