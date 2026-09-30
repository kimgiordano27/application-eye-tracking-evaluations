/*
FUNCTION_NAME: UnityEngine.Tilemaps.TilemapRenderer$$UnregisterSpriteAtlasRegistered
ENTRY_POINT: 0262c24c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 130
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_Tilemaps_TilemapRenderer__UnregisterSpriteAtlasRegistered(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  long *unaff_x22;
  
  bVar6 = FUN_02681b9c();
  *(byte *)(unaff_x19 + 200) = bVar6 & 1;
  if ((bVar6 & 1) == 0) goto LAB_0262c224;
  plVar13 = *(long **)(unaff_x19 + 0x80);
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_System_Collections_Generic_List<IXRInteractor>__ctor__);
  if ((lVar7 == 0) ||
     (FUN_011c181c(), puVar2 = StringLiteral_10082,
     puVar1 = Method_Unity_XR_CoreUtils_Datums_DatumProperty<string,_StringDatum>__ctor__,
     plVar13 == (long *)0x0)) {
LAB_0262cc7c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar10 = *plVar13;
                    /* try { // try from 0262c2ac to 0272c32b has its CatchHandler @ 0262c2ac
                       catch() { ... } // from try @ 0262c2ac with catch @ 0262c2ac
                       catch() { ... } // from try @ 0262c334 with catch @ 0262c2ac
                       catch() { ... } // from try @ 0262c358 with catch @ 0262c2ac
                       catch() { ... } // from try @ 0262c374 with catch @ 0262c2ac
                       catch() { ... } // from try @ 0262c3a4 with catch @ 0262c2ac */
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)Method_Unity_XR_CoreUtils_Datums_DatumProperty<string,_StringDatum>__ctor__) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0262c2f8;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_00d59724(plVar13,*(long *)
                                 Method_Unity_XR_CoreUtils_Datums_DatumProperty<string,_StringDatum>__ctor__
                        ,0);
LAB_0262c2f8:
  (*(code *)*puVar8)(plVar13,lVar7,puVar8[1]);
  plVar13 = *(long **)(unaff_x19 + 0x80);
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if ((lVar7 == 0) || (FUN_011c181c(), plVar13 == (long *)0x0)) goto LAB_0262cc7c;
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
        goto LAB_0262c384;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar1,2);
LAB_0262c384:
  (*(code *)*puVar8)(plVar13,lVar7,puVar8[1]);
  puVar2 = Method_Mono_Xml_SmallXmlParser_ReadReference__;
  puVar1 = UnityEngine_InputSystem_Composites_Vector2Composite_var;
  plVar13 = *(long **)(unaff_x19 + 0x88);
  if (plVar13 != (long *)0x0) {
    lVar7 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)UnityEngine_InputSystem_Composites_Vector2Composite_var) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0262c3f8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_00d59724(plVar13,*(long *)UnityEngine_InputSystem_Composites_Vector2Composite_var,0
                         );
LAB_0262c3f8:
    lVar7 = (*(code *)*puVar8)(plVar13,puVar8[1]);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar10 == 0) || (FUN_013df2bc(), puVar5 = Method_System_Array_GetValue__, lVar7 == 0))
    goto LAB_0262cc7c;
    FUN_013df780(lVar7,lVar10,*(undefined8 *)Method_System_Array_GetValue__);
    puVar4 = 
    Method_System_Threading_Tasks_TaskFactory<__Il2CppFullySharedGenericType>_FromAsyncImpl__;
    plVar13 = *(long **)(unaff_x19 + 0x88);
    if (plVar13 == (long *)0x0) goto LAB_0262cc7c;
    lVar7 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0262c4ac;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar1,1);
LAB_0262c4ac:
    lVar7 = (*(code *)*puVar8)(plVar13,puVar8[1]);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    if ((lVar10 == 0) ||
       (FUN_013df2bc(), puVar3 = Obi_GraphColoring_<Colorize>d__10_TypeInfo, lVar7 == 0))
    goto LAB_0262cc7c;
    FUN_013df780(lVar7,lVar10,*(undefined8 *)Obi_GraphColoring_<Colorize>d__10_TypeInfo);
    plVar13 = *(long **)(unaff_x19 + 0x88);
    if (plVar13 == (long *)0x0) goto LAB_0262cc7c;
    lVar7 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_0262c558;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar1,2);
LAB_0262c558:
    lVar7 = (*(code *)*puVar8)(plVar13,puVar8[1]);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar10 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar7,lVar10,*(undefined8 *)puVar5);
    plVar13 = *(long **)(unaff_x19 + 0x88);
    if (plVar13 == (long *)0x0) goto LAB_0262cc7c;
    lVar7 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_0262c5fc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar1,3);
LAB_0262c5fc:
    lVar7 = (*(code *)*puVar8)(plVar13,puVar8[1]);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    if ((lVar10 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar7,lVar10,*(undefined8 *)puVar3);
  }
  puVar2 = Method_OVRNativeList<OVRLocatable>_Dispose__;
  puVar1 = Oculus_Interaction_ControllerSelector_<>c_TypeInfo;
  plVar13 = *(long **)(unaff_x19 + 0x90);
  if (plVar13 != (long *)0x0) {
    lVar7 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)Oculus_Interaction_ControllerSelector_<>c_TypeInfo)
        {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0262c6ac;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_00d59724(plVar13,*(long *)Oculus_Interaction_ControllerSelector_<>c_TypeInfo,0);
LAB_0262c6ac:
    lVar7 = (*(code *)*puVar8)(plVar13,puVar8[1]);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar10 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar7,lVar10,
                 *(undefined8 *)
                  System_ComponentModel_TypeConverter_StandardValuesCollection_TypeInfo);
    puVar2 = Oculus_Platform_Models_SdkAccount_TypeInfo;
    plVar13 = *(long **)(unaff_x19 + 0x90);
    if (plVar13 == (long *)0x0) goto LAB_0262cc7c;
    lVar7 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0262c760;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar1,1);
LAB_0262c760:
    lVar7 = (*(code *)*puVar8)(plVar13,puVar8[1]);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar10 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar7,lVar10,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                );
  }
  puVar2 = Method_DG_Tweening_Core_Extensions_Blendable<Vector3,_Vector3[],_Vector3ArrayOptions>__;
  puVar1 = 
  Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Clear__
  ;
  plVar13 = *(long **)(unaff_x19 + 0x98);
  if (plVar13 != (long *)0x0) {
    lVar7 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)
             Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Clear__
           ) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0262c818;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_00d59724(plVar13,*(long *)
                                   Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Clear__
                          ,0);
LAB_0262c818:
    lVar7 = (*(code *)*puVar8)(plVar13,puVar8[1]);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar10 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar7,lVar10,*(undefined8 *)System_Collections_Generic_List<OVRBone>_TypeInfo);
    puVar2 = StringLiteral_13359;
    plVar13 = *(long **)(unaff_x19 + 0x98);
    if (plVar13 == (long *)0x0) goto LAB_0262cc7c;
    lVar7 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0262c8cc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar1,1);
LAB_0262c8cc:
    lVar7 = (*(code *)*puVar8)(plVar13,puVar8[1]);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar10 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar7,lVar10,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<IGameObjectFilter>_MoveNext__);
  }
  puVar2 = StringLiteral_11733;
  puVar1 = UnityEngine_XR_Interaction_Toolkit_Transformers_DropEventArgs_TypeInfo;
  plVar13 = *(long **)(unaff_x19 + 0xa0);
  if (plVar13 != (long *)0x0) {
    lVar7 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_11733) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0262c984;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar13,*(long *)StringLiteral_11733,0);
LAB_0262c984:
    lVar7 = (*(code *)*puVar8)(plVar13,puVar8[1]);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar10 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar7,lVar10,*(undefined8 *)StringLiteral_9656);
    puVar1 = StringLiteral_1571;
    plVar13 = *(long **)(unaff_x19 + 0xa0);
    if (plVar13 == (long *)0x0) goto LAB_0262cc7c;
    lVar7 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0262ca38;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar2,1);
LAB_0262ca38:
    lVar7 = (*(code *)*puVar8)(plVar13,puVar8[1]);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar10 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar7,lVar10,*(undefined8 *)Method_OVRLocatable_UpdateSceneAnchorTransforms__);
  }
  puVar1 = System_Collections_Generic_List<VisualElement>_TypeInfo;
  plVar13 = *(long **)(unaff_x19 + 0xa8);
  if (plVar13 != (long *)0x0) {
    lVar7 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)long___var) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0262caf0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar13,*(long *)long___var,0);
LAB_0262caf0:
    plVar13 = (long *)(*(code *)*puVar8)(plVar13,puVar8[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar7 == 0) || (FUN_011c181c(), plVar13 == (long *)0x0)) goto LAB_0262cc7c;
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)
             Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<byte>__
           ) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0262cb80;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_00d59724(plVar13,*(long *)
                                   Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<byte>__
                          ,0);
LAB_0262cb80:
    uVar9 = (*(code *)*puVar8)(plVar13,lVar7,puVar8[1]);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0262cc7c;
    FUN_025718f8(*(long *)(unaff_x19 + 0x40),uVar9,0);
  }
  plVar13 = *(long **)(unaff_x19 + 0x80);
  *(undefined1 *)(unaff_x19 + 0xc9) = 0;
  if (plVar13 == (long *)0x0) {
LAB_0262cc14:
    bVar6 = 1;
  }
  else {
    lVar7 = *plVar13;
    bVar6 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__ +
                     300);
    if ((*(byte *)(lVar7 + 300) < bVar6) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar6 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__)) {
      bVar6 = *(byte *)(*(long *)Method_System_Collections_Generic_List<StyleSheet>_Contains__ + 300
                       );
      if ((*(byte *)(lVar7 + 300) < bVar6) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar6 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_List<StyleSheet>_Contains__))
      goto LAB_0262cc14;
      bVar6 = FUN_02689fe0(plVar13,0);
LAB_0262cc6c:
      bVar6 = bVar6 & 1;
    }
    else {
      lVar7 = plVar13[6];
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_02681b9c(lVar7,0,0);
      if ((uVar11 & 1) != 0) {
        if (plVar13[6] == 0) goto LAB_0262cc7c;
        bVar6 = FUN_025b9434(plVar13[6],*(undefined8 *)(unaff_x19 + 0x80),0);
        goto LAB_0262cc6c;
      }
      bVar6 = 0;
    }
  }
  *(byte *)(unaff_x19 + 0xca) = bVar6;
LAB_0262c224:
  FUN_0262ae04();
  return;
}


