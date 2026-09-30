/*
FUNCTION_NAME: FUN_01c904f0
ENTRY_POINT: 01c904f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01c904f0(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = System_Nullable<int>_var;
  if ((DAT_0377ecaf & 1) == 0) {
    thunk_FUN_00d48444(System_Nullable<int>_var);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Vector3f>__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_List<Renderer>>_get_Current__
                      );
    DAT_0377ecaf = 1;
  }
  if (*(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48) == 0) {
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
                                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_List<Renderer>>_get_Current__
                         ,0);
    *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48) = uVar3;
  }
  return;
}


