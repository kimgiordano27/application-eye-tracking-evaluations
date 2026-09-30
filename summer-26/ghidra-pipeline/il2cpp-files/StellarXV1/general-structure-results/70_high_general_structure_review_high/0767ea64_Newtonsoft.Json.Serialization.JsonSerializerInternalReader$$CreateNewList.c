/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewList
ENTRY_POINT: 0767ea64
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList(void)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  char in_NG;
  bool in_ZR;
  char in_OV;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ushort *puVar12;
  uint uVar13;
  long unaff_x19;
  int unaff_w20;
  ulong uVar14;
  uint uVar15;
  long unaff_x21;
  undefined8 uVar16;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  ulong unaff_x25;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000008;
  
  if (in_ZR || in_NG != in_OV) {
    lVar5 = *unaff_x22;
  }
  else {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar5 = *unaff_x22;
    iVar8 = unaff_w23;
    if (8 < unaff_w23) {
      iVar8 = 9;
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar5 = *unaff_x22;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
    if (lVar7 == 0) goto LAB_0767ee4c;
    lVar10 = (long)iVar8 + -1;
    if (*(uint *)(lVar7 + 0x18) <= (uint)lVar10) goto LAB_0767ee50;
    lVar11 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
    if (lVar11 == 0) goto LAB_0767ee4c;
    if (*(uint *)(lVar11 + 0x18) <= (uint)lVar10) goto LAB_0767ee50;
    unaff_w23 = unaff_w23 - iVar8;
    uVar13 = (uint)*(ushort *)(unaff_x21 + 0x12);
    for (puVar12 = (ushort *)(unaff_x21 + 0x14);
        puVar12 < (ushort *)(unaff_x21 + 0x12 + (ulong)(uint)(iVar8 << 1)); puVar12 = puVar12 + 1) {
      uVar13 = (uint)*puVar12 + (uVar13 - 0x30) * 10;
    }
    unaff_x25 = (*(ulong *)(lVar7 + lVar10 * 8 + 0x20) >>
                 ((ulong)-(uint)*(byte *)(lVar11 + lVar10 + 0x20) & 0x3f) & 0xffffffff) *
                (unaff_x25 & 0xffffffff) + (ulong)(uVar13 - 0x30);
  }
  uVar13 = (unaff_w23 - unaff_w20) + *(int *)(unaff_x19 + 4);
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar15 = -uVar13;
  if (-1 < (int)uVar13) {
    uVar15 = uVar13;
  }
  if ((int)uVar15 < 0x160) {
    bVar4 = unaff_x25 >> 0x20 != 0;
    uVar14 = unaff_x25 << 0x20;
    if (bVar4) {
      uVar14 = unaff_x25;
    }
    iVar8 = 0x20;
    if (bVar4) {
      iVar8 = 0x40;
    }
    iVar9 = iVar8 + -0x10;
    uVar1 = uVar14 << 0x10;
    if (uVar14 >> 0x30 != 0) {
      iVar9 = iVar8;
      uVar1 = uVar14;
    }
    iVar8 = iVar9 + -8;
    uVar14 = uVar1 << 8;
    if (uVar1 >> 0x38 != 0) {
      iVar8 = iVar9;
      uVar14 = uVar1;
    }
    iVar9 = iVar8 + -4;
    uVar1 = uVar14 << 4;
    if (uVar14 >> 0x3c != 0) {
      iVar9 = iVar8;
      uVar1 = uVar14;
    }
    iVar8 = iVar9 + -2;
    uVar14 = uVar1 << 2;
    if (uVar1 >> 0x3e != 0) {
      iVar8 = iVar9;
      uVar14 = uVar1;
    }
    uVar2 = (uint)(uVar14 >> 0x3f) ^ 1;
    uVar14 = uVar14 << uVar2;
    uVar2 = iVar8 - uVar2;
    in_stack_00000008._4_4_ = uVar2;
    if ((uVar15 & 0xf) != 0) {
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar5 = *unaff_x22;
      }
      lVar7 = *(long *)(lVar5 + 0xb8);
      lVar10 = *(long *)(lVar7 + 0x38);
      if (lVar10 == 0) goto LAB_0767ee4c;
      uVar3 = (uVar15 & 0xf) - 1;
      if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_0767ee50;
      iVar9 = (int)*(char *)(lVar10 + (ulong)uVar3 + 0x20);
      iVar8 = 1 - iVar9;
      if (-1 < (int)uVar13) {
        iVar8 = iVar9;
      }
      in_stack_00000008._4_4_ = iVar8 + uVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar5 = *unaff_x22;
        lVar7 = *(long *)(lVar5 + 0xb8);
      }
      lVar7 = *(long *)(lVar7 + 0x30);
      if (lVar7 == 0) goto LAB_0767ee4c;
      uVar3 = uVar3 + ((int)uVar13 >> 0x1f & 0xfU);
      if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_0767ee50;
      uVar16 = *(undefined8 *)(lVar7 + (ulong)uVar3 * 8 + 0x20);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar14 = FUN_076873e8(uVar14,uVar16,(long)&stack0x00000008 + 4);
    }
    if (0xf < uVar15) {
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar5 = *unaff_x22;
      }
      lVar7 = *(long *)(lVar5 + 0xb8);
      lVar10 = *(long *)(lVar7 + 0x48);
      if (lVar10 == 0) {
LAB_0767ee4c:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar11 = (long)((int)uVar15 >> 4) + -1;
      uVar15 = (uint)lVar11;
      if (*(uint *)(lVar10 + 0x18) <= uVar15) {
LAB_0767ee50:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      iVar9 = (int)*(short *)(lVar10 + lVar11 * 2 + 0x20);
      iVar8 = 1 - iVar9;
      if (-1 < (int)uVar13) {
        iVar8 = iVar9;
      }
      in_stack_00000008._4_4_ = iVar8 + in_stack_00000008._4_4_;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar5 = *unaff_x22;
        lVar7 = *(long *)(lVar5 + 0xb8);
      }
      lVar7 = *(long *)(lVar7 + 0x40);
      if (lVar7 == 0) goto LAB_0767ee4c;
      uVar15 = uVar15 + ((int)uVar13 >> 0x1f & 0x15U);
      if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_0767ee50;
      uVar16 = *(undefined8 *)(lVar7 + (long)(int)uVar15 * 8 + 0x20);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar14 = FUN_076873e8(uVar14,uVar16,(long)&stack0x00000008 + 4);
    }
    uVar13 = in_stack_00000008._4_4_;
    if ((((uint)uVar14 >> 10 & 1) != 0) &&
       (uVar1 = uVar14 + (uVar14 >> 0xb & 1) + 0x3ff, bVar4 = uVar1 < uVar14, uVar14 = uVar1, bVar4)
       ) {
      uVar14 = uVar1 >> 1 | 0x8000000000000000;
      uVar13 = in_stack_00000008._4_4_ + 1;
    }
    in_stack_00000008._4_4_ = uVar13 + 0x3fe;
    if ((int)in_stack_00000008._4_4_ < 1) {
      if ((in_stack_00000008._4_4_ == 0xffffffcc) && (0x8000000000000057 < uVar14)) {
        uVar14 = 1;
      }
      else if ((int)in_stack_00000008._4_4_ < -0x33) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar14 >> ((ulong)(-uVar13 - 0x3f2) & 0x3f);
      }
    }
    else if (in_stack_00000008._4_4_ < 0x7ff) {
      uVar14 = uVar14 >> 0xb & 0xfffffffffffff | (ulong)in_stack_00000008._4_4_ << 0x34;
    }
    else {
      uVar14 = 0x7ff0000000000000;
    }
  }
  else {
    uVar14 = 0x7ff0000000000000;
    if ((int)uVar13 < 1) {
      uVar14 = 0;
    }
  }
  uVar6 = FUN_0768865c();
  uVar1 = uVar14 | 0x8000000000000000;
  if ((uVar6 & 1) == 0) {
    uVar1 = uVar14;
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar1;
  return auVar17;
}


