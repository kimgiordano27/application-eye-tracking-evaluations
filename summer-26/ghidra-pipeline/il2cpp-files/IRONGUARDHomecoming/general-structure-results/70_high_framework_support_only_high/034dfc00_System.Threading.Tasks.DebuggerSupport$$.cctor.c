/*
FUNCTION_NAME: System.Threading.Tasks.DebuggerSupport$$.cctor
ENTRY_POINT: 034dfc00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_21;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


undefined8 System_Threading_Tasks_DebuggerSupport___cctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  uint unaff_w21;
  
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElement_AssignStyleValues__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElement_CheckUserKeyArgument__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElement_FindCommonAncestor__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElement_OverwriteFromViewData__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElement_PlaceBehind__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElement_SetTooltip__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElementExtensions_LocalToWorld__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElementExtensions_StretchToParentSize__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElementExtensions_WorldToLocal__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElementExtensions_WorldToLocal__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElementFactoryRegistry_RegisterFactory__);
  *(undefined1 *)(unaff_x20 + 0xdc3) = 1;
  puVar1 = Method_OVRTask_FromGuid<bool>__;
  if ((int)unaff_w21 < 0x51) {
    if ((int)unaff_w21 < 0x12) {
      switch(unaff_w21) {
      case 2:
        uVar2 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_UIElements_VisualElementExtensions_WorldToLocal__);
        uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                                  );
        FUN_034c7210(uVar3,uVar2);
        return uVar3;
      case 3:
        uVar2 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_UIElements_VisualElement_GetFirstAncestorOfType<ScrollView>__
                            );
        uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                                  );
        FUN_034c6a34(uVar3,uVar2,0);
        return uVar3;
      case 4:
        lVar5 = *(long *)Method_OVRTask_FromGuid<bool>__;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *(long *)puVar1;
        }
        if (*(char *)(*(long *)(lVar5 + 0xb8) + 8) != '\0') {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_01f0853c();
        }
        uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                  );
        uVar3 = *(undefined8 *)
                 Method_UnityEngine_UIElements_VisualElementFactoryRegistry_RegisterFactory__;
        uVar4 = 0x80070004;
        break;
      case 5:
        uVar2 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnButtonActionTriggered__
                            );
        uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
                                  );
        FUN_03588d2c(uVar3,uVar2,0);
        return uVar3;
      case 6:
        uVar3 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_UIElements_VisualElement_StartAnimation<StyleValues>__
                            );
        uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                  );
        uVar4 = 0x80070006;
        break;
      default:
        goto switchD_034dfdbc_caseD_7;
      case 0xf:
        uVar3 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_UIElements_VisualElement_CheckUserKeyArgument__);
        uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                  );
        uVar4 = 0x8007000f;
        break;
      case 0x11:
        uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                  );
        uVar3 = *(undefined8 *)Method_UnityEngine_UIElements_VisualElement_FindCommonAncestor__;
        uVar4 = 0x11;
LAB_034e0258:
        uVar4 = uVar4 | 0x80070000;
      }
      goto LAB_034e00ac;
    }
    if ((int)unaff_w21 < 0x21) {
      if (unaff_w21 != 0x1d) {
        if (unaff_w21 == 0x20) {
          uVar3 = FUN_03406290(*(undefined8 *)
                                Method_UnityEngine_UIElements_VisualElement_AssignStyleValues__);
          uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                    );
          uVar4 = 0x80070020;
          goto LAB_034e00ac;
        }
        goto switchD_034dfdbc_caseD_7;
      }
      uVar3 = FUN_03406290(*(undefined8 *)
                            Method_UnityEngine_UIElements_VisualElement_OverwriteFromViewData__);
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      uVar4 = 0x1d;
    }
    else if (unaff_w21 == 0x21) {
      uVar3 = FUN_03406290(*(undefined8 *)
                            Method_UnityEngine_UIElements_VisualElementExtensions_WorldToLocal__);
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      uVar4 = 0x21;
    }
    else if (unaff_w21 == 0x27) {
      uVar3 = FUN_03406290(*(undefined8 *)
                            Method_UnityEngine_UIElements_VisualElementExtensions_LocalToWorld__);
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      uVar4 = 0x27;
    }
    else {
      if (unaff_w21 != 0x50) goto switchD_034dfdbc_caseD_7;
      uVar3 = FUN_03406290(*(undefined8 *)
                            Method_UnityEngine_UIElements_VisualElement_GetFirstAncestorOfType<MultiColumnCollectionHeader>__
                          );
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      uVar4 = 0x50;
    }
  }
  else {
    if (0x91 < (int)unaff_w21) {
      if (unaff_w21 == 0xce) {
        uVar2 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_UIElements_VisualElementExtensions_StretchToParentSize__
                            );
        uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<DrawingData_ProcessedBuilderData_MeshBuffers>__
                                  );
        FUN_034ca3f8(uVar3,uVar2,0);
        return uVar3;
      }
      if (unaff_w21 == 0x10b) {
        uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                  );
        uVar3 = *(undefined8 *)Method_UnityEngine_UIElements_VisualElement_SetTooltip__;
        uVar4 = 0x10b;
        goto LAB_034e0258;
      }
      if (unaff_w21 == 6000) {
        uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                  );
        uVar4 = 0x80071770;
        uVar3 = *(undefined8 *)
                 Method_UnityEngine_UIElements_VisualElement_GetOrCreateViewData<MultiColumnCollectionHeader_ViewState>__
        ;
        goto LAB_034e00ac;
      }
switchD_034dfdbc_caseD_7:
      uVar2 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__
                                 ,&stack0x0000000c);
      uVar3 = FUN_0340f2f0(*(undefined8 *)
                            Method_UnityEngine_UIElements_VisualElement_GetFirstOfType<BaseVerticalCollectionView>__
                           ,uVar2);
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      uVar4 = unaff_w21 | 0x80070000;
      goto LAB_034e00ac;
    }
    if (unaff_w21 == 0x52) {
      uVar3 = FUN_03406290(*(undefined8 *)
                            Method_UnityEngine_UIElements_VisualElement_<AssignMeasureFunction>b__432_0__
                          );
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      uVar4 = 0x52;
    }
    else if (unaff_w21 == 0x57) {
      lVar6 = *(long *)Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
      lVar5 = *(long *)(lVar6 + 0x38);
      if (lVar5 == 0) {
        FUN_01ecafa0(lVar6);
        lVar5 = *(long *)(lVar6 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      uVar3 = FUN_0340f378(*(undefined8 *)Method_UnityEngine_UIElements_VisualElement_Add__,
                           **(undefined8 **)(lVar5 + 0xb8),0);
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      uVar4 = 0x57;
    }
    else {
      if (unaff_w21 != 0x91) goto switchD_034dfdbc_caseD_7;
      uVar3 = FUN_03406290(*(undefined8 *)Method_UnityEngine_UIElements_VisualElement_PlaceBehind__)
      ;
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      uVar4 = 0x91;
    }
  }
  uVar4 = uVar4 | 0x80070000;
LAB_034e00ac:
  FUN_034c7720(uVar2,uVar3,uVar4,0);
  return uVar2;
}


