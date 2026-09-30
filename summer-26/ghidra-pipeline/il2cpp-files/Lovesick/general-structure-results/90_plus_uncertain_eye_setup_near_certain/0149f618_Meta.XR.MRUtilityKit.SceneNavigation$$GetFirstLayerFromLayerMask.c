/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$GetFirstLayerFromLayerMask
ENTRY_POINT: 0149f618
PROGRAM: Lovesick-libil2cpp.so
SCORE: 160
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_SceneNavigation__GetFirstLayerFromLayerMask
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long in_stack_00000008;
  
  puVar1 = Method_System_MemoryExtensions_IndexOf<char>__;
  if ((DAT_03776ca3 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_24>__
                      );
    thunk_FUN_00d48444(System_ComponentModel_ReflectPropertyDescriptor___TypeInfo);
    thunk_FUN_00d48444(System_Func<FingerFeature,_int>_TypeInfo);
    thunk_FUN_00d48444(OVR_OpenVR_IVROverlay__GetOverlayWidthInMeters_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_AttributeUsageAttribute>__ctor__
                      );
    thunk_FUN_00d48444(Method_OVRObjectPool_List<OVRSpatialAnchor>__);
    thunk_FUN_00d48444(PTR_DAT_033ec4e8);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<object,_object>_TypeInfo);
    thunk_FUN_00d48444(LoadUtility_EventType_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_Stack<LogLevel>_TypeInfo);
    thunk_FUN_00d48444(System_Nullable<char>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Clear__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(System_Func<TMP_Character,_uint>_TypeInfo);
    thunk_FUN_00d48444(Method_System_MemoryExtensions_IndexOf<char>__);
    DAT_03776ca3 = 1;
  }
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar6 != 0) {
    FUN_017b46ec(lVar6,0);
    *(long *)(lVar6 + 0x10) = param_1;
    *(undefined8 *)(lVar6 + 0x18) = param_3;
    puVar4 = LoadUtility_EventType_TypeInfo;
    puVar3 = System_Nullable<char>_TypeInfo;
    puVar1 = System_Collections_Generic_Dictionary<object,_object>_TypeInfo;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar7 = FUN_0129aa60(*(long *)(param_1 + 0x30),param_2,
                           *(undefined8 *)System_ComponentModel_ReflectPropertyDescriptor___TypeInfo
                          );
      puVar5 = 
      Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Clear__
      ;
      if ((uVar7 & 1) == 0) {
        lVar8 = *(long *)
                 Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Clear__
        ;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar8 = *(long *)puVar5;
        }
        if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_0149f92c;
        uVar7 = FUN_0129aa60(**(long **)(lVar8 + 0xb8),param_2,
                             *(undefined8 *)
                              Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_24>__
                            );
        if ((uVar7 & 1) != 0) {
          lVar8 = *(long *)puVar5;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar8 = *(long *)puVar5;
          }
          puVar2 = System_Func<FingerFeature,_int>_TypeInfo;
          if ((**(long **)(lVar8 + 0xb8) == 0) ||
             (FUN_01299bc0(**(long **)(lVar8 + 0xb8),param_2,&stack0x00000008,
                           *(undefined8 *)System_Func<FingerFeature,_int>_TypeInfo),
             in_stack_00000008 == 0)) goto LAB_0149f92c;
          if (*(int *)(in_stack_00000008 + 0x18) != 0) {
            lVar8 = *(long *)puVar5;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar8 = *(long *)puVar5;
            }
            puVar1 = PTR_DAT_033ec4e8;
            if (**(long **)(lVar8 + 0xb8) != 0) {
              FUN_01299bc0(**(long **)(lVar8 + 0xb8),param_2,&stack0x00000008,*(undefined8 *)puVar2)
              ;
              lVar8 = in_stack_00000008;
              lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              puVar3 = Method_OVRObjectPool_List<OVRSpatialAnchor>__;
              puVar1 = 
              Method_System_Collections_Generic_Dictionary<Type,_AttributeUsageAttribute>__ctor__;
              if (lVar9 != 0) {
                FUN_012d239c(lVar9,lVar6,*(undefined8 *)System_Func<TMP_Character,_uint>_TypeInfo,0)
                ;
                uVar10 = System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                                   (lVar8,lVar9,*(undefined8 *)puVar3);
                lVar6 = FUN_010dfe04(uVar10,*(undefined8 *)puVar1);
                return lVar6;
              }
            }
            goto LAB_0149f92c;
          }
        }
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar5 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
        puVar3 = 
        Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
        if (lVar6 != 0) {
          FUN_01320e50(lVar6,*(undefined8 *)puVar4);
          uVar10 = *(undefined8 *)puVar3;
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar8 = FUN_01780344(uVar10,0);
          uVar10 = *(undefined8 *)puVar1;
LAB_0149f908:
          FUN_00acc5dc(lVar6,lVar8,uVar10);
          return lVar6;
        }
      }
      else {
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if (lVar6 != 0) {
          FUN_01320e50(lVar6,*(undefined8 *)puVar4);
          if (*(long *)(param_1 + 0x30) != 0) {
            FUN_01299bc0(*(long *)(param_1 + 0x30),param_2,&stack0x00000008,
                         *(undefined8 *)OVR_OpenVR_IVROverlay__GetOverlayWidthInMeters_TypeInfo);
            uVar10 = *(undefined8 *)puVar1;
            lVar8 = in_stack_00000008;
            goto LAB_0149f908;
          }
        }
      }
    }
  }
LAB_0149f92c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


