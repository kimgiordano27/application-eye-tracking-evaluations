/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers.Vector3Converter$$ReadJson
ENTRY_POINT: 014a15cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SerializationHelpers_Vector3Converter__ReadJson(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_0129a054();
  lVar6 = thunk_FUN_00d62348(*unaff_x26);
  puVar1 = Method_System_Collections_Generic_List<RendererList>_Add__;
  if (lVar6 != 0) {
    FUN_01320e50(lVar6,*unaff_x25);
    uVar7 = FUN_01780344(*(undefined8 *)puVar1,0);
    FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
    FUN_0129a054();
    lVar6 = thunk_FUN_00d62348(*unaff_x26);
    if (lVar6 != 0) {
      FUN_01320e50(lVar6,*unaff_x25);
      puVar3 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
      uVar7 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
      FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
      uVar7 = FUN_01780344(*unaff_x29,0);
      FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
      uVar7 = FUN_01780344(*unaff_x23,0);
      FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
      uVar7 = FUN_01780344(*unaff_x28,0);
      FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
      FUN_0129a054();
      lVar6 = thunk_FUN_00d62348(*unaff_x26);
      puVar1 = System_Security_Principal_WindowsImpersonationContext_TypeInfo;
      if (lVar6 != 0) {
        FUN_01320e50(lVar6,*(undefined8 *)LoadUtility_EventType_TypeInfo);
        uVar7 = FUN_01780344(*(undefined8 *)puVar1,0);
        FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
        uVar7 = FUN_01780344(*unaff_x29,0);
        FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
        uVar7 = FUN_01780344(*unaff_x23,0);
        FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
        uVar7 = FUN_01780344(*unaff_x28,0);
        FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
        uVar7 = FUN_01780344(*(undefined8 *)puVar3,0);
        FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
        FUN_0129a054();
        lVar6 = thunk_FUN_00d62348(*unaff_x26);
        puVar1 = StringLiteral_5228;
        if (lVar6 != 0) {
          FUN_01320e50(lVar6,*(undefined8 *)LoadUtility_EventType_TypeInfo);
          uVar7 = FUN_01780344(*unaff_x28,0);
          FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
          puVar4 = Method_System_Data_DataSet_ReadXmlDiffgram__;
          uVar7 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
          FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
          uVar7 = FUN_01780344(*(undefined8 *)puVar1,0);
          FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
          uVar7 = FUN_01780344(*unaff_x29,0);
          FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
          uVar7 = FUN_01780344(*unaff_x23,0);
          FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
          uVar7 = FUN_01780344(*(undefined8 *)puVar3,0);
          FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
          FUN_0129a054();
          lVar6 = thunk_FUN_00d62348(*unaff_x26);
          if (lVar6 != 0) {
            FUN_01320e50(lVar6,*(undefined8 *)LoadUtility_EventType_TypeInfo);
            uVar7 = FUN_01780344(*unaff_x28,0);
            FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
            uVar7 = FUN_01780344(*(undefined8 *)puVar4,0);
            FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
            uVar7 = FUN_01780344(*(undefined8 *)puVar1,0);
            FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
            FUN_0129a054();
            lVar6 = thunk_FUN_00d62348(*unaff_x26);
            if (lVar6 != 0) {
              FUN_01320e50(lVar6,*(undefined8 *)LoadUtility_EventType_TypeInfo);
              uVar7 = FUN_01780344(*unaff_x28,0);
              FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
              uVar7 = FUN_01780344(*(undefined8 *)puVar4,0);
              FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
              uVar7 = FUN_01780344(*(undefined8 *)puVar1,0);
              FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
              uVar7 = FUN_01780344(*unaff_x29,0);
              FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
              puVar5 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
              uVar7 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
              FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
              uVar7 = FUN_01780344(*(undefined8 *)puVar3,0);
              FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
              FUN_0129a054();
              lVar6 = thunk_FUN_00d62348(*unaff_x26);
              if (lVar6 != 0) {
                FUN_01320e50(lVar6,*(undefined8 *)LoadUtility_EventType_TypeInfo);
                uVar7 = FUN_01780344(*(undefined8 *)puVar3,0);
                FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
                uVar7 = FUN_01780344(*unaff_x29,0);
                FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
                uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
                uVar7 = FUN_01780344(*unaff_x28,0);
                FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
                uVar7 = FUN_01780344(*(undefined8 *)puVar1,0);
                FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
                uVar7 = FUN_01780344(*(undefined8 *)puVar4,0);
                FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
                FUN_0129a054();
                lVar6 = thunk_FUN_00d62348(*unaff_x26);
                puVar2 = 
                Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Clear__
                ;
                if (lVar6 != 0) {
                  FUN_01320e50(lVar6,*(undefined8 *)LoadUtility_EventType_TypeInfo);
                  uVar7 = FUN_01780344(*unaff_x28,0);
                  FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
                  uVar7 = FUN_01780344(*(undefined8 *)puVar4,0);
                  FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
                  uVar7 = FUN_01780344(*(undefined8 *)puVar1,0);
                  FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
                  uVar7 = FUN_01780344(*unaff_x29,0);
                  FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
                  uVar7 = FUN_01780344(*(undefined8 *)puVar5,0);
                  FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
                  uVar7 = FUN_01780344(*(undefined8 *)puVar3,0);
                  FUN_00acc5dc(lVar6,uVar7,*unaff_x22);
                  FUN_0129a054();
                  **(undefined8 **)(*(long *)puVar2 + 0xb8) = unaff_x19;
                  return;
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


