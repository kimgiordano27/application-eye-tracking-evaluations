/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$get_Current
ENTRY_POINT: 0297d880
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


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__get_Current
               (undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w25;
  uint unaff_w26;
  uint uVar8;
  uint unaff_w28;
  undefined8 uVar9;
  int iStack0000000000000008;
  int iStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar8 = unaff_w26;
    if ((uint)param_1 <= unaff_w28) {
LAB_0297d93c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbdc();
    }
    if (unaff_x23 == 0) {
LAB_0297d940:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar1 = unaff_x19 + (long)(int)unaff_w28 * 0x10;
    uVar9 = *(undefined8 *)(lVar1 + 0x20);
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_01c8c820();
    }
    iVar7 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000018,in_stack_00000010,uVar9,
                       uVar5,*(undefined8 *)(unaff_x23 + 0x28));
    if (-1 < iVar7) {
      unaff_w28 = unaff_w20 + unaff_w21;
LAB_0297d904:
      if (unaff_w28 < *(uint *)(unaff_x19 + 0x18)) {
        lVar1 = unaff_x19 + (long)(int)unaff_w28 * 0x10;
        *(undefined8 *)(lVar1 + 0x20) = in_stack_00000018;
        *(undefined8 *)(lVar1 + 0x28) = in_stack_00000010;
        return;
      }
      goto LAB_0297d93c;
    }
    if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w28) ||
       (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + unaff_w21)) goto LAB_0297d93c;
    lVar2 = unaff_x19 + (long)(int)(unaff_w20 + unaff_w21) * 0x10;
    uVar9 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar2 + 0x20) = uVar9;
    if (iStack000000000000000c < (int)uVar8) goto LAB_0297d904;
    unaff_w26 = uVar8 * 2;
    param_1 = *(undefined8 *)(unaff_x19 + 0x18);
    if ((int)unaff_w26 < unaff_w25) {
      uVar6 = unaff_w26 + iStack0000000000000008;
      if (((uint)param_1 <= uVar6 - 1) || ((uint)param_1 <= uVar6)) goto LAB_0297d93c;
      if (unaff_x23 == 0) goto LAB_0297d940;
      lVar1 = unaff_x19 + (long)(int)(uVar6 - 1) * 0x10;
      lVar2 = unaff_x19 + (long)(int)uVar6 * 0x10;
      uVar9 = *(undefined8 *)(lVar1 + 0x20);
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
      uVar4 = *(undefined8 *)(lVar2 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_01c8c820();
      }
      uVar6 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),uVar9,uVar3,uVar5,uVar4,
                         *(undefined8 *)(unaff_x23 + 0x28));
      param_1 = *(undefined8 *)(unaff_x19 + 0x18);
      unaff_w26 = unaff_w26 | uVar6 >> 0x1f;
    }
    unaff_w28 = unaff_w20 + unaff_w26;
    unaff_w21 = uVar8;
  } while( true );
}


