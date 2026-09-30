/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider$$set_leftHandMovementDirection
ENTRY_POINT: 05dbb9a4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_DynamicMoveProvider__set_leftHandMovementDirection
          (void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_02d6084c(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__);
  *(undefined1 *)(unaff_x21 + 0x39) = 1;
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRInteractionStrengthFilter>_set_bufferChanges__
  ;
  if (*(long **)(unaff_x20 + 0x10) == unaff_x19) {
    return 0;
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0676b288) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 10) * 0x10 + 0x138);
        goto LAB_05dbba38;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05dbba38:
  uVar3 = (*(code *)*puVar2)();
  uVar3 = FUN_033a6774(uVar3,*(undefined8 *)puVar1);
  return uVar3;
}


