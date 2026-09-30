/*
FUNCTION_NAME: System.Runtime.Remoting.RemotingServices$$GetObjectData
ENTRY_POINT: 01559e54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Runtime_Remoting_RemotingServices__GetObjectData(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x21;
  
  if (param_1 != 0) {
    FUN_0129a9f4(param_1,*(undefined8 *)UnityEngine_Animations_AnimationScriptPlayable_TypeInfo);
  }
  puVar1 = Method_UnityEngine_UIElements_IMGUIContainer_<DoOnGUI>b__56_0__;
  lVar4 = *unaff_x21;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *unaff_x21;
  }
  uVar5 = **(undefined8 **)(lVar4 + 0xb8);
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = StringLiteral_12375;
  puVar1 = StringLiteral_5883;
  if (lVar4 != 0) {
    FUN_013ca920(lVar4,uVar5,*(undefined8 *)StringLiteral_8741,0);
    FUN_0115a91c(lVar4,1,*(undefined8 *)puVar2);
    uVar5 = **(undefined8 **)(*unaff_x21 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar2 = Method_System_Xml_Schema_DtdValidator_GenEntity__;
    puVar1 = System_ComponentModel_IChangeTracking_var;
    if (lVar4 != 0) {
      FUN_013ca920(lVar4,uVar5,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetException__
                   ,0);
      FUN_0115a91c(lVar4,1,*(undefined8 *)puVar1);
      uVar5 = **(undefined8 **)(*unaff_x21 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar2 = UnityEngine_Rendering_Universal_LibTessDotNet_PQHandle_TypeInfo;
      puVar1 = Oculus_Platform_Request<RejoinDialogResult>_TypeInfo;
      if (lVar4 != 0) {
        FUN_013ca920(lVar4,uVar5,*(undefined8 *)PTR_DAT_033f3f58,0);
        FUN_0115a91c(lVar4,3,*(undefined8 *)puVar1);
        uVar5 = **(undefined8 **)(*unaff_x21 + 0xb8);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar2 = Method_System_Collections_Generic_HashSet<InputAction>_Add__;
        puVar1 = Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_Dispose__;
        if (lVar4 != 0) {
          FUN_013ca920(lVar4,uVar5,
                       *(undefined8 *)
                        OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo,0);
          FUN_0115a91c(lVar4,2,*(undefined8 *)puVar2);
          uVar5 = **(undefined8 **)(*unaff_x21 + 0xb8);
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


