/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$AsSpan
ENTRY_POINT: 04a0d824
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__AsSpan
               (long param_1,uint param_2,int param_3,int param_4,long param_5,long param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
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
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  if (param_1 == 0) {
LAB_04a0da88:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar7 = *(uint *)(param_1 + 0x18);
  iVar2 = param_4 + -1;
  uVar3 = iVar2 + param_2;
  if (uVar3 < uVar7) {
    lVar6 = param_1 + (long)(int)uVar3 * 0x30;
    uVar18 = *(undefined8 *)(lVar6 + 0x38);
    uVar16 = *(undefined8 *)(lVar6 + 0x30);
    uVar10 = *(undefined8 *)(lVar6 + 0x48);
    uVar8 = *(undefined8 *)(lVar6 + 0x40);
    uVar14 = *(undefined8 *)(lVar6 + 0x28);
    uVar12 = *(undefined8 *)(lVar6 + 0x20);
    iVar1 = param_3;
    if (param_3 < 0) {
      iVar1 = param_3 + 1;
    }
    if ((int)param_2 <= iVar1 >> 1) {
      do {
        uVar7 = param_2 * 2;
        if ((int)uVar7 < param_3) {
          uVar3 = uVar7 + param_4;
          if ((*(uint *)(param_1 + 0x18) <= uVar3 - 1) || (*(uint *)(param_1 + 0x18) <= uVar3))
          goto LAB_04a0da84;
          lVar6 = param_1 + (long)(int)uVar3 * 0x30;
          uVar15 = *(undefined8 *)(lVar6 + 0x38);
          uVar13 = *(undefined8 *)(lVar6 + 0x30);
          uVar11 = *(undefined8 *)(lVar6 + 0x48);
          uVar9 = *(undefined8 *)(lVar6 + 0x40);
          uVar19 = *(undefined8 *)(lVar6 + 0x28);
          uVar17 = *(undefined8 *)(lVar6 + 0x20);
          if (param_5 == 0) goto LAB_04a0da88;
          if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_0322bef4();
          }
          in_stack_000001c0 = uVar17;
          in_stack_000001c8 = uVar19;
          in_stack_000001d0 = uVar13;
          in_stack_000001d8 = uVar15;
          in_stack_000001e0 = uVar9;
          in_stack_000001e8 = uVar11;
          uVar3 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),&stack0x000001f0,&stack0x000001c0,
                             *(undefined8 *)(param_5 + 0x28));
          uVar7 = uVar7 | uVar3 >> 0x1f;
        }
        uVar3 = iVar2 + uVar7;
        if (*(uint *)(param_1 + 0x18) <= uVar3) goto LAB_04a0da84;
        lVar6 = param_1 + (long)(int)uVar3 * 0x30;
        uVar15 = *(undefined8 *)(lVar6 + 0x38);
        uVar13 = *(undefined8 *)(lVar6 + 0x30);
        uVar11 = *(undefined8 *)(lVar6 + 0x48);
        uVar9 = *(undefined8 *)(lVar6 + 0x40);
        uVar19 = *(undefined8 *)(lVar6 + 0x28);
        uVar17 = *(undefined8 *)(lVar6 + 0x20);
        if (param_5 == 0) goto LAB_04a0da88;
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        in_stack_000001c0 = uVar17;
        in_stack_000001c8 = uVar19;
        in_stack_000001d0 = uVar13;
        in_stack_000001d8 = uVar15;
        in_stack_000001e0 = uVar9;
        in_stack_000001e8 = uVar11;
        iVar4 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),&stack0x000001f0,&stack0x000001c0,
                           *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar4) {
          uVar3 = iVar2 + param_2;
          break;
        }
        if (*(uint *)(param_1 + 0x18) <= uVar3) goto LAB_04a0da84;
        uVar17 = *(undefined8 *)(lVar6 + 0x30);
        uVar11 = *(undefined8 *)(lVar6 + 0x48);
        uVar9 = *(undefined8 *)(lVar6 + 0x40);
        uVar15 = *(undefined8 *)(lVar6 + 0x28);
        uVar13 = *(undefined8 *)(lVar6 + 0x20);
        if (*(uint *)(param_1 + 0x18) <= iVar2 + param_2) goto LAB_04a0da84;
        lVar5 = param_1 + (long)(int)(iVar2 + param_2) * 0x30;
        *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar6 + 0x38);
        *(undefined8 *)(lVar5 + 0x30) = uVar17;
        *(undefined8 *)(lVar5 + 0x48) = uVar11;
        *(undefined8 *)(lVar5 + 0x40) = uVar9;
        *(undefined8 *)(lVar5 + 0x28) = uVar15;
        *(undefined8 *)(lVar5 + 0x20) = uVar13;
        param_2 = uVar7;
      } while ((int)uVar7 <= iVar1 >> 1);
      uVar7 = *(uint *)(param_1 + 0x18);
    }
    if (uVar3 < uVar7) {
      param_1 = param_1 + (long)(int)uVar3 * 0x30;
      *(undefined8 *)(param_1 + 0x38) = uVar18;
      *(undefined8 *)(param_1 + 0x30) = uVar16;
      *(undefined8 *)(param_1 + 0x48) = uVar10;
      *(undefined8 *)(param_1 + 0x40) = uVar8;
      *(undefined8 *)(param_1 + 0x28) = uVar14;
      *(undefined8 *)(param_1 + 0x20) = uVar12;
      return;
    }
  }
LAB_04a0da84:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


