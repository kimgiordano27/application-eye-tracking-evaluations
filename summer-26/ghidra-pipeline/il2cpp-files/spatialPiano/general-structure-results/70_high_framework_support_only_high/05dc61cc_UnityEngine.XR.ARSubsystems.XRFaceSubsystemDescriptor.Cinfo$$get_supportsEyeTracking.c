/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor.Cinfo$$get_supportsEyeTracking
ENTRY_POINT: 05dc61cc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_gaze_retrieval_or_extraction
*/


uint UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor_Cinfo__get_supportsEyeTracking(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  FUN_02f08768();
  *(undefined1 *)(unaff_x20 + 0xc19) = 1;
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<CallbackRunner>__;
  puVar1 = Method_UnityEngine_Object_FindFirstObjectByType<XROrigin>__;
  lVar4 = *(long *)(unaff_x19 + 0x108);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_03ac039c(&stack0x00000018,lVar4,
                 *(undefined8 *)Method_UnityEngine_Object_FindObjectOfType<CustomMatchmaking>__);
    do {
      uVar3 = FUN_04aff1b0(&stack0x00000018,*(undefined8 *)puVar2);
      if ((uVar3 & 1) == 0) break;
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    } while (*(char *)(in_stack_00000028 + 0x24) == '\0');
    FUN_04aff1ac(&stack0x00000018,*(undefined8 *)puVar1);
  }
  return uVar3 & 1;
}


