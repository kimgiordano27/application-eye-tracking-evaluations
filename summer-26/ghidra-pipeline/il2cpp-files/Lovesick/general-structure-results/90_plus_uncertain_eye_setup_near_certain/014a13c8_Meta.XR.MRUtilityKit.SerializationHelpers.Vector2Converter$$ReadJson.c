/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers.Vector2Converter$$ReadJson
ENTRY_POINT: 014a13c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SerializationHelpers_Vector2Converter__ReadJson
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar10 = *(undefined8 **)(unaff_x20 + 0xec8);
  FUN_01298da0(param_2,*param_1);
  lVar9 = thunk_FUN_00d62348(*puVar10);
  puVar6 = StringLiteral_5228;
  puVar8 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
  puVar7 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
  puVar5 = Method_System_Data_DataSet_ReadXmlDiffgram__;
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar4 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
  puVar2 = System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
  puVar1 = System_Collections_Generic_Dictionary<object,_object>_TypeInfo;
  if (lVar9 != 0) {
    FUN_01320e50(lVar9,*(undefined8 *)LoadUtility_EventType_TypeInfo);
    uVar11 = *(undefined8 *)puVar7;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_01780344(uVar11,0);
    FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)puVar6,0);
    FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)puVar5,0);
    FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
    FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)puVar8,0);
    FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
    FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
    FUN_0129a054();
    puVar3 = System_Nullable<char>_TypeInfo;
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)System_Nullable<char>_TypeInfo);
    puVar5 = LoadUtility_EventType_TypeInfo;
    if (lVar9 != 0) {
      FUN_01320e50(lVar9,*(undefined8 *)LoadUtility_EventType_TypeInfo);
      uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
      FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
      uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
      FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
      uVar11 = FUN_01780344(*(undefined8 *)puVar8,0);
      FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
      puVar7 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
      uVar11 = FUN_01780344(*(undefined8 *)
                             Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                            ,0);
      FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
      FUN_0129a054();
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar4 = Method_System_Collections_Generic_List<RendererList>_Add__;
      if (lVar9 != 0) {
        FUN_01320e50(lVar9,*(undefined8 *)puVar5);
        uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
        FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
        FUN_0129a054();
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if (lVar9 != 0) {
          FUN_01320e50(lVar9,*(undefined8 *)puVar5);
          puVar5 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
          uVar11 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                ,0);
          FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
          uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
          FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
          uVar11 = FUN_01780344(*(undefined8 *)puVar8,0);
          FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
          uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
          FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
          FUN_0129a054();
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          puVar4 = System_Security_Principal_WindowsImpersonationContext_TypeInfo;
          if (lVar9 != 0) {
            FUN_01320e50(lVar9,*(undefined8 *)LoadUtility_EventType_TypeInfo);
            uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
            FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
            uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
            FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
            uVar11 = FUN_01780344(*(undefined8 *)puVar8,0);
            FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
            uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
            FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
            uVar11 = FUN_01780344(*(undefined8 *)puVar5,0);
            FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
            FUN_0129a054();
            lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
            puVar4 = StringLiteral_5228;
            if (lVar9 != 0) {
              FUN_01320e50(lVar9,*(undefined8 *)LoadUtility_EventType_TypeInfo);
              uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
              FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
              puVar6 = Method_System_Data_DataSet_ReadXmlDiffgram__;
              uVar11 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
              FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
              uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
              FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
              uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
              FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
              uVar11 = FUN_01780344(*(undefined8 *)puVar8,0);
              FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
              uVar11 = FUN_01780344(*(undefined8 *)puVar5,0);
              FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
              FUN_0129a054();
              lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
              if (lVar9 != 0) {
                FUN_01320e50(lVar9,*(undefined8 *)LoadUtility_EventType_TypeInfo);
                uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
                FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                uVar11 = FUN_01780344(*(undefined8 *)puVar6,0);
                FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
                FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                FUN_0129a054();
                lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                if (lVar9 != 0) {
                  FUN_01320e50(lVar9,*(undefined8 *)LoadUtility_EventType_TypeInfo);
                  uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
                  FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                  uVar11 = FUN_01780344(*(undefined8 *)puVar6,0);
                  FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                  uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
                  FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                  uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
                  FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                  puVar8 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                  uVar11 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,
                                        0);
                  FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                  uVar11 = FUN_01780344(*(undefined8 *)puVar5,0);
                  FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                  FUN_0129a054();
                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                  if (lVar9 != 0) {
                    FUN_01320e50(lVar9,*(undefined8 *)LoadUtility_EventType_TypeInfo);
                    uVar11 = FUN_01780344(*(undefined8 *)puVar5,0);
                    FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                    uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
                    FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                    uVar11 = FUN_01780344(*(undefined8 *)puVar8,0);
                    FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                    uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
                    FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                    uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
                    FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                    uVar11 = FUN_01780344(*(undefined8 *)puVar6,0);
                    FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                    FUN_0129a054();
                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                    puVar3 = 
                    Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Clear__
                    ;
                    if (lVar9 != 0) {
                      FUN_01320e50(lVar9,*(undefined8 *)LoadUtility_EventType_TypeInfo);
                      uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
                      FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                      uVar11 = FUN_01780344(*(undefined8 *)puVar6,0);
                      FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                      uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
                      FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                      uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
                      FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                      uVar11 = FUN_01780344(*(undefined8 *)puVar8,0);
                      FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                      uVar11 = FUN_01780344(*(undefined8 *)puVar5,0);
                      FUN_00acc5dc(lVar9,uVar11,*(undefined8 *)puVar1);
                      FUN_0129a054();
                      **(undefined8 **)(*(long *)puVar3 + 0xb8) = unaff_x19;
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


