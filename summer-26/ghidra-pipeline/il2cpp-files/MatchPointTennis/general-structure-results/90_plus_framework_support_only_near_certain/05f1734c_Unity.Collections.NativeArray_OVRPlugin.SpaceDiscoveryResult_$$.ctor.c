/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 05f1734c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor
               (code *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  uint uVar5;
  ulong unaff_x26;
  ulong uVar6;
  long unaff_x27;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  do {
    iVar3 = (*param_1)(param_2,param_3,param_4,param_5);
    if (iVar3 < 0) {
      uVar5 = (uint)unaff_x26;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_05f17400;
      uVar9 = *(undefined8 *)(unaff_x27 + 0x20);
      uVar8 = *(undefined8 *)(unaff_x27 + 0x38);
      uVar7 = *(undefined8 *)(unaff_x27 + 0x30);
      if (*(uint *)(unaff_x22 + 0x18) <= uVar5 + 1) goto LAB_05f17400;
      uVar2 = uVar5 - 1;
      unaff_x26 = (ulong)uVar2;
      lVar1 = unaff_x22 + (long)(int)(uVar5 + 1) * 0x20;
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(unaff_x27 + 0x28);
      *(undefined8 *)(lVar1 + 0x20) = uVar9;
      *(undefined8 *)(lVar1 + 0x38) = uVar8;
      *(undefined8 *)(lVar1 + 0x30) = uVar7;
      if ((int)uVar2 < unaff_w21) goto LAB_05f173ac;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar2) goto LAB_05f17400;
    }
    else {
LAB_05f173ac:
      uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar6 = unaff_x26;
      do {
        unaff_x26 = unaff_x25;
        uVar5 = (int)uVar6 + 1;
        if ((uint)uVar4 <= uVar5) goto LAB_05f17400;
        lVar1 = unaff_x22 + (long)(int)uVar5 * 0x20;
        *(undefined8 *)(lVar1 + 0x28) = in_stack_000000c8;
        *(undefined8 *)(lVar1 + 0x20) = in_stack_000000c0;
        *(undefined8 *)(lVar1 + 0x38) = in_stack_000000d8;
        *(undefined8 *)(lVar1 + 0x30) = in_stack_000000d0;
        if (unaff_x26 == unaff_x24) {
          return;
        }
        uVar4 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x25 = unaff_x26 + 1;
        if ((uint)uVar4 <= (uint)unaff_x25) goto LAB_05f17400;
        lVar1 = unaff_x22 + unaff_x25 * 0x20;
        in_stack_000000c8 = *(undefined8 *)(lVar1 + 0x28);
        in_stack_000000c0 = *(undefined8 *)(lVar1 + 0x20);
        in_stack_000000d8 = *(undefined8 *)(lVar1 + 0x38);
        in_stack_000000d0 = *(undefined8 *)(lVar1 + 0x30);
        uVar6 = unaff_x26;
      } while ((long)unaff_x26 < unaff_x23);
      if ((uint)uVar4 <= (uint)unaff_x26) {
LAB_05f17400:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
    }
    unaff_x27 = unaff_x22 + (long)(int)unaff_x26 * 0x20;
    uVar10 = *(undefined8 *)(unaff_x27 + 0x28);
    uVar9 = *(undefined8 *)(unaff_x27 + 0x20);
    uVar8 = *(undefined8 *)(unaff_x27 + 0x38);
    uVar7 = *(undefined8 *)(unaff_x27 + 0x30);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    param_1 = *(code **)(unaff_x20 + 0x18);
    param_2 = *(undefined8 *)(unaff_x20 + 0x40);
    in_stack_00000108 = in_stack_000000c8;
    in_stack_00000100 = in_stack_000000c0;
    in_stack_00000118 = in_stack_000000d8;
    in_stack_00000110 = in_stack_000000d0;
    param_5 = *(undefined8 *)(unaff_x20 + 0x28);
    param_3 = &stack0x00000100;
    param_4 = &stack0x000000e0;
    in_stack_000000e0 = uVar9;
    in_stack_000000e8 = uVar10;
    in_stack_000000f0 = uVar7;
    in_stack_000000f8 = uVar8;
  } while( true );
}


