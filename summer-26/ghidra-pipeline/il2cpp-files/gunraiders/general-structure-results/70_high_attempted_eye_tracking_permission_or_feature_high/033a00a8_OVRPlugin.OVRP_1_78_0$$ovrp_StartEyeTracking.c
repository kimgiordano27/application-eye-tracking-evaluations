/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 033a00a8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar2 = MQTTnet_Implementations_CrossPlatformSocket_TypeInfo;
  puVar1 = System_Runtime_Remoting_Contexts_CrossContextChannel_TypeInfo;
  if ((*(byte *)(unaff_x22 + 0x6d5) & 1) == 0) {
    FUN_01c5d288(MQTTnet_Implementations_CrossPlatformSocket_TypeInfo);
    FUN_01c5d288(System_Runtime_Remoting_Contexts_CrossContextChannel_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0x6d5) = 1;
  }
  uVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_02d4f880(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  FUN_033938d4(param_1,param_2);
  return;
}


