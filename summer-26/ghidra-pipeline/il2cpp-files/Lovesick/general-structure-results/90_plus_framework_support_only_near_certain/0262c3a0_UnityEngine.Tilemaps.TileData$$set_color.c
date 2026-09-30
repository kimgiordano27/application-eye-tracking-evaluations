/*
FUNCTION_NAME: UnityEngine.Tilemaps.TileData$$set_color
ENTRY_POINT: 0262c3a0
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


void UnityEngine_Tilemaps_TileData__set_color(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long *plVar12;
  long *unaff_x22;
  long unaff_x23;
  long *plVar13;
  
  puVar1 = Method_Mono_Xml_SmallXmlParser_ReadReference__;
  lVar9 = *unaff_x20;
                    /* try { // try from 0262c3a4 to 0272c3af has its CatchHandler @ 0262c2ac */
  plVar13 = *(long **)(unaff_x23 + 0xd78);
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *plVar13) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0262c3f8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_00d59724();
LAB_0262c3f8:
  lVar9 = (*(code *)*puVar6)();
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((lVar7 == 0) || (FUN_013df2bc(), puVar2 = Method_System_Array_GetValue__, lVar9 == 0)) {
LAB_0262cc7c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_013df780(lVar9,lVar7,*(undefined8 *)Method_System_Array_GetValue__);
  puVar4 = Method_System_Threading_Tasks_TaskFactory<__Il2CppFullySharedGenericType>_FromAsyncImpl__
  ;
  plVar12 = *(long **)(unaff_x19 + 0x88);
  if (plVar12 == (long *)0x0) goto LAB_0262cc7c;
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *plVar13) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_0262c4ac;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_00d59724(plVar12,*plVar13,1);
LAB_0262c4ac:
  lVar9 = (*(code *)*puVar6)(plVar12,puVar6[1]);
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  if ((lVar7 == 0) ||
     (FUN_013df2bc(), puVar3 = Obi_GraphColoring_<Colorize>d__10_TypeInfo, lVar9 == 0))
  goto LAB_0262cc7c;
  FUN_013df780(lVar9,lVar7,*(undefined8 *)Obi_GraphColoring_<Colorize>d__10_TypeInfo);
  plVar12 = *(long **)(unaff_x19 + 0x88);
  if (plVar12 == (long *)0x0) goto LAB_0262cc7c;
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *plVar13) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_0262c558;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_00d59724(plVar12,*plVar13,2);
LAB_0262c558:
  lVar9 = (*(code *)*puVar6)(plVar12,puVar6[1]);
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((lVar7 == 0) || (FUN_013df2bc(), lVar9 == 0)) goto LAB_0262cc7c;
  FUN_013df780(lVar9,lVar7,*(undefined8 *)puVar2);
  plVar12 = *(long **)(unaff_x19 + 0x88);
  if (plVar12 == (long *)0x0) goto LAB_0262cc7c;
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *plVar13) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
        goto LAB_0262c5fc;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_00d59724(plVar12,*plVar13,3);
LAB_0262c5fc:
  lVar9 = (*(code *)*puVar6)(plVar12,puVar6[1]);
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  if ((lVar7 == 0) || (FUN_013df2bc(), lVar9 == 0)) goto LAB_0262cc7c;
  FUN_013df780(lVar9,lVar7,*(undefined8 *)puVar3);
  puVar2 = Method_OVRNativeList<OVRLocatable>_Dispose__;
  puVar1 = Oculus_Interaction_ControllerSelector_<>c_TypeInfo;
  plVar13 = *(long **)(unaff_x19 + 0x90);
  if (plVar13 != (long *)0x0) {
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)Oculus_Interaction_ControllerSelector_<>c_TypeInfo)
        {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0262c6ac;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_00d59724(plVar13,*(long *)Oculus_Interaction_ControllerSelector_<>c_TypeInfo,0);
LAB_0262c6ac:
    lVar9 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar7 == 0) || (FUN_013df2bc(), lVar9 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar9,lVar7,
                 *(undefined8 *)
                  System_ComponentModel_TypeConverter_StandardValuesCollection_TypeInfo);
    puVar2 = Oculus_Platform_Models_SdkAccount_TypeInfo;
    plVar13 = *(long **)(unaff_x19 + 0x90);
    if (plVar13 == (long *)0x0) goto LAB_0262cc7c;
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0262c760;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar1,1);
LAB_0262c760:
    lVar9 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar7 == 0) || (FUN_013df2bc(), lVar9 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar9,lVar7,
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
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Clear__
           ) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0262c818;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_00d59724(plVar13,*(long *)
                                   Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Clear__
                          ,0);
LAB_0262c818:
    lVar9 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar7 == 0) || (FUN_013df2bc(), lVar9 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar9,lVar7,*(undefined8 *)System_Collections_Generic_List<OVRBone>_TypeInfo);
    puVar2 = StringLiteral_13359;
    plVar13 = *(long **)(unaff_x19 + 0x98);
    if (plVar13 == (long *)0x0) goto LAB_0262cc7c;
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0262c8cc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar1,1);
LAB_0262c8cc:
    lVar9 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar7 == 0) || (FUN_013df2bc(), lVar9 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar9,lVar7,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<IGameObjectFilter>_MoveNext__);
  }
  puVar2 = StringLiteral_11733;
  puVar1 = UnityEngine_XR_Interaction_Toolkit_Transformers_DropEventArgs_TypeInfo;
  plVar13 = *(long **)(unaff_x19 + 0xa0);
  if (plVar13 != (long *)0x0) {
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_11733) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0262c984;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar13,*(long *)StringLiteral_11733,0);
LAB_0262c984:
    lVar9 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar7 == 0) || (FUN_013df2bc(), lVar9 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar9,lVar7,*(undefined8 *)StringLiteral_9656);
    puVar1 = StringLiteral_1571;
    plVar13 = *(long **)(unaff_x19 + 0xa0);
    if (plVar13 == (long *)0x0) goto LAB_0262cc7c;
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0262ca38;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar2,1);
LAB_0262ca38:
    lVar9 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar7 == 0) || (FUN_013df2bc(), lVar9 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar9,lVar7,*(undefined8 *)Method_OVRLocatable_UpdateSceneAnchorTransforms__);
  }
  puVar1 = System_Collections_Generic_List<VisualElement>_TypeInfo;
  plVar13 = *(long **)(unaff_x19 + 0xa8);
  if (plVar13 != (long *)0x0) {
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)long___var) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0262caf0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar13,*(long *)long___var,0);
LAB_0262caf0:
    plVar13 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar9 == 0) || (FUN_011c181c(), plVar13 == (long *)0x0)) goto LAB_0262cc7c;
    lVar7 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<byte>__
           ) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0262cb80;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_00d59724(plVar13,*(long *)
                                   Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<byte>__
                          ,0);
LAB_0262cb80:
    uVar8 = (*(code *)*puVar6)(plVar13,lVar9,puVar6[1]);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0262cc7c;
    FUN_025718f8(*(long *)(unaff_x19 + 0x40),uVar8,0);
  }
  plVar13 = *(long **)(unaff_x19 + 0x80);
  *(undefined1 *)(unaff_x19 + 0xc9) = 0;
  if (plVar13 == (long *)0x0) {
LAB_0262cc14:
    bVar5 = 1;
  }
  else {
    lVar9 = *plVar13;
    bVar5 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__ +
                     300);
    if ((*(byte *)(lVar9 + 300) < bVar5) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar5 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__)) {
      bVar5 = *(byte *)(*(long *)Method_System_Collections_Generic_List<StyleSheet>_Contains__ + 300
                       );
      if ((*(byte *)(lVar9 + 300) < bVar5) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar5 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_List<StyleSheet>_Contains__))
      goto LAB_0262cc14;
      bVar5 = FUN_02689fe0(plVar13,0);
    }
    else {
      lVar9 = plVar13[6];
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_02681b9c(lVar9,0,0);
      if ((uVar10 & 1) == 0) {
        bVar5 = 0;
        goto LAB_0262cc18;
      }
      if (plVar13[6] == 0) goto LAB_0262cc7c;
      bVar5 = FUN_025b9434(plVar13[6],*(undefined8 *)(unaff_x19 + 0x80),0);
    }
    bVar5 = bVar5 & 1;
  }
LAB_0262cc18:
  *(byte *)(unaff_x19 + 0xca) = bVar5;
  FUN_0262ae04();
  return;
}


