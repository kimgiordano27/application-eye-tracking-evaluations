/*
FUNCTION_NAME: UnityEngine.InputSystem.PlayerInput$$CopyActionAssetAndApplyBindingOverrides
ENTRY_POINT: 064614c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 102
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;functionality_gaze_retrieval_or_extraction
*/


long UnityEngine_InputSystem_PlayerInput__CopyActionAssetAndApplyBindingOverrides(void)

{
  byte bVar1;
  long *plVar2;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_03188a78(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xa66) = 1;
  plVar2 = *(long **)(unaff_x20 + 0x18);
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x2e8))
                               (plVar2,unaff_w19,*(undefined8 *)(*plVar2 + 0x2f0));
    if (plVar2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo +
                       0x130);
      if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo)) {
        return plVar2[3];
      }
                    /* WARNING: Subroutine does not return */
      FUN_03189058();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


