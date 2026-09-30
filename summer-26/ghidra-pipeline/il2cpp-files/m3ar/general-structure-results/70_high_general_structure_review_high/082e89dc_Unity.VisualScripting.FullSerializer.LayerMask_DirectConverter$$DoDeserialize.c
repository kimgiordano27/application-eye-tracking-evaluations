/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter$$DoDeserialize
ENTRY_POINT: 082e89dc
PROGRAM: m3ar-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__DoDeserialize
               (long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar6;
  uint unaff_w22;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  int unaff_w28;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  while (param_1 != 0) {
    uVar2 = *(uint *)(param_2 + 0x18);
    if (uVar2 < *(uint *)(param_1 + 0x18)) {
      param_1 = param_1 + (long)(int)uVar2 * (long)unaff_w28;
      *(uint *)(param_2 + 0x18) = uVar2 + 1;
      *(undefined8 *)(param_1 + 0x28) = in_stack_00000058;
      *(undefined8 *)(param_1 + 0x20) = in_stack_00000050;
      *(ulong *)(param_1 + 0x38) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      *(undefined8 *)(param_1 + 0x30) = in_stack_00000060;
      *(undefined8 *)(param_1 + 0x44) = uStack0000000000000074;
      *(ulong *)(param_1 + 0x3c) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    }
    else {
      in_stack_00000098 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70);
      in_stack_00000088 = in_stack_00000058;
      in_stack_00000080 = in_stack_00000050;
      in_stack_00000090 = in_stack_00000060;
      *(undefined8 *)(unaff_x27 + 0x24) = uStack0000000000000074;
      *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
      FUN_05749590(param_2,&stack0x00000080,uVar5);
    }
    if ((*(long *)(unaff_x19 + 0x178) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x178) + 0x40), lVar4 == 0)) break;
    in_stack_00000098 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
    uVar5 = *unaff_x26;
    in_stack_00000088 = in_stack_00000028;
    in_stack_00000080 = in_stack_00000020;
    in_stack_00000090 = in_stack_00000030;
    *(undefined8 *)(unaff_x27 + 0x24) = uStack0000000000000044;
    *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack0000000000000040,uStack000000000000003c);
    System_Array_EmptyInternalEnumerator<ReleaseVelocityInformation>__get_Current
              (lVar4,unaff_w22,&stack0x00000080,uVar5);
    do {
      puVar6 = unaff_x21;
      unaff_x23 = unaff_x23 + 1;
      unaff_x21 = (undefined8 *)((long)puVar6 + 0x2c);
      if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x23) {
        return;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) goto LAB_082e8aa4;
      FUN_0864bb8c(&stack0x00000080,unaff_x21,0);
      iVar1 = FUN_0864b9d8();
      if (iVar1 == 0) {
        return;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) goto LAB_082e8aa4;
      FUN_0864bbb4(&stack0x00000080,unaff_x21,0);
      iVar1 = FUN_0864b9d8();
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) goto LAB_082e8aa4;
      FUN_0864bb8c(&stack0x00000050,unaff_x21,0);
      uVar2 = FUN_0864b9d8();
      if ((*(long *)(unaff_x19 + 0x178) == 0) ||
         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x178) + 0x40), lVar4 == 0)) goto LAB_082e8aa0;
      unaff_w22 = uVar2 | iVar1 << 0x10;
      uVar3 = FUN_0709c530(lVar4,unaff_w22,*unaff_x24);
    } while ((uVar3 & 1) != 0);
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) {
LAB_082e8aa4:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    in_stack_00000028 = *(undefined8 *)((long)puVar6 + 0x34);
    in_stack_00000020 = *unaff_x21;
    in_stack_00000030 = *(undefined8 *)((long)puVar6 + 0x3c);
    uStack0000000000000044 = puVar6[10];
    uStack0000000000000038 = (undefined4)*(undefined8 *)((long)puVar6 + 0x44);
    uStack000000000000003c = (undefined4)puVar6[9];
    uStack0000000000000040 = (undefined4)((ulong)puVar6[9] >> 0x20);
    if ((*(long *)(unaff_x19 + 0x178) == 0) ||
       (param_2 = *(long *)(*(long *)(unaff_x19 + 0x178) + 0x20), param_2 == 0)) break;
    in_stack_00000058 = *(undefined8 *)((long)puVar6 + 0x34);
    in_stack_00000050 = *unaff_x21;
    in_x9 = *unaff_x25;
    in_stack_00000060 = *(undefined8 *)((long)puVar6 + 0x3c);
    uStack0000000000000068 = (undefined4)*(undefined8 *)((long)puVar6 + 0x44);
    uStack0000000000000074 = puVar6[10];
    uStack000000000000006c = (undefined4)puVar6[9];
    uStack0000000000000070 = (undefined4)((ulong)puVar6[9] >> 0x20);
    param_1 = *(long *)(param_2 + 0x10);
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  }
LAB_082e8aa0:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


