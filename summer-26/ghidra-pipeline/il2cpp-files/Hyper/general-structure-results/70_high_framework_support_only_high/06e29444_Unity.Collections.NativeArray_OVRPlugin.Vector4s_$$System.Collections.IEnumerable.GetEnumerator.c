/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 06e29444
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4s>__System_Collections_IEnumerable_GetEnumerator
              (long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_08d8ca5c(8);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    lVar8 = 0x20;
    do {
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto LAB_06e2960c;
      if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_06e29610;
      if (param_2 == 0) goto LAB_06e2960c;
      puVar1 = (undefined8 *)(lVar6 + lVar8);
      in_stack_00000088 = puVar1[1];
      in_stack_00000080 = *puVar1;
      in_stack_00000098 = puVar1[3];
      in_stack_00000090 = puVar1[2];
      in_stack_000000a8 = puVar1[5];
      in_stack_000000a0 = puVar1[4];
      in_stack_000000b8 = puVar1[7];
      in_stack_000000b0 = puVar1[6];
      uVar4 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&stack0x00000080,
                         *(undefined8 *)(param_2 + 0x28));
      iVar3 = *(int *)(param_1 + 0x18);
      if ((uVar4 & 1) != 0) break;
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x40;
    } while ((long)uVar10 < (long)iVar3);
  }
  if (iVar3 <= (int)uVar10) {
    return 0;
  }
  uVar4 = uVar10 & 0xffffffff;
  do {
    uVar10 = (ulong)((int)uVar10 + 1);
    do {
      uVar7 = (uint)uVar4;
      if (iVar3 <= (int)uVar10) {
        FUN_08d9ef4c(*(undefined8 *)(param_1 + 0x10),uVar4,iVar3 - uVar7,0);
        iVar3 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar7;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        return iVar3 - uVar7;
      }
      uVar10 = (ulong)(int)uVar10;
      uVar11 = uVar10 << 6 | 0x20;
      do {
        lVar8 = *(long *)(param_1 + 0x10);
        if (lVar8 == 0) goto LAB_06e2960c;
        if (*(uint *)(lVar8 + 0x18) <= (uint)uVar10) goto LAB_06e29610;
        if (param_2 == 0) goto LAB_06e2960c;
        puVar1 = (undefined8 *)(lVar8 + uVar11);
        in_stack_00000088 = puVar1[1];
        in_stack_00000080 = *puVar1;
        in_stack_00000098 = puVar1[3];
        in_stack_00000090 = puVar1[2];
        in_stack_000000a8 = puVar1[5];
        in_stack_000000a0 = puVar1[4];
        in_stack_000000b8 = puVar1[7];
        in_stack_000000b0 = puVar1[6];
        uVar5 = (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),&stack0x00000080,
                           *(undefined8 *)(param_2 + 0x28));
        iVar3 = *(int *)(param_1 + 0x18);
        if ((uVar5 & 1) == 0) break;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + 0x40;
      } while ((long)uVar10 < (long)iVar3);
      uVar9 = (uint)uVar10;
    } while (iVar3 <= (int)uVar9);
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
LAB_06e2960c:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if ((*(uint *)(lVar8 + 0x18) <= uVar9) || (*(uint *)(lVar8 + 0x18) <= uVar7)) {
LAB_06e29610:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    uVar4 = (ulong)(uVar7 + 1);
    puVar1 = (undefined8 *)(lVar8 + 0x20 + (long)(int)uVar7 * 0x40);
    puVar2 = (undefined8 *)(lVar8 + 0x20 + (long)(int)uVar9 * 0x40);
    uVar14 = puVar2[4];
    uVar13 = puVar2[7];
    uVar12 = puVar2[6];
    uVar16 = puVar2[1];
    uVar15 = *puVar2;
    uVar18 = puVar2[3];
    uVar17 = puVar2[2];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar14;
    puVar1[7] = uVar13;
    puVar1[6] = uVar12;
    puVar1[1] = uVar16;
    *puVar1 = uVar15;
    puVar1[3] = uVar18;
    puVar1[2] = uVar17;
    thunk_FUN_049ee3d8(puVar1,0);
    iVar3 = *(int *)(param_1 + 0x18);
  } while( true );
}


