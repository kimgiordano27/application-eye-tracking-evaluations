/*
FUNCTION_NAME: FUN_042589bc
ENTRY_POINT: 042589bc
PROGRAM: Waifu-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_042589bc(long param_1,int param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  local_40 = 0;
  lVar1 = 0x24;
  if ((param_3 & 1) == 0) {
    lVar1 = 0x20;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    plVar3 = (long *)(param_1 + 0x10);
    if (*plVar3 != 0) {
      Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
                (plVar3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80));
    }
    local_50 = 0;
    uStack_48 = 0;
    FUN_04d920e4(&local_50,param_2,4,1,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18));
    *(undefined8 *)(param_1 + 0x18) = uStack_48;
    *plVar3 = local_50;
    *(int *)(param_1 + 0x24) = param_2;
  }
  else {
    param_2 = *(int *)(param_1 + lVar1) + param_2;
    if (*(int *)(param_1 + 0x24) < param_2) {
      FUN_04d920e4(&local_40,param_2,4,1,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18));
      puVar2 = (undefined8 *)(param_1 + 0x10);
      FUN_04d92c58(*puVar2,*(undefined8 *)(param_1 + 0x18),local_40,uStack_38,
                   *(undefined4 *)(param_1 + 0x20),
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x110));
      Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
                (puVar2,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80));
      *(int *)(param_1 + 0x24) = param_2;
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *puVar2 = local_40;
    }
  }
  return;
}


