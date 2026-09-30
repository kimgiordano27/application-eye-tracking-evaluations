/*
FUNCTION_NAME: FUN_01ebcfe0
ENTRY_POINT: 01ebcfe0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_01ebcfe0(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
                    /* try { // try from 01ebcfec to 01fbcff7 has its CatchHandler @ 01ebcc68 */
                    /* try { // try from 01ebcff8 to 01fbcfff has its CatchHandler @ 01ebd008 */
  if ((DAT_0377ff3b & 1) == 0) {
                    /* catch() { ... } // from try @ 01ebcf6c with catch @ 01ebd000 */
    thunk_FUN_00d48444(StringLiteral_13702);
                    /* catch() { ... } // from try @ 01ebcf84 with catch @ 01ebd008
                       catch() { ... } // from try @ 01ebcff8 with catch @ 01ebd008 */
    thunk_FUN_00d48444(OVR_OpenVR_EColorSpace_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ee2b0);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_get_Item__
                      );
    thunk_FUN_00d48444(Method_System_Data_DataTable_set_RemotingFormat__);
    thunk_FUN_00d48444(System_Data_DataSet_var);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_FirstOrDefault<MeshFilter>__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInChildren<TuneTarget>__);
    thunk_FUN_00d48444(Method_SaveLoaderInterface_SaveSelected__);
    thunk_FUN_00d48444(Method_MS_Internal_Xml_XPath_XPathScanner__ctor__);
    thunk_FUN_00d48444(StringLiteral_4945);
    thunk_FUN_00d48444(System_Xml_XmlAsyncCheckReaderWithLineInfo_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6145);
    thunk_FUN_00d48444(PTR_DAT_033ef1c8);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_Remove__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Playables_PlayableExtensions_GetInput<Playable>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<EventCallbackFunctorBase>_get_Count__)
    ;
    thunk_FUN_00d48444(StringLiteral_1504);
    thunk_FUN_00d48444(StringLiteral_4078);
    thunk_FUN_00d48444(StringLiteral_3200);
    thunk_FUN_00d48444(StringLiteral_12739);
    thunk_FUN_00d48444(StringLiteral_3302);
    thunk_FUN_00d48444(StringLiteral_9062);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalLightData>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Component_TryGetComponent<MRUKTrackable>__);
    thunk_FUN_00d48444(Method_System_Collections_ObjectModel_Collection<JToken>_get_Item__);
    thunk_FUN_00d48444(PTR_DAT_033eb460);
    thunk_FUN_00d48444(PTR_DAT_033f01a8);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputSystem_GetNameOfBaseLayout__);
    thunk_FUN_00d48444(System_Collections_Generic_List<BillingPlan>_TypeInfo);
    thunk_FUN_00d48444(Method_TutorialUIPopup_HideFinished__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<long,_Material>__ctor__);
    thunk_FUN_00d48444(StringLiteral_7428);
    thunk_FUN_00d48444(StringLiteral_11802);
    thunk_FUN_00d48444(StringLiteral_4024);
    thunk_FUN_00d48444(System_DateTimeParse_DS_____TypeInfo);
    thunk_FUN_00d48444(
                      Method_BarCrowd_<ResetLineCoroutine>d__10_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_LinkedPool<VectorImageRenderInfo>_Clear__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_ProperBitConverter_GetBytes__);
    thunk_FUN_00d48444(PTR_DAT_033ebe40);
    thunk_FUN_00d48444(OVRPlugin_Size3f_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleValueExtensions_CopyFrom<EasingFunction>__
                      );
    thunk_FUN_00d48444(FlickerLightsOnStageSwitch_<FlickerScene>d__3_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CharacterPoses_PoseList>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__);
    DAT_0377ff3b = 1;
  }
  switch(param_2) {
  case 0:
    puVar2 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_Remove__
    ;
    break;
  case 1:
    puVar2 = (undefined8 *)PTR_DAT_033eb460;
    break;
  default:
    local_38 = *(undefined8 *)StringLiteral_13702;
    uStack_30 = 0xffffffffffffffff;
    local_28 = param_2;
    uVar1 = FUN_017a7f78(&local_38,0);
    return uVar1;
  case 10:
    puVar2 = (undefined8 *)StringLiteral_7428;
    break;
  case 0xc:
    puVar2 = (undefined8 *)
             Method_BarCrowd_<ResetLineCoroutine>d__10_System_Collections_IEnumerator_Reset__;
    break;
  case 0xd:
    puVar2 = (undefined8 *)Method_System_Collections_ObjectModel_Collection<JToken>_get_Item__;
    break;
  case 0xe:
    puVar2 = (undefined8 *)StringLiteral_1504;
    break;
  case 0xf:
    puVar2 = (undefined8 *)PTR_DAT_033f01a8;
    break;
  case 0x10:
    puVar2 = (undefined8 *)Method_System_Collections_Generic_List<CharacterPoses_PoseList>__ctor__;
    break;
  case 0x11:
    puVar2 = (undefined8 *)StringLiteral_3200;
    break;
  case 0x12:
    puVar2 = (undefined8 *)StringLiteral_4945;
    break;
  case 0x13:
    puVar2 = (undefined8 *)StringLiteral_12739;
    break;
  case 0x14:
    puVar2 = (undefined8 *)Method_SaveLoaderInterface_SaveSelected__;
    break;
  case 0x15:
    puVar2 = (undefined8 *)Method_Sirenix_Serialization_ProperBitConverter_GetBytes__;
    break;
  case 0x16:
    puVar2 = (undefined8 *)PTR_DAT_033ee2b0;
    break;
  case 0x17:
    puVar2 = (undefined8 *)StringLiteral_3302;
    break;
  case 0x18:
    puVar2 = (undefined8 *)System_Data_DataSet_var;
    break;
  case 0x19:
    puVar2 = (undefined8 *)System_Xml_XmlAsyncCheckReaderWithLineInfo_TypeInfo;
    break;
  case 0x1a:
    puVar2 = (undefined8 *)
             Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_get_Item__
    ;
    break;
  case 0x1b:
    puVar2 = (undefined8 *)System_DateTimeParse_DS_____TypeInfo;
    break;
  case 0x1c:
    puVar2 = (undefined8 *)
             Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalLightData>__;
    break;
  case 0x1d:
    puVar2 = (undefined8 *)System_Collections_Generic_List<BillingPlan>_TypeInfo;
    break;
  case 0x1e:
    puVar2 = (undefined8 *)Method_UnityEngine_Playables_PlayableExtensions_GetInput<Playable>__;
    break;
  case 0x1f:
    puVar2 = (undefined8 *)Method_UnityEngine_Component_GetComponentInChildren<TuneTarget>__;
    break;
  case 0x20:
    puVar2 = (undefined8 *)PTR_DAT_033ebe40;
    break;
  case 0x21:
    puVar2 = (undefined8 *)Method_System_Data_DataTable_set_RemotingFormat__;
    break;
  case 0x22:
    puVar2 = (undefined8 *)Method_UnityEngine_Component_TryGetComponent<MRUKTrackable>__;
    break;
  case 0x23:
    puVar2 = (undefined8 *)StringLiteral_4078;
    break;
  case 0x24:
    puVar2 = (undefined8 *)StringLiteral_6145;
    break;
  case 0x25:
    puVar2 = (undefined8 *)
             Method_UnityEngine_UIElements_UIR_LinkedPool<VectorImageRenderInfo>_Clear__;
    break;
  case 0x26:
    puVar2 = (undefined8 *)Method_System_Linq_Enumerable_FirstOrDefault<MeshFilter>__;
    break;
  case 0x27:
    puVar2 = (undefined8 *)OVRPlugin_Size3f_TypeInfo;
    break;
  case 0x28:
    puVar2 = (undefined8 *)
             Method_UnityEngine_UIElements_StyleValueExtensions_CopyFrom<EasingFunction>__;
    break;
  case 0x29:
    puVar2 = (undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_lowValue__;
    break;
  case 0x2a:
    puVar2 = (undefined8 *)StringLiteral_4024;
    break;
  case 0x2b:
    puVar2 = (undefined8 *)Method_System_Collections_Generic_Dictionary<long,_Material>__ctor__;
    break;
  case 0x2c:
    puVar2 = (undefined8 *)PTR_DAT_033ef1c8;
    break;
  case 0x2d:
    puVar2 = (undefined8 *)StringLiteral_9062;
    break;
  case 0x2e:
    puVar2 = (undefined8 *)OVR_OpenVR_EColorSpace_TypeInfo;
    break;
  case 0x2f:
    puVar2 = (undefined8 *)
             Method_System_Collections_Generic_List<EventCallbackFunctorBase>_get_Count__;
    break;
  case 0x30:
    puVar2 = (undefined8 *)Method_MS_Internal_Xml_XPath_XPathScanner__ctor__;
    break;
  case 0x31:
    puVar2 = (undefined8 *)Method_TutorialUIPopup_HideFinished__;
    break;
  case 0x32:
    puVar2 = (undefined8 *)StringLiteral_11802;
    break;
  case 0x33:
    puVar2 = (undefined8 *)Method_UnityEngine_InputSystem_InputSystem_GetNameOfBaseLayout__;
    break;
  case 0x34:
    puVar2 = (undefined8 *)FlickerLightsOnStageSwitch_<FlickerScene>d__3_TypeInfo;
  }
  return *puVar2;
}


