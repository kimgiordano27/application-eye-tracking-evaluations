/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 05f173d4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined1 in_ZR;
  int iVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  uVar9 = param_3._8_8_;
  uVar7 = param_3._0_8_;
  uVar13 = param_2._8_8_;
  uVar11 = param_2._0_8_;
  while( true ) {
    *(undefined8 *)(param_1 + 0x28) = uVar13;
    *(undefined8 *)(param_1 + 0x20) = uVar11;
    *(undefined8 *)(param_1 + 0x38) = uVar9;
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    if ((bool)in_ZR) {
      return;
    }
    uVar1 = unaff_x25 + 1;
    uVar6 = (uint)*(undefined8 *)(unaff_x22 + 0x18);
    if (uVar6 <= (uint)uVar1) break;
    lVar2 = unaff_x22 + uVar1 * 0x20;
    uVar13 = *(undefined8 *)(lVar2 + 0x28);
    uVar11 = *(undefined8 *)(lVar2 + 0x20);
    uVar9 = *(undefined8 *)(lVar2 + 0x38);
    uVar7 = *(undefined8 *)(lVar2 + 0x30);
    if (unaff_x23 <= (long)unaff_x25) {
      if (uVar6 <= (uint)unaff_x25) break;
      while( true ) {
        uVar6 = (uint)unaff_x25;
        lVar2 = unaff_x22 + (long)(int)uVar6 * 0x20;
        uVar14 = *(undefined8 *)(lVar2 + 0x28);
        uVar12 = *(undefined8 *)(lVar2 + 0x20);
        uVar10 = *(undefined8 *)(lVar2 + 0x38);
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        in_stack_000000e0 = uVar12;
        in_stack_000000e8 = uVar14;
        in_stack_000000f0 = uVar8;
        in_stack_000000f8 = uVar10;
        in_stack_00000100 = uVar11;
        in_stack_00000108 = uVar13;
        in_stack_00000110 = uVar7;
        in_stack_00000118 = uVar9;
        iVar5 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000100,&stack0x000000e0,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar5) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar6) goto LAB_05f17400;
        uVar12 = *(undefined8 *)(lVar2 + 0x20);
        uVar10 = *(undefined8 *)(lVar2 + 0x38);
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
        if (*(uint *)(unaff_x22 + 0x18) <= uVar6 + 1) goto LAB_05f17400;
        uVar4 = uVar6 - 1;
        unaff_x25 = (ulong)uVar4;
        lVar3 = unaff_x22 + (long)(int)(uVar6 + 1) * 0x20;
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
        *(undefined8 *)(lVar3 + 0x20) = uVar12;
        *(undefined8 *)(lVar3 + 0x38) = uVar10;
        *(undefined8 *)(lVar3 + 0x30) = uVar8;
        if ((int)uVar4 < unaff_w21) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar4) goto LAB_05f17400;
      }
      uVar6 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar4 = (int)unaff_x25 + 1;
    if (uVar6 <= uVar4) break;
    in_ZR = uVar1 == unaff_x24;
    param_1 = unaff_x22 + (long)(int)uVar4 * 0x20;
    unaff_x25 = uVar1;
  }
LAB_05f17400:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


