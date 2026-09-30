/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.Models.BasicErrorResponse$$SerializeAsPathParam
ENTRY_POINT: 08315550
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


void Unity_Services_CloudSave_Internal_Models_BasicErrorResponse__SerializeAsPathParam(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int in_w9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  long unaff_x24;
  long unaff_x26;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  while( true ) {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = in_w9 + 1;
    if (lVar3 == 0) break;
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      lVar3 = lVar3 + (int)uVar2 * unaff_x26;
      *(undefined8 *)(lVar3 + 0x34) = uStack0000000000000074;
      *(ulong *)(lVar3 + 0x2c) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
      *(ulong *)(lVar3 + 0x28) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      *(undefined8 *)(lVar3 + 0x20) = in_stack_00000060;
    }
    else {
      in_stack_00000088 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      in_stack_00000080 = in_stack_00000060;
      *(undefined8 *)(unaff_x24 + 0x14) = uStack0000000000000074;
      *(ulong *)(unaff_x24 + 0xc) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
      Unity_Collections_NativeArray<ConnectionDataMap_ConnectionSlot<TCPNetworkInterface_ConnectionData>>__Copy
                ();
    }
    FUN_08315274(&stack0x00000020,unaff_w22,unaff_w22 + 1);
    uStack0000000000000068 = uStack0000000000000028;
    in_stack_00000060 = in_stack_00000020;
    uStack0000000000000074 = uStack0000000000000034;
    uStack0000000000000070 = uStack0000000000000030;
    lVar3 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar3 == 0) break;
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      lVar3 = lVar3 + (int)uVar2 * unaff_x26;
      *(undefined8 *)(lVar3 + 0x34) = uStack0000000000000034;
      *(ulong *)(lVar3 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      *(ulong *)(lVar3 + 0x28) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *(undefined8 *)(lVar3 + 0x20) = in_stack_00000020;
    }
    else {
      in_stack_00000088 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      in_stack_00000080 = in_stack_00000020;
      *(undefined8 *)(unaff_x24 + 0x14) = uStack0000000000000034;
      *(ulong *)(unaff_x24 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      Unity_Collections_NativeArray<ConnectionDataMap_ConnectionSlot<TCPNetworkInterface_ConnectionData>>__Copy
                ();
    }
    FUN_08315274(unaff_w22 + 1,unaff_w22 + -1);
    uStack0000000000000068 = uStack0000000000000008;
    in_stack_00000060 = in_stack_00000000;
    uStack0000000000000074 = uStack0000000000000014;
    uStack0000000000000070 = uStack0000000000000010;
    lVar3 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar3 == 0) break;
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      lVar3 = lVar3 + (int)uVar2 * unaff_x26;
      *(undefined8 *)(lVar3 + 0x34) = uStack0000000000000014;
      *(ulong *)(lVar3 + 0x2c) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
      *(undefined8 *)(lVar3 + 0x28) = _uStack0000000000000008;
      *(undefined8 *)(lVar3 + 0x20) = in_stack_00000000;
    }
    else {
      in_stack_00000088 = _uStack0000000000000008;
      in_stack_00000080 = in_stack_00000000;
      *(undefined8 *)(unaff_x24 + 0x14) = uStack0000000000000014;
      *(ulong *)(unaff_x24 + 0xc) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
      Unity_Collections_NativeArray<ConnectionDataMap_ConnectionSlot<TCPNetworkInterface_ConnectionData>>__Copy
                ();
    }
    iVar1 = unaff_w22 + 2;
    if (*(int *)(unaff_x20 + 0x18) <= iVar1) {
      return;
    }
    unaff_w22 = unaff_w22 + 3;
    FUN_08315274(&stack0x00000040,iVar1,unaff_w22);
    if (unaff_x19 == 0) break;
    uStack0000000000000068 = uStack0000000000000048;
    in_stack_00000060 = in_stack_00000040;
    uStack0000000000000074 = uStack0000000000000054;
    uStack000000000000006c = uStack000000000000004c;
    uStack0000000000000070 = uStack0000000000000050;
    in_w9 = *(int *)(unaff_x19 + 0x1c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


