/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 04a0d378
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
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
  undefined8 uVar16;
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
  
                    /* try { // try from 04a0d37c to 04b0d3a3 has its CatchHandler @ 04a0d54c */
  lVar3 = *(long *)(param_5 + 0x20);
  iVar2 = param_3 - param_2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4();
  }
                    /* try { // try from 04a0d3bc to 04b0d41f has its CatchHandler @ 04a0d554 */
  uVar4 = param_2 + (iVar2 >> 1);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4();
  }
  FUN_04a0cd68(param_1,param_4,param_2,uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4();
  }
  FUN_04a0cd68(param_1,param_4,param_2,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4();
  }
  FUN_04a0cd68(param_1,param_4,uVar4,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  if (param_1 == 0) {
LAB_04a0d6a4:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (uVar4 < *(uint *)(param_1 + 0x18)) {
    lVar3 = param_1 + (long)(int)uVar4 * 0x30;
    uVar8 = *(undefined8 *)(lVar3 + 0x38);
    uVar7 = *(undefined8 *)(lVar3 + 0x30);
    uVar6 = *(undefined8 *)(lVar3 + 0x48);
    uVar5 = *(undefined8 *)(lVar3 + 0x40);
    uVar10 = *(undefined8 *)(lVar3 + 0x28);
    uVar9 = *(undefined8 *)(lVar3 + 0x20);
    uVar1 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    FUN_04a0ced8(param_1,uVar4,uVar1);
    uVar4 = uVar1;
    if ((int)uVar1 <= (int)param_2) {
LAB_04a0d630:
      lVar3 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      FUN_04a0ced8(param_1,param_2,uVar1);
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(param_1 + 0x18)) {
      lVar3 = param_1 + (long)(int)param_2 * 0x30;
      uVar16 = *(undefined8 *)(lVar3 + 0x38);
      uVar15 = *(undefined8 *)(lVar3 + 0x30);
      uVar12 = *(undefined8 *)(lVar3 + 0x48);
      uVar11 = *(undefined8 *)(lVar3 + 0x40);
      uVar14 = *(undefined8 *)(lVar3 + 0x28);
      uVar13 = *(undefined8 *)(lVar3 + 0x20);
      if (param_4 == 0) goto LAB_04a0d6a4;
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      in_stack_00000150 = uVar9;
      in_stack_00000158 = uVar10;
      in_stack_00000160 = uVar7;
      in_stack_00000168 = uVar8;
      in_stack_00000170 = uVar5;
      in_stack_00000178 = uVar6;
      in_stack_00000180 = uVar13;
      in_stack_00000188 = uVar14;
      in_stack_00000190 = uVar15;
      in_stack_00000198 = uVar16;
      in_stack_000001a0 = uVar11;
      in_stack_000001a8 = uVar12;
      iVar2 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),&stack0x00000180,&stack0x00000150,
                         *(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar2) {
        do {
          uVar4 = uVar4 - 1;
          if (*(uint *)(param_1 + 0x18) <= uVar4) goto LAB_04a0d6a0;
          lVar3 = param_1 + (long)(int)uVar4 * 0x30;
          uVar16 = *(undefined8 *)(lVar3 + 0x38);
          uVar15 = *(undefined8 *)(lVar3 + 0x30);
          uVar12 = *(undefined8 *)(lVar3 + 0x48);
          uVar11 = *(undefined8 *)(lVar3 + 0x40);
          uVar14 = *(undefined8 *)(lVar3 + 0x28);
          uVar13 = *(undefined8 *)(lVar3 + 0x20);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_0322bef4();
          }
          in_stack_00000150 = uVar13;
          in_stack_00000158 = uVar14;
          in_stack_00000160 = uVar15;
          in_stack_00000168 = uVar16;
          in_stack_00000170 = uVar11;
          in_stack_00000178 = uVar12;
          in_stack_00000180 = uVar9;
          in_stack_00000188 = uVar10;
          in_stack_00000190 = uVar7;
          in_stack_00000198 = uVar8;
          in_stack_000001a0 = uVar5;
          in_stack_000001a8 = uVar6;
          iVar2 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),&stack0x00000180,&stack0x00000150,
                             *(undefined8 *)(param_4 + 0x28));
        } while (iVar2 < 0);
        if ((int)uVar4 <= (int)param_2) goto LAB_04a0d630;
        lVar3 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0322bef4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0322bef4();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        FUN_04a0ced8(param_1,param_2,uVar4);
      }
    }
  }
LAB_04a0d6a0:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


