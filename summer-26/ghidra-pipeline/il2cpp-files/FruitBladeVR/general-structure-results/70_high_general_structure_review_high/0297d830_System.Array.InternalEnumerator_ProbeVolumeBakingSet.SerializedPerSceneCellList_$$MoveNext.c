/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$MoveNext
ENTRY_POINT: 0297d830
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__MoveNext
               (void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  uint in_w9;
  uint in_w10;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w25;
  uint unaff_w26;
  uint uVar9;
  int iStack0000000000000008;
  int iStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    lVar1 = unaff_x19 + (long)(int)in_w10 * 0x10;
    lVar2 = unaff_x19 + (long)(int)in_w9 * 0x10;
    uVar8 = *(undefined8 *)(lVar1 + 0x20);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_01c8c820();
    }
    uVar6 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),uVar8,uVar4,uVar3,uVar5,
                       *(undefined8 *)(unaff_x23 + 0x28));
    uVar8 = *(undefined8 *)(unaff_x19 + 0x18);
    unaff_w26 = unaff_w26 | uVar6 >> 0x1f;
    uVar6 = unaff_w21;
    do {
      unaff_w21 = unaff_w26;
      uVar9 = unaff_w20 + unaff_w21;
      if ((uint)uVar8 <= uVar9) goto LAB_0297d93c;
      if (unaff_x23 == 0) goto LAB_0297d940;
      lVar1 = unaff_x19 + (long)(int)uVar9 * 0x10;
      uVar8 = *(undefined8 *)(lVar1 + 0x20);
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_01c8c820();
      }
      iVar7 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000018,in_stack_00000010,uVar8
                         ,uVar3,*(undefined8 *)(unaff_x23 + 0x28));
      if (-1 < iVar7) {
        uVar9 = unaff_w20 + uVar6;
LAB_0297d904:
        if (uVar9 < *(uint *)(unaff_x19 + 0x18)) {
          lVar1 = unaff_x19 + (long)(int)uVar9 * 0x10;
          *(undefined8 *)(lVar1 + 0x20) = in_stack_00000018;
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000010;
          return;
        }
        goto LAB_0297d93c;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar9) ||
         (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + uVar6)) goto LAB_0297d93c;
      lVar2 = unaff_x19 + (long)(int)(unaff_w20 + uVar6) * 0x10;
      uVar8 = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = uVar8;
      if (iStack000000000000000c < (int)unaff_w21) goto LAB_0297d904;
      unaff_w26 = unaff_w21 * 2;
      uVar8 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar6 = unaff_w21;
    } while (unaff_w25 <= (int)unaff_w26);
    in_w9 = unaff_w26 + iStack0000000000000008;
    in_w10 = in_w9 - 1;
    if (((uint)uVar8 <= in_w10) || ((uint)uVar8 <= in_w9)) {
LAB_0297d93c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbdc();
    }
    if (unaff_x23 == 0) {
LAB_0297d940:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
  } while( true );
}


