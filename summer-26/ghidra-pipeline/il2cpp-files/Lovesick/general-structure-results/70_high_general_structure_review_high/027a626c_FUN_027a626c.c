/*
FUNCTION_NAME: FUN_027a626c
ENTRY_POINT: 027a626c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined4 FUN_027a626c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long local_18;
  
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  if ((DAT_03788783 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_11967);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_set_arSessionOrigin__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    DAT_03788783 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *(long *)puVar1;
  }
  lVar3 = **(long **)(lVar2 + 0xb8);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) < 1) {
      uVar4 = 0;
    }
    else {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = **(long **)(*(long *)puVar1 + 0xb8);
        if (lVar3 == 0) goto LAB_027a6348;
      }
      FUN_013b17d4(lVar3,&local_18,*(undefined8 *)StringLiteral_11967);
      if (local_18 == 0) goto LAB_027a6348;
      uVar4 = 1;
      *(undefined1 *)(local_18 + 0x3d6) = 1;
      FUN_0274a398(local_18,8,0);
    }
    return uVar4;
  }
LAB_027a6348:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


