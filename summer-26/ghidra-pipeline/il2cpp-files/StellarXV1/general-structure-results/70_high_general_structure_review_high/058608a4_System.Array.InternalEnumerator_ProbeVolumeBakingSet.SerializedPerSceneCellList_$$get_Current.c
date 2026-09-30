/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$get_Current
ENTRY_POINT: 058608a4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__get_Current
               (void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w28;
  
code_r0x058608a4:
  do {
    puVar3 = (undefined8 *)FUN_040b1e00();
    while( true ) {
      iVar1 = (*(code *)*puVar3)();
      if (iVar1 == 0) {
        return unaff_w25;
      }
      if (iVar1 < 0) {
        unaff_w19 = unaff_w25 + 1;
      }
      else {
        unaff_w28 = unaff_w25 - 1;
      }
      if (unaff_w28 < (int)unaff_w19) {
        return ~unaff_w19;
      }
      unaff_w25 = unaff_w19 + ((int)(unaff_w28 - unaff_w19) >> 1);
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_040b1acc();
      }
      lVar2 = **(long **)(lVar2 + 0xc0);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_040b1acc(lVar2);
      }
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) break;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      while (*(long *)(piVar6 + -2) != lVar2) {
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
        if (uVar5 == 0) goto code_r0x058608a4;
      }
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
    }
  } while( true );
}


