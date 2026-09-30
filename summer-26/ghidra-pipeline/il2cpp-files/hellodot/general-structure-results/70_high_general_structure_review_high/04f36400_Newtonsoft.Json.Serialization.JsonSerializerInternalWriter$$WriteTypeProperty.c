/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
ENTRY_POINT: 04f36400
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty
          (ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ushort *puVar11;
  int in_w11;
  ulong in_x12;
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
  
  for (puVar11 = (ushort *)(unaff_x21 + 2); puVar11 < (ushort *)(unaff_x21 + (long)unaff_w24 * 2);
      puVar11 = puVar11 + 1) {
    in_w11 = (uint)*puVar11 + (in_w11 - 0x30U) * 10;
  }
  uVar13 = (param_1 >> (in_x12 & 0x3f) & 0xffffffff) * unaff_x25 + (ulong)(in_w11 - 0x30U);
  uVar1 = (unaff_w23 - unaff_w20) + *(int *)(unaff_x19 + 4);
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar14 = -uVar1;
  if (-1 < (int)uVar1) {
    uVar14 = uVar1;
  }
  if ((int)uVar14 < 0x160) {
    bVar4 = uVar13 >> 0x20 != 0;
    uVar12 = uVar13 << 0x20;
    if (bVar4) {
      uVar12 = uVar13;
    }
    iVar10 = 0x20;
    if (bVar4) {
      iVar10 = 0x40;
    }
    bVar4 = uVar12 >> 0x30 != 0;
    uVar13 = uVar12 << 0x10;
    if (bVar4) {
      uVar13 = uVar12;
    }
    iVar8 = iVar10 + -0x10;
    if (bVar4) {
      iVar8 = iVar10;
    }
    bVar4 = uVar13 >> 0x38 != 0;
    uVar12 = uVar13 << 8;
    if (bVar4) {
      uVar12 = uVar13;
    }
    iVar10 = iVar8 + -8;
    if (bVar4) {
      iVar10 = iVar8;
    }
    bVar4 = uVar12 >> 0x3c != 0;
    uVar13 = uVar12 << 4;
    if (bVar4) {
      uVar13 = uVar12;
    }
    iVar8 = iVar10 + -4;
    if (bVar4) {
      iVar8 = iVar10;
    }
    iVar10 = iVar8 + -2;
    uVar12 = uVar13 << 2;
    if (uVar13 >> 0x3e != 0) {
      iVar10 = iVar8;
      uVar12 = uVar13;
    }
    uVar2 = iVar10 + ~(uint)((long)uVar12 >> 0x3f);
    uVar12 = uVar12 << (~uVar12 >> 0x3f);
    in_stack_00000008._4_4_ = uVar2;
    if ((uVar14 & 0xf) != 0) {
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar5 = *unaff_x22;
      }
      lVar7 = *(long *)(lVar5 + 0xb8);
      lVar9 = *(long *)(lVar7 + 0x38);
      if (lVar9 == 0) goto LAB_04f36758;
      uVar3 = (uVar14 & 0xf) - 1;
      if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_04f3675c;
      iVar8 = (int)*(char *)(lVar9 + (ulong)uVar3 + 0x20);
      iVar10 = 1 - iVar8;
      if (-1 < (int)uVar1) {
        iVar10 = iVar8;
      }
      in_stack_00000008._4_4_ = iVar10 + uVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar5 = *unaff_x22;
        lVar7 = *(long *)(lVar5 + 0xb8);
      }
      lVar7 = *(long *)(lVar7 + 0x30);
      if (lVar7 == 0) goto LAB_04f36758;
      uVar3 = uVar3 + ((int)uVar1 >> 0x1f & 0xfU);
      if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_04f3675c;
      uVar15 = *(undefined8 *)(lVar7 + (ulong)uVar3 * 8 + 0x20);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar12 = FUN_04f3e878(uVar12,uVar15,(long)&stack0x00000008 + 4);
    }
    if ((int)uVar14 >> 4 != 0) {
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar5 = *unaff_x22;
      }
      lVar7 = *(long *)(lVar5 + 0xb8);
      lVar9 = *(long *)(lVar7 + 0x48);
      if (lVar9 == 0) {
LAB_04f36758:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar16 = (long)((int)uVar14 >> 4) + -1;
      uVar14 = (uint)lVar16;
      if (*(uint *)(lVar9 + 0x18) <= uVar14) {
LAB_04f3675c:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      iVar8 = (int)*(short *)(lVar9 + lVar16 * 2 + 0x20);
      iVar10 = 1 - iVar8;
      if (-1 < (int)uVar1) {
        iVar10 = iVar8;
      }
      in_stack_00000008._4_4_ = iVar10 + in_stack_00000008._4_4_;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar5 = *unaff_x22;
        lVar7 = *(long *)(lVar5 + 0xb8);
      }
      lVar7 = *(long *)(lVar7 + 0x40);
      if (lVar7 == 0) goto LAB_04f36758;
      uVar14 = uVar14 + ((int)uVar1 >> 0x1f & 0x15U);
      if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_04f3675c;
      uVar15 = *(undefined8 *)(lVar7 + (long)(int)uVar14 * 8 + 0x20);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar12 = FUN_04f3e878(uVar12,uVar15,(long)&stack0x00000008 + 4);
    }
    uVar13 = uVar12;
    if ((((uint)uVar12 >> 10 & 1) != 0) &&
       (uVar13 = uVar12 + (uVar12 >> 0xb & 1) + 0x3ff, uVar13 < uVar12)) {
      uVar13 = uVar13 >> 1 | 0x8000000000000000;
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    }
    uVar1 = in_stack_00000008._4_4_ + 0x3fe;
    if ((int)uVar1 < 1) {
      if ((uVar13 < 0x8000000000000058) || (uVar1 != 0xffffffcc)) {
        if ((int)uVar1 < -0x33) {
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
    else if ((int)uVar1 < 0x7ff) {
      uVar13 = uVar13 >> 0xb & 0xfffffffffffff | (ulong)uVar1 << 0x34;
    }
    else {
      uVar13 = 0x7ff0000000000000;
    }
  }
  else {
    uVar13 = 0x7ff0000000000000;
    if ((int)uVar1 < 1) {
      uVar13 = 0;
    }
  }
  uVar6 = FUN_04f3f85c();
  uVar12 = uVar13 | 0x8000000000000000;
  if ((uVar6 & 1) == 0) {
    uVar12 = uVar13;
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar12;
  return auVar17;
}


