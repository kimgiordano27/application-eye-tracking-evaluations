/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRLocatable.TrackingSpacePose>$$Equals
ENTRY_POINT: 023407e0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_gaze_retrieval_or_extraction
*/


long Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>__Equals(void)

{
  long lVar1;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  
  OVRManager_PassthroughCapabilities___ctor();
  if (unaff_w19 < 0) {
    FUN_033b3224(0x10,4,0);
  }
  if (*(int *)(unaff_x21 + 0x18) - unaff_w20 < unaff_w19) {
    FUN_033b2d60(0x17,0);
  }
  if ((*(byte *)(**(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  lVar1 = thunk_FUN_01de27b8();
  FUN_0233f404(lVar1,unaff_w19,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x148));
  if (lVar1 != 0) {
    FUN_033b4f38(*(undefined8 *)(unaff_x21 + 0x10),unaff_w20,*(undefined8 *)(lVar1 + 0x10),0,
                 unaff_w19,0);
    *(int *)(lVar1 + 0x18) = unaff_w19;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


