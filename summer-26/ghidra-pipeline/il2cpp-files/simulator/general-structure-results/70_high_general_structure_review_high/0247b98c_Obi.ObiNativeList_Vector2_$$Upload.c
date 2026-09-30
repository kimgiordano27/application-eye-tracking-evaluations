/*
FUNCTION_NAME: Obi.ObiNativeList<Vector2>$$Upload
ENTRY_POINT: 0247b98c
PROGRAM: simulator-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Obi_ObiNativeList<Vector2>__Upload(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long lVar5;
  uint unaff_w26;
  undefined8 unaff_x27;
  undefined8 uVar6;
  undefined8 unaff_x28;
  undefined8 uVar7;
  uint uVar8;
  undefined8 unaff_x29;
  int iStack0000000000000000;
  int iStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
                    /* try { // try from 0247b990 to 0257b9b7 has its CatchHandler @ 0247b900 */
    uVar3 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),unaff_x24,unaff_x28,unaff_x29,unaff_x27,
                       *(undefined8 *)(unaff_x23 + 0x28));
    unaff_w26 = unaff_w26 | uVar3 >> 0x1f;
    uVar3 = unaff_w21;
    do {
      unaff_w21 = unaff_w26;
      uVar8 = unaff_w20 + unaff_w21;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar8) goto LAB_0247ba80;
      lVar5 = (long)(int)uVar8;
      lVar2 = unaff_x19 + lVar5 * 0x10;
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      if (unaff_x23 == 0) goto Obi_ObiNativeList<Vector2>__Compare;
      uVar7 = *(undefined8 *)(lVar2 + 0x28);
      if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_018a835c();
      }
      iVar4 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000008,in_stack_00000010,uVar6
                         ,uVar7,*(undefined8 *)(unaff_x23 + 0x28));
      if (-1 < iVar4) {
        uVar8 = unaff_w20 + uVar3;
        lVar5 = (long)(int)uVar8;
LAB_0247ba44:
        if (uVar8 < *(uint *)(unaff_x19 + 0x18)) {
          lVar2 = unaff_x19 + lVar5 * 0x10;
          *(undefined8 *)(lVar2 + 0x20) = in_stack_00000008;
          *(undefined8 *)(lVar2 + 0x28) = in_stack_00000010;
          return;
        }
        goto LAB_0247ba80;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar8) ||
         (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + uVar3)) goto LAB_0247ba80;
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      lVar1 = unaff_x19 + (long)(int)(unaff_w20 + uVar3) * 0x10;
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar1 + 0x20) = uVar6;
      if (iStack0000000000000004 < (int)unaff_w21) goto LAB_0247ba44;
      unaff_w26 = unaff_w21 * 2;
      uVar3 = unaff_w21;
    } while (in_stack_00000018._4_4_ <= (int)unaff_w26);
    uVar3 = unaff_w26 + iStack0000000000000000;
    if ((*(uint *)(unaff_x19 + 0x18) <= uVar3 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar3)) {
LAB_0247ba80:
                    /* WARNING: Subroutine does not return */
      FUN_018c4b04();
    }
    if (unaff_x23 == 0) {
Obi_ObiNativeList<Vector2>__Compare:
                    /* WARNING: Subroutine does not return */
      FUN_018c4afc();
    }
    lVar2 = unaff_x19 + (long)(int)(uVar3 - 1) * 0x10;
    lVar5 = unaff_x19 + (long)(int)uVar3 * 0x10;
    unaff_x24 = *(undefined8 *)(lVar2 + 0x20);
    unaff_x28 = *(undefined8 *)(lVar2 + 0x28);
    unaff_x29 = *(undefined8 *)(lVar5 + 0x20);
    unaff_x27 = *(undefined8 *)(lVar5 + 0x28);
    if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_018a835c();
    }
  } while( true );
}


