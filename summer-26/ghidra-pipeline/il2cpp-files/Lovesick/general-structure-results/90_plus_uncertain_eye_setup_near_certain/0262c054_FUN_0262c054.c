/*
FUNCTION_NAME: FUN_0262c054
ENTRY_POINT: 0262c054
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0262c054(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  
  if ((DAT_0378355d & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<VisualElement>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRInteractor>__ctor__);
    thunk_FUN_00d48444(StringLiteral_10082);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<StyleSheet>_Contains__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<byte>__
                      );
    thunk_FUN_00d48444(StringLiteral_11733);
    thunk_FUN_00d48444(
                      Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Clear__
                      );
    thunk_FUN_00d48444(UnityEngine_InputSystem_Composites_Vector2Composite_var);
    thunk_FUN_00d48444(Method_Unity_XR_CoreUtils_Datums_DatumProperty<string,_StringDatum>__ctor__);
    thunk_FUN_00d48444(long___var);
    thunk_FUN_00d48444(Oculus_Interaction_ControllerSelector_<>c_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1571);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_Core_Extensions_Blendable<Vector3,_Vector3[],_Vector3ArrayOptions>__
                      );
    thunk_FUN_00d48444(Method_OVRNativeList<OVRLocatable>_Dispose__);
    thunk_FUN_00d48444(Method_Mono_Xml_SmallXmlParser_ReadReference__);
    thunk_FUN_00d48444(StringLiteral_13359);
    thunk_FUN_00d48444(Oculus_Platform_Models_SdkAccount_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Threading_Tasks_TaskFactory<__Il2CppFullySharedGenericType>_FromAsyncImpl__
                      );
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_Transformers_DropEventArgs_TypeInfo);
    thunk_FUN_00d48444(Obi_GraphColoring_<Colorize>d__10_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<IGameObjectFilter>_MoveNext__
                      );
    thunk_FUN_00d48444(Method_OVRLocatable_UpdateSceneAnchorTransforms__);
    thunk_FUN_00d48444(System_Collections_Generic_List<OVRBone>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Array_GetValue__);
    thunk_FUN_00d48444(System_ComponentModel_TypeConverter_StandardValuesCollection_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                      );
    thunk_FUN_00d48444(StringLiteral_9656);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__);
    DAT_0378355d = 1;
  }
  FUN_0262a2ac(param_1);
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  plVar14 = (long *)param_1[0x10];
  if (plVar14 != (long *)0x0) {
    lVar8 = *(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if ((*(byte *)(lVar8 + 300) <= *(byte *)(*plVar14 + 300)) &&
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) == lVar8)) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      bVar7 = FUN_02681b9c(plVar14,0,0);
      *(byte *)(param_1 + 0x19) = bVar7 & 1;
      if ((bVar7 & 1) == 0) goto LAB_0262c224;
      plVar14 = (long *)param_1[0x10];
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRInteractor>__ctor__);
      if ((lVar8 == 0) ||
         (FUN_011c181c(lVar8,param_1,*(undefined8 *)(*param_1 + 0x230),0),
         puVar3 = StringLiteral_10082,
         puVar1 = Method_Unity_XR_CoreUtils_Datums_DatumProperty<string,_StringDatum>__ctor__,
         plVar14 == (long *)0x0)) {
LAB_0262cc7c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_XR_CoreUtils_Datums_DatumProperty<string,_StringDatum>__ctor__)
          {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0262c2f8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_00d59724(plVar14,*(long *)
                                     Method_Unity_XR_CoreUtils_Datums_DatumProperty<string,_StringDatum>__ctor__
                            ,0);
LAB_0262c2f8:
      (*(code *)*puVar9)(plVar14,lVar8,puVar9[1]);
      plVar14 = (long *)param_1[0x10];
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if ((lVar8 == 0) ||
         (FUN_011c181c(lVar8,param_1,*(undefined8 *)(*param_1 + 0x240),0), plVar14 == (long *)0x0))
      goto LAB_0262cc7c;
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_0262c384;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar1,2);
LAB_0262c384:
      (*(code *)*puVar9)(plVar14,lVar8,puVar9[1]);
      puVar3 = Method_Mono_Xml_SmallXmlParser_ReadReference__;
      puVar1 = UnityEngine_InputSystem_Composites_Vector2Composite_var;
      plVar14 = (long *)param_1[0x11];
      if (plVar14 != (long *)0x0) {
        lVar8 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)UnityEngine_InputSystem_Composites_Vector2Composite_var) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0262c3f8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_00d59724(plVar14,*(long *)
                                       UnityEngine_InputSystem_Composites_Vector2Composite_var,0);
LAB_0262c3f8:
        lVar8 = (*(code *)*puVar9)(plVar14,puVar9[1]);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if ((lVar11 == 0) ||
           (FUN_013df2bc(lVar11,param_1,*(undefined8 *)(*param_1 + 0x250),0),
           puVar6 = Method_System_Array_GetValue__, lVar8 == 0)) goto LAB_0262cc7c;
        FUN_013df780(lVar8,lVar11,*(undefined8 *)Method_System_Array_GetValue__);
        puVar5 = 
        Method_System_Threading_Tasks_TaskFactory<__Il2CppFullySharedGenericType>_FromAsyncImpl__;
        plVar14 = (long *)param_1[0x11];
        if (plVar14 == (long *)0x0) goto LAB_0262cc7c;
        lVar8 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_0262c4ac;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar1,1);
LAB_0262c4ac:
        lVar8 = (*(code *)*puVar9)(plVar14,puVar9[1]);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        if ((lVar11 == 0) ||
           (FUN_013df2bc(lVar11,param_1,*(undefined8 *)(*param_1 + 0x260),0),
           puVar4 = Obi_GraphColoring_<Colorize>d__10_TypeInfo, lVar8 == 0)) goto LAB_0262cc7c;
        FUN_013df780(lVar8,lVar11,*(undefined8 *)Obi_GraphColoring_<Colorize>d__10_TypeInfo);
        plVar14 = (long *)param_1[0x11];
        if (plVar14 == (long *)0x0) goto LAB_0262cc7c;
        lVar8 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar8 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_0262c558;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar1,2);
LAB_0262c558:
        lVar8 = (*(code *)*puVar9)(plVar14,puVar9[1]);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if ((lVar11 == 0) ||
           (FUN_013df2bc(lVar11,param_1,*(undefined8 *)(*param_1 + 0x270),0), lVar8 == 0))
        goto LAB_0262cc7c;
        FUN_013df780(lVar8,lVar11,*(undefined8 *)puVar6);
        plVar14 = (long *)param_1[0x11];
        if (plVar14 == (long *)0x0) goto LAB_0262cc7c;
        lVar8 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar8 + (long)(*piVar13 + 3) * 0x10 + 0x138);
              goto LAB_0262c5fc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar1,3);
LAB_0262c5fc:
        lVar8 = (*(code *)*puVar9)(plVar14,puVar9[1]);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        if ((lVar11 == 0) ||
           (FUN_013df2bc(lVar11,param_1,*(undefined8 *)(*param_1 + 0x280),0), lVar8 == 0))
        goto LAB_0262cc7c;
        FUN_013df780(lVar8,lVar11,*(undefined8 *)puVar4);
      }
      puVar3 = Method_OVRNativeList<OVRLocatable>_Dispose__;
      puVar1 = Oculus_Interaction_ControllerSelector_<>c_TypeInfo;
      plVar14 = (long *)param_1[0x12];
      if (plVar14 != (long *)0x0) {
        lVar8 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)Oculus_Interaction_ControllerSelector_<>c_TypeInfo) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0262c6ac;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_00d59724(plVar14,*(long *)Oculus_Interaction_ControllerSelector_<>c_TypeInfo,0)
        ;
LAB_0262c6ac:
        lVar8 = (*(code *)*puVar9)(plVar14,puVar9[1]);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if ((lVar11 == 0) ||
           (FUN_013df2bc(lVar11,param_1,*(undefined8 *)(*param_1 + 0x290),0), lVar8 == 0))
        goto LAB_0262cc7c;
        FUN_013df780(lVar8,lVar11,
                     *(undefined8 *)
                      System_ComponentModel_TypeConverter_StandardValuesCollection_TypeInfo);
        puVar3 = Oculus_Platform_Models_SdkAccount_TypeInfo;
        plVar14 = (long *)param_1[0x12];
        if (plVar14 == (long *)0x0) goto LAB_0262cc7c;
        lVar8 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_0262c760;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar1,1);
LAB_0262c760:
        lVar8 = (*(code *)*puVar9)(plVar14,puVar9[1]);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if ((lVar11 == 0) ||
           (FUN_013df2bc(lVar11,param_1,*(undefined8 *)(*param_1 + 0x2a0),0), lVar8 == 0))
        goto LAB_0262cc7c;
        FUN_013df780(lVar8,lVar11,
                     *(undefined8 *)
                      Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                    );
      }
      puVar3 = 
      Method_DG_Tweening_Core_Extensions_Blendable<Vector3,_Vector3[],_Vector3ArrayOptions>__;
      puVar1 = 
      Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Clear__
      ;
      plVar14 = (long *)param_1[0x13];
      if (plVar14 != (long *)0x0) {
        lVar8 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)
                 Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Clear__
               ) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0262c818;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_00d59724(plVar14,*(long *)
                                       Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Clear__
                              ,0);
LAB_0262c818:
        lVar8 = (*(code *)*puVar9)(plVar14,puVar9[1]);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if ((lVar11 == 0) ||
           (FUN_013df2bc(lVar11,param_1,*(undefined8 *)(*param_1 + 0x2b0),0), lVar8 == 0))
        goto LAB_0262cc7c;
        FUN_013df780(lVar8,lVar11,*(undefined8 *)System_Collections_Generic_List<OVRBone>_TypeInfo);
        puVar3 = StringLiteral_13359;
        plVar14 = (long *)param_1[0x13];
        if (plVar14 == (long *)0x0) goto LAB_0262cc7c;
        lVar8 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_0262c8cc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar1,1);
LAB_0262c8cc:
        lVar8 = (*(code *)*puVar9)(plVar14,puVar9[1]);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if ((lVar11 == 0) ||
           (FUN_013df2bc(lVar11,param_1,*(undefined8 *)(*param_1 + 0x2c0),0), lVar8 == 0))
        goto LAB_0262cc7c;
        FUN_013df780(lVar8,lVar11,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List_Enumerator<IGameObjectFilter>_MoveNext__
                    );
      }
      puVar3 = StringLiteral_11733;
      puVar1 = UnityEngine_XR_Interaction_Toolkit_Transformers_DropEventArgs_TypeInfo;
      plVar14 = (long *)param_1[0x14];
      if (plVar14 != (long *)0x0) {
        lVar8 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_11733) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0262c984;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar14,*(long *)StringLiteral_11733,0);
LAB_0262c984:
        lVar8 = (*(code *)*puVar9)(plVar14,puVar9[1]);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if ((lVar11 == 0) ||
           (FUN_013df2bc(lVar11,param_1,*(undefined8 *)(*param_1 + 0x2d0),0), lVar8 == 0))
        goto LAB_0262cc7c;
        FUN_013df780(lVar8,lVar11,*(undefined8 *)StringLiteral_9656);
        puVar1 = StringLiteral_1571;
        plVar14 = (long *)param_1[0x14];
        if (plVar14 == (long *)0x0) goto LAB_0262cc7c;
        lVar8 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_0262ca38;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar3,1);
LAB_0262ca38:
        lVar8 = (*(code *)*puVar9)(plVar14,puVar9[1]);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if ((lVar11 == 0) ||
           (FUN_013df2bc(lVar11,param_1,*(undefined8 *)(*param_1 + 0x2e0),0), lVar8 == 0))
        goto LAB_0262cc7c;
        FUN_013df780(lVar8,lVar11,*(undefined8 *)Method_OVRLocatable_UpdateSceneAnchorTransforms__);
      }
      puVar1 = System_Collections_Generic_List<VisualElement>_TypeInfo;
      plVar14 = (long *)param_1[0x15];
      if (plVar14 != (long *)0x0) {
        lVar8 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)long___var) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0262caf0;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar14,*(long *)long___var,0);
LAB_0262caf0:
        plVar14 = (long *)(*(code *)*puVar9)(plVar14,puVar9[1]);
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if ((lVar8 == 0) ||
           (FUN_011c181c(lVar8,param_1,*(undefined8 *)(*param_1 + 0x2f0),0), plVar14 == (long *)0x0)
           ) goto LAB_0262cc7c;
        lVar11 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)
                 Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<byte>__
               ) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0262cb80;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_00d59724(plVar14,*(long *)
                                       Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<byte>__
                              ,0);
LAB_0262cb80:
        uVar10 = (*(code *)*puVar9)(plVar14,lVar8,puVar9[1]);
        if (param_1[8] == 0) goto LAB_0262cc7c;
        FUN_025718f8(param_1[8],uVar10,0);
      }
      plVar14 = (long *)param_1[0x10];
      *(undefined1 *)((long)param_1 + 0xc9) = 0;
      if (plVar14 == (long *)0x0) {
LAB_0262cc14:
        bVar7 = 1;
      }
      else {
        lVar8 = *plVar14;
        bVar7 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__
                         + 300);
        if ((*(byte *)(lVar8 + 300) < bVar7) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar7 * 8 + -8) !=
            *(long *)Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__)) {
          bVar7 = *(byte *)(*(long *)Method_System_Collections_Generic_List<StyleSheet>_Contains__ +
                           300);
          if ((*(byte *)(lVar8 + 300) < bVar7) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar7 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_List<StyleSheet>_Contains__))
          goto LAB_0262cc14;
          bVar7 = FUN_02689fe0(plVar14,0);
LAB_0262cc6c:
          bVar7 = bVar7 & 1;
        }
        else {
          lVar8 = plVar14[6];
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_02681b9c(lVar8,0,0);
          if ((uVar12 & 1) != 0) {
            if (plVar14[6] == 0) goto LAB_0262cc7c;
            bVar7 = FUN_025b9434(plVar14[6],param_1[0x10],0);
            goto LAB_0262cc6c;
          }
          bVar7 = 0;
        }
      }
      *(byte *)((long)param_1 + 0xca) = bVar7;
      goto LAB_0262c224;
    }
  }
  *(undefined1 *)(param_1 + 0x19) = 0;
LAB_0262c224:
  FUN_0262ae04(param_1);
  return;
}


