/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 05f172b0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor
               (undefined8 param_1,undefined8 param_2,int param_3,long param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  uVar7 = unaff_x23;
  while( true ) {
    uVar1 = uVar7 + 1;
    uVar6 = (uint)*(undefined8 *)(unaff_x22 + 0x18);
    if (uVar6 <= (uint)uVar1) break;
    lVar2 = unaff_x22 + uVar1 * 0x20;
    uVar14 = *(undefined8 *)(lVar2 + 0x28);
    uVar12 = *(undefined8 *)(lVar2 + 0x20);
    uVar10 = *(undefined8 *)(lVar2 + 0x38);
    uVar8 = *(undefined8 *)(lVar2 + 0x30);
    if ((long)unaff_x23 <= (long)uVar7) {
      if (uVar6 <= (uint)uVar7) break;
      while( true ) {
        uVar6 = (uint)uVar7;
        lVar2 = unaff_x22 + (long)(int)uVar6 * 0x20;
        uVar15 = *(undefined8 *)(lVar2 + 0x28);
        uVar13 = *(undefined8 *)(lVar2 + 0x20);
        uVar11 = *(undefined8 *)(lVar2 + 0x38);
        uVar9 = *(undefined8 *)(lVar2 + 0x30);
        if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        in_stack_000000e0 = uVar13;
        in_stack_000000e8 = uVar15;
        in_stack_000000f0 = uVar9;
        in_stack_000000f8 = uVar11;
        in_stack_00000100 = uVar12;
        in_stack_00000108 = uVar14;
        in_stack_00000110 = uVar8;
        in_stack_00000118 = uVar10;
        iVar5 = (**(code **)(param_4 + 0x18))
                          (*(undefined8 *)(param_4 + 0x40),&stack0x00000100,&stack0x000000e0,
                           *(undefined8 *)(param_4 + 0x28));
        if (-1 < iVar5) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar6) goto LAB_05f17400;
        uVar13 = *(undefined8 *)(lVar2 + 0x20);
        uVar11 = *(undefined8 *)(lVar2 + 0x38);
        uVar9 = *(undefined8 *)(lVar2 + 0x30);
        if (*(uint *)(unaff_x22 + 0x18) <= uVar6 + 1) goto LAB_05f17400;
        uVar4 = uVar6 - 1;
        uVar7 = (ulong)uVar4;
        lVar3 = unaff_x22 + (long)(int)(uVar6 + 1) * 0x20;
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
        *(undefined8 *)(lVar3 + 0x20) = uVar13;
        *(undefined8 *)(lVar3 + 0x38) = uVar11;
        *(undefined8 *)(lVar3 + 0x30) = uVar9;
        if ((int)uVar4 < unaff_w21) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar4) goto LAB_05f17400;
      }
      uVar6 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar4 = (int)uVar7 + 1;
    if (uVar6 <= uVar4) break;
    lVar2 = unaff_x22 + (long)(int)uVar4 * 0x20;
    *(undefined8 *)(lVar2 + 0x28) = uVar14;
    *(undefined8 *)(lVar2 + 0x20) = uVar12;
    *(undefined8 *)(lVar2 + 0x38) = uVar10;
    *(undefined8 *)(lVar2 + 0x30) = uVar8;
    uVar7 = uVar1;
    if (uVar1 == (long)param_3) {
      return;
    }
  }
LAB_05f17400:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


