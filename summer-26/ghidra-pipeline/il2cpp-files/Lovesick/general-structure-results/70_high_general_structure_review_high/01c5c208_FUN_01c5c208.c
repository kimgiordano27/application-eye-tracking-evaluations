/*
FUNCTION_NAME: FUN_01c5c208
ENTRY_POINT: 01c5c208
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;data_collection;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_3;strong_file_logging_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01c5cca8) */
/* WARNING: Removing unreachable block (ram,0x01c5ccb0) */
/* WARNING: Removing unreachable block (ram,0x01c5cca0) */
/* WARNING: Removing unreachable block (ram,0x01c5ccb8) */

long FUN_01c5c208(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  int iVar19;
  int iVar20;
  long local_68;
  
  if ((DAT_0377eb4c & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Reflection_Emit_EnumBuilder_IsDefined__);
    thunk_FUN_00d48444(StringLiteral_10443);
    thunk_FUN_00d48444(StringLiteral_13751);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_object>_Add__);
    thunk_FUN_00d48444(StringLiteral_7978);
    thunk_FUN_00d48444(StringLiteral_7891);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<ProbeVolumeState,_ProbeVolumeAsset>_ContainsKey__
                      );
    thunk_FUN_00d48444(Autohand_HandDistanceGrabber_<StartCatchAssist>d__62_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_GetOrCreate<StylePropertyAnimationSystem_ValuesTransformOrigin>__
                      );
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
    thunk_FUN_00d48444(System_Collections_Generic_HashSet<MaskableGraphic>_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Component_var);
    thunk_FUN_00d48444(Method_System_Diagnostics_TraceListener_set_IndentSize__);
    thunk_FUN_00d48444(System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_XmlSqlBinaryReader_NamespaceDecl>_Add__
                      );
    thunk_FUN_00d48444(StringLiteral_5515);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_ResourceLocator>_TryGetValue__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IntersectNode>_Clear__);
    thunk_FUN_00d48444(Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo);
    thunk_FUN_00d48444(OVR_OpenVR_IVRIOBuffer__Close_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<GraphicsDeviceType>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_TryGetValue__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleDataRef<RareData>_Create__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass2_0_<DOMoveY>b__0__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__);
    thunk_FUN_00d48444(System_LocalDataStoreMgr_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4480);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>_get_trackingState__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_TryGetComponent<SongManager>__);
    DAT_0377eb4c = 1;
  }
  lVar16 = *param_2;
  if (lVar16 == 0) {
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)OVR_OpenVR_IVRIOBuffer__Close_TypeInfo);
    if (lVar16 == 0) goto LAB_01c5cc6c;
    FUN_01320e50(lVar16,*(undefined8 *)Method_System_Diagnostics_TraceListener_set_IndentSize__);
    *param_2 = lVar16;
  }
  else if (0 < *(int *)(lVar16 + 0x18)) {
    lVar14 = *(long *)System_Collections_Generic_HashSet<MaskableGraphic>_TypeInfo;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    uVar6 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200));
    if ((uVar6 & 1) == 0) {
      *(undefined4 *)(lVar16 + 0x18) = 0;
    }
    else {
      iVar19 = *(int *)(lVar16 + 0x18);
      *(undefined4 *)(lVar16 + 0x18) = 0;
      if (0 < iVar19) {
        FUN_0179519c(*(undefined8 *)(lVar16 + 0x10),0,iVar19,0);
      }
    }
  }
  puVar3 = Method_DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass2_0_<DOMoveY>b__0__;
  puVar2 = Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__;
  puVar1 = System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x18) == 0)) {
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                               );
    if (lVar16 != 0) {
      FUN_01320e50(lVar16,*(undefined8 *)puVar1);
      return lVar16;
    }
LAB_01c5cc6c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar16 = *(long *)Method_DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass2_0_<DOMoveY>b__0__;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar16 = *(long *)puVar3;
  }
  puVar4 = 
  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_GetOrCreate<StylePropertyAnimationSystem_ValuesTransformOrigin>__
  ;
  lVar14 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
  if (lVar14 == 0) {
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar16 = *(long *)puVar3;
    }
    uVar17 = **(undefined8 **)(lVar16 + 0xb8);
    lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    if (lVar14 == 0) goto LAB_01c5cc6c;
    FUN_01267c10(lVar14,uVar17,
                 *(undefined8 *)Method_UnityEngine_UIElements_StyleDataRef<RareData>_Create__,0);
    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar14;
  }
  FUN_0132508c(param_1,lVar14,*(undefined8 *)UnityEngine_Component_var);
  lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar4 = StringLiteral_7891;
  puVar3 = Method_System_Reflection_Emit_EnumBuilder_IsDefined__;
  puVar2 = Autohand_HandDistanceGrabber_<StartCatchAssist>d__62_TypeInfo;
  if (lVar16 == 0) goto LAB_01c5cc6c;
  FUN_01320e50(lVar16,*(undefined8 *)puVar1);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar11 = (long *)StringLiteral_10310;
  plVar7 = (long *)FUN_01254790(*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  plVar8 = (long *)FUN_01c2ab54(0,0);
  if (*(int *)(*(long *)StringLiteral_7978 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar9 = (long *)FUN_01254790(*(undefined8 *)StringLiteral_13751);
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_Dictionary<ProbeVolumeState,_ProbeVolumeAsset>_ContainsKey__
              + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar10 = (long *)FUN_01254790(*(undefined8 *)StringLiteral_10443);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar18 = (long *)plVar9[3];
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar14 = FUN_01255044(plVar7,*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<int,_object>_Add__);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar18[4] = lVar14;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar17 = FUN_01c2a7ec(plVar8[3],0);
  (**(code **)(*plVar18 + 0x408))(plVar18,uVar17,*(undefined8 *)(*plVar18 + 0x410));
  (**(code **)(*plVar18 + 0x5d8))(plVar18,*(undefined8 *)(*plVar18 + 0x5e0));
  *(undefined2 *)((long)plVar18 + 0x54) = 0;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01c53b20(plVar10[3],*param_2);
  lVar14 = FUN_01be4aa0(plVar18,0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  *(long *)(lVar14 + 0x40) = plVar10[3];
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__;
  puVar4 = Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__;
  puVar3 = Method_UnityEngine_Component_TryGetComponent<SongManager>__;
  puVar2 = Method_System_Collections_Generic_List<IntersectNode>_Clear__;
  puVar1 = Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar19 = 0;
    do {
      FUN_0132138c(param_1,iVar19,&local_68,*(undefined8 *)puVar2);
      lVar14 = local_68;
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar20 = *(int *)(local_68 + 0x10);
      if (iVar20 == 0) {
        FUN_01c05778(plVar18,0);
        (**(code **)(*plVar18 + 0x4e8))
                  (plVar18,*(undefined8 *)puVar3,*(undefined8 *)(lVar14 + 0x18),
                   *(undefined8 *)(*plVar18 + 0x4f0));
        if ((*(long *)(lVar14 + 0x20) != 0) && (0 < *(int *)(*(long *)(lVar14 + 0x20) + 0x18))) {
          (**(code **)(*plVar18 + 0x438))
                    (plVar18,*(undefined8 *)System_LocalDataStoreMgr_TypeInfo,0,
                     *(undefined8 *)(*plVar18 + 0x440));
          lVar13 = *(long *)(lVar14 + 0x20);
          if (lVar13 == 0) {
LAB_01c5cc48:
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          iVar20 = 0;
          while (iVar20 < *(int *)(lVar13 + 0x18)) {
            FUN_0132138c(lVar13,iVar20,&local_68,*(undefined8 *)puVar1);
            (**(code **)(*plVar18 + 0x4e8))(plVar18,0,local_68,*(undefined8 *)(*plVar18 + 0x4f0));
            lVar13 = *(long *)(lVar14 + 0x20);
            iVar20 = iVar20 + 1;
            if (lVar13 == 0) goto LAB_01c5cc48;
          }
          (**(code **)(*plVar18 + 0x448))
                    (plVar18,*(undefined8 *)System_LocalDataStoreMgr_TypeInfo,
                     *(undefined8 *)(*plVar18 + 0x450));
        }
        if (*(int *)(*(long *)Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__ +
                    0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar11 = (long *)FUN_0113f180(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_TryGetValue__
                                      );
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar11 + 0x188))
                  (plVar11,*(undefined8 *)System_Collections_Generic_List<HashSet<Face>>_TypeInfo,
                   *(undefined8 *)(lVar14 + 0x28),plVar18,*(undefined8 *)(*plVar11 + 400));
        (**(code **)(*plVar18 + 0x418))(plVar18,*(undefined8 *)(*plVar18 + 0x420));
        if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar17 = FUN_01c2a7ec(plVar8[3],0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_01c5d094(uVar17);
        FUN_00ac1158(lVar16,uVar17,*(undefined8 *)puVar5);
      }
      else if (iVar20 == 1) {
        FUN_01c05778(plVar18,0);
        (**(code **)(*plVar18 + 0x4e8))
                  (plVar18,*(undefined8 *)puVar3,*(undefined8 *)(lVar14 + 0x18),
                   *(undefined8 *)(*plVar18 + 0x4f0));
        (**(code **)(*plVar18 + 0x528))
                  (plVar18,*(undefined8 *)
                            Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__,
                   *(undefined4 *)(lVar14 + 0x30),*(undefined8 *)(*plVar18 + 0x530));
        (**(code **)(*plVar18 + 0x418))(plVar18,*(undefined8 *)(*plVar18 + 0x420));
        if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar17 = FUN_01c2a7ec(plVar8[3],0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_01c5d094(uVar17);
        FUN_00ac1158(lVar16,uVar17,*(undefined8 *)puVar5);
      }
      else if (iVar20 == 2) {
        FUN_01c05778(plVar18,0);
        (**(code **)(*plVar18 + 0x4e8))
                  (plVar18,*(undefined8 *)puVar3,*(undefined8 *)(lVar14 + 0x18),
                   *(undefined8 *)(*plVar18 + 0x4f0));
        if (*(int *)(*(long *)Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__ +
                    0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar11 = (long *)FUN_0113f180(*(undefined8 *)
                                        Method_System_Collections_Generic_List<GraphicsDeviceType>__ctor__
                                      );
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar11 + 0x1a8))
                  (plVar11,*(undefined8 *)StringLiteral_4480,*(undefined8 *)(lVar14 + 0x38),plVar18,
                   *(undefined8 *)(*plVar11 + 0x1b0));
        plVar11 = (long *)FUN_0113f180(*(undefined8 *)
                                        Method_System_Collections_Generic_List<GraphicsDeviceType>__ctor__
                                      );
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar11 + 0x1a8))
                  (plVar11,*(undefined8 *)
                            Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>_get_trackingState__
                   ,*(undefined8 *)(lVar14 + 0x40),plVar18,*(undefined8 *)(*plVar11 + 0x1b0));
        (**(code **)(*plVar18 + 0x418))(plVar18,*(undefined8 *)(*plVar18 + 0x420));
        if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar17 = FUN_01c2a7ec(plVar8[3],0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_01c5d094(uVar17);
        FUN_00ac1158(lVar16,uVar17,*(undefined8 *)puVar5);
      }
      lVar14 = FUN_01be4aa0(plVar18,0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01c38b20(lVar14,0);
      iVar19 = iVar19 + 1;
    } while (iVar19 < *(int *)(param_1 + 0x18));
    plVar11 = (long *)StringLiteral_10310;
    if (plVar10 == (long *)0x0) goto LAB_01c5caf4;
  }
  lVar14 = *plVar10;
  uVar6 = (ulong)*(ushort *)(lVar14 + 0x12a);
  if (uVar6 != 0) {
    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *plVar11) {
        puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_01c5cae8;
      }
      uVar6 = uVar6 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar6 != 0);
  }
  puVar12 = (undefined8 *)FUN_00d59724(plVar10,*plVar11,0);
LAB_01c5cae8:
  (*(code *)*puVar12)(plVar10,puVar12[1]);
LAB_01c5caf4:
  if (plVar9 != (long *)0x0) {
    lVar14 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar6 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *plVar11) {
          puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01c5cb4c;
        }
        uVar6 = uVar6 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar6 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar9,*plVar11,0);
LAB_01c5cb4c:
    (*(code *)*puVar12)(plVar9,puVar12[1]);
  }
  if (plVar8 != (long *)0x0) {
    lVar14 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar6 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *plVar11) {
          puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01c5cbb0;
        }
        uVar6 = uVar6 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar6 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar8,*plVar11,0);
LAB_01c5cbb0:
    (*(code *)*puVar12)(plVar8,puVar12[1]);
  }
  if (plVar7 != (long *)0x0) {
    lVar14 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar6 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *plVar11) {
          puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01c5cc14;
        }
        uVar6 = uVar6 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar6 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar7,*plVar11,0);
LAB_01c5cc14:
    (*(code *)*puVar12)(plVar7,puVar12[1]);
  }
  return lVar16;
}


