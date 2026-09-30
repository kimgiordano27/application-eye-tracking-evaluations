/*
FUNCTION_NAME: FUN_027a6e90
ENTRY_POINT: 027a6e90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 FUN_027a6e90(void)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_18 [8];
  
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  if ((DAT_03788787 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Locomotion_AnimatedSnapTurnVisuals_HandleLocomotionPerformed__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_set_arSessionOrigin__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    DAT_03788787 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    if (0 < *(int *)(**(long **)(lVar2 + 0xb8) + 0x18)) {
      FUN_026dad48(0);
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar2 = *(long *)puVar1;
      }
      if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_027a6f50;
      FUN_013b1910(**(long **)(lVar2 + 0xb8),auStack_18,
                   *(undefined8 *)
                    Method_Oculus_Interaction_Locomotion_AnimatedSnapTurnVisuals_HandleLocomotionPerformed__
                  );
    }
    return 0;
  }
LAB_027a6f50:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


