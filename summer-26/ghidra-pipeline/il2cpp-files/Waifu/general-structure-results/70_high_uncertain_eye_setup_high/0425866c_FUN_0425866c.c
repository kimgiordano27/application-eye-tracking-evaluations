/*
FUNCTION_NAME: FUN_0425866c
ENTRY_POINT: 0425866c
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


void FUN_0425866c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long local_40;
  undefined8 uStack_38;
  
  iVar1 = (int)param_3;
  if (*(int *)(param_1 + 0x24) == 0) {
    plVar2 = (long *)(param_1 + 0x10);
    if (*plVar2 != 0) {
      Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
                (plVar2,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80));
    }
    local_40 = 0;
    uStack_38 = 0;
    FUN_04d92228(&local_40,param_2,param_3,4,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30));
    *(undefined8 *)(param_1 + 0x18) = uStack_38;
    *plVar2 = local_40;
    *(int *)(param_1 + 0x20) = iVar1;
    *(int *)(param_1 + 0x24) = iVar1;
  }
  else {
    FUN_042589bc(param_1,param_3 & 0xffffffff,0,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x88));
    FUN_04d92d8c(param_2,param_3,0,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x20),param_3 & 0xffffffff,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8));
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
  }
  return;
}


