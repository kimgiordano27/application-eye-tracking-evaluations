/*
FUNCTION_NAME: FUN_01cef328
ENTRY_POINT: 01cef328
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_01cef328(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = Method_UnityEngine_Component_GetComponent<PlayableDirector>__;
  if ((DAT_0377f135 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<StyleSheet>_RemoveRange__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_Values<int>__ctor__
                      );
    thunk_FUN_00d48444(OVRPlugin_LayerLayout_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Spectrum_Point>_Sort__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Color32>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<Type>_Push__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ReadFromFinishedAsync>d__5>__
                      );
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_ScriptableSettings<InteractionLayerSettings>_get_Instance__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f4778);
    thunk_FUN_00d48444(PTR_DAT_033f1168);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInChildren<ParticleSystem>__);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<NoteWave>_AddListener__);
    thunk_FUN_00d48444(DigitalOpus_MB_Core_MB3_KMeansClustering_DataPoint_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3937);
    thunk_FUN_00d48444(Method_UnityEngine_UI_Collections_IndexedSet<Graphic>_AddUnique__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CowatchViewer>_Add__);
    thunk_FUN_00d48444(Oculus_Interaction_TouchHandGrabInteractorVisual_<>c_TypeInfo);
    thunk_FUN_00d48444(OVRHapticsClip_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2054);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetLower<UHull,_float2,_Tessellator_TestHullPointL>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RuntimeElement>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<ObiRopeCursor>__);
    thunk_FUN_00d48444(StringLiteral_1730);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_3132);
    thunk_FUN_00d48444(StringLiteral_6252);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<PlayableDirector>__);
    DAT_0377f135 = 1;
  }
  puVar2 = StringLiteral_6252;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_01d05080(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  puVar1 = Method_Unity_XR_CoreUtils_ScriptableSettings<InteractionLayerSettings>_get_Instance__;
  iVar3 = FUN_01d04f98(uVar4,0);
  if ((param_2 & 1) == 0) {
    switch(iVar3 + -3) {
    case 0:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_List<StyleSheet>_RemoveRange__
                                  );
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar5;
      }
      break;
    case 1:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_120>_SliceWithStride<Color32>__
                                  );
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = lVar5;
      }
      break;
    case 2:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Oculus_Interaction_TouchHandGrabInteractorVisual_<>c_TypeInfo);
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar5;
      }
      break;
    case 3:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)OVRPlugin_LayerLayout_TypeInfo);
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38) = lVar5;
      }
      break;
    case 4:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f1168);
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar5;
      }
      break;
    case 5:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_List<RuntimeElement>__ctor__);
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40) = lVar5;
      }
      break;
    case 6:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<NoteWave>_AddListener__);
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = lVar5;
      }
      break;
    case 7:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_1730);
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48) = lVar5;
      }
      break;
    case 8:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3937);
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = lVar5;
      }
      break;
    case 9:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3132);
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50) = lVar5;
      }
      break;
    case 10:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_2054);
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58) = lVar5;
      }
      break;
    case 0xb:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ReadFromFinishedAsync>d__5>__
                                  );
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60) = lVar5;
      }
      break;
    default:
      lVar5 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_UI_Collections_IndexedSet<Graphic>_AddUnique__
                                  );
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        **(long **)(*(long *)puVar1 + 0xb8) = lVar5;
      }
    }
  }
  else {
    switch(iVar3 + -3) {
    case 0:
      lVar5 = FUN_01cc7c94(param_1,0);
      return lVar5;
    case 1:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x78);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_List<Spectrum_Point>_Sort__);
        if (lVar5 == 0) {
LAB_01cefb5c:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x78) = lVar5;
      }
      break;
    case 2:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_List<CowatchViewer>_Add__);
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68) = lVar5;
      }
      break;
    case 3:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x90);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_Values<int>__ctor__
                                  );
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x90) = lVar5;
      }
      break;
    case 4:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f4778);
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70) = lVar5;
      }
      break;
    case 5:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x98);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetLower<UHull,_float2,_Tessellator_TestHullPointL>__
                                  );
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x98) = lVar5;
      }
      break;
    case 6:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x80);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_Component_GetComponentInChildren<ParticleSystem>__
                                  );
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x80) = lVar5;
      }
      break;
    case 7:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa0);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_Component_GetComponent<ObiRopeCursor>__);
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa0) = lVar5;
      }
      break;
    case 8:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x88);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    DigitalOpus_MB_Core_MB3_KMeansClustering_DataPoint_TypeInfo);
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x88) = lVar5;
      }
      break;
    case 9:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa8);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>__ctor__
                                  );
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa8) = lVar5;
      }
      break;
    case 10:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb0);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)OVRHapticsClip_TypeInfo);
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb0) = lVar5;
      }
      break;
    default:
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb8);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_Stack<Type>_Push__);
        if (lVar5 == 0) goto LAB_01cefb5c;
        FUN_01cc8c00(lVar5,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb8) = lVar5;
      }
    }
  }
  return lVar5;
}


