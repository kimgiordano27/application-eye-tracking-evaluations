/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 04f59280
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_position(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(System_Runtime_Remoting_IRemotingTypeInfo_var);
    FUN_02b3c81c(
                UnityEngine_XR_OpenXR_Features_Interactions_PICONeo3ControllerProfile_PICONeo3Controller_var
                );
    FUN_02b3c81c(
                System_Collections_Generic_Dictionary<ulong,_OVRVirtualKeyboard_VirtualKeyboardTextureInfo>_TypeInfo
                );
    *(undefined1 *)(unaff_x22 + 0xa8d) = 1;
  }
  FUN_04af0fac(param_2,*unaff_x23);
  uVar1 = thunk_FUN_02b79548(*(undefined8 *)(param_2 + 0x118),*unaff_x21);
  *(undefined8 *)(param_2 + 0x120) = uVar1;
  thunk_FUN_02bb0e9c(param_2 + 0x120,uVar1);
  uVar1 = thunk_FUN_02b79548(*(undefined8 *)(param_2 + 0x150),*unaff_x20);
  *(undefined8 *)(param_2 + 0x158) = uVar1;
  thunk_FUN_02bb0e9c(param_2 + 0x158,uVar1);
  *(undefined8 *)(param_2 + 0x20) = 0x4469737447726162;
  return;
}


