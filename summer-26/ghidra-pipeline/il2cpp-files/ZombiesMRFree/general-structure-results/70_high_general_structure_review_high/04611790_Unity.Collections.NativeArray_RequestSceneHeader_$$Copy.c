/*
FUNCTION_NAME: Unity.Collections.NativeArray<RequestSceneHeader>$$Copy
ENTRY_POINT: 04611790
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


void Unity_Collections_NativeArray<RequestSceneHeader>__Copy(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint in_w8;
  uint in_w9;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long lVar8;
  uint unaff_w26;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  int iStack0000000000000000;
  int iStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    lVar1 = unaff_x19 + (long)(int)in_w9 * 0x10;
                    /* try { // try from 0461179c to 047118bf has its CatchHandler @ 0461179c
                       catch() { ... } // from try @ 0461179c with catch @ 0461179c
                       catch() { ... } // from try @ 04611a08 with catch @ 0461179c
                       catch() { ... } // from try @ 04611a94 with catch @ 0461179c
                       catch() { ... } // from try @ 04611a9c with catch @ 0461179c
                       catch() { ... } // from try @ 04611b44 with catch @ 0461179c */
    lVar8 = unaff_x19 + (long)(int)in_w8 * 0x10;
    uVar9 = *(undefined8 *)(lVar1 + 0x20);
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    uVar10 = *(undefined8 *)(lVar8 + 0x20);
    uVar4 = *(undefined8 *)(lVar8 + 0x28);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      FUN_02feb2c4();
    }
    uVar5 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),uVar9,uVar3,uVar10,uVar4,
                       *(undefined8 *)(unaff_x23 + 0x28));
    unaff_w26 = unaff_w26 | uVar5 >> 0x1f;
    uVar5 = unaff_w21;
    do {
      unaff_w21 = unaff_w26;
      uVar11 = unaff_w20 + unaff_w21;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar11) goto LAB_046118bc;
      lVar8 = (long)(int)uVar11;
      lVar1 = unaff_x19 + lVar8 * 0x10;
      uVar9 = *(undefined8 *)(lVar1 + 0x20);
      if (unaff_x23 == 0) goto LAB_046118c0;
      uVar10 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_02feb2c4();
      }
      iVar6 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000008,in_stack_00000010,uVar9
                         ,uVar10,*(undefined8 *)(unaff_x23 + 0x28));
      if (-1 < iVar6) {
        uVar11 = unaff_w20 + uVar5;
        lVar8 = (long)(int)uVar11;
LAB_04611878:
        if (uVar11 < *(uint *)(unaff_x19 + 0x18)) {
          lVar1 = unaff_x19 + lVar8 * 0x10;
          puVar7 = (undefined8 *)(lVar1 + 0x20);
          *puVar7 = in_stack_00000008;
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000010;
          thunk_FUN_03048534(puVar7,0);
          return;
        }
        goto LAB_046118bc;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar11) ||
         (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + uVar5)) goto LAB_046118bc;
      uVar9 = *(undefined8 *)(lVar1 + 0x20);
      lVar2 = unaff_x19 + (long)(int)(unaff_w20 + uVar5) * 0x10;
      puVar7 = (undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *puVar7 = uVar9;
      thunk_FUN_03048534(puVar7,0);
      if (iStack0000000000000004 < (int)unaff_w21) goto LAB_04611878;
      unaff_w26 = unaff_w21 * 2;
      uVar5 = unaff_w21;
    } while (in_stack_00000018._4_4_ <= (int)unaff_w26);
    in_w8 = unaff_w26 + iStack0000000000000000;
    in_w9 = in_w8 - 1;
    if ((*(uint *)(unaff_x19 + 0x18) <= in_w9) || (*(uint *)(unaff_x19 + 0x18) <= in_w8)) {
LAB_046118bc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    if (unaff_x23 == 0) {
LAB_046118c0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    param_1 = *(long *)(unaff_x22 + 0x20);
  } while( true );
}


