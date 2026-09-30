/*
FUNCTION_NAME: System.Net.FileWebRequest$$.cctor
ENTRY_POINT: 01f7fb98
PROGRAM: Lovesick-libil2cpp.so
SCORE: 168
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_9;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6;functionality_data_collection_or_telemetry_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x01f8145c) */

void System_Net_FileWebRequest___cctor(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  
  puVar5 = Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalMaterialChange__;
  (**(code **)(param_1 + 0x2a8))();
  plVar17 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
  uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
  uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
  lVar9 = thunk_FUN_00d62348(*unaff_x27);
  if ((lVar9 != 0) &&
     (FUN_01f7c678(lVar9,uVar8,*(undefined8 *)System_Collections_Generic_List<BillingPlan>_TypeInfo,
                   1,0,0),
     puVar5 = 
     Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__,
     plVar17 != (long *)0x0)) {
    (**(code **)(*plVar17 + 0x2a8))(plVar17,uVar7,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
    plVar17 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
    uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
    uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
    lVar9 = thunk_FUN_00d62348(*unaff_x27);
    if ((lVar9 != 0) &&
       (FUN_01f7c678(lVar9,uVar8,
                     *(undefined8 *)
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_116>_SliceWithStride<Vector3>__
                     ,1,0,0),
       puVar3 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass21_0_<DOAnchorMin>b__1__,
       plVar17 != (long *)0x0)) {
      (**(code **)(*plVar17 + 0x2a8))(plVar17,uVar7,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar4 = StringLiteral_3349;
      puVar3 = Method_System_Collections_Generic_Dictionary<int,_List<Renderer>>_Add__;
      if (lVar9 != 0) {
        FUN_01ebee44(lVar9,0);
        *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)puVar3;
        plVar17 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
        uVar7 = FUN_01780344(*(undefined8 *)puVar4,0);
        uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
        plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
        uVar10 = FUN_01780344(*(undefined8 *)puVar5,0);
        if (plVar18 != (long *)0x0) {
          plVar18 = (long *)(**(code **)(*plVar18 + 0x308))
                                      (plVar18,uVar10,*(undefined8 *)(*plVar18 + 0x310));
          lVar11 = thunk_FUN_00d62348(*unaff_x27);
          if (lVar11 != 0) {
            if (plVar18 != (long *)0x0) {
              lVar14 = *unaff_x27;
              if ((*(byte *)(*plVar18 + 300) < *(byte *)(lVar14 + 300)) ||
                 (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar14 + 300) * 8 + -8) !=
                  lVar14)) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(plVar18,lVar14,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<JsonSchemaNode>_get_Item__);
              }
            }
            FUN_01f7c678(lVar11,uVar8,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<JsonSchemaNode>_get_Item__,1,
                         plVar18,lVar9);
            puVar3 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
            if (plVar17 != (long *)0x0) {
              (**(code **)(*plVar17 + 0x2a8))
                        (plVar17,uVar7,lVar11,*(undefined8 *)(*plVar17 + 0x2b0));
              plVar17 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
              uVar7 = FUN_01780344(*(undefined8 *)puVar3,0);
              uVar8 = FUN_01780344(*(undefined8 *)puVar3,0);
              lVar9 = thunk_FUN_00d62348(*unaff_x27);
              if ((lVar9 != 0) &&
                 (FUN_01f7c678(lVar9,uVar8,
                               *(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<uint>__
                               ,1,0,0), puVar3 = OVRPlugin_OVRP_1_50_0_TypeInfo,
                 plVar17 != (long *)0x0)) {
                (**(code **)(*plVar17 + 0x2a8))
                          (plVar17,uVar7,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
                plVar17 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                uVar7 = FUN_01780344(*(undefined8 *)puVar3,0);
                uVar8 = FUN_01780344(*(undefined8 *)puVar3,0);
                lVar9 = thunk_FUN_00d62348(*unaff_x27);
                if ((lVar9 != 0) &&
                   (FUN_01f7c678(lVar9,uVar8,*(undefined8 *)StringLiteral_4884,1,0,0),
                   puVar3 = Method_System_Linq_Enumerable_ToList<EdgeLookup>__,
                   plVar17 != (long *)0x0)) {
                  (**(code **)(*plVar17 + 0x2a8))
                            (plVar17,uVar7,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
                  plVar17 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                  uVar7 = FUN_01780344(*(undefined8 *)puVar3,0);
                  uVar8 = FUN_01780344(*(undefined8 *)puVar3,0);
                  plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                  uVar10 = FUN_01780344(*unaff_x29,0);
                  if (plVar18 != (long *)0x0) {
                    plVar18 = (long *)(**(code **)(*plVar18 + 0x308))
                                                (plVar18,uVar10,*(undefined8 *)(*plVar18 + 0x310));
                    lVar9 = thunk_FUN_00d62348(*unaff_x27);
                    puVar3 = PTR_DAT_033f1220;
                    if (lVar9 != 0) {
                      if (plVar18 != (long *)0x0) {
                        lVar11 = *unaff_x27;
                        if ((*(byte *)(*plVar18 + 300) < *(byte *)(lVar11 + 300)) ||
                           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar11 + 300) * 8
                                     + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da544c(plVar18,lVar11,
                                       *(undefined8 *)Method_Messenger<SetList>_RemoveListener__);
                        }
                      }
                      FUN_01f7c678(lVar9,uVar8,
                                   *(undefined8 *)Method_Messenger<SetList>_RemoveListener__,1,
                                   plVar18,0);
                      puVar4 = Method_SoccerBlocker_HideCrowd__;
                      if (plVar17 != (long *)0x0) {
                        (**(code **)(*plVar17 + 0x2a8))
                                  (plVar17,uVar7,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
                        plVar17 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                        uVar7 = FUN_01780344(*(undefined8 *)puVar4,0);
                        uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
                        lVar9 = thunk_FUN_00d62348(*unaff_x27);
                        if ((lVar9 != 0) &&
                           (FUN_01f7c678(lVar9,uVar8,
                                         *(undefined8 *)
                                          Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c__DisplayClass80_0_<CreateShouldSerializeTest>b__0__
                                         ,0,0,0), puVar4 = StringLiteral_11159,
                           plVar17 != (long *)0x0)) {
                          (**(code **)(*plVar17 + 0x2a8))
                                    (plVar17,uVar7,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
                          plVar17 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                          uVar7 = FUN_01780344(*(undefined8 *)puVar4,0);
                          uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
                          lVar9 = thunk_FUN_00d62348(*unaff_x27);
                          if ((lVar9 != 0) &&
                             (FUN_01f7c678(lVar9,uVar8,*(undefined8 *)StringLiteral_12526,1,0,0),
                             puVar2 = StringLiteral_4052, plVar17 != (long *)0x0)) {
                            (**(code **)(*plVar17 + 0x2a8))
                                      (plVar17,uVar7,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
                            plVar17 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                            uVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
                            uVar8 = FUN_01780344(*(undefined8 *)puVar2,0);
                            lVar9 = thunk_FUN_00d62348(*unaff_x27);
                            if ((lVar9 != 0) &&
                               (FUN_01f7c678(lVar9,uVar8,*(undefined8 *)PTR_DAT_033f12a0,0,0,0),
                               puVar2 = System_Reflection_RuntimePropertyInfo___TypeInfo,
                               plVar17 != (long *)0x0)) {
                              (**(code **)(*plVar17 + 0x2a8))
                                        (plVar17,uVar7,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
                              plVar17 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                              uVar7 = FUN_01780344(*(undefined8 *)puVar2,0);
                              uVar8 = FUN_01780344(*(undefined8 *)puVar2,0);
                              lVar9 = thunk_FUN_00d62348(*unaff_x27);
                              if ((lVar9 != 0) &&
                                 (FUN_01f7c678(lVar9,uVar8,*(undefined8 *)StringLiteral_3711,0,0,0),
                                 plVar17 != (long *)0x0)) {
                                (**(code **)(*plVar17 + 0x2a8))
                                          (plVar17,uVar7,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
                                lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                if (lVar9 != 0) {
                                  FUN_01747a0c(lVar9,0);
                                  plVar17 = (long *)**(long **)(*unaff_x26 + 0xb8);
                                  (*(long **)(*unaff_x26 + 0xb8))[1] = lVar9;
                                  if ((plVar17 != (long *)0x0) &&
                                     (plVar17 = (long *)(**(code **)(*plVar17 + 0x398))
                                                                  (plVar17,*(undefined8 *)
                                                                            (*plVar17 + 0x3a0)),
                                     plVar17 != (long *)0x0)) {
                                    lVar9 = *plVar17;
                                    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12a);
                                    if (uVar15 != 0) {
                                      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar16 + -2) ==
                                            *(long *)
                                             Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                                           ) {
                                          puVar12 = (undefined8 *)
                                                    (lVar9 + (long)*piVar16 * 0x10 + 0x138);
                                          goto LAB_01f802d8;
                                        }
                                        uVar15 = uVar15 - 1;
                                        piVar16 = piVar16 + 4;
                                      } while (uVar15 != 0);
                                    }
                                    puVar12 = (undefined8 *)
                                              FUN_00d59724(plVar17,*(long *)
                                                  Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                                                  ,0);
LAB_01f802d8:
                                    puVar6 = StringLiteral_10310;
                                    plVar17 = (long *)(*(code *)*puVar12)(plVar17,puVar12[1]);
                                    puVar2 = 
                                    Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                    ;
                                    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_00da518c();
                                    }
                                    do {
                                      lVar11 = *plVar17;
                                      lVar9 = *(long *)puVar2;
                                      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
                                      if (uVar15 != 0) {
                                        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar16 + -2) == lVar9) {
                                            puVar12 = (undefined8 *)
                                                      (lVar11 + (long)*piVar16 * 0x10 + 0x138);
                                            goto LAB_01f80348;
                                          }
                                          uVar15 = uVar15 - 1;
                                          piVar16 = piVar16 + 4;
                                        } while (uVar15 != 0);
                                      }
                                      puVar12 = (undefined8 *)FUN_00d59724(plVar17,lVar9,0);
LAB_01f80348:
                                      uVar15 = (*(code *)*puVar12)(plVar17,puVar12[1]);
                                      if ((uVar15 & 1) == 0) {
                                        plVar17 = (long *)thunk_FUN_00d6225c(plVar17,*(undefined8 *)
                                                                                      puVar6);
                                        if (plVar17 == (long *)0x0) goto LAB_01f80480;
                                        lVar9 = *plVar17;
                                        uVar15 = (ulong)*(ushort *)(lVar9 + 0x12a);
                                        if (uVar15 == 0) goto LAB_01f80458;
                                        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                        goto LAB_01f80440;
                                      }
                                      lVar11 = *plVar17;
                                      lVar9 = *(long *)puVar2;
                                      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
                                      if (uVar15 != 0) {
                                        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar16 + -2) == lVar9) {
                                            puVar12 = (undefined8 *)
                                                      (lVar11 + (long)(*piVar16 + 1) * 0x10 + 0x138)
                                            ;
                                            goto LAB_01f803a8;
                                          }
                                          uVar15 = uVar15 - 1;
                                          piVar16 = piVar16 + 4;
                                        } while (uVar15 != 0);
                                      }
                                      puVar12 = (undefined8 *)FUN_00d59724(plVar17,lVar9,1);
LAB_01f803a8:
                                      plVar18 = (long *)(*(code *)*puVar12)(plVar17,puVar12[1]);
                                      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      bVar1 = *(byte *)(*unaff_x27 + 300);
                                      if ((*(byte *)(*plVar18 + 300) < bVar1) ||
                                         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 +
                                                   -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da544c(plVar18);
                                      }
                                      plVar13 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      (**(code **)(*plVar13 + 0x2a8))
                                                (plVar13,plVar18[3],plVar18,
                                                 *(undefined8 *)(*plVar13 + 0x2b0));
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
  goto LAB_01f81430;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01f813cc:
    if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto System_Net_WebProxy__IsLocalInProxyHash;
    }
  }
LAB_01f813e4:
  puVar12 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar6,0);
System_Net_WebProxy__IsLocalInProxyHash:
  (*(code *)*puVar12)(plVar17,puVar12[1]);
  return;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01f80440:
    if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01f80474;
    }
  }
LAB_01f80458:
  puVar12 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar6,0);
LAB_01f80474:
  (*(code *)*puVar12)(plVar17,puVar12[1]);
LAB_01f80480:
  uVar7 = *unaff_x25;
  plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_01780344(uVar7,0);
  lVar9 = thunk_FUN_00d62348(*unaff_x27);
  puVar2 = PTR_DAT_033f2f40;
  if ((lVar9 != 0) &&
     (FUN_01f7c678(lVar9,uVar7,*(undefined8 *)PTR_DAT_033f2f40,1,0,0), plVar17 != (long *)0x0)) {
    (**(code **)(*plVar17 + 0x2a8))
              (plVar17,*(undefined8 *)puVar2,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
    plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
    uVar7 = FUN_01780344(*unaff_x25,0);
    lVar9 = thunk_FUN_00d62348(*unaff_x27);
    puVar2 = Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo;
    if ((lVar9 != 0) &&
       (FUN_01f7c678(lVar9,uVar7,
                     *(undefined8 *)Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo,1,0,0),
       plVar17 != (long *)0x0)) {
      (**(code **)(*plVar17 + 0x2a8))
                (plVar17,*(undefined8 *)puVar2,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
      plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
      uVar7 = FUN_01780344(*unaff_x25,0);
      lVar9 = thunk_FUN_00d62348(*unaff_x27);
      puVar2 = Method_System_Xml_Schema_Datatype_List_TryParseValue__;
      if ((lVar9 != 0) &&
         (FUN_01f7c678(lVar9,uVar7,
                       *(undefined8 *)Method_System_Xml_Schema_Datatype_List_TryParseValue__,1,0,0),
         plVar17 != (long *)0x0)) {
        (**(code **)(*plVar17 + 0x2a8))
                  (plVar17,*(undefined8 *)puVar2,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
        plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
        uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
        lVar9 = thunk_FUN_00d62348(*unaff_x27);
        puVar2 = 
        System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MemberInfo,_GizmoRendererManager>>>_TypeInfo
        ;
        if ((lVar9 != 0) &&
           (FUN_01f7c678(lVar9,uVar7,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MemberInfo,_GizmoRendererManager>>>_TypeInfo
                         ,1,0,0), plVar17 != (long *)0x0)) {
          (**(code **)(*plVar17 + 0x2a8))
                    (plVar17,*(undefined8 *)puVar2,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
          plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
          uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
          lVar9 = thunk_FUN_00d62348(*unaff_x27);
          puVar2 = UnityEngine_UIElements_UIR_Tessellation_TypeInfo;
          if ((lVar9 != 0) &&
             (FUN_01f7c678(lVar9,uVar7,
                           *(undefined8 *)UnityEngine_UIElements_UIR_Tessellation_TypeInfo,1,0,0),
             plVar17 != (long *)0x0)) {
            (**(code **)(*plVar17 + 0x2a8))
                      (plVar17,*(undefined8 *)puVar2,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
            plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
            uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
            lVar9 = thunk_FUN_00d62348(*unaff_x27);
            puVar2 = Method_UnityEngine_InputSystem_InputSystem_AddDevice__;
            if ((lVar9 != 0) &&
               (FUN_01f7c678(lVar9,uVar7,
                             *(undefined8 *)Method_UnityEngine_InputSystem_InputSystem_AddDevice__,1
                             ,0,0), plVar17 != (long *)0x0)) {
              (**(code **)(*plVar17 + 0x2a8))
                        (plVar17,*(undefined8 *)puVar2,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
              plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
              uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
              lVar9 = thunk_FUN_00d62348(*unaff_x27);
              puVar2 = Method_System_Data_DataView_System_Collections_IList_Insert__;
              if ((lVar9 != 0) &&
                 (FUN_01f7c678(lVar9,uVar7,
                               *(undefined8 *)
                                Method_System_Data_DataView_System_Collections_IList_Insert__,1,0,0)
                 , plVar17 != (long *)0x0)) {
                (**(code **)(*plVar17 + 0x2a8))
                          (plVar17,*(undefined8 *)puVar2,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
                plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                uVar7 = FUN_01780344(*unaff_x25,0);
                lVar9 = thunk_FUN_00d62348(*unaff_x27);
                puVar2 = 
                Field_<PrivateImplementationDetails>_11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D
                ;
                if ((lVar9 != 0) &&
                   (FUN_01f7c678(lVar9,uVar7,
                                 *(undefined8 *)
                                  Field_<PrivateImplementationDetails>_11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D
                                 ,1,0,0), plVar17 != (long *)0x0)) {
                  (**(code **)(*plVar17 + 0x2a8))
                            (plVar17,*(undefined8 *)puVar2,lVar9,*(undefined8 *)(*plVar17 + 0x2b0));
                  plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                  uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                  lVar9 = thunk_FUN_00d62348(*unaff_x27);
                  puVar2 = Method_UnityEngine_Rendering_CommandBuffer_WaitOnAsyncGraphicsFence__;
                  if ((lVar9 != 0) &&
                     (FUN_01f7c678(lVar9,uVar7,
                                   *(undefined8 *)
                                    Method_UnityEngine_Rendering_CommandBuffer_WaitOnAsyncGraphicsFence__
                                   ,1,0,0), plVar17 != (long *)0x0)) {
                    (**(code **)(*plVar17 + 0x2a8))
                              (plVar17,*(undefined8 *)puVar2,lVar9,*(undefined8 *)(*plVar17 + 0x2b0)
                              );
                    plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                    uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                    lVar9 = thunk_FUN_00d62348(*unaff_x27);
                    puVar2 = 
                    Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_Add__
                    ;
                    if ((lVar9 != 0) &&
                       (FUN_01f7c678(lVar9,uVar7,
                                     *(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_Add__
                                     ,1,0,0), plVar17 != (long *)0x0)) {
                      (**(code **)(*plVar17 + 0x2a8))
                                (plVar17,*(undefined8 *)puVar2,lVar9,
                                 *(undefined8 *)(*plVar17 + 0x2b0));
                      plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                      uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                      lVar9 = thunk_FUN_00d62348(*unaff_x27);
                      puVar2 = StringLiteral_4078;
                      if ((lVar9 != 0) &&
                         (FUN_01f7c678(lVar9,uVar7,*(undefined8 *)StringLiteral_4078,1,0,0),
                         plVar17 != (long *)0x0)) {
                        (**(code **)(*plVar17 + 0x2a8))
                                  (plVar17,*(undefined8 *)puVar2,lVar9,
                                   *(undefined8 *)(*plVar17 + 0x2b0));
                        plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                        uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                        lVar9 = thunk_FUN_00d62348(*unaff_x27);
                        puVar2 = StringLiteral_6145;
                        if ((lVar9 != 0) &&
                           (FUN_01f7c678(lVar9,uVar7,*(undefined8 *)StringLiteral_6145,1,0,0),
                           plVar17 != (long *)0x0)) {
                          (**(code **)(*plVar17 + 0x2a8))
                                    (plVar17,*(undefined8 *)puVar2,lVar9,
                                     *(undefined8 *)(*plVar17 + 0x2b0));
                          plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                          uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                          lVar9 = thunk_FUN_00d62348(*unaff_x27);
                          puVar2 = Method_System_Collections_Generic_List<RadioButton>_get_Item__;
                          if ((lVar9 != 0) &&
                             (FUN_01f7c678(lVar9,uVar7,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<RadioButton>_get_Item__
                                           ,1,0,0), plVar17 != (long *)0x0)) {
                            (**(code **)(*plVar17 + 0x2a8))
                                      (plVar17,*(undefined8 *)puVar2,lVar9,
                                       *(undefined8 *)(*plVar17 + 0x2b0));
                            plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                            uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                            lVar9 = thunk_FUN_00d62348(*unaff_x27);
                            puVar2 = 
                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass5_0_<DOFillAmount>b__0__
                            ;
                            if ((lVar9 != 0) &&
                               (FUN_01f7c678(lVar9,uVar7,
                                             *(undefined8 *)
                                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass5_0_<DOFillAmount>b__0__
                                             ,1,0,0), plVar17 != (long *)0x0)) {
                              (**(code **)(*plVar17 + 0x2a8))
                                        (plVar17,*(undefined8 *)puVar2,lVar9,
                                         *(undefined8 *)(*plVar17 + 0x2b0));
                              plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                              uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                              lVar9 = thunk_FUN_00d62348(*unaff_x27);
                              puVar2 = Meta_XR_ImmersiveDebugger_Manager_TweakEnum_var;
                              if ((lVar9 != 0) &&
                                 (FUN_01f7c678(lVar9,uVar7,
                                               *(undefined8 *)
                                                Meta_XR_ImmersiveDebugger_Manager_TweakEnum_var,1,0,
                                               0), plVar17 != (long *)0x0)) {
                                (**(code **)(*plVar17 + 0x2a8))
                                          (plVar17,*(undefined8 *)puVar2,lVar9,
                                           *(undefined8 *)(*plVar17 + 0x2b0));
                                plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                                lVar9 = thunk_FUN_00d62348(*unaff_x27);
                                puVar2 = 
                                Method_FullSerializer_fsMetaType_<>c__DisplayClass5_0_<CollectProperties>b__2__
                                ;
                                if ((lVar9 != 0) &&
                                   (FUN_01f7c678(lVar9,uVar7,
                                                 *(undefined8 *)
                                                  Method_FullSerializer_fsMetaType_<>c__DisplayClass5_0_<CollectProperties>b__2__
                                                 ,1,0,0), plVar17 != (long *)0x0)) {
                                  (**(code **)(*plVar17 + 0x2a8))
                                            (plVar17,*(undefined8 *)puVar2,lVar9,
                                             *(undefined8 *)(*plVar17 + 0x2b0));
                                  plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                  uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                                  lVar9 = thunk_FUN_00d62348(*unaff_x27);
                                  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s64__;
                                  if ((lVar9 != 0) &&
                                     (FUN_01f7c678(lVar9,uVar7,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s64__
                                                  ,1,0,0), plVar17 != (long *)0x0)) {
                                    (**(code **)(*plVar17 + 0x2a8))
                                              (plVar17,*(undefined8 *)puVar2,lVar9,
                                               *(undefined8 *)(*plVar17 + 0x2b0));
                                    plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                    uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                                    lVar9 = thunk_FUN_00d62348(*unaff_x27);
                                    puVar2 = System_Net_WebSockets_WebSocketHandle_TypeInfo;
                                    if ((lVar9 != 0) &&
                                       (FUN_01f7c678(lVar9,uVar7,
                                                     *(undefined8 *)
                                                      System_Net_WebSockets_WebSocketHandle_TypeInfo
                                                     ,1,0,0), plVar17 != (long *)0x0)) {
                                      (**(code **)(*plVar17 + 0x2a8))
                                                (plVar17,*(undefined8 *)puVar2,lVar9,
                                                 *(undefined8 *)(*plVar17 + 0x2b0));
                                      plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                      uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                                      lVar9 = thunk_FUN_00d62348(*unaff_x27);
                                      puVar2 = 
                                      Method_UnityEngine_GameObject_GetComponent<RectTransform>__;
                                      if ((lVar9 != 0) &&
                                         (FUN_01f7c678(lVar9,uVar7,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                                                  ,1,0,0), plVar17 != (long *)0x0)) {
                                        (**(code **)(*plVar17 + 0x2a8))
                                                  (plVar17,*(undefined8 *)puVar2,lVar9,
                                                   *(undefined8 *)(*plVar17 + 0x2b0));
                                        plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                        uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                                        lVar9 = thunk_FUN_00d62348(*unaff_x27);
                                        puVar2 = 
                                        Method_System_Configuration_IgnoreSection_ResetModified__;
                                        if ((lVar9 != 0) &&
                                           (FUN_01f7c678(lVar9,uVar7,
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Configuration_IgnoreSection_ResetModified__
                                                  ,1,0,0), plVar17 != (long *)0x0)) {
                                          (**(code **)(*plVar17 + 0x2a8))
                                                    (plVar17,*(undefined8 *)puVar2,lVar9,
                                                     *(undefined8 *)(*plVar17 + 0x2b0));
                                          plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                          uVar7 = FUN_01780344(*(undefined8 *)puVar4,0);
                                          lVar9 = thunk_FUN_00d62348(*unaff_x27);
                                          puVar2 = 
                                          Method_System_IO_Enumeration_FileSystemEnumerable<FileInfo>__ctor__
                                          ;
                                          if ((lVar9 != 0) &&
                                             (FUN_01f7c678(lVar9,uVar7,
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_IO_Enumeration_FileSystemEnumerable<FileInfo>__ctor__
                                                  ,1,0,0), plVar17 != (long *)0x0)) {
                                            (**(code **)(*plVar17 + 0x2a8))
                                                      (plVar17,*(undefined8 *)puVar2,lVar9,
                                                       *(undefined8 *)(*plVar17 + 0x2b0));
                                            plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                            uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                                            lVar9 = thunk_FUN_00d62348(*unaff_x27);
                                            puVar2 = StringLiteral_4952;
                                            if ((lVar9 != 0) &&
                                               (FUN_01f7c678(lVar9,uVar7,
                                                             *(undefined8 *)StringLiteral_4952,1,0,0
                                                            ), plVar17 != (long *)0x0)) {
                                              (**(code **)(*plVar17 + 0x2a8))
                                                        (plVar17,*(undefined8 *)puVar2,lVar9,
                                                         *(undefined8 *)(*plVar17 + 0x2b0));
                                              plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8)
                                              ;
                                              uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                                              lVar9 = thunk_FUN_00d62348(*unaff_x27);
                                              puVar2 = Method_OVRSpaceQuery_Options_ToQueryInfo__;
                                              if ((lVar9 != 0) &&
                                                 (FUN_01f7c678(lVar9,uVar7,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_OVRSpaceQuery_Options_ToQueryInfo__,1,0,0),
                                                 plVar17 != (long *)0x0)) {
                                                (**(code **)(*plVar17 + 0x2a8))
                                                          (plVar17,*(undefined8 *)puVar2,lVar9,
                                                           *(undefined8 *)(*plVar17 + 0x2b0));
                                                plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8) +
                                                                    8);
                                                uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                lVar9 = thunk_FUN_00d62348(*unaff_x27);
                                                puVar2 = OVROverlay_TypeInfo;
                                                if ((lVar9 != 0) &&
                                                   (FUN_01f7c678(lVar9,uVar7,
                                                                 *(undefined8 *)OVROverlay_TypeInfo,
                                                                 1,0,0), plVar17 != (long *)0x0)) {
                                                  (**(code **)(*plVar17 + 0x2a8))
                                                            (plVar17,*(undefined8 *)puVar2,lVar9,
                                                             *(undefined8 *)(*plVar17 + 0x2b0));
                                                  plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8)
                                                                      + 8);
                                                  uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                  lVar9 = thunk_FUN_00d62348(*unaff_x27);
                                                  puVar2 = PTR_DAT_033eced0;
                                                  if ((lVar9 != 0) &&
                                                     (FUN_01f7c678(lVar9,uVar7,
                                                                   *(undefined8 *)PTR_DAT_033eced0,1
                                                                   ,0,0), plVar17 != (long *)0x0)) {
                                                    (**(code **)(*plVar17 + 0x2a8))
                                                              (plVar17,*(undefined8 *)puVar2,lVar9,
                                                               *(undefined8 *)(*plVar17 + 0x2b0));
                                                    plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8
                                                                                  ) + 8);
                                                    uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                    lVar9 = thunk_FUN_00d62348(*unaff_x27);
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_get_Current__
                                                  ;
                                                  if ((lVar9 != 0) &&
                                                     (FUN_01f7c678(lVar9,uVar7,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_get_Current__
                                                  ,1,0,0), plVar17 != (long *)0x0)) {
                                                    (**(code **)(*plVar17 + 0x2a8))
                                                              (plVar17,*(undefined8 *)puVar2,lVar9,
                                                               *(undefined8 *)(*plVar17 + 0x2b0));
                                                    plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8
                                                                                  ) + 8);
                                                    uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                    lVar9 = thunk_FUN_00d62348(*unaff_x27);
                                                    puVar2 = StringLiteral_1905;
                                                    if ((lVar9 != 0) &&
                                                       (FUN_01f7c678(lVar9,uVar7,
                                                                     *(undefined8 *)
                                                                      StringLiteral_1905,1,0,0),
                                                       plVar17 != (long *)0x0)) {
                                                      (**(code **)(*plVar17 + 0x2a8))
                                                                (plVar17,*(undefined8 *)puVar2,lVar9
                                                                 ,*(undefined8 *)(*plVar17 + 0x2b0))
                                                      ;
                                                      plVar17 = *(long **)(*(long *)(*unaff_x26 +
                                                                                    0xb8) + 8);
                                                      uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                      lVar9 = thunk_FUN_00d62348(*unaff_x27);
                                                      puVar2 = 
                                                  Method_Mono_Security_X509_PKCS12_AddPrivateKey__;
                                                  if ((lVar9 != 0) &&
                                                     (FUN_01f7c678(lVar9,uVar7,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_Mono_Security_X509_PKCS12_AddPrivateKey__,1
                                                  ,0,0), plVar17 != (long *)0x0)) {
                                                    (**(code **)(*plVar17 + 0x2a8))
                                                              (plVar17,*(undefined8 *)puVar2,lVar9,
                                                               *(undefined8 *)(*plVar17 + 0x2b0));
                                                    plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8
                                                                                  ) + 8);
                                                    uVar7 = FUN_01780344(*(undefined8 *)puVar4,0);
                                                    lVar9 = thunk_FUN_00d62348(*unaff_x27);
                                                    puVar4 = 
                                                  UnityEngine_UIElements_TreeView_TypeInfo;
                                                  if ((lVar9 != 0) &&
                                                     (FUN_01f7c678(lVar9,uVar7,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_UIElements_TreeView_TypeInfo,1,0,0),
                                                  plVar17 != (long *)0x0)) {
                                                    (**(code **)(*plVar17 + 0x2a8))
                                                              (plVar17,*(undefined8 *)puVar4,lVar9,
                                                               *(undefined8 *)(*plVar17 + 0x2b0));
                                                    plVar17 = *(long **)(*(long *)(*unaff_x26 + 0xb8
                                                                                  ) + 8);
                                                    uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                    lVar9 = thunk_FUN_00d62348(*unaff_x27);
                                                    puVar5 = 
                                                  Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidLinearAccelerationSensor>__
                                                  ;
                                                  if ((lVar9 != 0) &&
                                                     (FUN_01f7c678(lVar9,uVar7,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidLinearAccelerationSensor>__
                                                  ,1,0,0), plVar17 != (long *)0x0)) {
                                                    (**(code **)(*plVar17 + 0x2a8))
                                                              (plVar17,*(undefined8 *)puVar5,lVar9,
                                                               *(undefined8 *)(*plVar17 + 0x2b0));
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_01747a0c(lVar9,0);
                                                      uVar7 = FUN_0174945c(lVar9,0);
                                                      plVar17 = *(long **)(*(long *)(*unaff_x26 +
                                                                                    0xb8) + 8);
                                                      *(undefined8 *)
                                                       (*(long *)(*unaff_x26 + 0xb8) + 0x18) = uVar7
                                                      ;
                                                      if (plVar17 != (long *)0x0) {
                                                        plVar17 = (long *)(**(code **)(*plVar17 +
                                                                                      0x328))(
                                                  plVar17,*(undefined8 *)(*plVar17 + 0x330));
                                                  puVar3 = 
                                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                                  ;
                                                  puVar5 = 
                                                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt64LiftedToNull_TypeInfo
                                                  ;
                                                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  do {
                                                    lVar11 = *plVar17;
                                                    lVar9 = *(long *)puVar3;
                                                    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
                                                    if (uVar15 != 0) {
                                                      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar16 + -2) == lVar9) {
                                                          puVar12 = (undefined8 *)
                                                                    (lVar11 + (long)*piVar16 * 0x10
                                                                    + 0x138);
                                                          goto LAB_01f81274;
                                                        }
                                                        uVar15 = uVar15 - 1;
                                                        piVar16 = piVar16 + 4;
                                                      } while (uVar15 != 0);
                                                    }
                                                    puVar12 = (undefined8 *)
                                                              FUN_00d59724(plVar17,lVar9,0);
LAB_01f81274:
                                                    uVar15 = (*(code *)*puVar12)(plVar17,puVar12[1])
                                                    ;
                                                    if ((uVar15 & 1) == 0) {
                                                      plVar17 = (long *)thunk_FUN_00d6225c(plVar17,*
                                                  (undefined8 *)puVar6);
                                                  if (plVar17 == (long *)0x0) {
                                                    return;
                                                  }
                                                  lVar9 = *plVar17;
                                                  uVar15 = (ulong)*(ushort *)(lVar9 + 0x12a);
                                                  if (uVar15 == 0) goto LAB_01f813e4;
                                                  piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                                  goto LAB_01f813cc;
                                                  }
                                                  lVar11 = *plVar17;
                                                  lVar9 = *(long *)puVar3;
                                                  uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
                                                  if (uVar15 != 0) {
                                                    piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar16 + -2) == lVar9) {
                                                        puVar12 = (undefined8 *)
                                                                  (lVar11 + (long)(*piVar16 + 1) *
                                                                            0x10 + 0x138);
                                                        goto LAB_01f812d4;
                                                      }
                                                      uVar15 = uVar15 - 1;
                                                      piVar16 = piVar16 + 4;
                                                    } while (uVar15 != 0);
                                                  }
                                                  puVar12 = (undefined8 *)
                                                            FUN_00d59724(plVar17,lVar9,1);
LAB_01f812d4:
                                                  plVar18 = (long *)(*(code *)*puVar12)(plVar17,
                                                  puVar12[1]);
                                                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  if (*(long *)(*plVar18 + 0x40) !=
                                                      *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da544c();
                                                  }
                                                  puVar12 = (undefined8 *)thunk_FUN_00d624a0();
                                                  plVar18 = (long *)puVar12[1];
                                                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  lVar9 = *unaff_x27;
                                                  if ((*(byte *)(*plVar18 + 300) <
                                                       *(byte *)(lVar9 + 300)) ||
                                                     (*(long *)(*(long *)(*plVar18 + 200) +
                                                                (ulong)*(byte *)(lVar9 + 300) * 8 +
                                                               -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da544c();
                                                  }
                                                  uVar7 = *puVar12;
                                                  lVar11 = plVar18[2];
                                                  lVar14 = plVar18[3];
                                                  lVar9 = thunk_FUN_00d62348(lVar9);
                                                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  FUN_01f7c678(lVar9,lVar11,lVar14,1,0,0);
                                                  *(undefined1 *)(lVar9 + 0x61) = 1;
                                                  plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8)
                                                                      + 0x18);
                                                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  (**(code **)(*plVar18 + 0x2a8))
                                                            (plVar18,uVar7,lVar9,
                                                             *(undefined8 *)(*plVar18 + 0x2b0));
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


