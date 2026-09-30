/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 058a6f1c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__Dispose(long param_1)

{
  long lVar1;
  char in_NG;
  char in_OV;
  undefined8 *puVar2;
  int in_w8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000068;
  
  if (in_NG == in_OV) {
    lVar3 = *(long *)(unaff_x21 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar4 = 0;
    puVar5 = (undefined8 *)(lVar3 + 0x2c);
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_058a7114;
      if (-1 < *(int *)((long)puVar5 + -0xc)) {
        in_stack_00000068._4_4_ = *(undefined4 *)((long)puVar5 + -4);
        thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                           (long)&stack0x00000068 + 4);
        if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_058a7114:
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        in_stack_00000050 = puVar5[2];
        in_stack_00000048 = puVar5[1];
        in_stack_00000040 = *puVar5;
        thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                           &stack0x00000040);
        FUN_05da3e28();
        if (*(uint *)(param_1 + 0x18) <= unaff_w20) goto LAB_058a7114;
        lVar1 = param_1 + (long)(int)unaff_w20 * 0x10;
        puVar2 = (undefined8 *)(lVar1 + 0x20);
        *(undefined8 *)(lVar1 + 0x28) = 0;
        *puVar2 = 0;
        unaff_w20 = unaff_w20 + 1;
        thunk_FUN_0329bf60(puVar2,0);
        in_w8 = *(int *)(unaff_x21 + 0x20);
      }
      uVar4 = uVar4 + 1;
      puVar5 = (undefined8 *)((long)puVar5 + 0x24);
    } while ((long)uVar4 < (long)in_w8);
  }
  return;
}


