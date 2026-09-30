/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetInternalSerializer
ENTRY_POINT: 074ea178
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer
          (long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  bool in_CY;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  ushort *in_x9;
  long lVar10;
  int iVar11;
  ushort *in_x10;
  ushort *puVar12;
  uint in_w11;
  long unaff_x19;
  int unaff_w20;
  ulong uVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  long *unaff_x22;
  int unaff_w23;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000008;
  
  if (!in_CY) {
    do {
      puVar12 = in_x10 + 1;
      in_w11 = ((uint)*in_x10 + in_w11 * 10) - 0x30;
      in_x10 = puVar12;
    } while (puVar12 < in_x9);
  }
  uVar13 = param_1 + (ulong)in_w11;
  uVar2 = (unaff_w23 - unaff_w20) + *(int *)(unaff_x19 + 4);
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar14 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar14 = uVar2;
  }
  if ((int)uVar14 < 0x160) {
    bVar4 = uVar13 >> 0x20 != 0;
    uVar1 = uVar13 << 0x20;
    if (bVar4) {
      uVar1 = uVar13;
    }
    iVar11 = 0x20;
    if (bVar4) {
      iVar11 = 0x40;
    }
    iVar9 = iVar11 + -0x10;
    uVar13 = uVar1 << 0x10;
    if (uVar1 >> 0x30 != 0) {
      iVar9 = iVar11;
      uVar13 = uVar1;
    }
    iVar11 = iVar9 + -8;
    uVar1 = uVar13 << 8;
    if (uVar13 >> 0x38 != 0) {
      iVar11 = iVar9;
      uVar1 = uVar13;
    }
    iVar9 = iVar11 + -4;
    uVar6 = uVar1 << 4;
    if (uVar1 >> 0x3c != 0) {
      iVar9 = iVar11;
      uVar6 = uVar1;
    }
    iVar11 = iVar9 + -2;
    uVar13 = uVar6 << 2;
    if (uVar6 >> 0x3e != 0) {
      iVar11 = iVar9;
      uVar13 = uVar6;
    }
    uVar3 = (uint)(uVar13 >> 0x3f) ^ 1;
    uVar13 = uVar13 << uVar3;
    iVar11 = iVar11 - uVar3;
    in_stack_00000008._4_4_ = iVar11;
    if ((uVar14 & 0xf) != 0) {
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar5 = *unaff_x22;
      }
      lVar7 = *(long *)(lVar5 + 0xb8);
      lVar10 = *(long *)(lVar7 + 0x38);
      if (lVar10 == 0) goto LAB_074ea4bc;
      uVar3 = (uVar14 & 0xf) - 1;
      if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_074ea4c0;
      iVar8 = (int)*(char *)(lVar10 + (ulong)uVar3 + 0x20);
      iVar9 = 1 - iVar8;
      if (-1 < (int)uVar2) {
        iVar9 = iVar8;
      }
      in_stack_00000008._4_4_ = iVar9 + iVar11;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar5 = *unaff_x22;
        lVar7 = *(long *)(lVar5 + 0xb8);
      }
      lVar7 = *(long *)(lVar7 + 0x30);
      if (lVar7 == 0) goto LAB_074ea4bc;
      uVar3 = uVar3 + ((int)uVar2 >> 0x1f & 0xfU);
      if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_074ea4c0;
      uVar15 = *(undefined8 *)(lVar7 + (ulong)uVar3 * 8 + 0x20);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar13 = FUN_074f2a58(uVar13,uVar15,(long)&stack0x00000008 + 4);
    }
    if (0xf < uVar14) {
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar5 = *unaff_x22;
      }
      lVar7 = *(long *)(lVar5 + 0xb8);
      lVar10 = *(long *)(lVar7 + 0x48);
      if (lVar10 == 0) {
LAB_074ea4bc:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar16 = (long)((int)uVar14 >> 4) + -1;
      uVar14 = (uint)lVar16;
      if (*(uint *)(lVar10 + 0x18) <= uVar14) {
LAB_074ea4c0:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      iVar9 = (int)*(short *)(lVar10 + lVar16 * 2 + 0x20);
      iVar11 = 1 - iVar9;
      if (-1 < (int)uVar2) {
        iVar11 = iVar9;
      }
      in_stack_00000008._4_4_ = iVar11 + in_stack_00000008._4_4_;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar5 = *unaff_x22;
        lVar7 = *(long *)(lVar5 + 0xb8);
      }
      lVar7 = *(long *)(lVar7 + 0x40);
      if (lVar7 == 0) goto LAB_074ea4bc;
      uVar14 = uVar14 + ((int)uVar2 >> 0x1f & 0x15U);
      if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_074ea4c0;
      uVar15 = *(undefined8 *)(lVar7 + (long)(int)uVar14 * 8 + 0x20);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar13 = FUN_074f2a58(uVar13,uVar15,(long)&stack0x00000008 + 4);
    }
    iVar11 = in_stack_00000008._4_4_;
    if ((((uint)uVar13 >> 10 & 1) != 0) &&
       (uVar1 = uVar13 + (uVar13 >> 0xb & 1) + 0x3ff, bVar4 = uVar1 < uVar13, uVar13 = uVar1, bVar4)
       ) {
      uVar13 = uVar1 >> 1 | 0x8000000000000000;
      iVar11 = in_stack_00000008._4_4_ + 1;
    }
    in_stack_00000008._4_4_ = iVar11 + 0x3fe;
    if ((int)in_stack_00000008._4_4_ < 1) {
      if ((in_stack_00000008._4_4_ == 0xffffffcc) && (0x8000000000000057 < uVar13)) {
        uVar13 = 1;
      }
      else if ((int)in_stack_00000008._4_4_ < -0x33) {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar13 >> ((ulong)(-iVar11 - 0x3f2) & 0x3f);
      }
    }
    else if (in_stack_00000008._4_4_ < 0x7ff) {
      uVar13 = uVar13 >> 0xb & 0xfffffffffffff | (ulong)in_stack_00000008._4_4_ << 0x34;
    }
    else {
      uVar13 = 0x7ff0000000000000;
    }
  }
  else {
    uVar13 = 0x7ff0000000000000;
    if ((int)uVar2 < 1) {
      uVar13 = 0;
    }
  }
  uVar6 = FUN_074f3a04();
  uVar1 = uVar13 | 0x8000000000000000;
  if ((uVar6 & 1) == 0) {
    uVar1 = uVar13;
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar1;
  return auVar17;
}


