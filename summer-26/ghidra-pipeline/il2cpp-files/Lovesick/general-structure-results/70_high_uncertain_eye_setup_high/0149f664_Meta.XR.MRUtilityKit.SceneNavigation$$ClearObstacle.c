/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$ClearObstacle
ENTRY_POINT: 0149f664
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_SceneNavigation__ClearObstacle(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  long in_stack_00000008;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x38));
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
  *(undefined1 *)(unaff_x20 + 0xca3) = 1;
  lVar5 = thunk_FUN_00d62348(*unaff_x23);
  if (lVar5 != 0) {
    FUN_017b46ec(lVar5,0);
    *(long *)(lVar5 + 0x10) = unaff_x21;
    *(undefined8 *)(lVar5 + 0x18) = unaff_x22;
    puVar3 = LoadUtility_EventType_TypeInfo;
    puVar2 = System_Nullable<char>_TypeInfo;
    puVar1 = System_Collections_Generic_Dictionary<object,_object>_TypeInfo;
    if (*(long *)(unaff_x21 + 0x30) != 0) {
      uVar6 = FUN_0129aa60();
      puVar4 = 
      Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Clear__
      ;
      if ((uVar6 & 1) == 0) {
        lVar7 = *(long *)
                 Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Clear__
        ;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar7 = *(long *)puVar4;
        }
        if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_0149f92c;
        uVar6 = FUN_0129aa60();
        if ((uVar6 & 1) != 0) {
          lVar7 = *(long *)puVar4;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar7 = *(long *)puVar4;
          }
          if ((**(long **)(lVar7 + 0xb8) == 0) || (FUN_01299bc0(), in_stack_00000008 == 0))
          goto LAB_0149f92c;
          if (*(int *)(in_stack_00000008 + 0x18) != 0) {
            lVar7 = *(long *)puVar4;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar7 = *(long *)puVar4;
            }
            puVar1 = PTR_DAT_033ec4e8;
            if (**(long **)(lVar7 + 0xb8) != 0) {
              FUN_01299bc0();
              lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              puVar2 = Method_OVRObjectPool_List<OVRSpatialAnchor>__;
              puVar1 = 
              Method_System_Collections_Generic_Dictionary<Type,_AttributeUsageAttribute>__ctor__;
              if (lVar7 != 0) {
                FUN_012d239c(lVar7,lVar5,*(undefined8 *)System_Func<TMP_Character,_uint>_TypeInfo,0)
                ;
                uVar8 = System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                                  (in_stack_00000008,lVar7,*(undefined8 *)puVar2);
                lVar5 = FUN_010dfe04(uVar8,*(undefined8 *)puVar1);
                return lVar5;
              }
            }
            goto LAB_0149f92c;
          }
        }
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
        puVar2 = 
        Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
        if (lVar5 == 0) goto LAB_0149f92c;
        FUN_01320e50(lVar5,*(undefined8 *)puVar3);
        uVar8 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00000008 = FUN_01780344(uVar8,0);
        uVar8 = *(undefined8 *)puVar1;
      }
      else {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if ((lVar5 == 0) ||
           (FUN_01320e50(lVar5,*(undefined8 *)puVar3), *(long *)(unaff_x21 + 0x30) == 0))
        goto LAB_0149f92c;
        FUN_01299bc0();
        uVar8 = *(undefined8 *)puVar1;
      }
      FUN_00acc5dc(lVar5,in_stack_00000008,uVar8);
      return lVar5;
    }
  }
LAB_0149f92c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


