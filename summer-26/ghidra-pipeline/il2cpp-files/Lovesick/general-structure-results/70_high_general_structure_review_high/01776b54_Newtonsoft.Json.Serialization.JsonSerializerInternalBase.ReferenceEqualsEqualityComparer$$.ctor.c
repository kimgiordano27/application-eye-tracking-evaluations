/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$.ctor
ENTRY_POINT: 01776b54
PROGRAM: Lovesick-libil2cpp.so
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
Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer___ctor
          (long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  ulong in_x11;
  long unaff_x19;
  int unaff_w20;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 uVar13;
  long *unaff_x22;
  int unaff_w23;
  uint uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000008;
  
  uVar10 = param_1 + (in_x11 & 0xffffffff);
  uVar1 = *(int *)(unaff_x19 + 4) + (unaff_w23 - unaff_w20);
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar12 = -uVar1;
  if (-1 < (int)uVar1) {
    uVar12 = uVar1;
  }
  if ((int)uVar12 < 0x160) {
    bVar2 = uVar10 >> 0x20 == 0;
    if (bVar2) {
      uVar10 = uVar10 << 0x20;
    }
    iVar9 = 0x40;
    if (bVar2) {
      iVar9 = 0x20;
    }
    bVar2 = uVar10 >> 0x30 == 0;
    if (bVar2) {
      uVar10 = uVar10 << 0x10;
    }
    if (bVar2) {
      iVar9 = iVar9 + -0x10;
    }
    bVar2 = uVar10 >> 0x38 == 0;
    if (bVar2) {
      uVar10 = uVar10 << 8;
    }
    if (bVar2) {
      iVar9 = iVar9 + -8;
    }
    bVar2 = uVar10 >> 0x3c == 0;
    if (bVar2) {
      uVar10 = uVar10 << 4;
    }
    if (bVar2) {
      iVar9 = iVar9 + -4;
    }
    if (uVar10 >> 0x3e == 0) {
      iVar9 = iVar9 + -2;
      uVar10 = uVar10 << 2;
    }
    iVar9 = iVar9 + ~(uint)((long)uVar10 >> 0x3f);
    uVar10 = uVar10 << (~uVar10 >> 0x3f);
    in_stack_00000008._4_4_ = iVar9;
    if ((int)((ulong)uVar12 & 0xf) != 0) {
      lVar3 = *unaff_x22;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *unaff_x22;
      }
      lVar5 = *(long *)(lVar3 + 0xb8);
      lVar8 = *(long *)(lVar5 + 0x38);
      if (lVar8 == 0) goto LAB_01776e78;
      lVar15 = ((ulong)uVar12 & 0xf) - 1;
      uVar14 = (uint)lVar15;
      if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_01776e7c;
      iVar6 = (int)*(char *)(lVar8 + lVar15 + 0x20);
      iVar7 = 1 - iVar6;
      if (-1 < (int)uVar1) {
        iVar7 = iVar6;
      }
      in_stack_00000008._4_4_ = iVar7 + iVar9;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *unaff_x22;
        lVar5 = *(long *)(lVar3 + 0xb8);
      }
      lVar5 = *(long *)(lVar5 + 0x30);
      if (lVar5 == 0) goto LAB_01776e78;
      uVar14 = uVar14 + ((int)uVar1 >> 0x1f & 0xfU);
      if (*(uint *)(lVar5 + 0x18) <= uVar14) goto LAB_01776e7c;
      uVar13 = *(undefined8 *)(lVar5 + (long)(int)uVar14 * 8 + 0x20);
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_0177f2c8(uVar10,uVar13,(long)&stack0x00000008 + 4);
    }
    if ((int)uVar12 >> 4 != 0) {
      lVar3 = *unaff_x22;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *unaff_x22;
      }
      lVar5 = *(long *)(lVar3 + 0xb8);
      lVar8 = *(long *)(lVar5 + 0x48);
      if (lVar8 == 0) {
LAB_01776e78:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar15 = (long)((int)uVar12 >> 4) + -1;
      uVar12 = (uint)lVar15;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) {
LAB_01776e7c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      iVar7 = (int)*(short *)(lVar8 + lVar15 * 2 + 0x20);
      iVar9 = 1 - iVar7;
      if (-1 < (int)uVar1) {
        iVar9 = iVar7;
      }
      in_stack_00000008._4_4_ = iVar9 + in_stack_00000008._4_4_;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *unaff_x22;
        lVar5 = *(long *)(lVar3 + 0xb8);
      }
      lVar5 = *(long *)(lVar5 + 0x40);
      if (lVar5 == 0) goto LAB_01776e78;
      uVar12 = uVar12 + ((int)uVar1 >> 0x1f & 0x15U);
      if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_01776e7c;
      uVar13 = *(undefined8 *)(lVar5 + (long)(int)uVar12 * 8 + 0x20);
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_0177f2c8(uVar10,uVar13,(long)&stack0x00000008 + 4);
    }
    uVar11 = uVar10;
    if ((((uint)uVar10 >> 10 & 1) != 0) &&
       (uVar11 = uVar10 + (uVar10 >> 0xb & 1) + 0x3ff, uVar11 < uVar10)) {
      uVar11 = uVar11 >> 1 | 0x8000000000000000;
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    }
    uVar1 = in_stack_00000008._4_4_ + 0x3fe;
    if ((int)uVar1 < 1) {
      if ((uVar11 < 0x8000000000000058) || (uVar1 != 0xffffffcc)) {
        if ((int)uVar1 < -0x33) {
          uVar11 = 0;
          in_stack_00000008._4_4_ = uVar1;
        }
        else {
          uVar11 = uVar11 >> ((ulong)(0xe - in_stack_00000008._4_4_) & 0x3f);
          in_stack_00000008._4_4_ = uVar1;
        }
      }
      else {
        uVar11 = 1;
        in_stack_00000008._4_4_ = uVar1;
      }
    }
    else if ((int)uVar1 < 0x7ff) {
      uVar11 = uVar11 >> 0xb & 0xfffffffffffff | (ulong)uVar1 << 0x34;
      in_stack_00000008._4_4_ = uVar1;
    }
    else {
      uVar11 = 0x7ff0000000000000;
      in_stack_00000008._4_4_ = uVar1;
    }
  }
  else {
    uVar11 = 0x7ff0000000000000;
    if ((int)uVar1 < 1) {
      uVar11 = 0;
    }
  }
  uVar4 = FUN_01780038();
  uVar10 = uVar11 | 0x8000000000000000;
  if ((uVar4 & 1) == 0) {
    uVar10 = uVar11;
  }
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar10;
  return auVar16;
}


