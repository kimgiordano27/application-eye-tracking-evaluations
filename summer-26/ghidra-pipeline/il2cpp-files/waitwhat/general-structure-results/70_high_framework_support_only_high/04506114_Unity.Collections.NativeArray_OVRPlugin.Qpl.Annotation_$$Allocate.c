/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Allocate
ENTRY_POINT: 04506114
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Allocate(void)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  int unaff_w26;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  
  uVar6 = in_stack_00000040;
  uVar7 = in_stack_00000048;
  uVar5 = in_stack_00000050;
code_r0x04506114:
  in_stack_00000050 = uVar5;
  in_stack_00000048 = uVar7;
  in_stack_00000040 = uVar6;
  FUN_04505628();
LAB_0450611c:
  do {
    unaff_x24 = unaff_x24 + 1;
    unaff_x25 = unaff_x25 + 0x18;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000058) {
        return;
      }
      goto LAB_04506188;
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) goto LAB_04506160;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x24) goto LAB_04506174;
    if (unaff_x20 == 0) goto LAB_04506160;
    puVar1 = (undefined8 *)(lVar4 + unaff_x25);
    in_stack_00000048 = puVar1[1];
    in_stack_00000040 = *puVar1;
    in_stack_00000050 = puVar1[2];
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
  } while ((uVar3 & 1) == 0);
  lVar4 = *(long *)(unaff_x21 + 0x10);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= unaff_x24) {
LAB_04506174:
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      goto LAB_04506188;
    }
    if (unaff_x22 != 0) {
      puVar1 = (undefined8 *)(lVar4 + unaff_x25);
      uVar7 = puVar1[1];
      uVar6 = *puVar1;
      uVar5 = puVar1[2];
      lVar4 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar2 * (long)unaff_w26;
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar4 + 0x28) = uVar7;
          *(undefined8 *)(lVar4 + 0x20) = uVar6;
          *(undefined8 *)(lVar4 + 0x30) = uVar5;
          goto LAB_0450611c;
        }
        goto code_r0x04506114;
      }
    }
  }
LAB_04506160:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
LAB_04506188:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


