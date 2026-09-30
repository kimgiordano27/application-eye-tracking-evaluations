/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter$$DoSerialize
ENTRY_POINT: 082e8904
PROGRAM: m3ar-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__DoSerialize(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  int unaff_w28;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 in_stack_00000098;
  
  while( true ) {
    uStack0000000000000008 = in_stack_00000088;
    uStack0000000000000000 = in_stack_00000080;
    uStack0000000000000010 = uStack0000000000000090;
    iVar2 = FUN_0864b9d8();
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) break;
    FUN_0864bb8c(&stack0x00000050,unaff_x21,0);
    uStack0000000000000008 = in_stack_00000058;
    uStack0000000000000000 = in_stack_00000050;
    uStack0000000000000010 = uStack0000000000000060;
    uVar3 = FUN_0864b9d8();
    if ((*(long *)(unaff_x19 + 0x178) == 0) ||
       (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x178) + 0x40), lVar7 == 0)) goto LAB_082e8aa0;
    uVar3 = uVar3 | iVar2 << 0x10;
    uVar4 = FUN_0709c530(lVar7,uVar3,*unaff_x24);
    if ((uVar4 & 1) == 0) {
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) break;
      uVar11 = unaff_x21[1];
      uVar10 = *unaff_x21;
      uVar12 = unaff_x21[2];
      uVar14 = *(undefined8 *)((long)unaff_x21 + 0x24);
      uVar13 = *(undefined8 *)((long)unaff_x21 + 0x1c);
      uStack0000000000000038 = (undefined4)unaff_x21[3];
      uStack000000000000003c = (undefined4)uVar13;
      if ((*(long *)(unaff_x19 + 0x178) == 0) ||
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x178) + 0x20), lVar7 == 0)) {
LAB_082e8aa0:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      in_stack_00000058 = unaff_x21[1];
      in_stack_00000050 = *unaff_x21;
      lVar9 = *unaff_x25;
      _uStack0000000000000060 = unaff_x21[2];
      uStack0000000000000068 = (undefined4)unaff_x21[3];
      uStack0000000000000074 = *(undefined8 *)((long)unaff_x21 + 0x24);
      uVar6 = *(undefined8 *)((long)unaff_x21 + 0x1c);
      uStack000000000000006c = (undefined4)uVar6;
      uStack0000000000000070 = (undefined4)((ulong)uVar6 >> 0x20);
      lVar8 = *(long *)(lVar7 + 0x10);
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_082e8aa0;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar1 * (long)unaff_w28;
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + 0x28) = in_stack_00000058;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_00000050;
        *(ulong *)(lVar8 + 0x38) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
        *(undefined8 *)(lVar8 + 0x30) = _uStack0000000000000060;
        *(undefined8 *)(lVar8 + 0x44) = uStack0000000000000074;
        *(undefined8 *)(lVar8 + 0x3c) = uVar6;
      }
      else {
        in_stack_00000098 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
        uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
        *(undefined8 *)(unaff_x27 + 0x24) = uStack0000000000000074;
        *(undefined8 *)(unaff_x27 + 0x1c) = uVar6;
        in_stack_00000080 = in_stack_00000050;
        in_stack_00000088 = in_stack_00000058;
        _uStack0000000000000090 = _uStack0000000000000060;
        FUN_05749590(lVar7,&stack0x00000080,uVar5);
      }
      if ((*(long *)(unaff_x19 + 0x178) == 0) ||
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x178) + 0x40), lVar7 == 0)) goto LAB_082e8aa0;
      in_stack_00000098 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      uVar6 = *unaff_x26;
      *(undefined8 *)(unaff_x27 + 0x24) = uVar14;
      *(undefined8 *)(unaff_x27 + 0x1c) = uVar13;
      in_stack_00000080 = uVar10;
      in_stack_00000088 = uVar11;
      _uStack0000000000000090 = uVar12;
      System_Array_EmptyInternalEnumerator<ReleaseVelocityInformation>__get_Current
                (lVar7,uVar3,&stack0x00000080,uVar6);
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x21 = (undefined8 *)((long)unaff_x21 + 0x2c);
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x23) {
      return;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) break;
    FUN_0864bb8c(&stack0x00000080,unaff_x21,0);
    uStack0000000000000008 = in_stack_00000088;
    uStack0000000000000000 = in_stack_00000080;
    uStack0000000000000010 = uStack0000000000000090;
    iVar2 = FUN_0864b9d8();
    if (iVar2 == 0) {
      return;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) break;
    FUN_0864bbb4(&stack0x00000080,unaff_x21,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


