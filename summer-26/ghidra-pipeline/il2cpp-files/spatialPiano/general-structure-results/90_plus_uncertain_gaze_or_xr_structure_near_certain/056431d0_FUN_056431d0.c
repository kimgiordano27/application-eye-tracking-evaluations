/*
FUNCTION_NAME: FUN_056431d0
ENTRY_POINT: 056431d0
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


void FUN_056431d0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_067c9070;
  if ((DAT_06bbfffa & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9320);
    FUN_02f08768(Method_Unity_XR_CoreUtils_Datums_Datum<Vector2AffordanceTheme>__ctor__);
    FUN_02f08768(PTR_DAT_067c9070);
    FUN_02f08768(Method_Unity_XR_CoreUtils_Datums_Datum<Vector3AffordanceTheme>__ctor__);
    FUN_02f08768(PTR_DAT_067d7df8);
    FUN_02f08768(PTR_DAT_067d99c8);
    FUN_02f08768(Method_Unity_XR_CoreUtils_Datums_Datum<Vector4AffordanceTheme>__ctor__);
    FUN_02f08768(System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo);
    FUN_02f08768(
                Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsLighting>__ctor__
                );
    FUN_02f08768(PTR_DAT_067cde50);
                    /* try { // try from 05643264 to 0574328b has its CatchHandler @ 05643458 */
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
                    /* try { // try from 056432c8 to 057432ef has its CatchHandler @ 05643454 */
    FUN_02f08768(PTR_DAT_067db078);
    FUN_02f08768(PTR_DAT_067d9410);
    FUN_02f08768(System_Collections_Hashtable_SyncHashtable_TypeInfo);
    FUN_02f08768(PTR_DAT_067cde60);
                    /* try { // try from 056432fc to 05743303 has its CatchHandler @ 05643448 */
    FUN_02f08768(
                Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsVolume>__ctor__
                );
    FUN_02f08768(PTR_DAT_067ca898);
                    /* try { // try from 0564330c to 05743317 has its CatchHandler @ 05643444 */
    FUN_02f08768(System_Collections_Generic_List<WeakReference<VisualElement>>_TypeInfo);
                    /* try { // try from 05643320 to 0574332b has its CatchHandler @ 05643440 */
    FUN_02f08768(System_Collections_Hashtable_ValueCollection_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
                    /* try { // try from 0564333c to 05743347 has its CatchHandler @ 0564343c */
    FUN_02f08768(System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
                    /* try { // try from 05643348 to 05743427 has its CatchHandler @ 056430b0 */
    FUN_02f08768(PTR_DAT_067cbf00);
    FUN_02f08768(PTR_DAT_067d5ea0);
    DAT_06bbfffa = 1;
  }
  lVar5 = FUN_02f0880c(*(undefined8 *)puVar2,0x1b);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
                    /* try { // try from 05643428 to 0574342b has its CatchHandler @ 05643450 */
                    /* try { // try from 0564342c to 0574342f has its CatchHandler @ 0564344c */
                    /* try { // try from 05643430 to 05743473 has its CatchHandler @ 056430b0 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0564333c with catch @ 0564343c
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05643320 with catch @ 05643440
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0564330c with catch @ 05643444
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 056432fc with catch @ 05643448
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0564342c with catch @ 0564344c
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05643428 with catch @ 05643450
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 056432c8 with catch @ 05643454
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05643264 with catch @ 05643458
                        */
                    /* try { // try from 05643474 to 05743477 has its CatchHandler @ 05643488 */
                    /* catch() { ... } // from try @ 05643474 with catch @ 05643488 */
                    /* try { // try from 0564348c to 05743493 has its CatchHandler @ 0564349c */
                    /* try { // try from 05643494 to 0574349f has its CatchHandler @ 056430b0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0564348c with catch @ 0564349c
                        */
    if (((((((uVar1 != 0) &&
            (*(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_067cbf00, uVar1 != 1)) &&
           (*(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_067d99c8, 2 < uVar1)) &&
          ((*(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)Newtonsoft_Json_Utilities_FSharpUtils_var
           , uVar1 != 3 &&
           (*(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)PTR_DAT_067db078, 4 < uVar1)))) &&
         (*(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_067ca898, uVar1 != 5)) &&
        (((((*(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)PTR_DAT_067cb1e0, 6 < uVar1 &&
            (*(undefined8 *)(lVar5 + 0x50) =
                  *(undefined8 *)
                   Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsLighting>_get_data__
            , uVar1 != 7)) &&
           ((*(undefined8 *)(lVar5 + 0x58) = *(undefined8 *)PTR_DAT_067db8b8, 8 < uVar1 &&
            (((*(undefined8 *)(lVar5 + 0x60) =
                    *(undefined8 *)
                     Method_Unity_XR_CoreUtils_Datums_Datum<Vector4AffordanceTheme>__ctor__,
              uVar1 != 9 &&
              (*(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)PTR_DAT_067cde50, 10 < uVar1)) &&
             (*(undefined8 *)(lVar5 + 0x70) =
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsRendering>_get_data__
             , uVar1 != 0xb)))))) &&
          (((*(undefined8 *)(lVar5 + 0x78) =
                  *(undefined8 *)
                   Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsMaterial>__ctor__
            , 0xc < uVar1 &&
            (*(undefined8 *)(lVar5 + 0x80) =
                  *(undefined8 *)
                   UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate_TypeInfo
            , uVar1 != 0xd)) &&
           ((*(undefined8 *)(lVar5 + 0x88) =
                  *(undefined8 *)
                   System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo,
            0xe < uVar1 &&
            ((((*(undefined8 *)(lVar5 + 0x90) =
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsRendering>__ctor__
               , uVar1 != 0xf &&
               (*(undefined8 *)(lVar5 + 0x98) =
                     *(undefined8 *)
                      System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
               , 0x10 < uVar1)) &&
              ((*(undefined8 *)(lVar5 + 0xa0) =
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsLighting>__ctor__
               , uVar1 != 0x11 &&
               (((*(undefined8 *)(lVar5 + 0xa8) =
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsMaterial>_get_data__
                 , 0x12 < uVar1 &&
                 (*(undefined8 *)(lVar5 + 0xb0) =
                       *(undefined8 *)
                        System_Collections_Generic_List<WeakReference<VisualElement>>_TypeInfo,
                 uVar1 != 0x13)) &&
                (*(undefined8 *)(lVar5 + 0xb8) = *(undefined8 *)PTR_DAT_067d5ea0, 0x14 < uVar1))))))
             && ((*(undefined8 *)(lVar5 + 0xc0) = *(undefined8 *)PTR_DAT_067d9410, uVar1 != 0x15 &&
                 (*(undefined8 *)(lVar5 + 200) =
                       *(undefined8 *)
                        System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo,
                 0x16 < uVar1)))))))))) &&
         (*(undefined8 *)(lVar5 + 0xd0) =
               *(undefined8 *)
                Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsVolume>__ctor__
         , uVar1 != 0x17)))) &&
       (((*(undefined8 *)(lVar5 + 0xd8) =
               *(undefined8 *)System_Collections_Hashtable_ValueCollection_TypeInfo, 0x18 < uVar1 &&
         (*(undefined8 *)(lVar5 + 0xe0) = *(undefined8 *)PTR_DAT_067d7df8, uVar1 != 0x19)) &&
        (*(undefined8 *)(lVar5 + 0xe8) =
              *(undefined8 *)System_Collections_Hashtable_SyncHashtable_TypeInfo,
        puVar2 = Method_Unity_XR_CoreUtils_Datums_Datum<Vector2AffordanceTheme>__ctor__,
        0x1a < uVar1)))) {
      *(undefined8 *)(lVar5 + 0xf0) = *(undefined8 *)PTR_DAT_067cde60;
      puVar3 = PTR_DAT_067c9320;
      **(long **)(*(long *)puVar2 + 0xb8) = lVar5;
      puVar4 = Method_Unity_XR_CoreUtils_Datums_Datum<Vector3AffordanceTheme>__ctor__;
      uVar6 = FUN_02f0880c(*(undefined8 *)puVar3,0x1a);
      FUN_05009b54(uVar6,*(undefined8 *)puVar4,0);
      *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar6;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


