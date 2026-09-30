/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldSetPropertyValue
ENTRY_POINT: 074babe0
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldSetPropertyValue
          (long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long in_x9;
  long lVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  long unaff_x19;
  int unaff_w20;
  ulong uVar13;
  uint uVar14;
  long unaff_x21;
  undefined8 uVar15;
  long lVar16;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  ulong unaff_x25;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000008;
  
  uVar12 = (uint)*(ushort *)(unaff_x21 + 0x12);
  for (puVar11 = (ushort *)(unaff_x21 + 0x14);
      puVar11 < (ushort *)(unaff_x21 + 0x12 + (ulong)(uint)(unaff_w24 << 1)); puVar11 = puVar11 + 1)
  {
    uVar12 = (uint)*puVar11 + (uVar12 - 0x30) * 10;
  }
  uVar13 = (*(ulong *)(param_1 + 0x20) >> ((ulong)-(uint)*(byte *)(in_x9 + 0x20) & 0x3f) &
           0xffffffff) * (unaff_x25 & 0xffffffff) + (ulong)(uVar12 - 0x30);
  uVar12 = (unaff_w23 - unaff_w20) + *(int *)(unaff_x19 + 4);
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  uVar14 = -uVar12;
  if (-1 < (int)uVar12) {
    uVar14 = uVar12;
  }
  if ((int)uVar14 < 0x160) {
    bVar3 = uVar13 >> 0x20 != 0;
    uVar1 = uVar13 << 0x20;
    if (bVar3) {
      uVar1 = uVar13;
    }
    iVar10 = 0x20;
    if (bVar3) {
      iVar10 = 0x40;
    }
    iVar8 = iVar10 + -0x10;
    uVar13 = uVar1 << 0x10;
    if (uVar1 >> 0x30 != 0) {
      iVar8 = iVar10;
      uVar13 = uVar1;
    }
    iVar10 = iVar8 + -8;
    uVar1 = uVar13 << 8;
    if (uVar13 >> 0x38 != 0) {
      iVar10 = iVar8;
      uVar1 = uVar13;
    }
    iVar8 = iVar10 + -4;
    uVar5 = uVar1 << 4;
    if (uVar1 >> 0x3c != 0) {
      iVar8 = iVar10;
      uVar5 = uVar1;
    }
    iVar10 = iVar8 + -2;
    uVar13 = uVar5 << 2;
    if (uVar5 >> 0x3e != 0) {
      iVar10 = iVar8;
      uVar13 = uVar5;
    }
    uVar2 = (uint)(uVar13 >> 0x3f) ^ 1;
    uVar13 = uVar13 << uVar2;
    iVar10 = iVar10 - uVar2;
    in_stack_00000008._4_4_ = iVar10;
    if ((uVar14 & 0xf) != 0) {
      lVar4 = *unaff_x22;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        lVar4 = *unaff_x22;
      }
      lVar6 = *(long *)(lVar4 + 0xb8);
      lVar9 = *(long *)(lVar6 + 0x38);
      if (lVar9 == 0) goto LAB_074baf54;
      uVar2 = (uVar14 & 0xf) - 1;
      if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_074baf58;
      iVar7 = (int)*(char *)(lVar9 + (ulong)uVar2 + 0x20);
      iVar8 = 1 - iVar7;
      if (-1 < (int)uVar12) {
        iVar8 = iVar7;
      }
      in_stack_00000008._4_4_ = iVar8 + iVar10;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        lVar4 = *unaff_x22;
        lVar6 = *(long *)(lVar4 + 0xb8);
      }
      lVar6 = *(long *)(lVar6 + 0x30);
      if (lVar6 == 0) goto LAB_074baf54;
      uVar2 = uVar2 + ((int)uVar12 >> 0x1f & 0xfU);
      if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_074baf58;
      uVar15 = *(undefined8 *)(lVar6 + (ulong)uVar2 * 8 + 0x20);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar13 = FUN_074c34f0(uVar13,uVar15,(long)&stack0x00000008 + 4);
    }
    if (0xf < uVar14) {
      lVar4 = *unaff_x22;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        lVar4 = *unaff_x22;
      }
      lVar6 = *(long *)(lVar4 + 0xb8);
      lVar9 = *(long *)(lVar6 + 0x48);
      if (lVar9 == 0) {
LAB_074baf54:
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar16 = (long)((int)uVar14 >> 4) + -1;
      uVar14 = (uint)lVar16;
      if (*(uint *)(lVar9 + 0x18) <= uVar14) {
LAB_074baf58:
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      iVar8 = (int)*(short *)(lVar9 + lVar16 * 2 + 0x20);
      iVar10 = 1 - iVar8;
      if (-1 < (int)uVar12) {
        iVar10 = iVar8;
      }
      in_stack_00000008._4_4_ = iVar10 + in_stack_00000008._4_4_;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        lVar4 = *unaff_x22;
        lVar6 = *(long *)(lVar4 + 0xb8);
      }
      lVar6 = *(long *)(lVar6 + 0x40);
      if (lVar6 == 0) goto LAB_074baf54;
      uVar14 = uVar14 + ((int)uVar12 >> 0x1f & 0x15U);
      if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_074baf58;
      uVar15 = *(undefined8 *)(lVar6 + (long)(int)uVar14 * 8 + 0x20);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar13 = FUN_074c34f0(uVar13,uVar15,(long)&stack0x00000008 + 4);
    }
    iVar10 = in_stack_00000008._4_4_;
    if ((((uint)uVar13 >> 10 & 1) != 0) &&
       (uVar1 = uVar13 + (uVar13 >> 0xb & 1) + 0x3ff, bVar3 = uVar1 < uVar13, uVar13 = uVar1, bVar3)
       ) {
      uVar13 = uVar1 >> 1 | 0x8000000000000000;
      iVar10 = in_stack_00000008._4_4_ + 1;
    }
    in_stack_00000008._4_4_ = iVar10 + 0x3fe;
    if ((int)in_stack_00000008._4_4_ < 1) {
      if ((in_stack_00000008._4_4_ == 0xffffffcc) && (0x8000000000000057 < uVar13)) {
        uVar13 = 1;
      }
      else if ((int)in_stack_00000008._4_4_ < -0x33) {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar13 >> ((ulong)(-iVar10 - 0x3f2) & 0x3f);
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
    if ((int)uVar12 < 1) {
      uVar13 = 0;
    }
  }
  uVar5 = FUN_074c4764();
  uVar1 = uVar13 | 0x8000000000000000;
  if ((uVar5 & 1) == 0) {
    uVar1 = uVar13;
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar1;
  return auVar17;
}


