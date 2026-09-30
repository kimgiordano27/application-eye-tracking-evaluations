/*
FUNCTION_NAME: FUN_027a7a28
ENTRY_POINT: 027a7a28
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_027a7a28(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  if ((DAT_03788791 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_Schema_BaseValidator_SendValidationEvent__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    DAT_03788791 = 1;
  }
  lVar2 = *(long *)puVar1;
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    FUN_0129b5d0(lVar2,&local_50,
                 *(undefined8 *)Method_System_Xml_Schema_BaseValidator_SendValidationEvent__);
    param_1[4] = local_30;
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


