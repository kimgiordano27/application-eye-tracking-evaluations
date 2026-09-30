/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 04a0d3dc
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


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(void)

{
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  uint uVar3;
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
  
  FUN_04a0cd68();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  FUN_04a0cd68();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  FUN_04a0cd68();
                    /* try { // try from 04a0d450 to 04b0d457 has its CatchHandler @ 04a0d540 */
  if (unaff_x20 == 0) {
LAB_04a0d6a4:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (unaff_w24 < *(uint *)(unaff_x20 + 0x18)) {
    lVar2 = unaff_x20 + (long)(int)unaff_w24 * 0x30;
    uVar7 = *(undefined8 *)(lVar2 + 0x38);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    uVar5 = *(undefined8 *)(lVar2 + 0x48);
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    uVar9 = *(undefined8 *)(lVar2 + 0x28);
    uVar8 = *(undefined8 *)(lVar2 + 0x20);
    uVar3 = unaff_w23 - 1;
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    FUN_04a0ced8();
    if ((int)uVar3 <= (int)unaff_w19) {
LAB_04a0d630:
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      FUN_04a0ced8();
      return unaff_w19;
    }
    while (unaff_w19 = unaff_w19 + 1, unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      lVar2 = unaff_x20 + (long)(int)unaff_w19 * 0x30;
      uVar15 = *(undefined8 *)(lVar2 + 0x38);
      uVar14 = *(undefined8 *)(lVar2 + 0x30);
      uVar11 = *(undefined8 *)(lVar2 + 0x48);
      uVar10 = *(undefined8 *)(lVar2 + 0x40);
      uVar13 = *(undefined8 *)(lVar2 + 0x28);
      uVar12 = *(undefined8 *)(lVar2 + 0x20);
      if (unaff_x22 == 0) goto LAB_04a0d6a4;
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      in_stack_00000150 = uVar8;
      in_stack_00000158 = uVar9;
      in_stack_00000160 = uVar6;
      in_stack_00000168 = uVar7;
      in_stack_00000170 = uVar4;
      in_stack_00000178 = uVar5;
      in_stack_00000180 = uVar12;
      in_stack_00000188 = uVar13;
      in_stack_00000190 = uVar14;
      in_stack_00000198 = uVar15;
      in_stack_000001a0 = uVar10;
      in_stack_000001a8 = uVar11;
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000180,&stack0x00000150,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar1) {
        do {
          uVar3 = uVar3 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_04a0d6a0;
          lVar2 = unaff_x20 + (long)(int)uVar3 * 0x30;
          uVar15 = *(undefined8 *)(lVar2 + 0x38);
          uVar14 = *(undefined8 *)(lVar2 + 0x30);
          uVar11 = *(undefined8 *)(lVar2 + 0x48);
          uVar10 = *(undefined8 *)(lVar2 + 0x40);
          uVar13 = *(undefined8 *)(lVar2 + 0x28);
          uVar12 = *(undefined8 *)(lVar2 + 0x20);
          if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_0322bef4();
          }
          in_stack_00000150 = uVar12;
          in_stack_00000158 = uVar13;
          in_stack_00000160 = uVar14;
          in_stack_00000168 = uVar15;
          in_stack_00000170 = uVar10;
          in_stack_00000178 = uVar11;
          in_stack_00000180 = uVar8;
          in_stack_00000188 = uVar9;
          in_stack_00000190 = uVar6;
          in_stack_00000198 = uVar7;
          in_stack_000001a0 = uVar4;
          in_stack_000001a8 = uVar5;
          iVar1 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000180,&stack0x00000150,
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar1 < 0);
        if ((int)uVar3 <= (int)unaff_w19) goto LAB_04a0d630;
        lVar2 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0322bef4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0322bef4();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        FUN_04a0ced8();
      }
    }
  }
LAB_04a0d6a0:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


