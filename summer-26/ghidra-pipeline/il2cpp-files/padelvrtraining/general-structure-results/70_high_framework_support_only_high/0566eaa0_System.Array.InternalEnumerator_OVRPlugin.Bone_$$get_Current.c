/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$get_Current
ENTRY_POINT: 0566eaa0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_Bone>__get_Current(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  int *unaff_x20;
  int iVar2;
  
  FUN_05677e74(*(undefined8 *)(param_1 + 0x80));
  if (0 < *unaff_x20) {
    iVar2 = 0;
    do {
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      FUN_0566d860();
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      uVar1 = FUN_0566e934();
      if ((uVar1 & 1) == 0) {
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03d8f26c();
        }
        System_Array_InternalEnumerator<OVRLocatable_TrackingSpacePose>__get_Current();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *unaff_x20);
  }
  return;
}


