/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Equals
ENTRY_POINT: 06e294e4
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Equals(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  char in_NG;
  char in_OV;
  ulong uVar4;
  int in_w8;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint uVar6;
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
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  if (in_NG == in_OV) {
    return 0;
  }
  uVar7 = unaff_x22 & 0xffffffff;
  do {
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      uVar6 = (uint)uVar7;
      if (in_w8 <= (int)unaff_x22) {
        FUN_08d9ef4c(*(undefined8 *)(unaff_x19 + 0x10),uVar7,in_w8 - uVar6,0);
        iVar3 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar6;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar3 - uVar6;
      }
      unaff_x22 = (ulong)(int)unaff_x22;
      uVar9 = unaff_x22 << 6 | 0x20;
      do {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_06e2960c;
        if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) goto LAB_06e29610;
        if (unaff_x20 == 0) goto LAB_06e2960c;
        puVar1 = (undefined8 *)(lVar5 + uVar9);
        in_stack_00000088 = puVar1[1];
        in_stack_00000080 = *puVar1;
        in_stack_00000098 = puVar1[3];
        in_stack_00000090 = puVar1[2];
        in_stack_000000a8 = puVar1[5];
        in_stack_000000a0 = puVar1[4];
        in_stack_000000b8 = puVar1[7];
        in_stack_000000b0 = puVar1[6];
        uVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                           *(undefined8 *)(unaff_x20 + 0x28));
        in_w8 = *(int *)(unaff_x19 + 0x18);
        if ((uVar4 & 1) == 0) break;
        unaff_x22 = unaff_x22 + 1;
        uVar9 = uVar9 + 0x40;
      } while ((long)unaff_x22 < (long)in_w8);
      uVar8 = (uint)unaff_x22;
    } while (in_w8 <= (int)uVar8);
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) {
LAB_06e2960c:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if ((*(uint *)(lVar5 + 0x18) <= uVar8) || (*(uint *)(lVar5 + 0x18) <= uVar6)) {
LAB_06e29610:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    uVar7 = (ulong)(uVar6 + 1);
    puVar1 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x40);
    puVar2 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar8 * 0x40);
    uVar12 = puVar2[4];
    uVar11 = puVar2[7];
    uVar10 = puVar2[6];
    uVar14 = puVar2[1];
    uVar13 = *puVar2;
    uVar16 = puVar2[3];
    uVar15 = puVar2[2];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar12;
    puVar1[7] = uVar11;
    puVar1[6] = uVar10;
    puVar1[1] = uVar14;
    *puVar1 = uVar13;
    puVar1[3] = uVar16;
    puVar1[2] = uVar15;
    thunk_FUN_049ee3d8(puVar1,0);
    in_w8 = *(int *)(unaff_x19 + 0x18);
  } while( true );
}


