/*
FUNCTION_NAME: Unity.Collections.NativeArray<RequestSceneHeader>$$Copy
ENTRY_POINT: 04611724
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Collections_NativeArray<RequestSceneHeader>__Copy(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  int in_w3;
  long in_x4;
  long in_x5;
  uint in_w8;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x24;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint unaff_w29;
  int iStack0000000000000004;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  long in_stack_00000018;
  
  lVar1 = unaff_x19 + unaff_x24 * 0x10;
  uStack0000000000000008 = *(undefined8 *)(lVar1 + 0x20);
  uStack0000000000000010 = *(undefined8 *)(lVar1 + 0x28);
  iStack0000000000000004 = in_stack_00000018._4_4_;
  if (in_stack_00000018 < 0) {
    iStack0000000000000004 = in_stack_00000018._4_4_ + 1;
  }
  iStack0000000000000004 = iStack0000000000000004 >> 1;
  if ((int)unaff_w21 <= iStack0000000000000004) {
    do {
      uVar8 = unaff_w21 * 2;
      if ((int)uVar8 < in_stack_00000018._4_4_) {
        uVar5 = uVar8 + in_w3;
        if ((*(uint *)(unaff_x19 + 0x18) <= uVar5 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar5))
        goto LAB_046118bc;
        if (in_x4 == 0) goto LAB_046118c0;
        lVar1 = unaff_x19 + (long)(int)(uVar5 - 1) * 0x10;
        lVar2 = unaff_x19 + (long)(int)uVar5 * 0x10;
        uVar9 = *(undefined8 *)(lVar1 + 0x20);
        uVar3 = *(undefined8 *)(lVar1 + 0x28);
        uVar10 = *(undefined8 *)(lVar2 + 0x20);
        uVar4 = *(undefined8 *)(lVar2 + 0x28);
        if ((*(byte *)(*(long *)(in_x5 + 0x20) + 0x135) & 1) == 0) {
          FUN_02feb2c4();
        }
        uVar5 = (**(code **)(in_x4 + 0x18))
                          (*(undefined8 *)(in_x4 + 0x40),uVar9,uVar3,uVar10,uVar4,
                           *(undefined8 *)(in_x4 + 0x28));
        uVar8 = uVar8 | uVar5 >> 0x1f;
      }
      unaff_w29 = unaff_w20 + uVar8;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_046118bc;
      unaff_x24 = (long)(int)unaff_w29;
      lVar1 = unaff_x19 + unaff_x24 * 0x10;
      uVar9 = *(undefined8 *)(lVar1 + 0x20);
      if (in_x4 == 0) {
LAB_046118c0:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      uVar10 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(byte *)(*(long *)(in_x5 + 0x20) + 0x135) & 1) == 0) {
        FUN_02feb2c4();
      }
      iVar6 = (**(code **)(in_x4 + 0x18))
                        (*(undefined8 *)(in_x4 + 0x40),uStack0000000000000008,uStack0000000000000010
                         ,uVar9,uVar10,*(undefined8 *)(in_x4 + 0x28));
      if (-1 < iVar6) {
        unaff_w29 = unaff_w20 + unaff_w21;
        unaff_x24 = (long)(int)unaff_w29;
        break;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w29) ||
         (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + unaff_w21)) goto LAB_046118bc;
      uVar9 = *(undefined8 *)(lVar1 + 0x20);
      lVar2 = unaff_x19 + (long)(int)(unaff_w20 + unaff_w21) * 0x10;
      puVar7 = (undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *puVar7 = uVar9;
      thunk_FUN_03048534(puVar7,0);
      unaff_w21 = uVar8;
    } while ((int)uVar8 <= iStack0000000000000004);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  }
  if (unaff_w29 < in_w8) {
    lVar1 = unaff_x19 + unaff_x24 * 0x10;
    puVar7 = (undefined8 *)(lVar1 + 0x20);
    *puVar7 = uStack0000000000000008;
    *(undefined8 *)(lVar1 + 0x28) = uStack0000000000000010;
    thunk_FUN_03048534(puVar7,0);
    return;
  }
LAB_046118bc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


