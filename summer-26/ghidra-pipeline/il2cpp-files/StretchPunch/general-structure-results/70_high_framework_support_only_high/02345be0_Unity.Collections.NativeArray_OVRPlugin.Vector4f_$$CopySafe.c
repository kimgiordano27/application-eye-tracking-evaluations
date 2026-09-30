/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 02345be0
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong in_x9;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  do {
    if (in_x9 <= unaff_x23) {
LAB_02345c8c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    puVar1 = (undefined8 *)(param_1 + unaff_x22);
    if (unaff_x21 == 0) {
LAB_02345c88:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    in_stack_00000040 = *puVar1;
    in_stack_00000048 = puVar1[1];
    in_stack_00000050 = puVar1[2];
    in_stack_00000058 = puVar1[3];
    in_stack_00000060 = puVar1[4];
    in_stack_00000068 = puVar1[5];
    in_stack_00000070 = puVar1[6];
    in_stack_00000078 = puVar1[7];
    uVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x10);
      if (lVar3 == 0) goto LAB_02345c88;
      if ((uint)unaff_x23 < *(uint *)(lVar3 + 0x18)) {
        puVar1 = (undefined8 *)(lVar3 + unaff_x22);
        uVar6 = puVar1[4];
        uVar5 = puVar1[7];
        uVar4 = puVar1[6];
        uVar10 = puVar1[1];
        uVar9 = *puVar1;
        uVar8 = puVar1[3];
        uVar7 = puVar1[2];
        unaff_x19[5] = puVar1[5];
        unaff_x19[4] = uVar6;
        unaff_x19[7] = uVar5;
        unaff_x19[6] = uVar4;
        unaff_x19[1] = uVar10;
        *unaff_x19 = uVar9;
        unaff_x19[3] = uVar8;
        unaff_x19[2] = uVar7;
        return;
      }
      goto LAB_02345c8c;
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x22 = unaff_x22 + 0x40;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x23) {
      unaff_x19[5] = 0;
      unaff_x19[4] = 0;
      unaff_x19[7] = 0;
      unaff_x19[6] = 0;
      unaff_x19[1] = 0;
      *unaff_x19 = 0;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      return;
    }
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) goto LAB_02345c88;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  } while( true );
}


