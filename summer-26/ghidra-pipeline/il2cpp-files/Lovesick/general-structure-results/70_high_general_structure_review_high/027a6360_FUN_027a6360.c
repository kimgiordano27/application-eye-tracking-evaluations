/*
FUNCTION_NAME: FUN_027a6360
ENTRY_POINT: 027a6360
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


undefined8 FUN_027a6360(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long local_28;
  
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  if ((DAT_03788784 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_2558);
    thunk_FUN_00d48444(StringLiteral_11967);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_set_arSessionOrigin__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    thunk_FUN_00d48444(System_ExecutionEngineException_TypeInfo);
    DAT_03788784 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *(long *)puVar1;
  }
  lVar4 = **(long **)(lVar2 + 0xb8);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) < 1) {
      uVar3 = 0;
    }
    else {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
        if (lVar4 == 0) goto LAB_027a64d8;
      }
      FUN_013b17d4(lVar4,&local_28,*(undefined8 *)StringLiteral_11967);
      puVar1 = StringLiteral_2558;
      if (local_28 == 0) goto LAB_027a64d8;
      uVar3 = FUN_0274aad0(local_28,0);
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar2);
        lVar2 = *(long *)puVar1;
      }
      lVar2 = FUN_0275f4d4(uVar3,*(undefined4 *)(*(long *)(lVar2 + 0xb8) + 8),0);
      puVar1 = System_ExecutionEngineException_TypeInfo;
      if ((lVar2 != local_28) && (lVar2 != 0)) {
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)puVar1,0);
      }
      FUN_027a64dc(local_28);
      uVar3 = 1;
    }
    return uVar3;
  }
LAB_027a64d8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


