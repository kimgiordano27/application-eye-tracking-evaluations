/*
FUNCTION_NAME: System.Runtime.Remoting.RemotingServices$$IsOneWay
ENTRY_POINT: 01559f04
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Runtime_Remoting_RemotingServices__IsOneWay(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *puVar6;
  long unaff_x23;
  undefined8 *puVar7;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x18);
  puVar7 = *(undefined8 **)(unaff_x23 + 0x5d8);
  FUN_013ca920();
  FUN_0115a91c(param_1,1,*puVar6);
  uVar5 = **(undefined8 **)(*unaff_x21 + 0xb8);
  lVar4 = thunk_FUN_00d62348(*puVar7);
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


