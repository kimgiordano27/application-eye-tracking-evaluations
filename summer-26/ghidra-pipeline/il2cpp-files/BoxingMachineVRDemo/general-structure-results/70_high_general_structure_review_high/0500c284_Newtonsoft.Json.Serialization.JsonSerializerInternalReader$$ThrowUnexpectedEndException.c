/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ThrowUnexpectedEndException
ENTRY_POINT: 0500c284
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ThrowUnexpectedEndException(void)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int in_w9;
  int iVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  long *unaff_x22;
  uint unaff_w23;
  ulong unaff_x25;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000008;
  
  if (in_w9 == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar12 = -unaff_w23;
  if (-1 < (int)unaff_w23) {
    uVar12 = unaff_w23;
  }
  if ((int)uVar12 < 0x160) {
    bVar3 = unaff_x25 >> 0x20 != 0;
    uVar11 = unaff_x25 << 0x20;
    if (bVar3) {
      uVar11 = unaff_x25;
    }
    iVar9 = 0x20;
    if (bVar3) {
      iVar9 = 0x40;
    }
    bVar3 = uVar11 >> 0x30 != 0;
    uVar6 = uVar11 << 0x10;
    if (bVar3) {
      uVar6 = uVar11;
    }
    iVar7 = iVar9 + -0x10;
    if (bVar3) {
      iVar7 = iVar9;
    }
    bVar3 = uVar6 >> 0x38 != 0;
    uVar11 = uVar6 << 8;
    if (bVar3) {
      uVar11 = uVar6;
    }
    iVar9 = iVar7 + -8;
    if (bVar3) {
      iVar9 = iVar7;
    }
    bVar3 = uVar11 >> 0x3c != 0;
    uVar6 = uVar11 << 4;
    if (bVar3) {
      uVar6 = uVar11;
    }
    iVar7 = iVar9 + -4;
    if (bVar3) {
      iVar7 = iVar9;
    }
    iVar9 = iVar7 + -2;
    uVar10 = uVar6 << 2;
    if (uVar6 >> 0x3e != 0) {
      iVar9 = iVar7;
      uVar10 = uVar6;
    }
    uVar1 = iVar9 + ~(uint)((long)uVar10 >> 0x3f);
    uVar10 = uVar10 << (~uVar10 >> 0x3f);
    in_stack_00000008._4_4_ = uVar1;
    if ((uVar12 & 0xf) != 0) {
      lVar4 = *unaff_x22;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar4 = *unaff_x22;
      }
      lVar5 = *(long *)(lVar4 + 0xb8);
      lVar8 = *(long *)(lVar5 + 0x38);
      if (lVar8 == 0) goto LAB_0500c584;
      uVar2 = (uVar12 & 0xf) - 1;
      if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_0500c588;
      iVar7 = (int)*(char *)(lVar8 + (ulong)uVar2 + 0x20);
      iVar9 = 1 - iVar7;
      if (-1 < (int)unaff_w23) {
        iVar9 = iVar7;
      }
      in_stack_00000008._4_4_ = iVar9 + uVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar4 = *unaff_x22;
        lVar5 = *(long *)(lVar4 + 0xb8);
      }
      lVar5 = *(long *)(lVar5 + 0x30);
      if (lVar5 == 0) goto LAB_0500c584;
      uVar2 = uVar2 + ((int)unaff_w23 >> 0x1f & 0xfU);
      if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_0500c588;
      uVar13 = *(undefined8 *)(lVar5 + (ulong)uVar2 * 8 + 0x20);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_050146f8(uVar10,uVar13,(long)&stack0x00000008 + 4);
    }
    if ((int)uVar12 >> 4 != 0) {
      lVar4 = *unaff_x22;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar4 = *unaff_x22;
      }
      lVar5 = *(long *)(lVar4 + 0xb8);
      lVar8 = *(long *)(lVar5 + 0x48);
      if (lVar8 == 0) {
LAB_0500c584:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar14 = (long)((int)uVar12 >> 4) + -1;
      uVar12 = (uint)lVar14;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) {
LAB_0500c588:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      iVar7 = (int)*(short *)(lVar8 + lVar14 * 2 + 0x20);
      iVar9 = 1 - iVar7;
      if (-1 < (int)unaff_w23) {
        iVar9 = iVar7;
      }
      in_stack_00000008._4_4_ = iVar9 + in_stack_00000008._4_4_;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar4 = *unaff_x22;
        lVar5 = *(long *)(lVar4 + 0xb8);
      }
      lVar5 = *(long *)(lVar5 + 0x40);
      if (lVar5 == 0) goto LAB_0500c584;
      uVar12 = uVar12 + ((int)unaff_w23 >> 0x1f & 0x15U);
      if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_0500c588;
      uVar13 = *(undefined8 *)(lVar5 + (long)(int)uVar12 * 8 + 0x20);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_050146f8(uVar10,uVar13,(long)&stack0x00000008 + 4);
    }
    uVar11 = uVar10;
    if ((((uint)uVar10 >> 10 & 1) != 0) &&
       (uVar11 = uVar10 + (uVar10 >> 0xb & 1) + 0x3ff, uVar11 < uVar10)) {
      uVar11 = uVar11 >> 1 | 0x8000000000000000;
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    }
    uVar6 = (ulong)in_stack_00000008._4_4_;
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 0x3fe;
    if ((int)in_stack_00000008._4_4_ < 1) {
      if ((uVar11 < 0x8000000000000058) || (in_stack_00000008._4_4_ != 0xffffffcc)) {
        if ((int)in_stack_00000008._4_4_ < -0x33) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar11 >> (0xfffffc0e - uVar6 & 0x3f);
        }
      }
      else {
        uVar11 = 1;
      }
    }
    else if ((int)in_stack_00000008._4_4_ < 0x7ff) {
      uVar11 = uVar11 >> 0xb & 0xfffffffffffff | (ulong)in_stack_00000008._4_4_ << 0x34;
    }
    else {
      uVar11 = 0x7ff0000000000000;
    }
  }
  else {
    uVar11 = 0x7ff0000000000000;
    if ((int)unaff_w23 < 1) {
      uVar11 = 0;
    }
  }
  uVar10 = FUN_05015978();
  uVar6 = uVar11 | 0x8000000000000000;
  if ((uVar10 & 1) == 0) {
    uVar6 = uVar11;
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar6;
  return auVar15;
}


