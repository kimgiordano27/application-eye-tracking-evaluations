/*
FUNCTION_NAME: FUN_01559cdc
ENTRY_POINT: 01559cdc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_01559cdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_033efea8;
  if ((DAT_03777b9e & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_Animations_AnimationScriptPlayable_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12472);
    thunk_FUN_00d48444(PTR_DAT_033efea8);
    thunk_FUN_00d48444(PTR_DAT_033f72c0);
    thunk_FUN_00d48444(StringLiteral_5883);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_IMGUIContainer_<DoOnGUI>b__56_0__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_Dispose__
                      );
    thunk_FUN_00d48444(Method_System_Xml_Schema_DtdValidator_GenEntity__);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_LibTessDotNet_PQHandle_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_8741);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetException__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3f58);
    thunk_FUN_00d48444(OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_SystemHeadset_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Net_Sockets_Socket_<>c__DisplayClass298_0_<BeginSendCallback>b__0__
                      );
    thunk_FUN_00d48444(System_ComponentModel_IChangeTracking_var);
    thunk_FUN_00d48444(StringLiteral_12375);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_laneq_u32__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<InputAction>_Add__);
    thunk_FUN_00d48444(Oculus_Platform_Request<RejoinDialogResult>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13041);
    DAT_03777b9e = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = StringLiteral_13041;
  puVar1 = Method_System_Net_Sockets_Socket_<>c__DisplayClass298_0_<BeginSendCallback>b__0__;
  if (lVar4 != 0) {
    FUN_01298da0(lVar4,*(undefined8 *)StringLiteral_12472);
    **(long **)(*(long *)puVar2 + 0xb8) = lVar4;
    lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar4 != 0) {
      FUN_0129a9f4(lVar4,*(undefined8 *)UnityEngine_Animations_AnimationScriptPlayable_TypeInfo);
    }
    puVar2 = Method_UnityEngine_UIElements_IMGUIContainer_<DoOnGUI>b__56_0__;
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar4 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar3 = StringLiteral_12375;
    puVar2 = StringLiteral_5883;
    if (lVar4 != 0) {
      FUN_013ca920(lVar4,uVar5,*(undefined8 *)StringLiteral_8741,0);
      FUN_0115a91c(lVar4,1,*(undefined8 *)puVar3);
      uVar5 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar3 = Method_System_Xml_Schema_DtdValidator_GenEntity__;
      puVar2 = System_ComponentModel_IChangeTracking_var;
      if (lVar4 != 0) {
        FUN_013ca920(lVar4,uVar5,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetException__
                     ,0);
        FUN_0115a91c(lVar4,1,*(undefined8 *)puVar2);
        uVar5 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar3 = UnityEngine_Rendering_Universal_LibTessDotNet_PQHandle_TypeInfo;
        puVar2 = Oculus_Platform_Request<RejoinDialogResult>_TypeInfo;
        if (lVar4 != 0) {
          FUN_013ca920(lVar4,uVar5,*(undefined8 *)PTR_DAT_033f3f58,0);
          FUN_0115a91c(lVar4,3,*(undefined8 *)puVar2);
          uVar5 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          puVar3 = Method_System_Collections_Generic_HashSet<InputAction>_Add__;
          puVar2 = Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_Dispose__;
          if (lVar4 != 0) {
            FUN_013ca920(lVar4,uVar5,
                         *(undefined8 *)
                          OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo,0);
            FUN_0115a91c(lVar4,2,*(undefined8 *)puVar3);
            uVar5 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_laneq_u32__;
            puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
            puVar1 = PTR_DAT_033f72c0;
            if (lVar4 != 0) {
              FUN_013ca920(lVar4,uVar5,*(undefined8 *)OVRPlugin_SystemHeadset_TypeInfo,0);
              FUN_0115a91c(lVar4,1,*(undefined8 *)puVar3);
              uVar5 = *(undefined8 *)puVar1;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_01780344(uVar5,0);
              FUN_0155a060();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


