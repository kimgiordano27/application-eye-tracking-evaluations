/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 02342ff4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>___ctor(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  do {
    thunk_FUN_01e10808(param_1,param_2);
LAB_0234302c:
    do {
      unaff_x23 = unaff_x23 + 1;
      unaff_x24 = unaff_x24 + 0x38;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
        return;
      }
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) goto LAB_02343060;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_02343064;
      puVar1 = (undefined8 *)(lVar4 + unaff_x24);
      if (unaff_x20 == 0) goto LAB_02343060;
      in_stack_00000080 = *puVar1;
      in_stack_00000088 = puVar1[1];
      in_stack_00000090 = puVar1[2];
      in_stack_00000098 = puVar1[3];
      in_stack_000000a0 = puVar1[4];
      in_stack_000000a8 = puVar1[5];
      in_stack_000000b0 = puVar1[6];
      uVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                         *(undefined8 *)(unaff_x20 + 0x28));
    } while ((uVar3 & 1) == 0);
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) {
LAB_02343060:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) {
LAB_02343064:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    uVar5 = puVar1[6];
    uVar9 = puVar1[3];
    uVar8 = puVar1[2];
    uVar7 = puVar1[5];
    uVar6 = puVar1[4];
    uVar11 = puVar1[1];
    uVar10 = *puVar1;
    if (unaff_x22 == 0) goto LAB_02343060;
    lVar4 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_02343060;
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    if (*(uint *)(lVar4 + 0x18) <= uVar2) {
      in_stack_00000080 = uVar10;
      in_stack_00000088 = uVar11;
      in_stack_00000090 = uVar8;
      in_stack_00000098 = uVar9;
      in_stack_000000a0 = uVar6;
      in_stack_000000a8 = uVar7;
      in_stack_000000b0 = uVar5;
      FUN_02342528();
      goto LAB_0234302c;
    }
    *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
    lVar4 = lVar4 + (int)uVar2 * unaff_x25;
    param_1 = lVar4 + 0x20;
    param_2 = 0;
    *(undefined8 *)(lVar4 + 0x50) = uVar5;
    *(undefined8 *)(lVar4 + 0x38) = uVar9;
    *(undefined8 *)(lVar4 + 0x30) = uVar8;
    *(undefined8 *)(lVar4 + 0x48) = uVar7;
    *(undefined8 *)(lVar4 + 0x40) = uVar6;
    *(undefined8 *)(lVar4 + 0x28) = uVar11;
    *(undefined8 *)(lVar4 + 0x20) = uVar10;
  } while( true );
}


