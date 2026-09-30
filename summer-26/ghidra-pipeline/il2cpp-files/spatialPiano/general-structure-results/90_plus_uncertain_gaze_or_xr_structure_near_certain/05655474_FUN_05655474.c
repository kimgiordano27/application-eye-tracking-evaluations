/*
FUNCTION_NAME: FUN_05655474
ENTRY_POINT: 05655474
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 144
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_2;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05655474(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_067c9070;
  if ((DAT_06bc0089 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9070);
    FUN_02f08768(Method_Oculus_Platform_Models_DeserializableList<UserCapability>__ctor__);
    FUN_02f08768(PTR_DAT_067d7df8);
    FUN_02f08768(PTR_DAT_067d99c8);
    FUN_02f08768(Method_Unity_XR_CoreUtils_Datums_Datum<Vector4AffordanceTheme>__ctor__);
    FUN_02f08768(System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo);
    FUN_02f08768(
                Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsLighting>__ctor__
                );
    FUN_02f08768(PTR_DAT_067cde50);
    FUN_02f08768(PTR_DAT_067db8b8);
    FUN_02f08768(
                Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsLighting>_get_data__
                );
    FUN_02f08768(PTR_DAT_067cb1e0);
    FUN_02f08768(
                Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsMaterial>__ctor__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsMaterial>_get_data__
                );
    FUN_02f08768(Newtonsoft_Json_Utilities_FSharpUtils_var);
    FUN_02f08768(
                Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsRendering>__ctor__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsRendering>_get_data__
                );
    FUN_02f08768(PTR_DAT_067db078);
    FUN_02f08768(PTR_DAT_067d9410);
    FUN_02f08768(System_Collections_Hashtable_SyncHashtable_TypeInfo);
    FUN_02f08768(PTR_DAT_067cde60);
    FUN_02f08768(
                Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsVolume>__ctor__
                );
    FUN_02f08768(PTR_DAT_067ca898);
    FUN_02f08768(System_Collections_Generic_List<WeakReference<VisualElement>>_TypeInfo);
    FUN_02f08768(System_Collections_Hashtable_ValueCollection_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
    FUN_02f08768(PTR_DAT_067d5ea0);
    DAT_06bc0089 = 1;
  }
  lVar3 = FUN_02f0880c(*(undefined8 *)puVar2,0x1a);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (((((((((uVar1 != 0) &&
              (*(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_067d99c8, uVar1 != 1)) &&
             (*(undefined8 *)(lVar3 + 0x28) =
                   *(undefined8 *)Newtonsoft_Json_Utilities_FSharpUtils_var, 2 < uVar1)) &&
            ((*(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_067db078, uVar1 != 3 &&
             (*(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)PTR_DAT_067ca898, 4 < uVar1)))) &&
           (*(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_067cb1e0, uVar1 != 5)) &&
          (((*(undefined8 *)(lVar3 + 0x48) =
                  *(undefined8 *)
                   Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsLighting>_get_data__
            , 6 < uVar1 &&
            (*(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)PTR_DAT_067db8b8, uVar1 != 7)) &&
           ((*(undefined8 *)(lVar3 + 0x58) =
                  *(undefined8 *)
                   Method_Unity_XR_CoreUtils_Datums_Datum<Vector4AffordanceTheme>__ctor__, 8 < uVar1
            && (((*(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)PTR_DAT_067cde50, uVar1 != 9 &&
                 (*(undefined8 *)(lVar3 + 0x68) =
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsRendering>_get_data__
                 , 10 < uVar1)) &&
                (*(undefined8 *)(lVar3 + 0x70) =
                      *(undefined8 *)
                       Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsMaterial>__ctor__
                , uVar1 != 0xb)))))))) &&
         ((*(undefined8 *)(lVar3 + 0x78) =
                *(undefined8 *)
                 UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate_TypeInfo
          , 0xc < uVar1 &&
          (*(undefined8 *)(lVar3 + 0x80) =
                *(undefined8 *)
                 System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo,
          uVar1 != 0xd)))) &&
        (((*(undefined8 *)(lVar3 + 0x88) =
                *(undefined8 *)
                 Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsRendering>__ctor__
          , 0xe < uVar1 &&
          (((*(undefined8 *)(lVar3 + 0x90) =
                  *(undefined8 *)
                   System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo,
            uVar1 != 0xf &&
            (*(undefined8 *)(lVar3 + 0x98) =
                  *(undefined8 *)
                   Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsLighting>__ctor__
            , 0x10 < uVar1)) &&
           ((*(undefined8 *)(lVar3 + 0xa0) =
                  *(undefined8 *)
                   Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsMaterial>_get_data__
            , uVar1 != 0x11 &&
            (((*(undefined8 *)(lVar3 + 0xa8) =
                    *(undefined8 *)
                     System_Collections_Generic_List<WeakReference<VisualElement>>_TypeInfo,
              0x12 < uVar1 &&
              (*(undefined8 *)(lVar3 + 0xb0) = *(undefined8 *)PTR_DAT_067d5ea0, uVar1 != 0x13)) &&
             (*(undefined8 *)(lVar3 + 0xb8) = *(undefined8 *)PTR_DAT_067d9410, 0x14 < uVar1))))))))
         && (((*(undefined8 *)(lVar3 + 0xc0) =
                    *(undefined8 *)System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo
              , uVar1 != 0x15 &&
              (*(undefined8 *)(lVar3 + 200) =
                    *(undefined8 *)
                     Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsVolume>__ctor__
              , 0x16 < uVar1)) &&
             (*(undefined8 *)(lVar3 + 0xd0) =
                   *(undefined8 *)System_Collections_Hashtable_ValueCollection_TypeInfo,
             uVar1 != 0x17)))))) &&
       ((*(undefined8 *)(lVar3 + 0xd8) = *(undefined8 *)PTR_DAT_067d7df8, 0x18 < uVar1 &&
        (*(undefined8 *)(lVar3 + 0xe0) =
              *(undefined8 *)System_Collections_Hashtable_SyncHashtable_TypeInfo,
        puVar2 = Method_Oculus_Platform_Models_DeserializableList<UserCapability>__ctor__,
        uVar1 != 0x19)))) {
      *(undefined8 *)(lVar3 + 0xe8) = *(undefined8 *)PTR_DAT_067cde60;
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar3;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


