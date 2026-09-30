/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 02342da8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
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
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  do {
    puVar1 = (undefined8 *)(param_1 + unaff_x22);
    uStack0000000000000030 = puVar1[6];
    uStack0000000000000018 = puVar1[3];
    uStack0000000000000010 = puVar1[2];
    uStack0000000000000028 = puVar1[5];
    uStack0000000000000020 = puVar1[4];
    uStack0000000000000008 = puVar1[1];
    uStack0000000000000000 = *puVar1;
    if (unaff_x21 == 0) {
LAB_02342e64:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    in_stack_00000040 = uStack0000000000000000;
    in_stack_00000048 = uStack0000000000000008;
    in_stack_00000050 = uStack0000000000000010;
    in_stack_00000058 = uStack0000000000000018;
    in_stack_00000060 = uStack0000000000000020;
    in_stack_00000068 = uStack0000000000000028;
    in_stack_00000070 = uStack0000000000000030;
    uVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x10);
      if (lVar3 == 0) goto LAB_02342e64;
      if ((uint)unaff_x23 < *(uint *)(lVar3 + 0x18)) {
        puVar1 = (undefined8 *)(lVar3 + unaff_x22);
        uVar7 = puVar1[3];
        uVar6 = puVar1[2];
        uVar5 = puVar1[5];
        uVar4 = puVar1[4];
        uVar9 = puVar1[1];
        uVar8 = *puVar1;
        unaff_x19[6] = puVar1[6];
        unaff_x19[3] = uVar7;
        unaff_x19[2] = uVar6;
        unaff_x19[5] = uVar5;
        unaff_x19[4] = uVar4;
        unaff_x19[1] = uVar9;
        *unaff_x19 = uVar8;
        return;
      }
      goto LAB_02342e68;
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x22 = unaff_x22 + 0x38;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x23) {
      unaff_x19[6] = 0;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      unaff_x19[5] = 0;
      unaff_x19[4] = 0;
      unaff_x19[1] = 0;
      *unaff_x19 = 0;
      return;
    }
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) goto LAB_02342e64;
    if (*(uint *)(param_1 + 0x18) <= unaff_x23) {
LAB_02342e68:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
  } while( true );
}


