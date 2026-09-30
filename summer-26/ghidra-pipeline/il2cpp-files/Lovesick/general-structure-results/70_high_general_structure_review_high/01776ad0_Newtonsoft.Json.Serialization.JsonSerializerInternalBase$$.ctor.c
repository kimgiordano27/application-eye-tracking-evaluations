/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$.ctor
ENTRY_POINT: 01776ad0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_Serialization_JsonSerializerInternalBase___ctor(long param_1)

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
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  long unaff_x19;
  int unaff_w20;
  ulong uVar12;
  ulong uVar13;
  long unaff_x21;
  undefined8 uVar14;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint uVar15;
  long unaff_x25;
  long lVar16;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000008;
  
  lVar5 = *(long *)(in_x9 + 0x30);
                    /* try { // try from 01776ad4 to 01876afb has its CatchHandler @ 01776c5c */
  if (lVar5 == 0) {
LAB_01776e78:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar2 = unaff_w24 - 1;
  if (uVar2 < *(uint *)(lVar5 + 0x18)) {
    lVar7 = *(long *)(in_x9 + 0x38);
    if (lVar7 == 0) goto LAB_01776e78;
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                    /* try { // try from 01776b30 to 01876b7b has its CatchHandler @ 01776c60 */
      uVar11 = (uint)*(ushort *)(unaff_x21 + 0x12);
      for (puVar10 = (ushort *)(unaff_x21 + 0x14);
          puVar10 < (ushort *)(unaff_x21 + 0x12) + unaff_w24; puVar10 = puVar10 + 1) {
        uVar11 = (uint)*puVar10 + (uVar11 - 0x30) * 10;
      }
      uVar12 = (*(ulong *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) >>
                ((ulong)-(uint)*(byte *)(lVar7 + (int)uVar2 + 0x20) & 0x3f) & 0xffffffff) *
               unaff_x25 + (ulong)(uVar11 - 0x30);
      uVar2 = *(int *)(unaff_x19 + 4) + ((unaff_w23 - unaff_w24) - unaff_w20);
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar11 = uVar2;
      }
      if ((int)uVar11 < 0x160) {
        bVar3 = uVar12 >> 0x20 == 0;
        if (bVar3) {
          uVar12 = uVar12 << 0x20;
        }
        iVar9 = 0x40;
        if (bVar3) {
          iVar9 = 0x20;
        }
        bVar3 = uVar12 >> 0x30 == 0;
        if (bVar3) {
          uVar12 = uVar12 << 0x10;
        }
        if (bVar3) {
          iVar9 = iVar9 + -0x10;
        }
        bVar3 = uVar12 >> 0x38 == 0;
        if (bVar3) {
          uVar12 = uVar12 << 8;
        }
        if (bVar3) {
          iVar9 = iVar9 + -8;
        }
        bVar3 = uVar12 >> 0x3c == 0;
        if (bVar3) {
          uVar12 = uVar12 << 4;
        }
        if (bVar3) {
          iVar9 = iVar9 + -4;
        }
        if (uVar12 >> 0x3e == 0) {
          iVar9 = iVar9 + -2;
          uVar12 = uVar12 << 2;
        }
        uVar1 = iVar9 + ~(uint)((long)uVar12 >> 0x3f);
        uVar12 = uVar12 << (~uVar12 >> 0x3f);
        in_stack_00000008._4_4_ = uVar1;
        if ((int)((ulong)uVar11 & 0xf) != 0) {
          lVar5 = *unaff_x22;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar5 = *unaff_x22;
          }
          lVar7 = *(long *)(lVar5 + 0xb8);
          lVar8 = *(long *)(lVar7 + 0x38);
          if (lVar8 == 0) goto LAB_01776e78;
          lVar16 = ((ulong)uVar11 & 0xf) - 1;
          uVar15 = (uint)lVar16;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_01776e7c;
          iVar6 = (int)*(char *)(lVar8 + lVar16 + 0x20);
          iVar9 = 1 - iVar6;
          if (-1 < (int)uVar2) {
            iVar9 = iVar6;
          }
          in_stack_00000008._4_4_ = iVar9 + uVar1;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar5 = *unaff_x22;
            lVar7 = *(long *)(lVar5 + 0xb8);
          }
          lVar7 = *(long *)(lVar7 + 0x30);
          if (lVar7 == 0) goto LAB_01776e78;
          uVar15 = uVar15 + ((int)uVar2 >> 0x1f & 0xfU);
          if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_01776e7c;
          uVar14 = *(undefined8 *)(lVar7 + (long)(int)uVar15 * 8 + 0x20);
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_0177f2c8(uVar12,uVar14,(long)&stack0x00000008 + 4);
        }
        if ((int)uVar11 >> 4 != 0) {
          lVar5 = *unaff_x22;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar5 = *unaff_x22;
          }
          lVar7 = *(long *)(lVar5 + 0xb8);
          lVar8 = *(long *)(lVar7 + 0x48);
          if (lVar8 == 0) goto LAB_01776e78;
          lVar16 = (long)((int)uVar11 >> 4) + -1;
          uVar11 = (uint)lVar16;
          if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_01776e7c;
          iVar6 = (int)*(short *)(lVar8 + lVar16 * 2 + 0x20);
          iVar9 = 1 - iVar6;
          if (-1 < (int)uVar2) {
            iVar9 = iVar6;
          }
          in_stack_00000008._4_4_ = iVar9 + in_stack_00000008._4_4_;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar5 = *unaff_x22;
            lVar7 = *(long *)(lVar5 + 0xb8);
          }
          lVar7 = *(long *)(lVar7 + 0x40);
          if (lVar7 == 0) goto LAB_01776e78;
          uVar11 = uVar11 + ((int)uVar2 >> 0x1f & 0x15U);
          if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_01776e7c;
          uVar14 = *(undefined8 *)(lVar7 + (long)(int)uVar11 * 8 + 0x20);
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_0177f2c8(uVar12,uVar14,(long)&stack0x00000008 + 4);
        }
        uVar13 = uVar12;
        if ((((uint)uVar12 >> 10 & 1) != 0) &&
           (uVar13 = uVar12 + (uVar12 >> 0xb & 1) + 0x3ff, uVar13 < uVar12)) {
          uVar13 = uVar13 >> 1 | 0x8000000000000000;
          in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
        }
        uVar2 = in_stack_00000008._4_4_ + 0x3fe;
        if ((int)uVar2 < 1) {
          if ((uVar13 < 0x8000000000000058) || (uVar2 != 0xffffffcc)) {
            if ((int)uVar2 < -0x33) {
              uVar13 = 0;
              in_stack_00000008._4_4_ = uVar2;
            }
            else {
              uVar13 = uVar13 >> ((ulong)(0xe - in_stack_00000008._4_4_) & 0x3f);
              in_stack_00000008._4_4_ = uVar2;
            }
          }
          else {
            uVar13 = 1;
            in_stack_00000008._4_4_ = uVar2;
          }
        }
        else if ((int)uVar2 < 0x7ff) {
          uVar13 = uVar13 >> 0xb & 0xfffffffffffff | (ulong)uVar2 << 0x34;
          in_stack_00000008._4_4_ = uVar2;
        }
        else {
          uVar13 = 0x7ff0000000000000;
          in_stack_00000008._4_4_ = uVar2;
        }
      }
      else {
        uVar13 = 0x7ff0000000000000;
        if ((int)uVar2 < 1) {
          uVar13 = 0;
        }
      }
      uVar4 = FUN_01780038();
      uVar12 = uVar13 | 0x8000000000000000;
      if ((uVar4 & 1) == 0) {
        uVar12 = uVar13;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar12;
      return auVar17;
    }
  }
LAB_01776e7c:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


