/*
FUNCTION_NAME: Obi.ObiNativeList<ColliderRigidbody>$$OnAfterDeserialize
ENTRY_POINT: 024546c0
PROGRAM: simulator-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


int Obi_ObiNativeList<ColliderRigidbody>__OnAfterDeserialize(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  uVar9 = 0;
  lVar5 = 0x20;
  do {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) goto LAB_02454878;
    if (*(uint *)(lVar3 + 0x18) <= uVar9) goto LAB_0245487c;
    puVar1 = (undefined8 *)(lVar3 + lVar5);
    if (unaff_x20 == 0) goto LAB_02454878;
    in_stack_00000060 = *puVar1;
    in_stack_00000068 = puVar1[1];
    in_stack_00000070 = puVar1[2];
    in_stack_00000078 = puVar1[3];
    in_stack_00000080 = puVar1[4];
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
      break;
    }
    uVar2 = (ulong)*(int *)(unaff_x19 + 0x18);
    uVar9 = uVar9 + 1;
    lVar5 = lVar5 + 0x28;
  } while ((long)uVar9 < (long)uVar2);
  if ((int)uVar2 <= (int)uVar9) {
    return 0;
  }
  uVar6 = uVar9 & 0xffffffff;
  do {
    uVar9 = (ulong)((int)uVar9 + 1);
    do {
      iVar7 = (int)uVar9;
      uVar4 = (uint)uVar6;
      if ((int)uVar2 <= iVar7) {
        FUN_0290d6ac(*(undefined8 *)(unaff_x19 + 0x10),uVar6,(int)uVar2 - uVar4,0);
        iVar7 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar4;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar7 - uVar4;
      }
      lVar5 = (long)iVar7 * 0x28 + 0x20;
      uVar9 = (ulong)iVar7;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_02454878;
        if (*(uint *)(lVar3 + 0x18) <= (uint)uVar9) goto LAB_0245487c;
        puVar1 = (undefined8 *)(lVar3 + lVar5);
        if (unaff_x20 == 0) goto LAB_02454878;
        in_stack_00000060 = *puVar1;
        in_stack_00000068 = puVar1[1];
        in_stack_00000070 = puVar1[2];
        in_stack_00000078 = puVar1[3];
        in_stack_00000080 = puVar1[4];
        uVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar2 & 1) == 0) {
          uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        uVar2 = (ulong)*(int *)(unaff_x19 + 0x18);
        uVar9 = uVar9 + 1;
        lVar5 = lVar5 + 0x28;
      } while ((long)uVar9 < (long)uVar2);
      uVar8 = (uint)uVar9;
    } while ((int)uVar2 <= (int)uVar8);
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) {
LAB_02454878:
                    /* WARNING: Subroutine does not return */
      FUN_018c4afc();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar8) {
LAB_0245487c:
                    /* WARNING: Subroutine does not return */
      FUN_018c4b04();
    }
    lVar3 = lVar5 + (long)(int)uVar8 * 0x28;
    uVar13 = *(undefined8 *)(lVar3 + 0x28);
    uVar12 = *(undefined8 *)(lVar3 + 0x20);
    uVar11 = *(undefined8 *)(lVar3 + 0x38);
    uVar10 = *(undefined8 *)(lVar3 + 0x30);
    if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_0245487c;
    lVar5 = lVar5 + (long)(int)uVar4 * 0x28;
    uVar6 = (ulong)(uVar4 + 1);
    *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar5 + 0x28) = uVar13;
    *(undefined8 *)(lVar5 + 0x20) = uVar12;
    *(undefined8 *)(lVar5 + 0x38) = uVar11;
    *(undefined8 *)(lVar5 + 0x30) = uVar10;
    uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
  } while( true );
}


