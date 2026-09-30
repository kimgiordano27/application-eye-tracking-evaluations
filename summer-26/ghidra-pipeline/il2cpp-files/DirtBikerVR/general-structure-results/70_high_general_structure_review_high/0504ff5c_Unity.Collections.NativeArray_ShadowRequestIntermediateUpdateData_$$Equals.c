/*
FUNCTION_NAME: Unity.Collections.NativeArray<ShadowRequestIntermediateUpdateData>$$Equals
ENTRY_POINT: 0504ff5c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


int Unity_Collections_NativeArray<ShadowRequestIntermediateUpdateData>__Equals(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  uint uVar7;
  long unaff_x21;
  int unaff_w22;
  uint unaff_w23;
  long unaff_x24;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  do {
    if (*(uint *)(param_1 + 0x18) <= (uint)unaff_x21) goto LAB_05050048;
    if (unaff_x20 == 0) break;
    puVar4 = (undefined8 *)(param_1 + unaff_x24);
    in_stack_00000040 = *puVar4;
    uStack0000000000000054 = *(undefined8 *)((long)puVar4 + 0x14);
    uStack0000000000000008 = (undefined4)puVar4[1];
    uStack000000000000000c = (undefined4)*(undefined8 *)((long)puVar4 + 0xc);
    uStack0000000000000048 = uStack0000000000000008;
    uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)((long)puVar4 + 0xc) >> 0x20);
    uStack000000000000004c = uStack000000000000000c;
    uVar1 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar2 = *(int *)(unaff_x19 + 0x18);
    if ((uVar1 & 1) == 0) {
LAB_0504ffc0:
      uVar7 = (uint)unaff_x21;
      if ((int)uVar7 < iVar2) {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) break;
        if ((*(uint *)(lVar3 + 0x18) <= uVar7) || (*(uint *)(lVar3 + 0x18) <= unaff_w23)) {
LAB_05050048:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        puVar5 = (undefined8 *)(lVar3 + 0x20 + (long)(int)uVar7 * (long)unaff_w22);
        puVar4 = (undefined8 *)(lVar3 + 0x20 + (long)(int)unaff_w23 * (long)unaff_w22);
        unaff_w23 = unaff_w23 + 1;
        uVar6 = puVar5[2];
        uVar9 = puVar5[1];
        uVar8 = *puVar5;
        *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(puVar5 + 3);
        puVar4[2] = uVar6;
        puVar4[1] = uVar9;
        *puVar4 = uVar8;
        iVar2 = *(int *)(unaff_x19 + 0x18);
        uVar7 = uVar7 + 1;
      }
      if (iVar2 <= (int)uVar7) {
        *(uint *)(unaff_x19 + 0x18) = unaff_w23;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - unaff_w23;
      }
      unaff_x21 = (long)(int)uVar7;
      unaff_x24 = (long)(int)uVar7 * (long)unaff_w22 + 0x20;
    }
    else {
      unaff_x21 = unaff_x21 + 1;
      unaff_x24 = unaff_x24 + 0x1c;
      if (iVar2 <= unaff_x21) goto LAB_0504ffc0;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


