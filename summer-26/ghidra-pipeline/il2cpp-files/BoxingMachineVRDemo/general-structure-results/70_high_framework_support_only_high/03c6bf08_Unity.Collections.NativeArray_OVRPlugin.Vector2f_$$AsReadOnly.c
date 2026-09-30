/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$AsReadOnly
ENTRY_POINT: 03c6bf08
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__AsReadOnly
               (long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long unaff_x22;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long lStack0000000000000038;
  
  lStack0000000000000038 = param_1;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050188b4(8);
  }
  if (0 < *(int *)(param_2 + 0x18)) {
    uVar5 = 0;
    lVar4 = 0x20;
    do {
      lVar3 = *(long *)(param_2 + 0x10);
      if (lVar3 == 0) goto LAB_03c6bff8;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_03c6bffc:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      if (param_3 == 0) {
LAB_03c6bff8:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      in_stack_00000020 = *puVar1;
      in_stack_00000028 = puVar1[1];
      in_stack_00000030 = puVar1[2];
      uVar2 = (**(code **)(param_3 + 0x18))
                        (*(undefined8 *)(param_3 + 0x40),&stack0x00000020,
                         *(undefined8 *)(param_3 + 0x28));
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(param_2 + 0x10);
        if (lVar3 == 0) goto LAB_03c6bff8;
        if (*(uint *)(lVar3 + 0x18) <= (uint)uVar5) goto LAB_03c6bffc;
        puVar1 = (undefined8 *)(lVar3 + lVar4);
        uVar7 = puVar1[1];
        uVar6 = *puVar1;
        unaff_x19[2] = puVar1[2];
        unaff_x19[1] = uVar7;
        *unaff_x19 = uVar6;
        goto LAB_03c6bfd0;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while ((long)uVar5 < (long)*(int *)(param_2 + 0x18));
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
LAB_03c6bfd0:
  if (*(long *)(unaff_x22 + 0x28) == lStack0000000000000038) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


