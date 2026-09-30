/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 0474adc0
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>___ctor(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  uVar1 = *(uint *)(unaff_x22 + 0x20);
  if (0 < (int)uVar1) {
    lVar3 = *(long *)(unaff_x22 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar4 = 0;
    puVar5 = (undefined8 *)(lVar3 + 0x40);
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_0474ae7c:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      if (-1 < *(int *)(puVar5 + -4)) {
        in_stack_00000070 = puVar5[-1];
        in_stack_00000068 = puVar5[-2];
        in_stack_00000060 = puVar5[-3];
        in_stack_00000048 = 0;
        in_stack_00000040 = 0;
        in_stack_00000058 = 0;
        in_stack_00000050 = 0;
        FUN_037e2e10(&stack0x00000040,&stack0x00000060,*puVar5,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x150));
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_0474ae7c;
        lVar2 = (long)(int)unaff_w20;
        unaff_w20 = unaff_w20 + 1;
        lVar2 = unaff_x21 + lVar2 * 0x20;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000048;
        *(undefined8 *)(lVar2 + 0x20) = in_stack_00000040;
        *(undefined8 *)(lVar2 + 0x38) = in_stack_00000058;
        *(undefined8 *)(lVar2 + 0x30) = in_stack_00000050;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 5;
    } while (uVar1 != uVar4);
  }
  return;
}


