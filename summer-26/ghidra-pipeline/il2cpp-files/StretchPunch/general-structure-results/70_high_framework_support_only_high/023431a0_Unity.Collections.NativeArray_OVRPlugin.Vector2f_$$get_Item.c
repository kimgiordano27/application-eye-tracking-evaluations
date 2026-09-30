/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$get_Item
ENTRY_POINT: 023431a0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__get_Item(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(0x21);
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar2 = *(int *)(param_1 + 0x1c);
    uVar5 = 0;
    lVar6 = 0x20;
    iVar3 = iVar2;
    do {
      if (iVar2 != iVar3) break;
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) {
LAB_02343280:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      puVar1 = (undefined8 *)(lVar4 + lVar6);
      if (param_2 == 0) goto LAB_02343280;
      in_stack_00000040 = *puVar1;
      in_stack_00000048 = puVar1[1];
      in_stack_00000050 = puVar1[2];
      in_stack_00000058 = puVar1[3];
      in_stack_00000060 = puVar1[4];
      in_stack_00000068 = puVar1[5];
      in_stack_00000070 = puVar1[6];
      (**(code **)(param_2 + 0x18))
                (*(undefined8 *)(param_2 + 0x40),&stack0x00000040,*(undefined8 *)(param_2 + 0x28));
      iVar3 = *(int *)(param_1 + 0x1c);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x38;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x18));
    if (iVar2 != iVar3) {
      FUN_033b33b0(0);
    }
  }
  return;
}


