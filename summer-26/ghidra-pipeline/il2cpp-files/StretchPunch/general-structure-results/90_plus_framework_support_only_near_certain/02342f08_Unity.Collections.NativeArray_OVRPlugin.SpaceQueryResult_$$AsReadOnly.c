/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsReadOnly
ENTRY_POINT: 02342f08
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsReadOnly
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 in_x9;
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
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  uStack0000000000000048 = param_3._8_8_;
  uStack0000000000000040 = param_3._0_8_;
  uStack0000000000000058 = param_2._8_8_;
  uStack0000000000000050 = param_2._0_8_;
  uStack0000000000000068 = param_1._8_8_;
  uStack0000000000000060 = param_1._0_8_;
  while( true ) {
    uStack0000000000000070 = in_x9;
    if (unaff_x20 == 0) break;
    uStack0000000000000070 = in_x9;
    in_stack_00000080 = uStack0000000000000040;
    in_stack_00000088 = uStack0000000000000048;
    in_stack_00000090 = uStack0000000000000050;
    in_stack_00000098 = uStack0000000000000058;
    in_stack_000000a0 = uStack0000000000000060;
    in_stack_000000a8 = uStack0000000000000068;
    in_stack_000000b0 = in_x9;
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_02343064;
      puVar1 = (undefined8 *)(lVar4 + unaff_x24);
      uVar5 = puVar1[6];
      uVar9 = puVar1[3];
      uVar8 = puVar1[2];
      uVar7 = puVar1[5];
      uVar6 = puVar1[4];
      uVar11 = puVar1[1];
      uVar10 = *puVar1;
      if (unaff_x22 == 0) break;
      lVar4 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      uStack0000000000000040 = uVar10;
      uStack0000000000000048 = uVar11;
      uStack0000000000000050 = uVar8;
      uStack0000000000000058 = uVar9;
      uStack0000000000000060 = uVar6;
      uStack0000000000000068 = uVar7;
      uStack0000000000000070 = uVar5;
      if (lVar4 == 0) break;
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      if (uVar2 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
        lVar4 = lVar4 + (int)uVar2 * unaff_x25;
        *(undefined8 *)(lVar4 + 0x50) = uVar5;
        *(undefined8 *)(lVar4 + 0x38) = uVar9;
        *(undefined8 *)(lVar4 + 0x30) = uVar8;
        *(undefined8 *)(lVar4 + 0x48) = uVar7;
        *(undefined8 *)(lVar4 + 0x40) = uVar6;
        *(undefined8 *)(lVar4 + 0x28) = uVar11;
        *(undefined8 *)(lVar4 + 0x20) = uVar10;
        thunk_FUN_01e10808(lVar4 + 0x20,0);
      }
      else {
        in_stack_00000080 = uVar10;
        in_stack_00000088 = uVar11;
        in_stack_00000090 = uVar8;
        in_stack_00000098 = uVar9;
        in_stack_000000a0 = uVar6;
        in_stack_000000a8 = uVar7;
        in_stack_000000b0 = uVar5;
        FUN_02342528();
      }
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x38;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
      return;
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) {
LAB_02343064:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    in_x9 = puVar1[6];
    uStack0000000000000058 = puVar1[3];
    uStack0000000000000050 = puVar1[2];
    uStack0000000000000068 = puVar1[5];
    uStack0000000000000060 = puVar1[4];
    uStack0000000000000048 = puVar1[1];
    uStack0000000000000040 = *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


