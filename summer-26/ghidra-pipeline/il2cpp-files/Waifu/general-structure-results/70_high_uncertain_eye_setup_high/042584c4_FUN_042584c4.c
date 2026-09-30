/*
FUNCTION_NAME: FUN_042584c4
ENTRY_POINT: 042584c4
PROGRAM: Waifu-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_042584c4(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long *plVar1;
  long local_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    plVar1 = (long *)(param_1 + 0x10);
    if (*plVar1 != 0) {
      Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
                (plVar1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80));
    }
    local_40 = 0;
    uStack_38 = 0;
    FUN_04d920e4(&local_40,param_3,4,1,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18));
    *(undefined8 *)(param_1 + 0x18) = uStack_38;
    *plVar1 = local_40;
    FUN_04d92e08(param_2,0,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0,param_3
                 ,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x90));
    *(int *)(param_1 + 0x20) = param_3;
    *(int *)(param_1 + 0x24) = param_3;
  }
  else {
    FUN_042589bc(param_1,param_3,0,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x88));
    FUN_04d92e08(param_2,0,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x20),param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x90));
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_3;
  }
  return;
}


