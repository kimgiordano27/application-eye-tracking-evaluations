/*
FUNCTION_NAME: Unity.Collections.NativeArray<ShadowRequestIntermediateUpdateData>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 0504fed4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


int Unity_Collections_NativeArray<ShadowRequestIntermediateUpdateData>__System_Collections_IEnumerable_GetEnumerator
              (undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  int iVar9;
  uint uVar10;
  ulong unaff_x21;
  long unaff_x22;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  while( true ) {
    uStack0000000000000020 = *param_1;
    uStack0000000000000034 = *(undefined8 *)((long)param_1 + 0x14);
    uStack0000000000000028 = (undefined4)param_1[1];
    uStack000000000000002c = (undefined4)*(undefined8 *)((long)param_1 + 0xc);
    uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
    uStack0000000000000048 = uStack0000000000000028;
    uStack0000000000000040 = uStack0000000000000020;
    uStack000000000000004c = uStack000000000000002c;
    uStack0000000000000050 = uStack0000000000000030;
    uStack0000000000000054 = uStack0000000000000034;
    uVar1 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar3 = *(int *)(unaff_x19 + 0x18);
    if ((uVar1 & 1) != 0) break;
    unaff_x21 = unaff_x21 + 1;
    unaff_x22 = unaff_x22 + 0x1c;
    if ((long)iVar3 <= (long)unaff_x21) break;
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) goto LAB_05050044;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_05050048;
    if (unaff_x20 == 0) goto LAB_05050044;
    param_1 = (undefined8 *)(lVar5 + unaff_x22);
  }
  if (iVar3 <= (int)unaff_x21) {
    return 0;
  }
  uVar1 = unaff_x21 & 0xffffffff;
  do {
    unaff_x21 = (ulong)((int)unaff_x21 + 1);
    do {
      iVar9 = (int)unaff_x21;
      uVar11 = (uint)uVar1;
      if (iVar3 <= iVar9) {
        *(uint *)(unaff_x19 + 0x18) = uVar11;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar3 - uVar11;
      }
      unaff_x21 = (ulong)iVar9;
      lVar5 = (long)iVar9 * 0x1c + 0x20;
      do {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto LAB_05050044;
        if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x21) goto LAB_05050048;
        if (unaff_x20 == 0) goto LAB_05050044;
        puVar6 = (undefined8 *)(lVar4 + lVar5);
        uStack0000000000000040 = *puVar6;
        uStack0000000000000054 = *(undefined8 *)((long)puVar6 + 0x14);
        uStack0000000000000008 = (undefined4)puVar6[1];
        uStack000000000000000c = (undefined4)*(undefined8 *)((long)puVar6 + 0xc);
        uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)puVar6 + 0xc) >> 0x20);
        uStack0000000000000048 = uStack0000000000000008;
        uStack000000000000004c = uStack000000000000000c;
        uStack0000000000000050 = uStack0000000000000010;
        uVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                           *(undefined8 *)(unaff_x20 + 0x28));
        iVar3 = *(int *)(unaff_x19 + 0x18);
        if ((uVar2 & 1) == 0) break;
        unaff_x21 = unaff_x21 + 1;
        lVar5 = lVar5 + 0x1c;
      } while ((long)unaff_x21 < (long)iVar3);
      uVar10 = (uint)unaff_x21;
    } while (iVar3 <= (int)uVar10);
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) {
LAB_05050044:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if ((*(uint *)(lVar5 + 0x18) <= uVar10) || (*(uint *)(lVar5 + 0x18) <= uVar11)) {
LAB_05050048:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    puVar7 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar10 * 0x1c);
    puVar6 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar11 * 0x1c);
    uVar1 = (ulong)(uVar11 + 1);
    uVar8 = puVar7[2];
    uVar13 = puVar7[1];
    uVar12 = *puVar7;
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar7 + 3);
    puVar6[2] = uVar8;
    puVar6[1] = uVar13;
    *puVar6 = uVar12;
    iVar3 = *(int *)(unaff_x19 + 0x18);
  } while( true );
}


