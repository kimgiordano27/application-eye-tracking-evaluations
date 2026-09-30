/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$get_IsCreated
ENTRY_POINT: 059ce96c
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__get_IsCreated(void)

{
  undefined8 *puVar1;
  uint uVar2;
  char in_NG;
  char in_OV;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (in_NG == in_OV) {
    uVar5 = 0;
    lVar6 = 0x20;
    do {
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) goto LAB_059cea74;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_059cea78:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      if (unaff_x20 == 0) goto LAB_059cea74;
      puVar1 = (undefined8 *)(lVar4 + lVar6);
      in_stack_00000048 = puVar1[1];
      in_stack_00000040 = *puVar1;
      in_stack_00000058 = puVar1[3];
      in_stack_00000050 = puVar1[2];
      uVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(unaff_x21 + 0x10);
        if (lVar4 == 0) goto LAB_059cea74;
        if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_059cea78;
        if (unaff_x22 == 0) {
LAB_059cea74:
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        puVar1 = (undefined8 *)(lVar4 + lVar6);
        uVar8 = puVar1[1];
        uVar7 = *puVar1;
        uVar10 = puVar1[3];
        uVar9 = puVar1[2];
        lVar4 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_059cea74;
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar2 * 0x20;
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar4 + 0x28) = uVar8;
          *(undefined8 *)(lVar4 + 0x20) = uVar7;
          *(undefined8 *)(lVar4 + 0x38) = uVar10;
          *(undefined8 *)(lVar4 + 0x30) = uVar9;
        }
        else {
          in_stack_00000040 = uVar7;
          in_stack_00000048 = uVar8;
          in_stack_00000050 = uVar9;
          in_stack_00000058 = uVar10;
          FUN_059ce150();
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while ((long)uVar5 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return;
}


