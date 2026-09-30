/*
FUNCTION_NAME: System.Collections.Generic.List<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$ToArray
ENTRY_POINT: 05827f3c
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>__ToArray(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  
  FUN_058273d8();
  iVar1 = (int)unaff_x19[3] - unaff_w21;
  if (iVar1 != 0 && unaff_w21 <= (int)unaff_x19[3]) {
    FUN_07508590(unaff_x19[2],unaff_w21,unaff_x19[2],unaff_w22 + unaff_w21,iVar1,0);
  }
  if (unaff_x23 == unaff_x19) {
    FUN_07508590(unaff_x19[2],0,unaff_x19[2],unaff_w21,unaff_w21,0);
    FUN_07508590(unaff_x19[2],unaff_w22 + unaff_w21,unaff_x19[2],unaff_w21 << 1,
                 (int)unaff_x19[3] - unaff_w21,0);
  }
  else {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec(lVar3);
    }
    lVar4 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
          goto LAB_05828028;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20();
LAB_05828028:
    (*(code *)*puVar2)();
  }
  *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + unaff_w22;
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
}


