/*
FUNCTION_NAME: FUN_056c46e0
ENTRY_POINT: 056c46e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_056c46e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<PokeInteractable,_PokeInteractor_SurfaceHitCache_HitInfo>_get_Item__
  ;
  puVar1 = OVRPlugin_OVRP_1_96_0_TypeInfo;
  if ((DAT_06bc0462 & 1) == 0) {
    FUN_02f08768(OVRVirtualKeyboard_<InitializeGlTFModel>d__92_TypeInfo);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<PokeInteractable,_PokeInteractor_SurfaceHitCache_HitInfo>_get_Item__
                );
    FUN_02f08768(OVRPlugin_OVRP_1_96_0_TypeInfo);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<int,_TMP_SpriteAsset>_ContainsKey__);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<PokeInteractor,_RippleCursorEffectManager_InteractorState>__ctor__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<PokeInteractor,_RippleCursorEffectManager_InteractorState>_ContainsKey__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<PokeInteractor,_RippleCursorEffectManager_InteractorState>_Remove__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<PokeInteractor,_RippleCursorEffectManager_InteractorState>_TryGetValue__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<PokeInteractor,_RippleCursorEffectManager_InteractorState>_get_Keys__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<PokeInteractor,_RippleCursorEffectManager_InteractorState>_set_Item__
                );
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<PropertyName,_object>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<PropertyName,_object>_ContainsKey__);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<PropertyName,_object>_Remove__);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<PropertyName,_object>_TryGetValue__);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<PropertyName,_object>_set_Item__);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<RenderData,_ExtraRenderData>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<RenderData,_ExtraRenderData>_Add__);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<RenderData,_ExtraRenderData>_Remove__)
    ;
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<RenderData,_ExtraRenderData>_TryGetValue__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<RenderData,_ExtraRenderData>_get_Item__
                );
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<RenderGraphState,_string>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<RenderGraphState,_string>_Add__);
    DAT_06bc0462 = 1;
  }
  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_048549e0(lVar10,0x12,*(undefined8 *)puVar2);
  puVar9 = Method_System_Collections_Generic_Dictionary<RenderData,_ExtraRenderData>_get_Item__;
  puVar8 = Method_System_Collections_Generic_Dictionary<RenderData,_ExtraRenderData>_TryGetValue__;
  puVar7 = Method_System_Collections_Generic_Dictionary<RenderData,_ExtraRenderData>_Add__;
  puVar6 = Method_System_Collections_Generic_Dictionary<PropertyName,_object>_TryGetValue__;
  puVar5 = 
  Method_System_Collections_Generic_Dictionary<PokeInteractor,_RippleCursorEffectManager_InteractorState>_set_Item__
  ;
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<PokeInteractor,_RippleCursorEffectManager_InteractorState>_get_Keys__
  ;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<PokeInteractor,_RippleCursorEffectManager_InteractorState>_ContainsKey__
  ;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<PokeInteractor,_RippleCursorEffectManager_InteractorState>__ctor__
  ;
  puVar1 = OVRVirtualKeyboard_<InitializeGlTFModel>d__92_TypeInfo;
  if (lVar10 != 0) {
    FUN_04855304(lVar10,0x30001,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<PropertyName,_object>_set_Item__,
                 *(undefined8 *)OVRVirtualKeyboard_<InitializeGlTFModel>d__92_TypeInfo);
    FUN_04855304(lVar10,0x30002,*(undefined8 *)puVar6,*(undefined8 *)puVar1);
    FUN_04855304(lVar10,0x30003,*(undefined8 *)puVar4,*(undefined8 *)puVar1);
    FUN_04855304(lVar10,0x30004,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    FUN_04855304(lVar10,0x30005,*(undefined8 *)puVar5,*(undefined8 *)puVar1);
    FUN_04855304(lVar10,0x30006,*(undefined8 *)puVar8,*(undefined8 *)puVar1);
    FUN_04855304(lVar10,0x30007,*(undefined8 *)puVar3,*(undefined8 *)puVar1);
    FUN_04855304(lVar10,0x30008,*(undefined8 *)puVar7,*(undefined8 *)puVar1);
    FUN_04855304(lVar10,0x30009,*(undefined8 *)puVar9,*(undefined8 *)puVar1);
    FUN_04855304(lVar10,0x3000a,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<PropertyName,_object>_ContainsKey__,
                 *(undefined8 *)puVar1);
    FUN_04855304(lVar10,0x3000b,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<RenderGraphState,_string>_Add__,
                 *(undefined8 *)puVar1);
    FUN_04855304(lVar10,0x3000c,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<PokeInteractor,_RippleCursorEffectManager_InteractorState>_TryGetValue__
                 ,*(undefined8 *)puVar1);
    FUN_04855304(lVar10,0x3000d,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<PropertyName,_object>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_04855304(lVar10,0x3000e,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<RenderData,_ExtraRenderData>_Remove__
                 ,*(undefined8 *)puVar1);
    FUN_04855304(lVar10,0x3000f,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<RenderGraphState,_string>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_04855304(lVar10,0x30010,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<PokeInteractor,_RippleCursorEffectManager_InteractorState>_Remove__
                 ,*(undefined8 *)puVar1);
    FUN_04855304(lVar10,0x30011,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<RenderData,_ExtraRenderData>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_04855304(lVar10,0x30012,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<PropertyName,_object>_Remove__,
                 *(undefined8 *)puVar1);
    **(long **)(*(long *)
                 Method_System_Collections_Generic_Dictionary<int,_TMP_SpriteAsset>_ContainsKey__ +
               0xb8) = lVar10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


