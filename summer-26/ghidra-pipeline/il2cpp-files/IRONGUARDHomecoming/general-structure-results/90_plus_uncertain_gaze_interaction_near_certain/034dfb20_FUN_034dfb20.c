/*
FUNCTION_NAME: FUN_034dfb20
ENTRY_POINT: 034dfb20
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 168
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


undefined8 FUN_034dfb20(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint local_24;
  
  if ((DAT_04832dc3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                      );
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__);
    thunk_FUN_01efb3a4(Method_OVRTask_FromGuid<bool>__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<DrawingData_ProcessedBuilderData_MeshBuffers>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnButtonActionTriggered__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_VisualElement_GetFirstAncestorOfType<MultiColumnCollectionHeader>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_VisualElement_GetFirstAncestorOfType<ScrollView>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_VisualElement_GetFirstOfType<BaseVerticalCollectionView>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_VisualElement_GetOrCreateViewData<MultiColumnCollectionHeader_ViewState>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElement_StartAnimation<StyleValues>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElement_<AssignMeasureFunction>b__432_0__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElement_Add__);
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
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElementFactoryRegistry_RegisterFactory__)
    ;
    DAT_04832dc3 = 1;
  }
  puVar1 = Method_OVRTask_FromGuid<bool>__;
  if ((int)param_2 < 0x51) {
    if ((int)param_2 < 0x12) {
      switch(param_2) {
      case 2:
        uVar2 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_UIElements_VisualElementExtensions_WorldToLocal__,
                             param_1,0);
        uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                                  );
        FUN_034c7210(uVar3,uVar2,param_1,0);
        return uVar3;
      case 3:
        uVar2 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_UIElements_VisualElement_GetFirstAncestorOfType<ScrollView>__
                             ,param_1,0);
        uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                                  );
        FUN_034c6a34(uVar3,uVar2,0);
        return uVar3;
      case 4:
        lVar4 = *(long *)Method_OVRTask_FromGuid<bool>__;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar4 = *(long *)puVar1;
        }
        if (*(char *)(*(long *)(lVar4 + 0xb8) + 8) != '\0') {
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_01f0853c();
        }
        uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                  );
        uVar3 = *(undefined8 *)
                 Method_UnityEngine_UIElements_VisualElementFactoryRegistry_RegisterFactory__;
        param_2 = 0x80070004;
        break;
      case 5:
        uVar2 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnButtonActionTriggered__
                             ,param_1,0);
        uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
                                  );
        FUN_03588d2c(uVar3,uVar2,0);
        return uVar3;
      case 6:
        uVar3 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_UIElements_VisualElement_StartAnimation<StyleValues>__
                             ,param_1,0);
        uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                  );
        param_2 = 0x80070006;
        break;
      default:
        goto switchD_034dfdbc_caseD_7;
      case 0xf:
        uVar3 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_UIElements_VisualElement_CheckUserKeyArgument__,
                             param_1,0);
        uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                  );
        param_2 = 0x8007000f;
        break;
      case 0x11:
        uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                  );
        uVar3 = *(undefined8 *)Method_UnityEngine_UIElements_VisualElement_FindCommonAncestor__;
        param_2 = 0x11;
LAB_034e0258:
        param_2 = param_2 | 0x80070000;
      }
      goto LAB_034e00ac;
    }
    if ((int)param_2 < 0x21) {
      if (param_2 != 0x1d) {
        if (param_2 == 0x20) {
          uVar3 = FUN_03406290(*(undefined8 *)
                                Method_UnityEngine_UIElements_VisualElement_AssignStyleValues__,
                               param_1,0);
          uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                    );
          param_2 = 0x80070020;
          goto LAB_034e00ac;
        }
        goto switchD_034dfdbc_caseD_7;
      }
      uVar3 = FUN_03406290(*(undefined8 *)
                            Method_UnityEngine_UIElements_VisualElement_OverwriteFromViewData__,
                           param_1,0);
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      param_2 = 0x1d;
    }
    else if (param_2 == 0x21) {
      uVar3 = FUN_03406290(*(undefined8 *)
                            Method_UnityEngine_UIElements_VisualElementExtensions_WorldToLocal__,
                           param_1,0);
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      param_2 = 0x21;
    }
    else if (param_2 == 0x27) {
      uVar3 = FUN_03406290(*(undefined8 *)
                            Method_UnityEngine_UIElements_VisualElementExtensions_LocalToWorld__,
                           param_1,0);
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      param_2 = 0x27;
    }
    else {
      if (param_2 != 0x50) goto switchD_034dfdbc_caseD_7;
      uVar3 = FUN_03406290(*(undefined8 *)
                            Method_UnityEngine_UIElements_VisualElement_GetFirstAncestorOfType<MultiColumnCollectionHeader>__
                           ,param_1,0);
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      param_2 = 0x50;
    }
  }
  else {
    if (0x91 < (int)param_2) {
      if (param_2 == 0xce) {
        uVar2 = FUN_03406290(*(undefined8 *)
                              Method_UnityEngine_UIElements_VisualElementExtensions_StretchToParentSize__
                             ,param_1,0);
        uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<DrawingData_ProcessedBuilderData_MeshBuffers>__
                                  );
        FUN_034ca3f8(uVar3,uVar2,0);
        return uVar3;
      }
      if (param_2 == 0x10b) {
        uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                  );
        uVar3 = *(undefined8 *)Method_UnityEngine_UIElements_VisualElement_SetTooltip__;
        param_2 = 0x10b;
        goto LAB_034e0258;
      }
      if (param_2 == 6000) {
        uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                  );
        param_2 = 0x80071770;
        uVar3 = *(undefined8 *)
                 Method_UnityEngine_UIElements_VisualElement_GetOrCreateViewData<MultiColumnCollectionHeader_ViewState>__
        ;
        goto LAB_034e00ac;
      }
switchD_034dfdbc_caseD_7:
      local_24 = param_2;
      uVar2 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__
                                 ,&local_24);
      uVar3 = FUN_0340f2f0(*(undefined8 *)
                            Method_UnityEngine_UIElements_VisualElement_GetFirstOfType<BaseVerticalCollectionView>__
                           ,uVar2,param_1,0);
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      param_2 = param_2 | 0x80070000;
      goto LAB_034e00ac;
    }
    if (param_2 == 0x52) {
      uVar3 = FUN_03406290(*(undefined8 *)
                            Method_UnityEngine_UIElements_VisualElement_<AssignMeasureFunction>b__432_0__
                           ,param_1,0);
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      param_2 = 0x52;
    }
    else if (param_2 == 0x57) {
      lVar5 = *(long *)Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
      lVar4 = *(long *)(lVar5 + 0x38);
      if (lVar4 == 0) {
        FUN_01ecafa0(lVar5);
        lVar4 = *(long *)(lVar5 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      uVar3 = FUN_0340f378(*(undefined8 *)Method_UnityEngine_UIElements_VisualElement_Add__,
                           **(undefined8 **)(lVar4 + 0xb8),0);
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      param_2 = 0x57;
    }
    else {
      if (param_2 != 0x91) goto switchD_034dfdbc_caseD_7;
      uVar3 = FUN_03406290(*(undefined8 *)Method_UnityEngine_UIElements_VisualElement_PlaceBehind__,
                           param_1,0);
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      param_2 = 0x91;
    }
  }
  param_2 = param_2 | 0x80070000;
LAB_034e00ac:
  FUN_034c7720(uVar2,uVar3,param_2,0);
  return uVar2;
}


