/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyTo
ENTRY_POINT: 04a0cd7c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyTo
               (long param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  
  uStack0000000000000108 = 0;
  uStack0000000000000100 = 0;
  uStack0000000000000118 = 0;
  uStack0000000000000110 = 0;
  uStack00000000000000f8 = 0;
  uStack00000000000000f0 = 0;
  if (param_3 == param_4) {
    return;
  }
  if (param_1 == 0) {
LAB_04a0ced4:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (param_3 < *(uint *)(param_1 + 0x18)) {
    lVar2 = param_1 + (long)(int)param_3 * 0x30;
    uVar10 = *(undefined8 *)(lVar2 + 0x38);
    uVar8 = *(undefined8 *)(lVar2 + 0x30);
    uVar6 = *(undefined8 *)(lVar2 + 0x48);
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    uVar14 = *(undefined8 *)(lVar2 + 0x28);
    uVar12 = *(undefined8 *)(lVar2 + 0x20);
    if (param_4 < *(uint *)(param_1 + 0x18)) {
      lVar3 = param_1 + (long)(int)param_4 * 0x30;
      uVar11 = *(undefined8 *)(lVar3 + 0x38);
      uVar9 = *(undefined8 *)(lVar3 + 0x30);
      uVar7 = *(undefined8 *)(lVar3 + 0x48);
      uVar5 = *(undefined8 *)(lVar3 + 0x40);
      uVar15 = *(undefined8 *)(lVar3 + 0x28);
      uVar13 = *(undefined8 *)(lVar3 + 0x20);
      if (param_2 == 0) goto LAB_04a0ced4;
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      in_stack_00000120 = uVar13;
      in_stack_00000128 = uVar15;
      in_stack_00000130 = uVar9;
      in_stack_00000138 = uVar11;
      in_stack_00000140 = uVar5;
      in_stack_00000148 = uVar7;
      in_stack_00000150 = uVar12;
      in_stack_00000158 = uVar14;
      in_stack_00000160 = uVar8;
      in_stack_00000168 = uVar10;
      in_stack_00000170 = uVar4;
      in_stack_00000178 = uVar6;
      iVar1 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&stack0x00000150,&stack0x00000120,
                         *(undefined8 *)(param_2 + 0x28));
      if (iVar1 < 1) {
        return;
      }
      if (param_3 < *(uint *)(param_1 + 0x18)) {
        uStack0000000000000108 = *(undefined8 *)(lVar2 + 0x38);
        uStack0000000000000100 = *(undefined8 *)(lVar2 + 0x30);
        uStack0000000000000118 = *(undefined8 *)(lVar2 + 0x48);
        uStack0000000000000110 = *(undefined8 *)(lVar2 + 0x40);
        uStack00000000000000f8 = *(undefined8 *)(lVar2 + 0x28);
        uStack00000000000000f0 = *(undefined8 *)(lVar2 + 0x20);
        if (param_4 < *(uint *)(param_1 + 0x18)) {
          uVar8 = *(undefined8 *)(lVar3 + 0x30);
          uVar6 = *(undefined8 *)(lVar3 + 0x48);
          uVar4 = *(undefined8 *)(lVar3 + 0x40);
          uVar12 = *(undefined8 *)(lVar3 + 0x28);
          uVar10 = *(undefined8 *)(lVar3 + 0x20);
          *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
          *(undefined8 *)(lVar2 + 0x30) = uVar8;
          *(undefined8 *)(lVar2 + 0x48) = uVar6;
          *(undefined8 *)(lVar2 + 0x40) = uVar4;
          *(undefined8 *)(lVar2 + 0x28) = uVar12;
          *(undefined8 *)(lVar2 + 0x20) = uVar10;
          if (param_4 < *(uint *)(param_1 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x38) = uStack0000000000000108;
            *(undefined8 *)(lVar3 + 0x30) = uStack0000000000000100;
            *(undefined8 *)(lVar3 + 0x48) = uStack0000000000000118;
            *(undefined8 *)(lVar3 + 0x40) = uStack0000000000000110;
            *(undefined8 *)(lVar3 + 0x28) = uStack00000000000000f8;
            *(undefined8 *)(lVar3 + 0x20) = uStack00000000000000f0;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


