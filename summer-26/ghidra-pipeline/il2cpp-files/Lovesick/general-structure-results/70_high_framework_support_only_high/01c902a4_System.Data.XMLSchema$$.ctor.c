/*
FUNCTION_NAME: System.Data.XMLSchema$$.ctor
ENTRY_POINT: 01c902a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Data_XMLSchema___ctor(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  
  puVar1 = System_Nullable<int>_var;
  if ((*(byte *)(unaff_x19 + 0xcac) & 1) == 0) {
    thunk_FUN_00d48444(System_Nullable<int>_var);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Vector3f>__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_RCG_Lovesick_InteractiveObjects_CrumpleablePoster_<OnBeforeGrabbedEvent>b__9_0__
                      );
    *(undefined1 *)(unaff_x19 + 0xcac) = 1;
  }
  if (*(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) == 0) {
    uVar3 = *(undefined8 *)
             Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Vector3f>__
    ;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar2 = FUN_01780344(uVar3,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar3 = FUN_0178c390(lVar2,*(undefined8 *)
                                Method_RCG_Lovesick_InteractiveObjects_CrumpleablePoster_<OnBeforeGrabbedEvent>b__9_0__
                         ,0);
    *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = uVar3;
  }
  return;
}


