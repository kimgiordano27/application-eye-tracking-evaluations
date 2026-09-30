/*
FUNCTION_NAME: FUN_03b5d71c
ENTRY_POINT: 03b5d71c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_03b5d71c(long *param_1,undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  long local_30;
  long lStack_28;
  
  puVar1 = *(undefined8 **)(param_3 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_02feb320(param_3);
    puVar1 = *(undefined8 **)(param_3 + 0x38);
  }
  local_30 = 0;
  lStack_28 = 0;
  FUN_046bcb28(&local_30,param_2,4,0,*puVar1);
  if (*param_1 != 0) {
    FUN_046bd550(*param_1,param_1[1],local_30,lStack_28,param_1[1] & 0xffffffff,
                 *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x30));
    Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Dispose
              (param_1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x38));
  }
  param_1[1] = lStack_28;
  *param_1 = local_30;
  return;
}


