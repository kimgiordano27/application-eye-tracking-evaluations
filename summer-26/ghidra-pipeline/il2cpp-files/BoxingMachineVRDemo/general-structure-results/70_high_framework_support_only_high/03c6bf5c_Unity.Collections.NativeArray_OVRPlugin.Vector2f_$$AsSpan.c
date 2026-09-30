/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$AsSpan
ENTRY_POINT: 03c6bf5c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__AsSpan(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  do {
    if (unaff_x21 == 0) {
LAB_03c6bff8:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    in_stack_00000028 = in_stack_00000008;
    in_stack_00000020 = in_stack_00000000;
    in_stack_00000030 = in_stack_00000010;
    uVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000020,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x10);
      if (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x24) {
LAB_03c6bffc:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        puVar1 = (undefined8 *)(lVar3 + unaff_x23);
        uVar5 = puVar1[1];
        uVar4 = *puVar1;
        unaff_x19[2] = puVar1[2];
        unaff_x19[1] = uVar5;
        *unaff_x19 = uVar4;
LAB_03c6bfd0:
        if (*(long *)(unaff_x22 + 0x28) == in_stack_00000038) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      goto LAB_03c6bff8;
    }
    unaff_x24 = unaff_x24 + 1;
    unaff_x23 = unaff_x23 + 0x18;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x24) {
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      goto LAB_03c6bfd0;
    }
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) goto LAB_03c6bff8;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x24) goto LAB_03c6bffc;
    puVar1 = (undefined8 *)(lVar3 + unaff_x23);
    in_stack_00000010 = puVar1[2];
    in_stack_00000008 = puVar1[1];
    in_stack_00000000 = *puVar1;
  } while( true );
}


