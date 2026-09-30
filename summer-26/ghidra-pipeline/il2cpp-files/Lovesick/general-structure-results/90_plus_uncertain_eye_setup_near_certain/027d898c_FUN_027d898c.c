/*
FUNCTION_NAME: FUN_027d898c
ENTRY_POINT: 027d898c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_027d898c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__;
  if ((DAT_03788932 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(
                      Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Object>_Add__);
    thunk_FUN_00d48444(OVRPlugin_TextureRectMatrixf_TypeInfo);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_4956);
    thunk_FUN_00d48444(PTR_DAT_033f5f80);
    thunk_FUN_00d48444(System_Runtime_InteropServices_Marshal_<>c_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_short>_Remove__);
    thunk_FUN_00d48444(PTR_DAT_033f4da8);
    thunk_FUN_00d48444(Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetExtensionDataMemberForType>b__44_0__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<EventCallbackList>_get_Count__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<SkinnedMeshRenderer>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<BaseInputModule>__ctor__);
    DAT_03788932 = 1;
  }
  puVar3 = Method_System_Collections_Generic_Dictionary<int,_short>_Remove__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = PTR_DAT_033f4da8;
  FUN_0274e248(param_3,0);
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *(long *)puVar3;
  }
  FUN_0275089c(param_3,**(undefined8 **)(lVar5 + 0xb8),0);
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar4 = 
  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetExtensionDataMemberForType>b__44_0__
  ;
  puVar2 = Method_System_Collections_Generic_Stack<EventCallbackList>_get_Count__;
  puVar1 = Method_System_Collections_Generic_List<Object>_Add__;
  if (lVar5 != 0) {
    FUN_027cbe08(param_1,param_2,0x41a00000,lVar5,param_5,0);
    FUN_0274de78(lVar5,*(undefined8 *)puVar2,0);
    UnityEngine_UIElements_UIR_TextureSlotManager__set_FreeSlots(lVar5,*(undefined8 *)puVar4,0);
    *(long *)(param_3 + 0x3b8) = lVar5;
    FUN_0275089c(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18),0);
    uVar7 = *(undefined8 *)(param_3 + 0x3b8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = OVRPlugin_TextureRectMatrixf_TypeInfo;
    if (lVar5 != 0) {
      FUN_012c5834(lVar5,param_3,*(undefined8 *)StringLiteral_4956,0);
      FUN_010ec668(uVar7,lVar5,*(undefined8 *)puVar1);
      puVar1 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
      if (*(long *)(param_3 + 0x3b8) != 0) {
        FUN_0124598c(*(long *)(param_3 + 0x3b8),param_5 == 1,
                     *(undefined8 *)
                      Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                    );
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar2 = 
        System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TypeInfo
        ;
        if (lVar5 != 0) {
          FUN_016f27fc(lVar5,param_3,
                       *(undefined8 *)System_Runtime_InteropServices_Marshal_<>c_TypeInfo,0);
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          puVar4 = Method_System_Collections_Generic_List<BaseInputModule>__ctor__;
          if (lVar6 != 0) {
            FUN_027d5030();
            FUN_027d5104(lVar6,lVar5,0xfa,0x1e);
            FUN_0274de78(lVar6,*(undefined8 *)puVar4,0);
            *(long *)(param_3 + 0x3c0) = lVar6;
            FUN_0275089c(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20),0);
                    /* try { // try from 027d8c50 to 028d8d17 has its CatchHandler @ 027d8c50
                       catch() { ... } // from try @ 027d8c50 with catch @ 027d8c50
                       catch() { ... } // from try @ 027d8d7c with catch @ 027d8c50
                       catch() { ... } // from try @ 027d8dbc with catch @ 027d8c50
                       catch() { ... } // from try @ 027d8dec with catch @ 027d8c50
                       catch() { ... } // from try @ 027d8e1c with catch @ 027d8c50 */
            FUN_02751e94(param_3,*(undefined8 *)(param_3 + 0x3c0),0);
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar5 != 0) {
              FUN_016f27fc(lVar5,param_3,*(undefined8 *)PTR_DAT_033f5f80,0);
              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              puVar1 = Method_UnityEngine_Component_GetComponent<SkinnedMeshRenderer>__;
              if (lVar6 != 0) {
                FUN_027d5030();
                FUN_027d5104(lVar6,lVar5,0xfa,0x1e);
                FUN_0274de78(lVar6,*(undefined8 *)puVar1,0);
                *(long *)(param_3 + 0x3c8) = lVar6;
                FUN_0275089c(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28),0);
                FUN_02751e94(param_3,*(undefined8 *)(param_3 + 0x3c8),0);
                FUN_02751e94(param_3,*(undefined8 *)(param_3 + 0x3b8),0);
                FUN_027d875c(param_3,param_5);
                *(undefined8 *)(param_3 + 0x3b0) = param_4;
                    /* try { // try from 027d8d18 to 028d8d1f has its CatchHandler @ 027d8dc8 */
                    /* try { // try from 027d8d28 to 028d8d2f has its CatchHandler @ 027d8dc4 */
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


