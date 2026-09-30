/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0297d95c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__System_Collections_IEnumerator_Reset
               (long param_1,int param_2,int param_3,long param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  if (param_2 < param_3) {
    if (param_1 == 0) {
LAB_0297da78:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    uVar10 = (long)param_2;
    do {
      uVar9 = *(uint *)(param_1 + 0x18);
      uVar3 = uVar10 + 1;
      if (uVar9 <= (uint)uVar3) {
LAB_0297da74:
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbdc();
      }
      lVar4 = param_1 + uVar3 * 0x10;
      uVar5 = *(undefined8 *)(lVar4 + 0x20);
      uVar6 = *(undefined8 *)(lVar4 + 0x28);
      if ((long)param_2 <= (long)uVar10) {
        do {
          uVar9 = (uint)uVar10;
          if (*(uint *)(param_1 + 0x18) <= uVar9) goto LAB_0297da74;
          if (param_4 == 0) goto LAB_0297da78;
          lVar4 = param_1 + (long)(int)uVar9 * 0x10;
          uVar11 = *(undefined8 *)(lVar4 + 0x20);
          uVar7 = *(undefined8 *)(lVar4 + 0x28);
          if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_01c8c820();
          }
          iVar8 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),uVar5,uVar6,uVar11,uVar7,
                             *(undefined8 *)(param_4 + 0x28));
          if (-1 < iVar8) break;
          if ((*(uint *)(param_1 + 0x18) <= uVar9) || (*(uint *)(param_1 + 0x18) <= uVar9 + 1))
          goto LAB_0297da74;
          lVar1 = param_1 + (long)(int)(uVar9 + 1) * 0x10;
          uVar11 = *(undefined8 *)(lVar4 + 0x20);
          uVar10 = (ulong)(uVar9 - 1);
          *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
          *(undefined8 *)(lVar1 + 0x20) = uVar11;
        } while (param_2 <= (int)(uVar9 - 1));
        uVar9 = *(uint *)(param_1 + 0x18);
      }
      uVar2 = (int)uVar10 + 1;
      if (uVar9 <= uVar2) goto LAB_0297da74;
      lVar4 = param_1 + (long)(int)uVar2 * 0x10;
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      *(undefined8 *)(lVar4 + 0x28) = uVar6;
      uVar10 = uVar3;
    } while (uVar3 != (long)param_3);
  }
  return;
}


