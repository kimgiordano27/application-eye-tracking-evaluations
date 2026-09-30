/*
FUNCTION_NAME: FUN_056ef190
ENTRY_POINT: 056ef190
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_056ef190(void *param_1,char *param_2,char *param_3)

{
  undefined *puVar1;
  long lVar2;
  char *__src;
  long local_138 [15];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_066d21e8 & 1) == 0) {
    FUN_02b3c81c(Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Value__);
    FUN_02b3c81c(
                Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Key__
                );
    DAT_066d21e8 = 1;
  }
  puVar1 = 
  Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Key__
  ;
  local_50 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  __src = param_3;
  if ((*param_2 == '\0') || (__src = param_2, *param_3 == '\0')) {
    memcpy(param_1,__src,0x80);
    return;
  }
  FUN_03ae1368(local_138,param_2,
               *(undefined8 *)
                Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Key__
              );
  if ((local_138[0] == 0) ||
     (FUN_03ae1368(local_138,param_3,*(undefined8 *)puVar1), local_138[0] != 0)) {
    FUN_03ae1368(local_138,param_3,*(undefined8 *)puVar1);
    if ((local_138[0] != 0) &&
       (FUN_03ae1368(local_138,param_2,*(undefined8 *)puVar1), local_138[0] == 0))
    goto LAB_056ef418;
    FUN_03ae1368(local_138,param_2,*(undefined8 *)puVar1);
    memcpy(&local_c0,local_138,0x78);
    lVar2 = FUN_056fc2ac(&local_b0,0);
    if (lVar2 != 0) {
      FUN_03ae1368(local_138,param_3,*(undefined8 *)puVar1);
      memcpy(&local_c0,local_138,0x78);
      lVar2 = FUN_056fc2ac(&local_b0,0);
      if (lVar2 == 0) goto LAB_056ef3d4;
    }
    FUN_03ae1368(local_138,param_3,*(undefined8 *)puVar1);
    memcpy(&local_c0,local_138,0x78);
    lVar2 = FUN_056fc2ac(&local_b0,0);
    if (lVar2 != 0) {
      FUN_03ae1368(local_138,param_2,*(undefined8 *)puVar1);
      memcpy(&local_c0,local_138,0x78);
      lVar2 = FUN_056fc2ac(&local_b0,0);
      if (lVar2 == 0) goto LAB_056ef418;
    }
    FUN_03ae1368(local_138,param_2,*(undefined8 *)puVar1);
    memcpy(&local_c0,local_138,0x78);
    if (local_80 != 0) {
      FUN_03ae1368(local_138,param_3,*(undefined8 *)puVar1);
      memcpy(&local_c0,local_138,0x78);
      if (local_80 == 0) goto LAB_056ef3d4;
    }
    FUN_03ae1368(local_138,param_3,*(undefined8 *)puVar1);
    memcpy(&local_c0,local_138,0x78);
    if (local_80 != 0) {
      FUN_03ae1368(local_138,param_2,*(undefined8 *)puVar1);
      memcpy(&local_c0,local_138,0x78);
      if (local_80 == 0) goto LAB_056ef418;
    }
  }
LAB_056ef3d4:
  param_3 = param_2;
LAB_056ef418:
  memcpy(param_1,param_3,0x80);
  return;
}


