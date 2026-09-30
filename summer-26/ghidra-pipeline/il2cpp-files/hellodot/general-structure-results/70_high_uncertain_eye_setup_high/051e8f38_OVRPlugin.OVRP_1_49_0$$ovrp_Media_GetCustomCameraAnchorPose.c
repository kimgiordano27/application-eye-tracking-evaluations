/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCustomCameraAnchorPose
ENTRY_POINT: 051e8f38
PROGRAM: hellodot-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCustomCameraAnchorPose(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long *unaff_x24;
  
  iVar1 = Newtonsoft_Json_Schema_JsonSchemaModel__get_MaximumItems(param_1,0);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar3 = Newtonsoft_Json_Schema_JsonSchemaModel__get_AdditionalItems();
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*unaff_x24);
      }
      FUN_04e58d68(uVar3,unaff_x20,0,0);
      lVar4 = FUN_04f7c4dc(unaff_x20,0);
      uVar3 = Newtonsoft_Json_Schema_JsonSchemaModel__get_AdditionalItems();
      iVar2 = FUN_04e586fc(uVar3,0);
      unaff_x20 = FUN_04f7c4d0(lVar4 + iVar2,0);
      iVar1 = iVar1 + 1;
      iVar2 = Newtonsoft_Json_Schema_JsonSchemaModel__get_MaximumItems();
    } while (iVar1 < iVar2);
  }
  return;
}


