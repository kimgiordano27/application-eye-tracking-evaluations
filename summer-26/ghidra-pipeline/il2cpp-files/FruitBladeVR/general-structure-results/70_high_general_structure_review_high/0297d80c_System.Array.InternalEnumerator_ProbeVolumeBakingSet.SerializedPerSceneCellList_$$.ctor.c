/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$.ctor
ENTRY_POINT: 0297d80c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>___ctor
               (undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char in_NG;
  char in_OV;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w25;
  uint unaff_w26;
  uint uVar9;
  undefined8 uVar10;
  int iStack0000000000000008;
  int iStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar8 = (uint)param_1;
    uVar6 = unaff_w26;
    if (in_NG != in_OV) {
      uVar6 = unaff_w26 + iStack0000000000000008;
      if ((uVar8 <= uVar6 - 1) || (uVar8 <= uVar6)) goto LAB_0297d93c;
      if (unaff_x23 == 0) goto LAB_0297d940;
      lVar1 = unaff_x19 + (long)(int)(uVar6 - 1) * 0x10;
      lVar2 = unaff_x19 + (long)(int)uVar6 * 0x10;
      uVar10 = *(undefined8 *)(lVar1 + 0x20);
      uVar4 = *(undefined8 *)(lVar1 + 0x28);
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      uVar5 = *(undefined8 *)(lVar2 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_01c8c820();
      }
      uVar6 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),uVar10,uVar4,uVar3,uVar5,
                         *(undefined8 *)(unaff_x23 + 0x28));
      uVar8 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      uVar6 = unaff_w26 | uVar6 >> 0x1f;
    }
    uVar9 = unaff_w20 + uVar6;
    if (uVar8 <= uVar9) goto LAB_0297d93c;
    if (unaff_x23 == 0) {
LAB_0297d940:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar1 = unaff_x19 + (long)(int)uVar9 * 0x10;
    uVar10 = *(undefined8 *)(lVar1 + 0x20);
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_01c8c820();
    }
    iVar7 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000018,in_stack_00000010,uVar10,
                       uVar3,*(undefined8 *)(unaff_x23 + 0x28));
    if (-1 < iVar7) {
      uVar9 = unaff_w20 + unaff_w21;
LAB_0297d904:
      if (uVar9 < *(uint *)(unaff_x19 + 0x18)) {
        lVar1 = unaff_x19 + (long)(int)uVar9 * 0x10;
        *(undefined8 *)(lVar1 + 0x20) = in_stack_00000018;
        *(undefined8 *)(lVar1 + 0x28) = in_stack_00000010;
        return;
      }
LAB_0297d93c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbdc();
    }
    if ((*(uint *)(unaff_x19 + 0x18) <= uVar9) ||
       (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + unaff_w21)) goto LAB_0297d93c;
    lVar2 = unaff_x19 + (long)(int)(unaff_w20 + unaff_w21) * 0x10;
    uVar10 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar2 + 0x20) = uVar10;
    if (iStack000000000000000c < (int)uVar6) goto LAB_0297d904;
    unaff_w26 = uVar6 * 2;
    param_1 = *(undefined8 *)(unaff_x19 + 0x18);
    in_OV = SBORROW4(unaff_w26,unaff_w25);
    in_NG = (int)(unaff_w26 - unaff_w25) < 0;
    unaff_w21 = uVar6;
  } while( true );
}


