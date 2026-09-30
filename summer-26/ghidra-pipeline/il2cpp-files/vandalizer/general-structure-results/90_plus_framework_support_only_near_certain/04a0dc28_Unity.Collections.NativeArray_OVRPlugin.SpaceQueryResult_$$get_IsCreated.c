/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_IsCreated
ENTRY_POINT: 04a0dc28
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_IsCreated
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  int iVar8;
  long unaff_x25;
  ulong unaff_x26;
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
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
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
  
  uVar15 = param_3._8_8_;
  uVar13 = param_3._0_8_;
  uVar11 = param_1._8_8_;
  uVar9 = param_1._0_8_;
  do {
    iVar8 = (int)unaff_x25;
    lVar7 = unaff_x22 + (long)(int)in_w9 * (long)iVar8;
    *(undefined8 *)(lVar7 + 0x38) = uVar15;
    *(undefined8 *)(lVar7 + 0x30) = uVar13;
    *(undefined8 *)(lVar7 + 0x48) = uVar11;
    *(undefined8 *)(lVar7 + 0x40) = uVar9;
    *(undefined8 *)(lVar7 + 0x28) = in_stack_00000008;
    *(undefined8 *)(lVar7 + 0x20) = in_stack_00000000;
    if (unaff_x26 == unaff_x24) {
      return;
    }
    uVar1 = unaff_x26 + 1;
    uVar5 = (uint)*(undefined8 *)(unaff_x22 + 0x18);
    if (uVar5 <= (uint)uVar1) break;
    lVar7 = unaff_x22 + uVar1 * unaff_x25;
    uVar15 = *(undefined8 *)(lVar7 + 0x38);
    uVar13 = *(undefined8 *)(lVar7 + 0x30);
    uVar11 = *(undefined8 *)(lVar7 + 0x48);
    uVar9 = *(undefined8 *)(lVar7 + 0x40);
    in_stack_00000008 = *(undefined8 *)(lVar7 + 0x28);
    in_stack_00000000 = *(undefined8 *)(lVar7 + 0x20);
    if (unaff_x23 <= (long)unaff_x26) {
      bVar3 = uVar5 <= (uint)unaff_x26;
      while( true ) {
        if (bVar3) goto LAB_04a0dc68;
        uVar5 = (uint)unaff_x26;
        lVar7 = unaff_x22 + (long)(int)uVar5 * (long)iVar8;
        uVar16 = *(undefined8 *)(lVar7 + 0x38);
        uVar14 = *(undefined8 *)(lVar7 + 0x30);
        uVar12 = *(undefined8 *)(lVar7 + 0x48);
        uVar10 = *(undefined8 *)(lVar7 + 0x40);
        uVar18 = *(undefined8 *)(lVar7 + 0x28);
        uVar17 = *(undefined8 *)(lVar7 + 0x20);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        in_stack_00000150 = uVar17;
        in_stack_00000158 = uVar18;
        in_stack_00000160 = uVar14;
        in_stack_00000168 = uVar16;
        in_stack_00000170 = uVar10;
        in_stack_00000178 = uVar12;
        in_stack_00000180 = in_stack_00000000;
        in_stack_00000188 = in_stack_00000008;
        in_stack_00000190 = uVar13;
        in_stack_00000198 = uVar15;
        in_stack_000001a0 = uVar9;
        in_stack_000001a8 = uVar11;
        iVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000180,&stack0x00000150,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar4) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_04a0dc68;
        uVar17 = *(undefined8 *)(lVar7 + 0x30);
        uVar12 = *(undefined8 *)(lVar7 + 0x48);
        uVar10 = *(undefined8 *)(lVar7 + 0x40);
        uVar16 = *(undefined8 *)(lVar7 + 0x28);
        uVar14 = *(undefined8 *)(lVar7 + 0x20);
        if (*(uint *)(unaff_x22 + 0x18) <= uVar5 + 1) goto LAB_04a0dc68;
        uVar2 = uVar5 - 1;
        unaff_x26 = (ulong)uVar2;
        lVar6 = unaff_x22 + (long)(int)(uVar5 + 1) * (long)iVar8;
        *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(lVar7 + 0x38);
        *(undefined8 *)(lVar6 + 0x30) = uVar17;
        *(undefined8 *)(lVar6 + 0x48) = uVar12;
        *(undefined8 *)(lVar6 + 0x40) = uVar10;
        *(undefined8 *)(lVar6 + 0x28) = uVar16;
        *(undefined8 *)(lVar6 + 0x20) = uVar14;
        if ((int)uVar2 < unaff_w21) break;
        bVar3 = *(uint *)(unaff_x22 + 0x18) <= uVar2;
      }
      uVar5 = *(uint *)(unaff_x22 + 0x18);
    }
    in_w9 = (int)unaff_x26 + 1;
    unaff_x26 = uVar1;
  } while (in_w9 < uVar5);
LAB_04a0dc68:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


