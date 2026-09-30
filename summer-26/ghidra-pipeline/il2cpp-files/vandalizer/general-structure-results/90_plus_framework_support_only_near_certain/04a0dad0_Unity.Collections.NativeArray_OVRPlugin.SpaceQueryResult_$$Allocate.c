/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Allocate
ENTRY_POINT: 04a0dad0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Allocate
               (undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  int unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  
  uVar8 = unaff_x23;
  while( true ) {
    uVar1 = uVar8 + 1;
    uVar5 = (uint)*(undefined8 *)(unaff_x22 + 0x18);
    if (uVar5 <= (uint)uVar1) break;
    lVar7 = unaff_x22 + uVar1 * 0x30;
    uVar15 = *(undefined8 *)(lVar7 + 0x38);
    uVar13 = *(undefined8 *)(lVar7 + 0x30);
    uVar11 = *(undefined8 *)(lVar7 + 0x48);
    uVar9 = *(undefined8 *)(lVar7 + 0x40);
    uVar19 = *(undefined8 *)(lVar7 + 0x28);
    uVar17 = *(undefined8 *)(lVar7 + 0x20);
    if ((long)unaff_x23 <= (long)uVar8) {
      bVar3 = uVar5 <= (uint)uVar8;
      while( true ) {
        if (bVar3) goto LAB_04a0dc68;
        uVar5 = (uint)uVar8;
        lVar7 = unaff_x22 + (long)(int)uVar5 * 0x30;
        uVar16 = *(undefined8 *)(lVar7 + 0x38);
        uVar14 = *(undefined8 *)(lVar7 + 0x30);
        uVar12 = *(undefined8 *)(lVar7 + 0x48);
        uVar10 = *(undefined8 *)(lVar7 + 0x40);
        uVar20 = *(undefined8 *)(lVar7 + 0x28);
        uVar18 = *(undefined8 *)(lVar7 + 0x20);
        if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        in_stack_00000150 = uVar18;
        in_stack_00000158 = uVar20;
        in_stack_00000160 = uVar14;
        in_stack_00000168 = uVar16;
        in_stack_00000170 = uVar10;
        in_stack_00000178 = uVar12;
        in_stack_00000180 = uVar17;
        in_stack_00000188 = uVar19;
        in_stack_00000190 = uVar13;
        in_stack_00000198 = uVar15;
        in_stack_000001a0 = uVar9;
        in_stack_000001a8 = uVar11;
        iVar4 = (**(code **)(param_4 + 0x18))
                          (*(undefined8 *)(param_4 + 0x40),&stack0x00000180,&stack0x00000150,
                           *(undefined8 *)(param_4 + 0x28));
        if (-1 < iVar4) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_04a0dc68;
        uVar18 = *(undefined8 *)(lVar7 + 0x30);
        uVar12 = *(undefined8 *)(lVar7 + 0x48);
        uVar10 = *(undefined8 *)(lVar7 + 0x40);
        uVar16 = *(undefined8 *)(lVar7 + 0x28);
        uVar14 = *(undefined8 *)(lVar7 + 0x20);
        if (*(uint *)(unaff_x22 + 0x18) <= uVar5 + 1) goto LAB_04a0dc68;
        uVar2 = uVar5 - 1;
        uVar8 = (ulong)uVar2;
        lVar6 = unaff_x22 + (long)(int)(uVar5 + 1) * 0x30;
        *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(lVar7 + 0x38);
        *(undefined8 *)(lVar6 + 0x30) = uVar18;
        *(undefined8 *)(lVar6 + 0x48) = uVar12;
        *(undefined8 *)(lVar6 + 0x40) = uVar10;
        *(undefined8 *)(lVar6 + 0x28) = uVar16;
        *(undefined8 *)(lVar6 + 0x20) = uVar14;
        if ((int)uVar2 < unaff_w21) break;
        bVar3 = *(uint *)(unaff_x22 + 0x18) <= uVar2;
      }
      uVar5 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar2 = (int)uVar8 + 1;
    if (uVar5 <= uVar2) break;
    lVar7 = unaff_x22 + (long)(int)uVar2 * 0x30;
    *(undefined8 *)(lVar7 + 0x38) = uVar15;
    *(undefined8 *)(lVar7 + 0x30) = uVar13;
    *(undefined8 *)(lVar7 + 0x48) = uVar11;
    *(undefined8 *)(lVar7 + 0x40) = uVar9;
    *(undefined8 *)(lVar7 + 0x28) = uVar19;
    *(undefined8 *)(lVar7 + 0x20) = uVar17;
    uVar8 = uVar1;
    if (uVar1 == (long)param_3) {
      return;
    }
  }
LAB_04a0dc68:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


