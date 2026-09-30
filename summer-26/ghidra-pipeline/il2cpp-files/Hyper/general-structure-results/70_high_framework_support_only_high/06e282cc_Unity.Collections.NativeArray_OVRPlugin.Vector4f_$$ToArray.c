/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$ToArray
ENTRY_POINT: 06e282cc
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__ToArray(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  int in_w8;
  long lVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  if (0 < in_w8) {
    uVar5 = 0;
    lVar4 = 0x20;
    do {
      lVar3 = *(long *)(unaff_x20 + 0x10);
      if (lVar3 == 0) goto LAB_06e28388;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_06e2838c:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      if (unaff_x21 == 0) {
LAB_06e28388:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      in_stack_00000048 = puVar1[1];
      in_stack_00000040 = *puVar1;
      in_stack_00000058 = puVar1[3];
      in_stack_00000050 = puVar1[2];
      in_stack_00000068 = puVar1[5];
      in_stack_00000060 = puVar1[4];
      in_stack_00000078 = puVar1[7];
      in_stack_00000070 = puVar1[6];
      uVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x21 + 0x28));
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(unaff_x20 + 0x10);
        if (lVar3 != 0) {
          if ((uint)uVar5 < *(uint *)(lVar3 + 0x18)) {
            puVar1 = (undefined8 *)(lVar3 + lVar4);
            uVar6 = *puVar1;
            uVar8 = puVar1[3];
            uVar7 = puVar1[2];
            unaff_x19[1] = puVar1[1];
            *unaff_x19 = uVar6;
            unaff_x19[3] = uVar8;
            unaff_x19[2] = uVar7;
            uVar6 = puVar1[4];
            uVar8 = puVar1[7];
            uVar7 = puVar1[6];
            unaff_x19[5] = puVar1[5];
            unaff_x19[4] = uVar6;
            unaff_x19[7] = uVar8;
            unaff_x19[6] = uVar7;
            return;
          }
          goto LAB_06e2838c;
        }
        goto LAB_06e28388;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x40;
    } while ((long)uVar5 < (long)*(int *)(unaff_x20 + 0x18));
  }
  unaff_x19[1] = 0;
  *unaff_x19 = 0;
  unaff_x19[3] = 0;
  unaff_x19[2] = 0;
  unaff_x19[5] = 0;
  unaff_x19[4] = 0;
  unaff_x19[7] = 0;
  unaff_x19[6] = 0;
  return;
}


