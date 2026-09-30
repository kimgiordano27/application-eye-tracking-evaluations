/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 06dd26cc
PROGRAM: Hyper-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__Dispose
               (long param_1,uint param_2,int param_3,long param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint in_w8;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (in_w8 < param_2) {
    FUN_08d9dc40(0);
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x18) - param_3 < (int)param_2)) {
    FUN_08d9dc6c(0);
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_08d8ca5c(8,0);
  }
  if ((int)param_2 < (int)(param_3 + param_2)) {
    lVar4 = (long)(int)(param_3 + param_2) - (long)(int)param_2;
    lVar5 = (long)(int)param_2 * 0x18 + 0x20;
    do {
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) {
LAB_06dd27b0:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(uint *)(lVar3 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      if (param_4 == 0) goto LAB_06dd27b0;
      puVar1 = (undefined8 *)(lVar3 + lVar5);
      in_stack_00000028 = puVar1[1];
      in_stack_00000020 = *puVar1;
      in_stack_00000030 = puVar1[2];
      uVar2 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),&stack0x00000020,
                         *(undefined8 *)(param_4 + 0x28));
      if ((uVar2 & 1) != 0) {
        return param_2;
      }
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + 0x18;
      param_2 = param_2 + 1;
    } while (lVar4 != 0);
  }
  return 0xffffffff;
}


