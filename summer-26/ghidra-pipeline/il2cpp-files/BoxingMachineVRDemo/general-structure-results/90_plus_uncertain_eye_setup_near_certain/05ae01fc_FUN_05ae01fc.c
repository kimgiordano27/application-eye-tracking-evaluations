/*
FUNCTION_NAME: FUN_05ae01fc
ENTRY_POINT: 05ae01fc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_05ae01fc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar1 = Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__;
  if ((DAT_06b81866 & 1) == 0) {
    FUN_02d6084c(
                UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass7_0_TypeInfo
                );
    FUN_02d6084c(
                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_TypeInfo
                );
    FUN_02d6084c(
                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass12_0_TypeInfo
                );
    FUN_02d6084c(
                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_067610f0);
    FUN_02d6084c(
                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass16_0_TypeInfo
                );
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<Type,_DataContract>__ctor__);
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<Type,_OpenXRLayerProvider_ILayerHandler>__ctor__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<Type,_OpenXRLayerProvider_ILayerHandler>_Clear__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                );
    DAT_06b81866 = 1;
  }
  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_0504920c(lVar7,0);
  puVar2 = Method_System_Collections_Generic_Dictionary<Type,_DataContract>__ctor__;
  puVar1 = UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_TypeInfo;
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x10) = param_1;
    thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x10),param_1);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
    FUN_059f810c(lVar8,0);
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar9 = *(long *)puVar2;
    }
    puVar6 = 
    Method_System_Collections_Generic_Dictionary<Type,_OpenXRLayerProvider_ILayerHandler>_Clear__;
    puVar5 = 
    Method_System_Collections_Generic_Dictionary<Type,_OpenXRLayerProvider_ILayerHandler>__ctor__;
    puVar4 = 
    Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__;
    puVar3 = 
    UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass16_0_TypeInfo
    ;
    puVar2 = 
    UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass7_0_TypeInfo
    ;
    puVar1 = PTR_DAT_067610f0;
    if (lVar8 != 0) {
      FUN_05a06888(lVar8,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x80),
                   *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x88),0);
      uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
      FUN_04d55f20(uVar10,lVar7,*(undefined8 *)puVar4,0);
      *(undefined8 *)(lVar8 + 0x48) = uVar10;
      thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x48),uVar10);
      uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
      FUN_04703554(uVar10,lVar7,*(undefined8 *)puVar5,0);
      *(undefined8 *)(lVar8 + 0x50) = uVar10;
      thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x50),uVar10);
      uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
      FUN_04d55bb0(uVar10,lVar7,*(undefined8 *)puVar6,0);
      *(undefined8 *)(lVar8 + 0x40) = uVar10;
      thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x40),uVar10);
      return lVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


