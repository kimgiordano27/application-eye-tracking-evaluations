/*
FUNCTION_NAME: FUN_0240a650
ENTRY_POINT: 0240a650
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0240a650(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = UnityEngine_Timeline_RuntimeClip_TypeInfo;
  if ((DAT_037822a5 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_KeyValuePair<PropertyName,_object>__ctor__)
    ;
    thunk_FUN_00d48444(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromListT<Material>__);
    thunk_FUN_00d48444(StringLiteral_8958);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_GetRegisteredInteractionGroups__
                      );
    thunk_FUN_00d48444(
                      Method_GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_GetValueFromEither__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<BaseInputModule>_RemoveAt__);
    thunk_FUN_00d48444(Method_CatchPhrasePuzzle_WordPlaced__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<CharacterZone>_Dispose__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_13711);
    thunk_FUN_00d48444(StringLiteral_3716);
    thunk_FUN_00d48444(Method_Meta_WitAi_Data_RingBuffer<byte>_CreateMarker__);
    thunk_FUN_00d48444(Method_System_Runtime_InteropServices_Marshal_SizeOf<OVRPlugin_Mesh>__);
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                      );
    thunk_FUN_00d48444(UnityEngine_Timeline_RuntimeClip_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f1a08);
    DAT_037822a5 = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_GetRegisteredInteractionGroups__;
  if (lVar4 != 0) {
    FUN_017b46ec(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = param_1;
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar3 = StringLiteral_8958;
    puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    puVar2 = Method_System_Collections_Generic_List_Enumerator<CharacterZone>_Dispose__;
    if (lVar5 != 0) {
      FUN_023ac08c(lVar5,0);
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar2;
      }
      puVar2 = Method_CatchPhrasePuzzle_WordPlaced__;
      FUN_023aa448(lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x30),
                   *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x38),0);
      uVar7 = *(undefined8 *)puVar3;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = FUN_01780344(uVar7,0);
      FUN_023abd60(lVar5,uVar7,0);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar1 = PTR_DAT_033f1a08;
      if (lVar6 != 0) {
        FUN_012d1810(lVar6,lVar4,
                     *(undefined8 *)Method_Meta_WitAi_Data_RingBuffer<byte>_CreateMarker__,0);
        *(long *)(lVar5 + 0x48) = lVar6;
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar1;
        }
        puVar3 = Method_System_Collections_Generic_KeyValuePair<PropertyName,_object>__ctor__;
        lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
        if (lVar8 == 0) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar6 = *(long *)puVar1;
          }
          uVar7 = **(undefined8 **)(lVar6 + 0xb8);
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          if (lVar8 == 0) goto UnityEngine_Timeline_TrackAsset__Hash;
          FUN_011c181c(lVar8,uVar7,*(undefined8 *)StringLiteral_13711,0);
          *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = lVar8;
        }
        *(long *)(lVar5 + 0x50) = lVar8;
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar6 != 0) {
          FUN_012d1810(lVar6,lVar4,
                       *(undefined8 *)
                        Method_System_Runtime_InteropServices_Marshal_SizeOf<OVRPlugin_Mesh>__,0);
          *(long *)(lVar5 + 0x80) = lVar6;
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          if (lVar6 != 0) {
            FUN_011c181c(lVar6,lVar4,
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                         ,0);
            *(long *)(lVar5 + 0x88) = lVar6;
            lVar4 = *(long *)puVar1;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar4 = *(long *)puVar1;
            }
            puVar2 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromListT<Material>__;
            lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
            if (lVar6 == 0) {
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar4 = *(long *)puVar1;
              }
              uVar7 = **(undefined8 **)(lVar4 + 0xb8);
              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              if (lVar6 == 0) goto UnityEngine_Timeline_TrackAsset__Hash;
              FUN_011c21b8(lVar6,uVar7,*(undefined8 *)StringLiteral_3716,0);
              *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = lVar6;
            }
            *(long *)(lVar5 + 0x58) = lVar6;
            return lVar5;
          }
        }
      }
    }
  }
UnityEngine_Timeline_TrackAsset__Hash:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


