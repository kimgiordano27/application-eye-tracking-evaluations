/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$ClearSurfaces
ENTRY_POINT: 0149f730
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_SceneNavigation__ClearSurfaces(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x21;
  long in_stack_00000008;
  
  puVar3 = LoadUtility_EventType_TypeInfo;
  puVar2 = System_Nullable<char>_TypeInfo;
  puVar1 = System_Collections_Generic_Dictionary<object,_object>_TypeInfo;
  uVar5 = FUN_0129aa60();
  puVar4 = 
  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Clear__;
  if ((uVar5 & 1) == 0) {
    lVar6 = *(long *)
             Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Clear__
    ;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar4;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_0149f92c;
    uVar5 = FUN_0129aa60();
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)puVar4;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar4;
      }
      if ((**(long **)(lVar6 + 0xb8) == 0) || (FUN_01299bc0(), in_stack_00000008 == 0))
      goto LAB_0149f92c;
      if (*(int *)(in_stack_00000008 + 0x18) != 0) {
        lVar6 = *(long *)puVar4;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar4;
        }
        puVar1 = PTR_DAT_033ec4e8;
        if (**(long **)(lVar6 + 0xb8) != 0) {
          FUN_01299bc0();
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          puVar2 = Method_OVRObjectPool_List<OVRSpatialAnchor>__;
          puVar1 = 
          Method_System_Collections_Generic_Dictionary<Type,_AttributeUsageAttribute>__ctor__;
          if (lVar6 != 0) {
            FUN_012d239c();
            uVar7 = System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                              (in_stack_00000008,lVar6,*(undefined8 *)puVar2);
            lVar6 = FUN_010dfe04(uVar7,*(undefined8 *)puVar1);
            return lVar6;
          }
        }
        goto LAB_0149f92c;
      }
    }
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    puVar2 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
    ;
    if (lVar6 == 0) {
LAB_0149f92c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320e50(lVar6,*(undefined8 *)puVar3);
    uVar7 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    in_stack_00000008 = FUN_01780344(uVar7,0);
    uVar7 = *(undefined8 *)puVar1;
  }
  else {
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar6 == 0) ||
       (FUN_01320e50(lVar6,*(undefined8 *)puVar3), *(long *)(unaff_x21 + 0x30) == 0))
    goto LAB_0149f92c;
    FUN_01299bc0();
    uVar7 = *(undefined8 *)puVar1;
  }
  FUN_00acc5dc(lVar6,in_stack_00000008,uVar7);
  return lVar6;
}


