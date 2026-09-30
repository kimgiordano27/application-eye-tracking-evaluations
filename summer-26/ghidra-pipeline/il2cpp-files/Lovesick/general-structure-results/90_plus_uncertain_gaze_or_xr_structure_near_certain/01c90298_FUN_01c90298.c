/*
FUNCTION_NAME: FUN_01c90298
ENTRY_POINT: 01c90298
PROGRAM: Lovesick-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_01c90298(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = System_Nullable<int>_var;
  if ((DAT_0377ecac & 1) == 0) {
    thunk_FUN_00d48444(System_Nullable<int>_var);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Vector3f>__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_RCG_Lovesick_InteractiveObjects_CrumpleablePoster_<OnBeforeGrabbedEvent>b__9_0__
                      );
    DAT_0377ecac = 1;
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


