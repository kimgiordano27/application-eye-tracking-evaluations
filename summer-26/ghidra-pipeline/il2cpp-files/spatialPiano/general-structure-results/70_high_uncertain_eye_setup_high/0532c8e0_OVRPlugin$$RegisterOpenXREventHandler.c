/*
FUNCTION_NAME: OVRPlugin$$RegisterOpenXREventHandler
ENTRY_POINT: 0532c8e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__RegisterOpenXREventHandler(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long in_x9;
  int *in_x10;
  undefined4 in_stack_00000028;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_02f421d0();
      goto LAB_0532c90c;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar5 = (undefined8 *)(param_1 + (long)(*piVar2 + 1) * 0x10 + 0x138);
LAB_0532c90c:
  puVar4 = System_Tuple<Task,_Task,_TaskContinuation>_TypeInfo;
  puVar3 = System_Tuple<Pose,_float,_float>_TypeInfo;
  (*(code *)*puVar5)(&stack0x00000018);
  while (uVar6 = FUN_04aeea48(&stack0x00000018,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
    FUN_05235550();
    FUN_052355c8();
  }
  FUN_04aeea44(&stack0x00000018,*(undefined8 *)puVar3);
  return;
}


