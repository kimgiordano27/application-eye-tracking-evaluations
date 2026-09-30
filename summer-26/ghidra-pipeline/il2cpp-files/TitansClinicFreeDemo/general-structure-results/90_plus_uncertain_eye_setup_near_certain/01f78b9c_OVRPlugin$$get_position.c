/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 01f78b9c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_position
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long in_stack_00000008;
  
  lVar5 = *(long *)(param_5 + 0x38);
  if (lVar5 == 0) {
    FUN_0122e7a4(param_5);
    lVar5 = *(long *)(param_5 + 0x38);
  }
  in_stack_00000008 = 0;
  uVar2 = FUN_01421b60(&stack0x00000008,*(undefined8 *)(lVar5 + 0x20));
  iVar6 = (int)param_4;
  if ((uVar2 & 1) == 0) {
    if (iVar6 <= (int)param_2) {
      uVar3 = FUN_0141c84c(param_1,param_2,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x28));
      uVar4 = FUN_0141c84c(param_3,param_4,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x28));
      uVar1 = FUN_0144c4f8(uVar3,uVar4,param_4 & 0xffffffff,
                           *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x38));
      goto FUN_01f78c7c;
    }
  }
  else if (iVar6 <= (int)param_2) {
    uVar3 = FUN_0141c84c(param_1,param_2,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x28));
    uVar4 = FUN_0141c84c(param_3,param_4,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x28));
    uVar1 = FUN_01f7b264(uVar3,uVar4,in_stack_00000008 * iVar6,0);
    goto FUN_01f78c7c;
  }
  uVar1 = 0;
FUN_01f78c7c:
  return uVar1 & 1;
}


