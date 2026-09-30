/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCustomCameraAnchorPose
ENTRY_POINT: 051e8fbc
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCustomCameraAnchorPose(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w21;
  long *unaff_x24;
  
  while( true ) {
    uVar3 = FUN_04f7c4d0(param_1,param_2);
    unaff_w21 = unaff_w21 + 1;
    iVar1 = Newtonsoft_Json_Schema_JsonSchemaModel__get_MaximumItems();
    if (iVar1 <= unaff_w21) break;
    uVar2 = Newtonsoft_Json_Schema_JsonSchemaModel__get_AdditionalItems();
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*unaff_x24);
    }
    FUN_04e58d68(uVar2,uVar3,0,0);
    param_1 = FUN_04f7c4dc(uVar3,0);
    uVar3 = Newtonsoft_Json_Schema_JsonSchemaModel__get_AdditionalItems();
    iVar1 = FUN_04e586fc(uVar3,0);
    param_1 = param_1 + iVar1;
    param_2 = 0;
  }
  return;
}


