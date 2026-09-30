/*
FUNCTION_NAME: System.Net.FileWebRequestCreator$$Create
ENTRY_POINT: 01f7fc6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 160
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_9;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_5;functionality_data_collection_or_telemetry_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x01f8145c) */

void System_Net_FileWebRequestCreator__Create(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x19;
  long *plVar16;
  long *plVar17;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  uVar6 = FUN_01780344();
  lVar7 = thunk_FUN_00d62348(*unaff_x27);
  if ((lVar7 != 0) &&
     (FUN_01f7c678(lVar7,uVar6,
                   *(undefined8 *)
                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_116>_SliceWithStride<Vector3>__
                   ,1,0,0),
     puVar3 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass21_0_<DOAnchorMin>b__1__,
     unaff_x19 != (long *)0x0)) {
    (**(code **)(*unaff_x19 + 0x2a8))();
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar4 = StringLiteral_3349;
    puVar3 = Method_System_Collections_Generic_Dictionary<int,_List<Renderer>>_Add__;
    if (lVar7 != 0) {
      FUN_01ebee44(lVar7,0);
      *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)puVar3;
      plVar16 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
      uVar6 = FUN_01780344(*(undefined8 *)puVar4,0);
      uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
      plVar17 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
      uVar9 = FUN_01780344(*unaff_x28,0);
      if (plVar17 != (long *)0x0) {
        plVar17 = (long *)(**(code **)(*plVar17 + 0x308))
                                    (plVar17,uVar9,*(undefined8 *)(*plVar17 + 0x310));
        lVar10 = thunk_FUN_00d62348(*unaff_x27);
        if (lVar10 != 0) {
          if (plVar17 != (long *)0x0) {
            lVar13 = *unaff_x27;
            if ((*(byte *)(*plVar17 + 300) < *(byte *)(lVar13 + 300)) ||
               (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar13 + 300) * 8 + -8) !=
                lVar13)) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar17,lVar13,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<JsonSchemaNode>_get_Item__);
            }
          }
          FUN_01f7c678(lVar10,uVar8,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<JsonSchemaNode>_get_Item__,1,plVar17,
                       lVar7);
          puVar3 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
          if (plVar16 != (long *)0x0) {
            (**(code **)(*plVar16 + 0x2a8))(plVar16,uVar6,lVar10,*(undefined8 *)(*plVar16 + 0x2b0));
            plVar16 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
            uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
            uVar8 = FUN_01780344(*(undefined8 *)puVar3,0);
            lVar7 = thunk_FUN_00d62348(*unaff_x27);
            if ((lVar7 != 0) &&
               (FUN_01f7c678(lVar7,uVar8,
                             *(undefined8 *)
                              Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<uint>__,
                             1,0,0), puVar3 = OVRPlugin_OVRP_1_50_0_TypeInfo, plVar16 != (long *)0x0
               )) {
              (**(code **)(*plVar16 + 0x2a8))(plVar16,uVar6,lVar7,*(undefined8 *)(*plVar16 + 0x2b0))
              ;
              plVar16 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
              uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
              uVar8 = FUN_01780344(*(undefined8 *)puVar3,0);
              lVar7 = thunk_FUN_00d62348(*unaff_x27);
              if ((lVar7 != 0) &&
                 (FUN_01f7c678(lVar7,uVar8,*(undefined8 *)StringLiteral_4884,1,0,0),
                 puVar3 = Method_System_Linq_Enumerable_ToList<EdgeLookup>__, plVar16 != (long *)0x0
                 )) {
                (**(code **)(*plVar16 + 0x2a8))
                          (plVar16,uVar6,lVar7,*(undefined8 *)(*plVar16 + 0x2b0));
                plVar16 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
                uVar8 = FUN_01780344(*(undefined8 *)puVar3,0);
                plVar17 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                uVar9 = FUN_01780344(*unaff_x29,0);
                if (plVar17 != (long *)0x0) {
                  plVar17 = (long *)(**(code **)(*plVar17 + 0x308))
                                              (plVar17,uVar9,*(undefined8 *)(*plVar17 + 0x310));
                  lVar7 = thunk_FUN_00d62348(*unaff_x27);
                  puVar3 = PTR_DAT_033f1220;
                  if (lVar7 != 0) {
                    if (plVar17 != (long *)0x0) {
                      lVar10 = *unaff_x27;
                      if ((*(byte *)(*plVar17 + 300) < *(byte *)(lVar10 + 300)) ||
                         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar10 + 300) * 8 +
                                   -8) != lVar10)) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da544c(plVar17,lVar10,
                                     *(undefined8 *)Method_Messenger<SetList>_RemoveListener__);
                      }
                    }
                    FUN_01f7c678(lVar7,uVar8,
                                 *(undefined8 *)Method_Messenger<SetList>_RemoveListener__,1,plVar17
                                 ,0);
                    puVar4 = Method_SoccerBlocker_HideCrowd__;
                    if (plVar16 != (long *)0x0) {
                      (**(code **)(*plVar16 + 0x2a8))
                                (plVar16,uVar6,lVar7,*(undefined8 *)(*plVar16 + 0x2b0));
                      plVar16 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                      uVar6 = FUN_01780344(*(undefined8 *)puVar4,0);
                      uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
                      lVar7 = thunk_FUN_00d62348(*unaff_x27);
                      if ((lVar7 != 0) &&
                         (FUN_01f7c678(lVar7,uVar8,
                                       *(undefined8 *)
                                        Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c__DisplayClass80_0_<CreateShouldSerializeTest>b__0__
                                       ,0,0,0), puVar4 = StringLiteral_11159, plVar16 != (long *)0x0
                         )) {
                        (**(code **)(*plVar16 + 0x2a8))
                                  (plVar16,uVar6,lVar7,*(undefined8 *)(*plVar16 + 0x2b0));
                        plVar16 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                        uVar6 = FUN_01780344(*(undefined8 *)puVar4,0);
                        uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
                        lVar7 = thunk_FUN_00d62348(*unaff_x27);
                        if ((lVar7 != 0) &&
                           (FUN_01f7c678(lVar7,uVar8,*(undefined8 *)StringLiteral_12526,1,0,0),
                           puVar2 = StringLiteral_4052, plVar16 != (long *)0x0)) {
                          (**(code **)(*plVar16 + 0x2a8))
                                    (plVar16,uVar6,lVar7,*(undefined8 *)(*plVar16 + 0x2b0));
                          plVar16 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                          uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
                          uVar8 = FUN_01780344(*(undefined8 *)puVar2,0);
                          lVar7 = thunk_FUN_00d62348(*unaff_x27);
                          if ((lVar7 != 0) &&
                             (FUN_01f7c678(lVar7,uVar8,*(undefined8 *)PTR_DAT_033f12a0,0,0,0),
                             puVar2 = System_Reflection_RuntimePropertyInfo___TypeInfo,
                             plVar16 != (long *)0x0)) {
                            (**(code **)(*plVar16 + 0x2a8))
                                      (plVar16,uVar6,lVar7,*(undefined8 *)(*plVar16 + 0x2b0));
                            plVar16 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                            uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
                            uVar8 = FUN_01780344(*(undefined8 *)puVar2,0);
                            lVar7 = thunk_FUN_00d62348(*unaff_x27);
                            if ((lVar7 != 0) &&
                               (FUN_01f7c678(lVar7,uVar8,*(undefined8 *)StringLiteral_3711,0,0,0),
                               plVar16 != (long *)0x0)) {
                              (**(code **)(*plVar16 + 0x2a8))
                                        (plVar16,uVar6,lVar7,*(undefined8 *)(*plVar16 + 0x2b0));
                              lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                              if (lVar7 != 0) {
                                FUN_01747a0c(lVar7,0);
                                plVar16 = (long *)**(long **)(*unaff_x26 + 0xb8);
                                (*(long **)(*unaff_x26 + 0xb8))[1] = lVar7;
                                if ((plVar16 != (long *)0x0) &&
                                   (plVar16 = (long *)(**(code **)(*plVar16 + 0x398))
                                                                (plVar16,*(undefined8 *)
                                                                          (*plVar16 + 0x3a0)),
                                   plVar16 != (long *)0x0)) {
                                  lVar7 = *plVar16;
                                  uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                  if (uVar14 != 0) {
                                    piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar15 + -2) ==
                                          *(long *)
                                           Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                                         ) {
                                        puVar11 = (undefined8 *)
                                                  (lVar7 + (long)*piVar15 * 0x10 + 0x138);
                                        goto LAB_01f802d8;
                                      }
                                      uVar14 = uVar14 - 1;
                                      piVar15 = piVar15 + 4;
                                    } while (uVar14 != 0);
                                  }
                                  puVar11 = (undefined8 *)
                                            FUN_00d59724(plVar16,*(long *)
                                                  Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                                                  ,0);
LAB_01f802d8:
                                  puVar5 = StringLiteral_10310;
                                  plVar16 = (long *)(*(code *)*puVar11)(plVar16,puVar11[1]);
                                  puVar2 = 
                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                  ;
                                  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_00da518c();
                                  }
                                  do {
                                    lVar10 = *plVar16;
                                    lVar7 = *(long *)puVar2;
                                    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
                                    if (uVar14 != 0) {
                                      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar15 + -2) == lVar7) {
                                          puVar11 = (undefined8 *)
                                                    (lVar10 + (long)*piVar15 * 0x10 + 0x138);
                                          goto LAB_01f80348;
                                        }
                                        uVar14 = uVar14 - 1;
                                        piVar15 = piVar15 + 4;
                                      } while (uVar14 != 0);
                                    }
                                    puVar11 = (undefined8 *)FUN_00d59724(plVar16,lVar7,0);
LAB_01f80348:
                                    uVar14 = (*(code *)*puVar11)(plVar16,puVar11[1]);
                                    if ((uVar14 & 1) == 0) {
                                      plVar16 = (long *)thunk_FUN_00d6225c(plVar16,*(undefined8 *)
                                                                                    puVar5);
                                      if (plVar16 == (long *)0x0) goto LAB_01f80480;
                                      lVar7 = *plVar16;
                                      uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                      if (uVar14 == 0) goto LAB_01f80458;
                                      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                      goto LAB_01f80440;
                                    }
                                    lVar10 = *plVar16;
                                    lVar7 = *(long *)puVar2;
                                    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
                                    if (uVar14 != 0) {
                                      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar15 + -2) == lVar7) {
                                          puVar11 = (undefined8 *)
                                                    (lVar10 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                                          goto LAB_01f803a8;
                                        }
                                        uVar14 = uVar14 - 1;
                                        piVar15 = piVar15 + 4;
                                      } while (uVar14 != 0);
                                    }
                                    puVar11 = (undefined8 *)FUN_00d59724(plVar16,lVar7,1);
LAB_01f803a8:
                                    plVar17 = (long *)(*(code *)*puVar11)(plVar16,puVar11[1]);
                                    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_00da518c();
                                    }
                                    bVar1 = *(byte *)(*unaff_x27 + 300);
                                    if ((*(byte *)(*plVar17 + 300) < bVar1) ||
                                       (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8)
                                        != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
                                      FUN_00da544c(plVar17);
                                    }
                                    plVar12 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_00da518c();
                                    }
                                    (**(code **)(*plVar12 + 0x2a8))
                                              (plVar12,plVar17[3],plVar17,
                                               *(undefined8 *)(*plVar12 + 0x2b0));
                                  } while( true );
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
  goto LAB_01f81430;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_01f813cc:
    if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
      puVar11 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
      goto System_Net_WebProxy__IsLocalInProxyHash;
    }
  }
LAB_01f813e4:
  puVar11 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar5,0);
System_Net_WebProxy__IsLocalInProxyHash:
  (*(code *)*puVar11)(plVar16,puVar11[1]);
  return;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_01f80440:
    if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
      puVar11 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_01f80474;
    }
  }
LAB_01f80458:
  puVar11 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar5,0);
LAB_01f80474:
  (*(code *)*puVar11)(plVar16,puVar11[1]);
LAB_01f80480:
  uVar6 = *unaff_x25;
  plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_01780344(uVar6,0);
  lVar7 = thunk_FUN_00d62348(*unaff_x27);
  puVar2 = PTR_DAT_033f2f40;
  if ((lVar7 != 0) &&
     (FUN_01f7c678(lVar7,uVar6,*(undefined8 *)PTR_DAT_033f2f40,1,0,0), plVar16 != (long *)0x0)) {
    (**(code **)(*plVar16 + 0x2a8))
              (plVar16,*(undefined8 *)puVar2,lVar7,*(undefined8 *)(*plVar16 + 0x2b0));
    plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
    uVar6 = FUN_01780344(*unaff_x25,0);
    lVar7 = thunk_FUN_00d62348(*unaff_x27);
    puVar2 = Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo;
    if ((lVar7 != 0) &&
       (FUN_01f7c678(lVar7,uVar6,
                     *(undefined8 *)Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo,1,0,0),
       plVar16 != (long *)0x0)) {
      (**(code **)(*plVar16 + 0x2a8))
                (plVar16,*(undefined8 *)puVar2,lVar7,*(undefined8 *)(*plVar16 + 0x2b0));
      plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
      uVar6 = FUN_01780344(*unaff_x25,0);
      lVar7 = thunk_FUN_00d62348(*unaff_x27);
      puVar2 = Method_System_Xml_Schema_Datatype_List_TryParseValue__;
      if ((lVar7 != 0) &&
         (FUN_01f7c678(lVar7,uVar6,
                       *(undefined8 *)Method_System_Xml_Schema_Datatype_List_TryParseValue__,1,0,0),
         plVar16 != (long *)0x0)) {
        (**(code **)(*plVar16 + 0x2a8))
                  (plVar16,*(undefined8 *)puVar2,lVar7,*(undefined8 *)(*plVar16 + 0x2b0));
        plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
        uVar6 = FUN_01780344(*unaff_x28,0);
        lVar7 = thunk_FUN_00d62348(*unaff_x27);
        puVar2 = 
        System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MemberInfo,_GizmoRendererManager>>>_TypeInfo
        ;
        if ((lVar7 != 0) &&
           (FUN_01f7c678(lVar7,uVar6,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MemberInfo,_GizmoRendererManager>>>_TypeInfo
                         ,1,0,0), plVar16 != (long *)0x0)) {
          (**(code **)(*plVar16 + 0x2a8))
                    (plVar16,*(undefined8 *)puVar2,lVar7,*(undefined8 *)(*plVar16 + 0x2b0));
          plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
          uVar6 = FUN_01780344(*unaff_x28,0);
          lVar7 = thunk_FUN_00d62348(*unaff_x27);
          puVar2 = UnityEngine_UIElements_UIR_Tessellation_TypeInfo;
          if ((lVar7 != 0) &&
             (FUN_01f7c678(lVar7,uVar6,
                           *(undefined8 *)UnityEngine_UIElements_UIR_Tessellation_TypeInfo,1,0,0),
             plVar16 != (long *)0x0)) {
            (**(code **)(*plVar16 + 0x2a8))
                      (plVar16,*(undefined8 *)puVar2,lVar7,*(undefined8 *)(*plVar16 + 0x2b0));
            plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
            uVar6 = FUN_01780344(*unaff_x28,0);
            lVar7 = thunk_FUN_00d62348(*unaff_x27);
            puVar2 = Method_UnityEngine_InputSystem_InputSystem_AddDevice__;
            if ((lVar7 != 0) &&
               (FUN_01f7c678(lVar7,uVar6,
                             *(undefined8 *)Method_UnityEngine_InputSystem_InputSystem_AddDevice__,1
                             ,0,0), plVar16 != (long *)0x0)) {
              (**(code **)(*plVar16 + 0x2a8))
                        (plVar16,*(undefined8 *)puVar2,lVar7,*(undefined8 *)(*plVar16 + 0x2b0));
              plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
              uVar6 = FUN_01780344(*unaff_x28,0);
              lVar7 = thunk_FUN_00d62348(*unaff_x27);
              puVar2 = Method_System_Data_DataView_System_Collections_IList_Insert__;
              if ((lVar7 != 0) &&
                 (FUN_01f7c678(lVar7,uVar6,
                               *(undefined8 *)
                                Method_System_Data_DataView_System_Collections_IList_Insert__,1,0,0)
                 , plVar16 != (long *)0x0)) {
                (**(code **)(*plVar16 + 0x2a8))
                          (plVar16,*(undefined8 *)puVar2,lVar7,*(undefined8 *)(*plVar16 + 0x2b0));
                plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                uVar6 = FUN_01780344(*unaff_x25,0);
                lVar7 = thunk_FUN_00d62348(*unaff_x27);
                puVar2 = 
                Field_<PrivateImplementationDetails>_11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D
                ;
                if ((lVar7 != 0) &&
                   (FUN_01f7c678(lVar7,uVar6,
                                 *(undefined8 *)
                                  Field_<PrivateImplementationDetails>_11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D
                                 ,1,0,0), plVar16 != (long *)0x0)) {
                  (**(code **)(*plVar16 + 0x2a8))
                            (plVar16,*(undefined8 *)puVar2,lVar7,*(undefined8 *)(*plVar16 + 0x2b0));
                  plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                  uVar6 = FUN_01780344(*unaff_x28,0);
                  lVar7 = thunk_FUN_00d62348(*unaff_x27);
                  puVar2 = Method_UnityEngine_Rendering_CommandBuffer_WaitOnAsyncGraphicsFence__;
                  if ((lVar7 != 0) &&
                     (FUN_01f7c678(lVar7,uVar6,
                                   *(undefined8 *)
                                    Method_UnityEngine_Rendering_CommandBuffer_WaitOnAsyncGraphicsFence__
                                   ,1,0,0), plVar16 != (long *)0x0)) {
                    (**(code **)(*plVar16 + 0x2a8))
                              (plVar16,*(undefined8 *)puVar2,lVar7,*(undefined8 *)(*plVar16 + 0x2b0)
                              );
                    plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                    uVar6 = FUN_01780344(*unaff_x28,0);
                    lVar7 = thunk_FUN_00d62348(*unaff_x27);
                    puVar2 = 
                    Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_Add__
                    ;
                    if ((lVar7 != 0) &&
                       (FUN_01f7c678(lVar7,uVar6,
                                     *(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_Add__
                                     ,1,0,0), plVar16 != (long *)0x0)) {
                      (**(code **)(*plVar16 + 0x2a8))
                                (plVar16,*(undefined8 *)puVar2,lVar7,
                                 *(undefined8 *)(*plVar16 + 0x2b0));
                      plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                      uVar6 = FUN_01780344(*unaff_x28,0);
                      lVar7 = thunk_FUN_00d62348(*unaff_x27);
                      puVar2 = StringLiteral_4078;
                      if ((lVar7 != 0) &&
                         (FUN_01f7c678(lVar7,uVar6,*(undefined8 *)StringLiteral_4078,1,0,0),
                         plVar16 != (long *)0x0)) {
                        (**(code **)(*plVar16 + 0x2a8))
                                  (plVar16,*(undefined8 *)puVar2,lVar7,
                                   *(undefined8 *)(*plVar16 + 0x2b0));
                        plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                        uVar6 = FUN_01780344(*unaff_x28,0);
                        lVar7 = thunk_FUN_00d62348(*unaff_x27);
                        puVar2 = StringLiteral_6145;
                        if ((lVar7 != 0) &&
                           (FUN_01f7c678(lVar7,uVar6,*(undefined8 *)StringLiteral_6145,1,0,0),
                           plVar16 != (long *)0x0)) {
                          (**(code **)(*plVar16 + 0x2a8))
                                    (plVar16,*(undefined8 *)puVar2,lVar7,
                                     *(undefined8 *)(*plVar16 + 0x2b0));
                          plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                          uVar6 = FUN_01780344(*unaff_x28,0);
                          lVar7 = thunk_FUN_00d62348(*unaff_x27);
                          puVar2 = Method_System_Collections_Generic_List<RadioButton>_get_Item__;
                          if ((lVar7 != 0) &&
                             (FUN_01f7c678(lVar7,uVar6,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<RadioButton>_get_Item__
                                           ,1,0,0), plVar16 != (long *)0x0)) {
                            (**(code **)(*plVar16 + 0x2a8))
                                      (plVar16,*(undefined8 *)puVar2,lVar7,
                                       *(undefined8 *)(*plVar16 + 0x2b0));
                            plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                            uVar6 = FUN_01780344(*unaff_x28,0);
                            lVar7 = thunk_FUN_00d62348(*unaff_x27);
                            puVar2 = 
                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass5_0_<DOFillAmount>b__0__
                            ;
                            if ((lVar7 != 0) &&
                               (FUN_01f7c678(lVar7,uVar6,
                                             *(undefined8 *)
                                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass5_0_<DOFillAmount>b__0__
                                             ,1,0,0), plVar16 != (long *)0x0)) {
                              (**(code **)(*plVar16 + 0x2a8))
                                        (plVar16,*(undefined8 *)puVar2,lVar7,
                                         *(undefined8 *)(*plVar16 + 0x2b0));
                              plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                              uVar6 = FUN_01780344(*unaff_x28,0);
                              lVar7 = thunk_FUN_00d62348(*unaff_x27);
                              puVar2 = Meta_XR_ImmersiveDebugger_Manager_TweakEnum_var;
                              if ((lVar7 != 0) &&
                                 (FUN_01f7c678(lVar7,uVar6,
                                               *(undefined8 *)
                                                Meta_XR_ImmersiveDebugger_Manager_TweakEnum_var,1,0,
                                               0), plVar16 != (long *)0x0)) {
                                (**(code **)(*plVar16 + 0x2a8))
                                          (plVar16,*(undefined8 *)puVar2,lVar7,
                                           *(undefined8 *)(*plVar16 + 0x2b0));
                                plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                uVar6 = FUN_01780344(*unaff_x28,0);
                                lVar7 = thunk_FUN_00d62348(*unaff_x27);
                                puVar2 = 
                                Method_FullSerializer_fsMetaType_<>c__DisplayClass5_0_<CollectProperties>b__2__
                                ;
                                if ((lVar7 != 0) &&
                                   (FUN_01f7c678(lVar7,uVar6,
                                                 *(undefined8 *)
                                                  Method_FullSerializer_fsMetaType_<>c__DisplayClass5_0_<CollectProperties>b__2__
                                                 ,1,0,0), plVar16 != (long *)0x0)) {
                                  (**(code **)(*plVar16 + 0x2a8))
                                            (plVar16,*(undefined8 *)puVar2,lVar7,
                                             *(undefined8 *)(*plVar16 + 0x2b0));
                                  plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                  uVar6 = FUN_01780344(*unaff_x28,0);
                                  lVar7 = thunk_FUN_00d62348(*unaff_x27);
                                  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s64__;
                                  if ((lVar7 != 0) &&
                                     (FUN_01f7c678(lVar7,uVar6,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s64__
                                                  ,1,0,0), plVar16 != (long *)0x0)) {
                                    (**(code **)(*plVar16 + 0x2a8))
                                              (plVar16,*(undefined8 *)puVar2,lVar7,
                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                    plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                    uVar6 = FUN_01780344(*unaff_x28,0);
                                    lVar7 = thunk_FUN_00d62348(*unaff_x27);
                                    puVar2 = System_Net_WebSockets_WebSocketHandle_TypeInfo;
                                    if ((lVar7 != 0) &&
                                       (FUN_01f7c678(lVar7,uVar6,
                                                     *(undefined8 *)
                                                      System_Net_WebSockets_WebSocketHandle_TypeInfo
                                                     ,1,0,0), plVar16 != (long *)0x0)) {
                                      (**(code **)(*plVar16 + 0x2a8))
                                                (plVar16,*(undefined8 *)puVar2,lVar7,
                                                 *(undefined8 *)(*plVar16 + 0x2b0));
                                      plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                      uVar6 = FUN_01780344(*unaff_x28,0);
                                      lVar7 = thunk_FUN_00d62348(*unaff_x27);
                                      puVar2 = 
                                      Method_UnityEngine_GameObject_GetComponent<RectTransform>__;
                                      if ((lVar7 != 0) &&
                                         (FUN_01f7c678(lVar7,uVar6,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                                                  ,1,0,0), plVar16 != (long *)0x0)) {
                                        (**(code **)(*plVar16 + 0x2a8))
                                                  (plVar16,*(undefined8 *)puVar2,lVar7,
                                                   *(undefined8 *)(*plVar16 + 0x2b0));
                                        plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                        uVar6 = FUN_01780344(*unaff_x28,0);
                                        lVar7 = thunk_FUN_00d62348(*unaff_x27);
                                        puVar2 = 
                                        Method_System_Configuration_IgnoreSection_ResetModified__;
                                        if ((lVar7 != 0) &&
                                           (FUN_01f7c678(lVar7,uVar6,
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Configuration_IgnoreSection_ResetModified__
                                                  ,1,0,0), plVar16 != (long *)0x0)) {
                                          (**(code **)(*plVar16 + 0x2a8))
                                                    (plVar16,*(undefined8 *)puVar2,lVar7,
                                                     *(undefined8 *)(*plVar16 + 0x2b0));
                                          plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                          uVar6 = FUN_01780344(*(undefined8 *)puVar4,0);
                                          lVar7 = thunk_FUN_00d62348(*unaff_x27);
                                          puVar2 = 
                                          Method_System_IO_Enumeration_FileSystemEnumerable<FileInfo>__ctor__
                                          ;
                                          if ((lVar7 != 0) &&
                                             (FUN_01f7c678(lVar7,uVar6,
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_IO_Enumeration_FileSystemEnumerable<FileInfo>__ctor__
                                                  ,1,0,0), plVar16 != (long *)0x0)) {
                                            (**(code **)(*plVar16 + 0x2a8))
                                                      (plVar16,*(undefined8 *)puVar2,lVar7,
                                                       *(undefined8 *)(*plVar16 + 0x2b0));
                                            plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                            uVar6 = FUN_01780344(*unaff_x28,0);
                                            lVar7 = thunk_FUN_00d62348(*unaff_x27);
                                            puVar2 = StringLiteral_4952;
                                            if ((lVar7 != 0) &&
                                               (FUN_01f7c678(lVar7,uVar6,
                                                             *(undefined8 *)StringLiteral_4952,1,0,0
                                                            ), plVar16 != (long *)0x0)) {
                                              (**(code **)(*plVar16 + 0x2a8))
                                                        (plVar16,*(undefined8 *)puVar2,lVar7,
                                                         *(undefined8 *)(*plVar16 + 0x2b0));
                                              plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8)
                                              ;
                                              uVar6 = FUN_01780344(*unaff_x28,0);
                                              lVar7 = thunk_FUN_00d62348(*unaff_x27);
                                              puVar2 = Method_OVRSpaceQuery_Options_ToQueryInfo__;
                                              if ((lVar7 != 0) &&
                                                 (FUN_01f7c678(lVar7,uVar6,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_OVRSpaceQuery_Options_ToQueryInfo__,1,0,0),
                                                 plVar16 != (long *)0x0)) {
                                                (**(code **)(*plVar16 + 0x2a8))
                                                          (plVar16,*(undefined8 *)puVar2,lVar7,
                                                           *(undefined8 *)(*plVar16 + 0x2b0));
                                                plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8) +
                                                                    8);
                                                uVar6 = FUN_01780344(*unaff_x28,0);
                                                lVar7 = thunk_FUN_00d62348(*unaff_x27);
                                                puVar2 = OVROverlay_TypeInfo;
                                                if ((lVar7 != 0) &&
                                                   (FUN_01f7c678(lVar7,uVar6,
                                                                 *(undefined8 *)OVROverlay_TypeInfo,
                                                                 1,0,0), plVar16 != (long *)0x0)) {
                                                  (**(code **)(*plVar16 + 0x2a8))
                                                            (plVar16,*(undefined8 *)puVar2,lVar7,
                                                             *(undefined8 *)(*plVar16 + 0x2b0));
                                                  plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8)
                                                                      + 8);
                                                  uVar6 = FUN_01780344(*unaff_x28,0);
                                                  lVar7 = thunk_FUN_00d62348(*unaff_x27);
                                                  puVar2 = PTR_DAT_033eced0;
                                                  if ((lVar7 != 0) &&
                                                     (FUN_01f7c678(lVar7,uVar6,
                                                                   *(undefined8 *)PTR_DAT_033eced0,1
                                                                   ,0,0), plVar16 != (long *)0x0)) {
                                                    (**(code **)(*plVar16 + 0x2a8))
                                                              (plVar16,*(undefined8 *)puVar2,lVar7,
                                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                                    plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8
                                                                                  ) + 8);
                                                    uVar6 = FUN_01780344(*unaff_x28,0);
                                                    lVar7 = thunk_FUN_00d62348(*unaff_x27);
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_get_Current__
                                                  ;
                                                  if ((lVar7 != 0) &&
                                                     (FUN_01f7c678(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_get_Current__
                                                  ,1,0,0), plVar16 != (long *)0x0)) {
                                                    (**(code **)(*plVar16 + 0x2a8))
                                                              (plVar16,*(undefined8 *)puVar2,lVar7,
                                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                                    plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8
                                                                                  ) + 8);
                                                    uVar6 = FUN_01780344(*unaff_x28,0);
                                                    lVar7 = thunk_FUN_00d62348(*unaff_x27);
                                                    puVar2 = StringLiteral_1905;
                                                    if ((lVar7 != 0) &&
                                                       (FUN_01f7c678(lVar7,uVar6,
                                                                     *(undefined8 *)
                                                                      StringLiteral_1905,1,0,0),
                                                       plVar16 != (long *)0x0)) {
                                                      (**(code **)(*plVar16 + 0x2a8))
                                                                (plVar16,*(undefined8 *)puVar2,lVar7
                                                                 ,*(undefined8 *)(*plVar16 + 0x2b0))
                                                      ;
                                                      plVar16 = *(long **)(*(long *)(*unaff_x26 +
                                                                                    0xb8) + 8);
                                                      uVar6 = FUN_01780344(*unaff_x28,0);
                                                      lVar7 = thunk_FUN_00d62348(*unaff_x27);
                                                      puVar2 = 
                                                  Method_Mono_Security_X509_PKCS12_AddPrivateKey__;
                                                  if ((lVar7 != 0) &&
                                                     (FUN_01f7c678(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_Mono_Security_X509_PKCS12_AddPrivateKey__,1
                                                  ,0,0), plVar16 != (long *)0x0)) {
                                                    (**(code **)(*plVar16 + 0x2a8))
                                                              (plVar16,*(undefined8 *)puVar2,lVar7,
                                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                                    plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8
                                                                                  ) + 8);
                                                    uVar6 = FUN_01780344(*(undefined8 *)puVar4,0);
                                                    lVar7 = thunk_FUN_00d62348(*unaff_x27);
                                                    puVar4 = 
                                                  UnityEngine_UIElements_TreeView_TypeInfo;
                                                  if ((lVar7 != 0) &&
                                                     (FUN_01f7c678(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_UIElements_TreeView_TypeInfo,1,0,0),
                                                  plVar16 != (long *)0x0)) {
                                                    (**(code **)(*plVar16 + 0x2a8))
                                                              (plVar16,*(undefined8 *)puVar4,lVar7,
                                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                                    plVar16 = *(long **)(*(long *)(*unaff_x26 + 0xb8
                                                                                  ) + 8);
                                                    uVar6 = FUN_01780344(*unaff_x28,0);
                                                    lVar7 = thunk_FUN_00d62348(*unaff_x27);
                                                    puVar4 = 
                                                  Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidLinearAccelerationSensor>__
                                                  ;
                                                  if ((lVar7 != 0) &&
                                                     (FUN_01f7c678(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidLinearAccelerationSensor>__
                                                  ,1,0,0), plVar16 != (long *)0x0)) {
                                                    (**(code **)(*plVar16 + 0x2a8))
                                                              (plVar16,*(undefined8 *)puVar4,lVar7,
                                                               *(undefined8 *)(*plVar16 + 0x2b0));
                                                    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar7 != 0) {
                                                      FUN_01747a0c(lVar7,0);
                                                      uVar6 = FUN_0174945c(lVar7,0);
                                                      plVar16 = *(long **)(*(long *)(*unaff_x26 +
                                                                                    0xb8) + 8);
                                                      *(undefined8 *)
                                                       (*(long *)(*unaff_x26 + 0xb8) + 0x18) = uVar6
                                                      ;
                                                      if (plVar16 != (long *)0x0) {
                                                        plVar16 = (long *)(**(code **)(*plVar16 +
                                                                                      0x328))(
                                                  plVar16,*(undefined8 *)(*plVar16 + 0x330));
                                                  puVar4 = 
                                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                                  ;
                                                  puVar3 = 
                                                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt64LiftedToNull_TypeInfo
                                                  ;
                                                  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  do {
                                                    lVar10 = *plVar16;
                                                    lVar7 = *(long *)puVar4;
                                                    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
                                                    if (uVar14 != 0) {
                                                      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar15 + -2) == lVar7) {
                                                          puVar11 = (undefined8 *)
                                                                    (lVar10 + (long)*piVar15 * 0x10
                                                                    + 0x138);
                                                          goto LAB_01f81274;
                                                        }
                                                        uVar14 = uVar14 - 1;
                                                        piVar15 = piVar15 + 4;
                                                      } while (uVar14 != 0);
                                                    }
                                                    puVar11 = (undefined8 *)
                                                              FUN_00d59724(plVar16,lVar7,0);
LAB_01f81274:
                                                    uVar14 = (*(code *)*puVar11)(plVar16,puVar11[1])
                                                    ;
                                                    if ((uVar14 & 1) == 0) {
                                                      plVar16 = (long *)thunk_FUN_00d6225c(plVar16,*
                                                  (undefined8 *)puVar5);
                                                  if (plVar16 == (long *)0x0) {
                                                    return;
                                                  }
                                                  lVar7 = *plVar16;
                                                  uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                                  if (uVar14 == 0) goto LAB_01f813e4;
                                                  piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                                  goto LAB_01f813cc;
                                                  }
                                                  lVar10 = *plVar16;
                                                  lVar7 = *(long *)puVar4;
                                                  uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
                                                  if (uVar14 != 0) {
                                                    piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar15 + -2) == lVar7) {
                                                        puVar11 = (undefined8 *)
                                                                  (lVar10 + (long)(*piVar15 + 1) *
                                                                            0x10 + 0x138);
                                                        goto LAB_01f812d4;
                                                      }
                                                      uVar14 = uVar14 - 1;
                                                      piVar15 = piVar15 + 4;
                                                    } while (uVar14 != 0);
                                                  }
                                                  puVar11 = (undefined8 *)
                                                            FUN_00d59724(plVar16,lVar7,1);
LAB_01f812d4:
                                                  plVar17 = (long *)(*(code *)*puVar11)(plVar16,
                                                  puVar11[1]);
                                                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  if (*(long *)(*plVar17 + 0x40) !=
                                                      *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da544c();
                                                  }
                                                  puVar11 = (undefined8 *)thunk_FUN_00d624a0();
                                                  plVar17 = (long *)puVar11[1];
                                                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  lVar7 = *unaff_x27;
                                                  if ((*(byte *)(*plVar17 + 300) <
                                                       *(byte *)(lVar7 + 300)) ||
                                                     (*(long *)(*(long *)(*plVar17 + 200) +
                                                                (ulong)*(byte *)(lVar7 + 300) * 8 +
                                                               -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da544c();
                                                  }
                                                  uVar6 = *puVar11;
                                                  lVar10 = plVar17[2];
                                                  lVar13 = plVar17[3];
                                                  lVar7 = thunk_FUN_00d62348(lVar7);
                                                  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  FUN_01f7c678(lVar7,lVar10,lVar13,1,0,0);
                                                  *(undefined1 *)(lVar7 + 0x61) = 1;
                                                  plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8)
                                                                      + 0x18);
                                                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  (**(code **)(*plVar17 + 0x2a8))
                                                            (plVar17,uVar6,lVar7,
                                                             *(undefined8 *)(*plVar17 + 0x2b0));
                                                  } while( true );
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
LAB_01f81430:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


