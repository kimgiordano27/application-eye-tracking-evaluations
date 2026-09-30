/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers.OVRAnchorConverter$$ReadJson
ENTRY_POINT: 014a1260
PROGRAM: Lovesick-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SerializationHelpers_OVRAnchorConverter__ReadJson(void)

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
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  puVar12 = *(undefined8 **)(unaff_x20 + 0x530);
  if ((*(byte *)(unaff_x19 + 0xca8) & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RendererList>_Add__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<byte>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>__ctor__
                      );
    thunk_FUN_00d48444(UnityEngine_AndroidJavaProxy_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_SphericalHarmonicsL2_get_Item__);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<object,_object>_TypeInfo);
    thunk_FUN_00d48444(LoadUtility_EventType_TypeInfo);
    thunk_FUN_00d48444(System_Nullable<char>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Clear__
                      );
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Security_Principal_WindowsImpersonationContext_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_GroupCollection__ctor__);
    thunk_FUN_00d48444(Method_Meta_Voice_Audio_Decoding_AudioDecoderMp3Frame_GetMpegVersion__);
    thunk_FUN_00d48444(StringLiteral_8716);
    thunk_FUN_00d48444(PTR_DAT_033ecc10);
    thunk_FUN_00d48444(Method_System_IO_StreamReader_ReadSpan__);
    thunk_FUN_00d48444(PTR_DAT_033ee9a0);
    thunk_FUN_00d48444(StringLiteral_6344);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetCachedAttribute<JsonContainerAttribute>__
                      );
    thunk_FUN_00d48444(StringLiteral_10386);
    thunk_FUN_00d48444(RCG_Localization_ILocalizationData_TypeInfo);
    *(undefined1 *)(unaff_x19 + 0xca8) = 1;
  }
  lVar10 = thunk_FUN_00d62348(*puVar12);
  puVar3 = System_Nullable<char>_TypeInfo;
  if (lVar10 != 0) {
    FUN_01298da0(lVar10,*(undefined8 *)UnityEngine_AndroidJavaProxy_TypeInfo);
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar8 = StringLiteral_5228;
    puVar9 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
    puVar7 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
    puVar6 = Method_System_IO_StreamReader_ReadSpan__;
    puVar5 = Method_System_Data_DataSet_ReadXmlDiffgram__;
    puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    puVar2 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
    puVar4 = System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
    puVar3 = System_Collections_Generic_Dictionary<object,_object>_TypeInfo;
    if (lVar11 != 0) {
      FUN_01320e50(lVar11,*(undefined8 *)LoadUtility_EventType_TypeInfo);
      uVar13 = *(undefined8 *)puVar7;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_01780344(uVar13,0);
      FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
      uVar13 = FUN_01780344(*(undefined8 *)puVar8,0);
      FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
      uVar13 = FUN_01780344(*(undefined8 *)puVar5,0);
      FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
      uVar13 = FUN_01780344(*(undefined8 *)puVar4,0);
      FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
      uVar13 = FUN_01780344(*(undefined8 *)puVar9,0);
      FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
      uVar13 = FUN_01780344(*(undefined8 *)puVar2,0);
      FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
      FUN_0129a054(lVar10,*(undefined8 *)puVar6,lVar11,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>__ctor__
                  );
      puVar5 = System_Nullable<char>_TypeInfo;
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)System_Nullable<char>_TypeInfo);
      puVar6 = LoadUtility_EventType_TypeInfo;
      puVar1 = PTR_DAT_033ecc10;
      if (lVar11 != 0) {
        FUN_01320e50(lVar11,*(undefined8 *)LoadUtility_EventType_TypeInfo);
        uVar13 = FUN_01780344(*(undefined8 *)puVar2,0);
        FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
        uVar13 = FUN_01780344(*(undefined8 *)puVar4,0);
        FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
        uVar13 = FUN_01780344(*(undefined8 *)puVar9,0);
        FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
        puVar8 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
        uVar13 = FUN_01780344(*(undefined8 *)
                               Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                              ,0);
        FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
        puVar7 = Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>__ctor__
        ;
        FUN_0129a054(lVar10,*(undefined8 *)puVar1,lVar11,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>__ctor__
                    );
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        puVar1 = StringLiteral_10386;
        puVar2 = Method_System_Collections_Generic_List<RendererList>_Add__;
        if (lVar11 != 0) {
          FUN_01320e50(lVar11,*(undefined8 *)puVar6);
          uVar13 = FUN_01780344(*(undefined8 *)puVar2,0);
          FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
          FUN_0129a054(lVar10,*(undefined8 *)puVar1,lVar11,*(undefined8 *)puVar7);
          lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
          puVar2 = RCG_Localization_ILocalizationData_TypeInfo;
          if (lVar11 != 0) {
            FUN_01320e50(lVar11,*(undefined8 *)puVar6);
            puVar1 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
            uVar13 = FUN_01780344(*(undefined8 *)
                                   Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
            FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
            uVar13 = FUN_01780344(*(undefined8 *)puVar4,0);
            FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
            uVar13 = FUN_01780344(*(undefined8 *)puVar9,0);
            FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
            uVar13 = FUN_01780344(*(undefined8 *)puVar8,0);
            FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
            FUN_0129a054(lVar10,*(undefined8 *)puVar2,lVar11,*(undefined8 *)puVar7);
            lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
            puVar6 = StringLiteral_6344;
            puVar2 = System_Security_Principal_WindowsImpersonationContext_TypeInfo;
            if (lVar11 != 0) {
              FUN_01320e50(lVar11,*(undefined8 *)LoadUtility_EventType_TypeInfo);
              uVar13 = FUN_01780344(*(undefined8 *)puVar2,0);
              FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
              uVar13 = FUN_01780344(*(undefined8 *)puVar4,0);
              FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
              uVar13 = FUN_01780344(*(undefined8 *)puVar9,0);
              FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
              uVar13 = FUN_01780344(*(undefined8 *)puVar8,0);
              FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
              uVar13 = FUN_01780344(*(undefined8 *)puVar1,0);
              FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
              FUN_0129a054(lVar10,*(undefined8 *)puVar6,lVar11,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>__ctor__
                          );
              lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
              puVar6 = StringLiteral_5228;
              puVar2 = PTR_DAT_033ee9a0;
              if (lVar11 != 0) {
                FUN_01320e50(lVar11,*(undefined8 *)LoadUtility_EventType_TypeInfo);
                uVar13 = FUN_01780344(*(undefined8 *)puVar8,0);
                FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                puVar7 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                uVar13 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0)
                ;
                FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                uVar13 = FUN_01780344(*(undefined8 *)puVar6,0);
                FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                uVar13 = FUN_01780344(*(undefined8 *)puVar4,0);
                FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                uVar13 = FUN_01780344(*(undefined8 *)puVar9,0);
                FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                uVar13 = FUN_01780344(*(undefined8 *)puVar1,0);
                FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                FUN_0129a054(lVar10,*(undefined8 *)puVar2,lVar11,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>__ctor__
                            );
                lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                puVar2 = 
                Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetCachedAttribute<JsonContainerAttribute>__
                ;
                if (lVar11 != 0) {
                  FUN_01320e50(lVar11,*(undefined8 *)LoadUtility_EventType_TypeInfo);
                  uVar13 = FUN_01780344(*(undefined8 *)puVar8,0);
                  FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                  uVar13 = FUN_01780344(*(undefined8 *)puVar7,0);
                  FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                  uVar13 = FUN_01780344(*(undefined8 *)puVar6,0);
                  FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                  FUN_0129a054(lVar10,*(undefined8 *)puVar2,lVar11,
                               *(undefined8 *)
                                Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>__ctor__
                              );
                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                  puVar2 = Method_Meta_Voice_Audio_Decoding_AudioDecoderMp3Frame_GetMpegVersion__;
                  if (lVar11 != 0) {
                    FUN_01320e50(lVar11,*(undefined8 *)LoadUtility_EventType_TypeInfo);
                    uVar13 = FUN_01780344(*(undefined8 *)puVar8,0);
                    FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                    uVar13 = FUN_01780344(*(undefined8 *)puVar7,0);
                    FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                    uVar13 = FUN_01780344(*(undefined8 *)puVar6,0);
                    FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                    uVar13 = FUN_01780344(*(undefined8 *)puVar4,0);
                    FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                    puVar9 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                    uVar13 = FUN_01780344(*(undefined8 *)
                                           Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
                    FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                    uVar13 = FUN_01780344(*(undefined8 *)puVar1,0);
                    FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                    FUN_0129a054(lVar10,*(undefined8 *)puVar2,lVar11,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>__ctor__
                                );
                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                    puVar2 = StringLiteral_8716;
                    if (lVar11 != 0) {
                      FUN_01320e50(lVar11,*(undefined8 *)LoadUtility_EventType_TypeInfo);
                      uVar13 = FUN_01780344(*(undefined8 *)puVar1,0);
                      FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                      uVar13 = FUN_01780344(*(undefined8 *)puVar4,0);
                      FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                      uVar13 = FUN_01780344(*(undefined8 *)puVar9,0);
                      FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                      uVar13 = FUN_01780344(*(undefined8 *)puVar8,0);
                      FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                      uVar13 = FUN_01780344(*(undefined8 *)puVar6,0);
                      FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                      uVar13 = FUN_01780344(*(undefined8 *)puVar7,0);
                      FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                      FUN_0129a054(lVar10,*(undefined8 *)puVar2,lVar11,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>__ctor__
                                  );
                      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                      puVar5 = Method_System_Text_RegularExpressions_GroupCollection__ctor__;
                      puVar2 = 
                      Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Clear__
                      ;
                      if (lVar11 != 0) {
                        FUN_01320e50(lVar11,*(undefined8 *)LoadUtility_EventType_TypeInfo);
                        uVar13 = FUN_01780344(*(undefined8 *)puVar8,0);
                        FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                        uVar13 = FUN_01780344(*(undefined8 *)puVar7,0);
                        FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                        uVar13 = FUN_01780344(*(undefined8 *)puVar6,0);
                        FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                        uVar13 = FUN_01780344(*(undefined8 *)puVar4,0);
                        FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                        uVar13 = FUN_01780344(*(undefined8 *)puVar9,0);
                        FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                        uVar13 = FUN_01780344(*(undefined8 *)puVar1,0);
                        FUN_00acc5dc(lVar11,uVar13,*(undefined8 *)puVar3);
                        FUN_0129a054(lVar10,*(undefined8 *)puVar5,lVar11,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>__ctor__
                                    );
                        **(long **)(*(long *)puVar2 + 0xb8) = lVar10;
                        return;
                      }
                    }
                  }
                }
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


