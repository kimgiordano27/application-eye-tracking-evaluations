/*
FUNCTION_NAME: System.Xml.Schema.Compiler$$CompileParticleElements
ENTRY_POINT: 0565560c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Xml_Schema_Compiler__CompileParticleElements(long param_1)

{
  undefined *puVar1;
  bool in_ZR;
  uint in_w8;
  undefined8 *in_x9;
  
  *(undefined8 *)(param_1 + 0x20) = *in_x9;
  if (!in_ZR) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)Newtonsoft_Json_Utilities_FSharpUtils_var;
                    /* try { // try from 0565573c to 05755743 has its CatchHandler @ 05655adc */
                    /* try { // try from 05655774 to 0575577f has its CatchHandler @ 05655ad4 */
    if ((((((2 < in_w8) &&
           (*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)PTR_DAT_067db078, in_w8 != 3)) &&
          (*(undefined8 *)(param_1 + 0x38) = *(undefined8 *)PTR_DAT_067ca898, 4 < in_w8)) &&
         (((*(undefined8 *)(param_1 + 0x40) = *(undefined8 *)PTR_DAT_067cb1e0, in_w8 != 5 &&
           (*(undefined8 *)(param_1 + 0x48) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsLighting>_get_data__
           , 6 < in_w8)) &&
          ((*(undefined8 *)(param_1 + 0x50) = *(undefined8 *)PTR_DAT_067db8b8, in_w8 != 7 &&
           ((*(undefined8 *)(param_1 + 0x58) =
                  *(undefined8 *)
                   Method_Unity_XR_CoreUtils_Datums_Datum<Vector4AffordanceTheme>__ctor__, 8 < in_w8
            && (*(undefined8 *)(param_1 + 0x60) = *(undefined8 *)PTR_DAT_067cde50, in_w8 != 9)))))))
         ) && (((*(undefined8 *)(param_1 + 0x68) =
                      *(undefined8 *)
                       Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsRendering>_get_data__
                , 10 < in_w8 &&
                ((((((*(undefined8 *)(param_1 + 0x70) =
                           *(undefined8 *)
                            Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsMaterial>__ctor__
                     , in_w8 != 0xb &&
                     (*(undefined8 *)(param_1 + 0x78) =
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate_TypeInfo
                     , 0xc < in_w8)) &&
                    (*(undefined8 *)(param_1 + 0x80) =
                          *(undefined8 *)
                           System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo,
                    in_w8 != 0xd)) &&
                   ((*(undefined8 *)(param_1 + 0x88) =
                          *(undefined8 *)
                           Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsRendering>__ctor__
                    , 0xe < in_w8 &&
                    (*(undefined8 *)(param_1 + 0x90) =
                          *(undefined8 *)
                           System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                    , in_w8 != 0xf)))) &&
                  ((*(undefined8 *)(param_1 + 0x98) =
                         *(undefined8 *)
                          Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsLighting>__ctor__
                   , 0x10 < in_w8 &&
                   ((*(undefined8 *)(param_1 + 0xa0) =
                          *(undefined8 *)
                           Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsMaterial>_get_data__
                    , in_w8 != 0x11 &&
                    (*(undefined8 *)(param_1 + 0xa8) =
                          *(undefined8 *)
                           System_Collections_Generic_List<WeakReference<VisualElement>>_TypeInfo,
                    0x12 < in_w8)))))) &&
                 (*(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)PTR_DAT_067d5ea0, in_w8 != 0x13))
                )) && (((*(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)PTR_DAT_067d9410,
                        0x14 < in_w8 &&
                        (*(undefined8 *)(param_1 + 0xc0) =
                              *(undefined8 *)
                               System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo,
                        in_w8 != 0x15)) &&
                       (*(undefined8 *)(param_1 + 200) =
                             *(undefined8 *)
                              Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsVolume>__ctor__
                       , 0x16 < in_w8)))))) &&
       (((*(undefined8 *)(param_1 + 0xd0) =
               *(undefined8 *)System_Collections_Hashtable_ValueCollection_TypeInfo, in_w8 != 0x17
         && (*(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)PTR_DAT_067d7df8, 0x18 < in_w8)) &&
        (*(undefined8 *)(param_1 + 0xe0) =
              *(undefined8 *)System_Collections_Hashtable_SyncHashtable_TypeInfo,
        puVar1 = Method_Oculus_Platform_Models_DeserializableList<UserCapability>__ctor__,
        in_w8 != 0x19)))) {
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)PTR_DAT_067cde60;
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = param_1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


