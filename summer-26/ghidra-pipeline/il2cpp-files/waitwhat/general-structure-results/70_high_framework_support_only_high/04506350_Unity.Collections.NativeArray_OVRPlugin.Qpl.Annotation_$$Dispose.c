/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 04506350
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Dispose(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  uint in_w9;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  do {
    if (in_w9 <= unaff_w23) {
LAB_04506414:
      if (*(long *)(unaff_x22 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
LAB_04506428:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (unaff_x21 == 0) {
LAB_04506400:
      if (*(long *)(unaff_x22 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_04506428;
    }
    uVar4 = unaff_x24 & 0xffffffff;
    param_1 = param_1 + uVar4 * (unaff_x25 & 0xffffffff);
    in_stack_00000028 = *(undefined8 *)(param_1 + 0x28);
    in_stack_00000020 = *(undefined8 *)(param_1 + 0x20);
    in_stack_00000030 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000020,
                       *(undefined8 *)(unaff_x21 + 0x28));
    unaff_x24 = unaff_x24 - 1;
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + 0x10);
      if (lVar2 == 0) goto LAB_04506400;
      if (unaff_w23 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = lVar2 + uVar4 * 0x18;
        uVar5 = *(undefined8 *)(lVar2 + 0x20);
        uVar3 = *(undefined8 *)(lVar2 + 0x30);
        unaff_x19[1] = *(undefined8 *)(lVar2 + 0x28);
        *unaff_x19 = uVar5;
        unaff_x19[2] = uVar3;
LAB_045063d4:
        if (*(long *)(unaff_x22 + 0x28) == in_stack_00000038) {
          return;
        }
        goto LAB_04506428;
      }
      goto LAB_04506414;
    }
    unaff_w23 = unaff_w23 - 1;
    if ((int)unaff_w23 < 0) {
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      goto LAB_045063d4;
    }
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) goto LAB_04506400;
    in_w9 = *(uint *)(param_1 + 0x18);
  } while( true );
}


