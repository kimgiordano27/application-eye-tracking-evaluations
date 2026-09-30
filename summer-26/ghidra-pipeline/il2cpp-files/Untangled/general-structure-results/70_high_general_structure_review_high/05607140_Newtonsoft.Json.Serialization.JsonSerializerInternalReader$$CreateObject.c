/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObject
ENTRY_POINT: 05607140
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long in_x9;
  long lVar7;
  long lVar8;
  uint in_w10;
  int iVar9;
  ushort *puVar10;
  uint in_w11;
  uint uVar11;
  long unaff_x19;
  int unaff_w20;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long unaff_x21;
  undefined8 uVar15;
  long lVar16;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  long unaff_x25;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000008;
  
  if (in_w11 <= in_w10) goto LAB_056074d8;
  lVar7 = *(long *)(in_x9 + 0x38);
  if (lVar7 == 0) goto LAB_056074d4;
  if (*(uint *)(lVar7 + 0x18) <= in_w10) goto LAB_056074d8;
  uVar11 = (uint)*(ushort *)(unaff_x21 + 0x12);
  for (puVar10 = (ushort *)(unaff_x21 + 0x14); puVar10 < (ushort *)(unaff_x21 + 0x12) + unaff_w24;
      puVar10 = puVar10 + 1) {
    uVar11 = (uint)*puVar10 + (uVar11 - 0x30) * 10;
  }
  uVar13 = (*(ulong *)(param_1 + (long)(int)in_w10 * 8 + 0x20) >>
            ((ulong)-(uint)*(byte *)(lVar7 + (int)in_w10 + 0x20) & 0x3f) & 0xffffffff) * unaff_x25 +
           (ulong)(uVar11 - 0x30);
  uVar11 = ((unaff_w23 - unaff_w24) - unaff_w20) + *(int *)(unaff_x19 + 4);
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar14 = -uVar11;
  if (-1 < (int)uVar11) {
    uVar14 = uVar11;
  }
  if ((int)uVar14 < 0x160) {
    bVar3 = uVar13 >> 0x20 != 0;
    uVar12 = uVar13 << 0x20;
    if (bVar3) {
      uVar12 = uVar13;
    }
    iVar9 = 0x20;
    if (bVar3) {
      iVar9 = 0x40;
    }
    bVar3 = uVar12 >> 0x30 != 0;
    uVar13 = uVar12 << 0x10;
    if (bVar3) {
      uVar13 = uVar12;
    }
    iVar6 = iVar9 + -0x10;
    if (bVar3) {
      iVar6 = iVar9;
    }
    bVar3 = uVar13 >> 0x38 != 0;
    uVar12 = uVar13 << 8;
    if (bVar3) {
      uVar12 = uVar13;
    }
    iVar9 = iVar6 + -8;
    if (bVar3) {
      iVar9 = iVar6;
    }
    bVar3 = uVar12 >> 0x3c != 0;
    uVar13 = uVar12 << 4;
    if (bVar3) {
      uVar13 = uVar12;
    }
    iVar6 = iVar9 + -4;
    if (bVar3) {
      iVar6 = iVar9;
    }
    iVar9 = iVar6 + -2;
    uVar12 = uVar13 << 2;
    if (uVar13 >> 0x3e != 0) {
      iVar9 = iVar6;
      uVar12 = uVar13;
    }
    uVar1 = iVar9 + ~(uint)((long)uVar12 >> 0x3f);
    uVar12 = uVar12 << (~uVar12 >> 0x3f);
    in_stack_00000008._4_4_ = uVar1;
    if ((uVar14 & 0xf) != 0) {
      lVar7 = *unaff_x22;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar7 = *unaff_x22;
      }
      lVar5 = *(long *)(lVar7 + 0xb8);
      lVar8 = *(long *)(lVar5 + 0x38);
      if (lVar8 == 0) goto LAB_056074d4;
      uVar2 = (uVar14 & 0xf) - 1;
      if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_056074d8;
      iVar6 = (int)*(char *)(lVar8 + (ulong)uVar2 + 0x20);
      iVar9 = 1 - iVar6;
      if (-1 < (int)uVar11) {
        iVar9 = iVar6;
      }
      in_stack_00000008._4_4_ = iVar9 + uVar1;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar7 = *unaff_x22;
        lVar5 = *(long *)(lVar7 + 0xb8);
      }
      lVar5 = *(long *)(lVar5 + 0x30);
      if (lVar5 == 0) goto LAB_056074d4;
      uVar2 = uVar2 + ((int)uVar11 >> 0x1f & 0xfU);
      if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_056074d8;
      uVar15 = *(undefined8 *)(lVar5 + (ulong)uVar2 * 8 + 0x20);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar12 = FUN_0560f5f4(uVar12,uVar15,(long)&stack0x00000008 + 4);
    }
    if ((int)uVar14 >> 4 != 0) {
      lVar7 = *unaff_x22;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar7 = *unaff_x22;
      }
      lVar5 = *(long *)(lVar7 + 0xb8);
      lVar8 = *(long *)(lVar5 + 0x48);
      if (lVar8 == 0) {
LAB_056074d4:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar16 = (long)((int)uVar14 >> 4) + -1;
      uVar14 = (uint)lVar16;
      if (*(uint *)(lVar8 + 0x18) <= uVar14) {
LAB_056074d8:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      iVar6 = (int)*(short *)(lVar8 + lVar16 * 2 + 0x20);
      iVar9 = 1 - iVar6;
      if (-1 < (int)uVar11) {
        iVar9 = iVar6;
      }
      in_stack_00000008._4_4_ = iVar9 + in_stack_00000008._4_4_;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar7 = *unaff_x22;
        lVar5 = *(long *)(lVar7 + 0xb8);
      }
      lVar5 = *(long *)(lVar5 + 0x40);
      if (lVar5 == 0) goto LAB_056074d4;
      uVar14 = uVar14 + ((int)uVar11 >> 0x1f & 0x15U);
      if (*(uint *)(lVar5 + 0x18) <= uVar14) goto LAB_056074d8;
      uVar15 = *(undefined8 *)(lVar5 + (long)(int)uVar14 * 8 + 0x20);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar12 = FUN_0560f5f4(uVar12,uVar15,(long)&stack0x00000008 + 4);
    }
    uVar13 = uVar12;
    if ((((uint)uVar12 >> 10 & 1) != 0) &&
       (uVar13 = uVar12 + (uVar12 >> 0xb & 1) + 0x3ff, uVar13 < uVar12)) {
      uVar13 = uVar13 >> 1 | 0x8000000000000000;
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    }
    uVar11 = in_stack_00000008._4_4_ + 0x3fe;
    if ((int)uVar11 < 1) {
      if ((uVar13 < 0x8000000000000058) || (uVar11 != 0xffffffcc)) {
        if ((int)uVar11 < -0x33) {
          uVar13 = 0;
        }
        else {
          uVar13 = uVar13 >> (0xfffffc0e - (ulong)in_stack_00000008._4_4_ & 0x3f);
        }
      }
      else {
        uVar13 = 1;
      }
    }
    else if ((int)uVar11 < 0x7ff) {
      uVar13 = uVar13 >> 0xb & 0xfffffffffffff | (ulong)uVar11 << 0x34;
    }
    else {
      uVar13 = 0x7ff0000000000000;
    }
  }
  else {
    uVar13 = 0x7ff0000000000000;
    if ((int)uVar11 < 1) {
      uVar13 = 0;
    }
  }
  uVar4 = FUN_05610694();
  uVar12 = uVar13 | 0x8000000000000000;
  if ((uVar4 & 1) == 0) {
    uVar12 = uVar13;
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar12;
  return auVar17;
}


