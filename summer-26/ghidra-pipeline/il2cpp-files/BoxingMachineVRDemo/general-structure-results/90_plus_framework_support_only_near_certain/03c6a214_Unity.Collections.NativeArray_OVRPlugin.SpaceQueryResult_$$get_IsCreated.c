/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_IsCreated
ENTRY_POINT: 03c6a214
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_IsCreated(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint uVar6;
  long unaff_x21;
  ulong uVar7;
  uint uVar8;
  ulong unaff_x22;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  while( true ) {
    uStack0000000000000068 = param_1[5];
    uStack0000000000000060 = param_1[4];
    uStack0000000000000078 = param_1[7];
    uStack0000000000000070 = param_1[6];
    uStack0000000000000048 = param_1[1];
    uStack0000000000000040 = *param_1;
    uStack0000000000000058 = param_1[3];
    uStack0000000000000050 = param_1[2];
    if (unaff_x20 == 0) break;
    in_stack_00000080 = uStack0000000000000040;
    in_stack_00000088 = uStack0000000000000048;
    in_stack_00000090 = uStack0000000000000050;
    in_stack_00000098 = uStack0000000000000058;
    in_stack_000000a0 = uStack0000000000000060;
    in_stack_000000a8 = uStack0000000000000068;
    in_stack_000000b0 = uStack0000000000000070;
    in_stack_000000b8 = uStack0000000000000078;
    uVar4 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar4 & 1) != 0) {
      uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
LAB_03c6a274:
      if ((int)uVar4 <= (int)unaff_x22) {
        return 0;
      }
      uVar7 = unaff_x22 & 0xffffffff;
      goto LAB_03c6a280;
    }
    uVar4 = (ulong)*(int *)(unaff_x19 + 0x18);
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0x40;
    if ((long)uVar4 <= (long)unaff_x22) goto LAB_03c6a274;
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x22) goto LAB_03c6a3c0;
    param_1 = (undefined8 *)(lVar5 + unaff_x21);
  }
LAB_03c6a3bc:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
LAB_03c6a280:
  unaff_x22 = (ulong)((int)unaff_x22 + 1);
  do {
    uVar6 = (uint)uVar7;
    if ((int)uVar4 <= (int)unaff_x22) {
      FUN_05029664(*(undefined8 *)(unaff_x19 + 0x10),uVar7,(int)uVar4 - uVar6,0);
      iVar3 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x18) = uVar6;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar3 - uVar6;
    }
    unaff_x22 = (ulong)(int)unaff_x22;
    uVar9 = unaff_x22 << 6 | 0x20;
    do {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 == 0) goto LAB_03c6a3bc;
      if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) goto LAB_03c6a3c0;
      puVar1 = (undefined8 *)(lVar5 + uVar9);
      uStack0000000000000068 = puVar1[5];
      uStack0000000000000060 = puVar1[4];
      uStack0000000000000078 = puVar1[7];
      uStack0000000000000070 = puVar1[6];
      uStack0000000000000048 = puVar1[1];
      uStack0000000000000040 = *puVar1;
      uStack0000000000000058 = puVar1[3];
      uStack0000000000000050 = puVar1[2];
      if (unaff_x20 == 0) goto LAB_03c6a3bc;
      in_stack_00000080 = uStack0000000000000040;
      in_stack_00000088 = uStack0000000000000048;
      in_stack_00000090 = uStack0000000000000050;
      in_stack_00000098 = uStack0000000000000058;
      in_stack_000000a0 = uStack0000000000000060;
      in_stack_000000a8 = uStack0000000000000068;
      in_stack_000000b0 = uStack0000000000000070;
      in_stack_000000b8 = uStack0000000000000078;
      uVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar4 & 1) == 0) {
        uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
        break;
      }
      uVar4 = (ulong)*(int *)(unaff_x19 + 0x18);
      unaff_x22 = unaff_x22 + 1;
      uVar9 = uVar9 + 0x40;
    } while ((long)unaff_x22 < (long)uVar4);
    uVar8 = (uint)unaff_x22;
  } while ((int)uVar4 <= (int)uVar8);
  lVar5 = *(long *)(unaff_x19 + 0x10);
  if (lVar5 == 0) goto LAB_03c6a3bc;
  if (*(uint *)(lVar5 + 0x18) <= uVar8) {
LAB_03c6a3c0:
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
  lVar2 = lVar5 + (long)(int)uVar8 * 0x40;
  uVar10 = *(undefined8 *)(lVar2 + 0x40);
  uVar12 = *(undefined8 *)(lVar2 + 0x58);
  uVar11 = *(undefined8 *)(lVar2 + 0x50);
  uVar14 = *(undefined8 *)(lVar2 + 0x28);
  uVar13 = *(undefined8 *)(lVar2 + 0x20);
  uVar16 = *(undefined8 *)(lVar2 + 0x38);
  uVar15 = *(undefined8 *)(lVar2 + 0x30);
  if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_03c6a3c0;
  lVar5 = lVar5 + (long)(int)uVar6 * 0x40;
  *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar5 + 0x40) = uVar10;
  *(undefined8 *)(lVar5 + 0x58) = uVar12;
  *(undefined8 *)(lVar5 + 0x50) = uVar11;
  *(undefined8 *)(lVar5 + 0x28) = uVar14;
  *(undefined8 *)(lVar5 + 0x20) = uVar13;
  *(undefined8 *)(lVar5 + 0x38) = uVar16;
  *(undefined8 *)(lVar5 + 0x30) = uVar15;
  thunk_FUN_02dd37b4(lVar5 + 0x20,0);
  uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
  uVar7 = (ulong)(uVar6 + 1);
  goto LAB_03c6a280;
}


