/*
FUNCTION_NAME: Unity.Collections.NativeArray<RequestSceneHeader>$$Copy
ENTRY_POINT: 046117f4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Collections_NativeArray<RequestSceneHeader>__Copy(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  uint unaff_w26;
  uint uVar9;
  undefined8 unaff_x27;
  undefined8 uVar10;
  uint unaff_w29;
  int iStack0000000000000000;
  int iStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (uVar9 = unaff_w26, unaff_x23 != 0) {
    uVar10 = unaff_x25[1];
    if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_02feb2c4();
    }
    iVar7 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000008,in_stack_00000010,
                       unaff_x27,uVar10,*(undefined8 *)(unaff_x23 + 0x28));
    if (-1 < iVar7) {
      unaff_w29 = unaff_w20 + unaff_w21;
      unaff_x24 = (long)(int)unaff_w29;
LAB_04611878:
      if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
        lVar2 = unaff_x19 + unaff_x24 * 0x10;
        puVar8 = (undefined8 *)(lVar2 + 0x20);
        *puVar8 = in_stack_00000008;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000010;
        thunk_FUN_03048534(puVar8,0);
        return;
      }
LAB_046118bc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w29) ||
       (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + unaff_w21)) goto LAB_046118bc;
    uVar10 = *unaff_x25;
    lVar2 = unaff_x19 + (long)(int)(unaff_w20 + unaff_w21) * 0x10;
    puVar8 = (undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x28) = unaff_x25[1];
    *puVar8 = uVar10;
    thunk_FUN_03048534(puVar8,0);
    if (iStack0000000000000004 < (int)uVar9) goto LAB_04611878;
    unaff_w26 = uVar9 * 2;
    if ((int)unaff_w26 < in_stack_00000018._4_4_) {
      uVar6 = unaff_w26 + iStack0000000000000000;
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar6 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar6))
      goto LAB_046118bc;
      if (unaff_x23 == 0) break;
      lVar2 = unaff_x19 + (long)(int)(uVar6 - 1) * 0x10;
      lVar1 = unaff_x19 + (long)(int)uVar6 * 0x10;
      uVar10 = *(undefined8 *)(lVar2 + 0x20);
      uVar4 = *(undefined8 *)(lVar2 + 0x28);
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      uVar5 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_02feb2c4();
      }
      uVar6 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),uVar10,uVar4,uVar3,uVar5,
                         *(undefined8 *)(unaff_x23 + 0x28));
      unaff_w26 = unaff_w26 | uVar6 >> 0x1f;
    }
    unaff_w29 = unaff_w20 + unaff_w26;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_046118bc;
    unaff_x24 = (long)(int)unaff_w29;
    unaff_x25 = (undefined8 *)(unaff_x19 + unaff_x24 * 0x10 + 0x20);
    unaff_x27 = *unaff_x25;
    unaff_w21 = uVar9;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 046118c0 to 047118e7 has its CatchHandler @ 04611ab4 */
  FUN_02fe94e8();
}


