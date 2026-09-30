/*
FUNCTION_NAME: UnityEngine.Tilemaps.TileData$$set_transform
ENTRY_POINT: 0262c3ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Tilemaps_TileData__set_transform(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *puVar12;
  
  uVar9 = (ulong)*(ushort *)(param_1 + 0x12a);
                    /* try { // try from 0262c3b0 to 0272c3b7 has its CatchHandler @ 0262c3b8 */
  puVar12 = *(undefined8 **)(unaff_x24 + 0xd8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0262c398 with catch @ 0262c3b8
                       catch(type#2 @ 00000000) { ... } // from try @ 0262c3b0 with catch @ 0262c3b8
                        */
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x23) {
        puVar5 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0262c3f8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_00d59724();
LAB_0262c3f8:
  lVar6 = (*(code *)*puVar5)();
  lVar7 = thunk_FUN_00d62348(*puVar12);
  if ((lVar7 == 0) || (FUN_013df2bc(), puVar1 = Method_System_Array_GetValue__, lVar6 == 0)) {
LAB_0262cc7c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_013df780(lVar6,lVar7,*(undefined8 *)Method_System_Array_GetValue__);
  puVar2 = Method_System_Threading_Tasks_TaskFactory<__Il2CppFullySharedGenericType>_FromAsyncImpl__
  ;
  plVar11 = *(long **)(unaff_x19 + 0x88);
  if (plVar11 == (long *)0x0) goto LAB_0262cc7c;
  lVar6 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x23) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_0262c4ac;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_00d59724(plVar11,*unaff_x23,1);
LAB_0262c4ac:
  lVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if ((lVar7 == 0) ||
     (FUN_013df2bc(), puVar3 = Obi_GraphColoring_<Colorize>d__10_TypeInfo, lVar6 == 0))
  goto LAB_0262cc7c;
  FUN_013df780(lVar6,lVar7,*(undefined8 *)Obi_GraphColoring_<Colorize>d__10_TypeInfo);
  plVar11 = *(long **)(unaff_x19 + 0x88);
  if (plVar11 == (long *)0x0) goto LAB_0262cc7c;
  lVar6 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x23) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
        goto LAB_0262c558;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_00d59724(plVar11,*unaff_x23,2);
LAB_0262c558:
  lVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
  lVar7 = thunk_FUN_00d62348(*puVar12);
  if ((lVar7 == 0) || (FUN_013df2bc(), lVar6 == 0)) goto LAB_0262cc7c;
  FUN_013df780(lVar6,lVar7,*(undefined8 *)puVar1);
  plVar11 = *(long **)(unaff_x19 + 0x88);
  if (plVar11 == (long *)0x0) goto LAB_0262cc7c;
  lVar6 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x23) {
        puVar12 = (undefined8 *)(lVar6 + (long)(*piVar10 + 3) * 0x10 + 0x138);
        goto LAB_0262c5fc;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar12 = (undefined8 *)FUN_00d59724(plVar11,*unaff_x23,3);
LAB_0262c5fc:
  lVar6 = (*(code *)*puVar12)(plVar11,puVar12[1]);
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if ((lVar7 == 0) || (FUN_013df2bc(), lVar6 == 0)) goto LAB_0262cc7c;
  FUN_013df780(lVar6,lVar7,*(undefined8 *)puVar3);
  puVar2 = Method_OVRNativeList<OVRLocatable>_Dispose__;
  puVar1 = Oculus_Interaction_ControllerSelector_<>c_TypeInfo;
  plVar11 = *(long **)(unaff_x19 + 0x90);
  if (plVar11 != (long *)0x0) {
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)Oculus_Interaction_ControllerSelector_<>c_TypeInfo)
        {
          puVar12 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0262c6ac;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_00d59724(plVar11,*(long *)Oculus_Interaction_ControllerSelector_<>c_TypeInfo,0);
LAB_0262c6ac:
    lVar6 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar7 == 0) || (FUN_013df2bc(), lVar6 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar6,lVar7,
                 *(undefined8 *)
                  System_ComponentModel_TypeConverter_StandardValuesCollection_TypeInfo);
    puVar2 = Oculus_Platform_Models_SdkAccount_TypeInfo;
    plVar11 = *(long **)(unaff_x19 + 0x90);
    if (plVar11 == (long *)0x0) goto LAB_0262cc7c;
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar12 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_0262c760;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar1,1);
LAB_0262c760:
    lVar6 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar7 == 0) || (FUN_013df2bc(), lVar6 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar6,lVar7,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                );
  }
  puVar2 = Method_DG_Tweening_Core_Extensions_Blendable<Vector3,_Vector3[],_Vector3ArrayOptions>__;
  puVar1 = 
  Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Clear__
  ;
  plVar11 = *(long **)(unaff_x19 + 0x98);
  if (plVar11 != (long *)0x0) {
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Clear__
           ) {
          puVar12 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0262c818;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_00d59724(plVar11,*(long *)
                                    Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Clear__
                           ,0);
LAB_0262c818:
    lVar6 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar7 == 0) || (FUN_013df2bc(), lVar6 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar6,lVar7,*(undefined8 *)System_Collections_Generic_List<OVRBone>_TypeInfo);
    puVar2 = StringLiteral_13359;
    plVar11 = *(long **)(unaff_x19 + 0x98);
    if (plVar11 == (long *)0x0) goto LAB_0262cc7c;
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar12 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_0262c8cc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar1,1);
LAB_0262c8cc:
    lVar6 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar7 == 0) || (FUN_013df2bc(), lVar6 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar6,lVar7,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<IGameObjectFilter>_MoveNext__);
  }
  puVar2 = StringLiteral_11733;
  puVar1 = UnityEngine_XR_Interaction_Toolkit_Transformers_DropEventArgs_TypeInfo;
  plVar11 = *(long **)(unaff_x19 + 0xa0);
  if (plVar11 != (long *)0x0) {
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_11733) {
          puVar12 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0262c984;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar11,*(long *)StringLiteral_11733,0);
LAB_0262c984:
    lVar6 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar7 == 0) || (FUN_013df2bc(), lVar6 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar6,lVar7,*(undefined8 *)StringLiteral_9656);
    puVar1 = StringLiteral_1571;
    plVar11 = *(long **)(unaff_x19 + 0xa0);
    if (plVar11 == (long *)0x0) goto LAB_0262cc7c;
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar12 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_0262ca38;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar2,1);
LAB_0262ca38:
    lVar6 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar7 == 0) || (FUN_013df2bc(), lVar6 == 0)) goto LAB_0262cc7c;
    FUN_013df780(lVar6,lVar7,*(undefined8 *)Method_OVRLocatable_UpdateSceneAnchorTransforms__);
  }
  puVar1 = System_Collections_Generic_List<VisualElement>_TypeInfo;
  plVar11 = *(long **)(unaff_x19 + 0xa8);
  if (plVar11 != (long *)0x0) {
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)long___var) {
          puVar12 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0262caf0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar11,*(long *)long___var,0);
LAB_0262caf0:
    plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar6 == 0) || (FUN_011c181c(), plVar11 == (long *)0x0)) goto LAB_0262cc7c;
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<byte>__
           ) {
          puVar12 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0262cb80;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_00d59724(plVar11,*(long *)
                                    Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<byte>__
                           ,0);
LAB_0262cb80:
    uVar8 = (*(code *)*puVar12)(plVar11,lVar6,puVar12[1]);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0262cc7c;
    FUN_025718f8(*(long *)(unaff_x19 + 0x40),uVar8,0);
  }
  plVar11 = *(long **)(unaff_x19 + 0x80);
  *(undefined1 *)(unaff_x19 + 0xc9) = 0;
  if (plVar11 == (long *)0x0) {
LAB_0262cc14:
    bVar4 = 1;
  }
  else {
    lVar6 = *plVar11;
    bVar4 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__ +
                     300);
    if ((*(byte *)(lVar6 + 300) < bVar4) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar4 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__)) {
      bVar4 = *(byte *)(*(long *)Method_System_Collections_Generic_List<StyleSheet>_Contains__ + 300
                       );
      if ((*(byte *)(lVar6 + 300) < bVar4) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_List<StyleSheet>_Contains__))
      goto LAB_0262cc14;
      bVar4 = FUN_02689fe0(plVar11,0);
    }
    else {
      lVar6 = plVar11[6];
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_02681b9c(lVar6,0,0);
      if ((uVar9 & 1) == 0) {
        bVar4 = 0;
        goto LAB_0262cc18;
      }
      if (plVar11[6] == 0) goto LAB_0262cc7c;
      bVar4 = FUN_025b9434(plVar11[6],*(undefined8 *)(unaff_x19 + 0x80),0);
    }
    bVar4 = bVar4 & 1;
  }
LAB_0262cc18:
  *(byte *)(unaff_x19 + 0xca) = bVar4;
  FUN_0262ae04();
  return;
}


