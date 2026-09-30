/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$Dispose
ENTRY_POINT: 02f52f8c
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


ulong System_Collections_Generic_List_Enumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__Dispose
                (uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  uint in_w9;
  ulong uVar6;
  int *piVar7;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x25;
  ulong uVar8;
  int iVar9;
  long in_stack_00000008;
  
  param_1 = param_1 & 0x7fffffff;
  iVar9 = 0;
  if (in_w9 != 0) {
    iVar9 = (int)param_1 / (int)in_w9;
  }
  uVar2 = param_1 - iVar9 * in_w9;
  if (uVar2 < in_w9) {
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
    uVar1 = *(uint *)(unaff_x25 + 0x18);
    uVar2 = *(int *)(unaff_x23 + (ulong)uVar2 * 4 + 0x20) - 1;
    uVar8 = (ulong)uVar2;
    if (uVar2 < uVar1) {
      iVar9 = 0;
      do {
        if (*(uint *)(unaff_x25 + 0x20 + (-(uVar8 >> 0x1f) & 0xffffffe000000000 | uVar8 << 5)) ==
            param_1) {
          lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02091334(lVar4);
          }
          lVar5 = *unaff_x22;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_02f53050;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_02091668();
LAB_02f53050:
          uVar6 = (*(code *)*puVar3)();
          if ((uVar6 & 1) != 0) {
            return uVar8;
          }
          uVar1 = *(uint *)(unaff_x25 + 0x18);
        }
        if (uVar1 <= (uint)uVar8) goto LAB_02f530d0;
        uVar2 = *(uint *)(unaff_x25 + 0x20 + (long)(int)(uint)uVar8 * 0x20 + 4);
        uVar8 = (ulong)uVar2;
        if ((int)uVar1 <= iVar9) {
          FUN_0384ca18(0);
        }
        uVar1 = *(uint *)(unaff_x25 + 0x18);
        iVar9 = iVar9 + 1;
      } while (uVar2 < uVar1);
    }
    return uVar8;
  }
LAB_02f530d0:
                    /* WARNING: Subroutine does not return */
  FUN_02061554();
}


