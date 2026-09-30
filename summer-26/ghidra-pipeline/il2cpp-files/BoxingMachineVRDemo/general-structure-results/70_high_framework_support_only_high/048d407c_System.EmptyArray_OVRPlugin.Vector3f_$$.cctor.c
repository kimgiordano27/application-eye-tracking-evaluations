/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector3f>$$.cctor
ENTRY_POINT: 048d407c
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


void System_EmptyArray<OVRPlugin_Vector3f>___cctor(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar1 = *(uint *)(unaff_x22 + 0x20);
  if ((int)(*(int *)(unaff_x21 + 0x18) - unaff_w20) < (int)(uVar1 - *(int *)(unaff_x22 + 0x28))) {
    FUN_05027654(5,0);
    uVar1 = *(uint *)(unaff_x22 + 0x20);
  }
  if (0 < (int)uVar1) {
    lVar3 = *(long *)(unaff_x22 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar4 = 0;
    puVar5 = (undefined4 *)(lVar3 + 0x38);
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_048d4174:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      if (-1 < (int)puVar5[-6]) {
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
        in_stack_00000028 = 0;
        FUN_0390cea8(puVar5[-2],puVar5[-1],*puVar5,&stack0x00000018,*(undefined8 *)(puVar5 + -4),
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x150));
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_048d4174;
        lVar2 = unaff_x21 + (long)(int)unaff_w20 * 0x18;
        unaff_w20 = unaff_w20 + 1;
        *(undefined8 *)(lVar2 + 0x30) = in_stack_00000028;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000020;
        *(undefined8 *)(lVar2 + 0x20) = in_stack_00000018;
        thunk_FUN_02dd37b4(lVar2 + 0x20,0);
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 8;
    } while (uVar1 != uVar4);
  }
  return;
}


