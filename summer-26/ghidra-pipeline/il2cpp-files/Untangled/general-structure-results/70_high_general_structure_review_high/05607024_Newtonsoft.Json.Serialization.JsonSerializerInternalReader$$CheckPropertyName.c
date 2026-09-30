/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CheckPropertyName
ENTRY_POINT: 05607024
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CheckPropertyName(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  ushort *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  ushort *puVar15;
  uint uVar16;
  long unaff_x19;
  long unaff_x20;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  undefined8 in_stack_00000008;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0x10));
  FUN_02f07e70(PTR_DAT_06d4e298);
  *(undefined1 *)(unaff_x20 + 0xcf3) = 1;
  puVar8 = (ushort *)FUN_056106b0();
  iVar7 = FUN_0546bc1c(puVar8,0);
  puVar5 = PTR_DAT_06d4e298;
  puVar4 = PTR_DAT_06d03010;
  uVar2 = *puVar8;
  iVar14 = iVar7;
  while (uVar2 == 0x30) {
    puVar8 = puVar8 + 1;
    iVar14 = iVar14 + -1;
    uVar2 = *puVar8;
  }
  if (iVar14 == 0) {
    uVar21 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    iVar11 = iVar14;
    if (8 < iVar14) {
      iVar11 = 9;
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    iVar14 = iVar14 - iVar11;
    uVar12 = (uint)*puVar8;
    puVar15 = puVar8;
    while( true ) {
      puVar15 = puVar15 + 1;
      if (puVar8 + iVar11 <= puVar15) break;
      uVar12 = (uint)*puVar15 + (uVar12 - 0x30) * 10;
    }
    uVar21 = (ulong)(uVar12 - 0x30);
    if (iVar14 < 1) {
      lVar9 = *(long *)puVar5;
    }
    else {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar9 = *(long *)puVar5;
      iVar11 = iVar14;
      if (8 < iVar14) {
        iVar11 = 9;
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar9 = *(long *)puVar5;
      }
      lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
      if (lVar10 == 0) goto LAB_056074d4;
      uVar12 = iVar11 - 1;
      if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_056074d8;
      lVar13 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x38);
      if (lVar13 == 0) goto LAB_056074d4;
      if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_056074d8;
      iVar14 = iVar14 - iVar11;
      uVar16 = (uint)puVar8[9];
      for (puVar15 = puVar8 + 10; puVar15 < puVar8 + 9 + iVar11; puVar15 = puVar15 + 1) {
        uVar16 = (uint)*puVar15 + (uVar16 - 0x30) * 10;
      }
      uVar21 = (*(ulong *)(lVar10 + (long)(int)uVar12 * 8 + 0x20) >>
                ((ulong)-(uint)*(byte *)(lVar13 + (int)uVar12 + 0x20) & 0x3f) & 0xffffffff) * uVar21
               + (ulong)(uVar16 - 0x30);
    }
    uVar12 = (iVar14 - iVar7) + *(int *)(unaff_x19 + 4);
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar16 = -uVar12;
    if (-1 < (int)uVar12) {
      uVar16 = uVar12;
    }
    if ((int)uVar16 < 0x160) {
      bVar6 = uVar21 >> 0x20 != 0;
      uVar18 = uVar21 << 0x20;
      if (bVar6) {
        uVar18 = uVar21;
      }
      iVar14 = 0x20;
      if (bVar6) {
        iVar14 = 0x40;
      }
      bVar6 = uVar18 >> 0x30 != 0;
      uVar21 = uVar18 << 0x10;
      if (bVar6) {
        uVar21 = uVar18;
      }
      iVar7 = iVar14 + -0x10;
      if (bVar6) {
        iVar7 = iVar14;
      }
      bVar6 = uVar21 >> 0x38 != 0;
      uVar18 = uVar21 << 8;
      if (bVar6) {
        uVar18 = uVar21;
      }
      iVar14 = iVar7 + -8;
      if (bVar6) {
        iVar14 = iVar7;
      }
      bVar6 = uVar18 >> 0x3c != 0;
      uVar21 = uVar18 << 4;
      if (bVar6) {
        uVar21 = uVar18;
      }
      iVar7 = iVar14 + -4;
      if (bVar6) {
        iVar7 = iVar14;
      }
      iVar14 = iVar7 + -2;
      uVar17 = uVar21 << 2;
      if (uVar21 >> 0x3e != 0) {
        iVar14 = iVar7;
        uVar17 = uVar21;
      }
      uVar1 = iVar14 + ~(uint)((long)uVar17 >> 0x3f);
      uVar17 = uVar17 << (~uVar17 >> 0x3f);
      in_stack_00000008._4_4_ = uVar1;
      if ((uVar16 & 0xf) != 0) {
        lVar9 = *(long *)puVar5;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar9 = *(long *)puVar5;
        }
        lVar10 = *(long *)(lVar9 + 0xb8);
        lVar13 = *(long *)(lVar10 + 0x38);
        if (lVar13 == 0) goto LAB_056074d4;
        uVar3 = (uVar16 & 0xf) - 1;
        if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_056074d8;
        iVar7 = (int)*(char *)(lVar13 + (ulong)uVar3 + 0x20);
        iVar14 = 1 - iVar7;
        if (-1 < (int)uVar12) {
          iVar14 = iVar7;
        }
        in_stack_00000008._4_4_ = iVar14 + uVar1;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar9 = *(long *)puVar5;
          lVar10 = *(long *)(lVar9 + 0xb8);
        }
        lVar10 = *(long *)(lVar10 + 0x30);
        if (lVar10 == 0) goto LAB_056074d4;
        uVar3 = uVar3 + ((int)uVar12 >> 0x1f & 0xfU);
        if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_056074d8;
        uVar19 = *(undefined8 *)(lVar10 + (ulong)uVar3 * 8 + 0x20);
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar17 = FUN_0560f5f4(uVar17,uVar19,(long)&stack0x00000008 + 4);
      }
      if ((int)uVar16 >> 4 != 0) {
        lVar9 = *(long *)puVar5;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar9 = *(long *)puVar5;
        }
        lVar10 = *(long *)(lVar9 + 0xb8);
        lVar13 = *(long *)(lVar10 + 0x48);
        if (lVar13 == 0) {
LAB_056074d4:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar20 = (long)((int)uVar16 >> 4) + -1;
        uVar16 = (uint)lVar20;
        if (*(uint *)(lVar13 + 0x18) <= uVar16) {
LAB_056074d8:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        iVar7 = (int)*(short *)(lVar13 + lVar20 * 2 + 0x20);
        iVar14 = 1 - iVar7;
        if (-1 < (int)uVar12) {
          iVar14 = iVar7;
        }
        in_stack_00000008._4_4_ = iVar14 + in_stack_00000008._4_4_;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar9 = *(long *)puVar5;
          lVar10 = *(long *)(lVar9 + 0xb8);
        }
        lVar10 = *(long *)(lVar10 + 0x40);
        if (lVar10 == 0) goto LAB_056074d4;
        uVar16 = uVar16 + ((int)uVar12 >> 0x1f & 0x15U);
        if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_056074d8;
        uVar19 = *(undefined8 *)(lVar10 + (long)(int)uVar16 * 8 + 0x20);
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar17 = FUN_0560f5f4(uVar17,uVar19,(long)&stack0x00000008 + 4);
      }
      uVar18 = uVar17;
      if ((((uint)uVar17 >> 10 & 1) != 0) &&
         (uVar18 = uVar17 + (uVar17 >> 0xb & 1) + 0x3ff, uVar18 < uVar17)) {
        uVar18 = uVar18 >> 1 | 0x8000000000000000;
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
      }
      uVar12 = in_stack_00000008._4_4_ + 0x3fe;
      if ((int)uVar12 < 1) {
        if ((uVar18 < 0x8000000000000058) || (uVar12 != 0xffffffcc)) {
          if ((int)uVar12 < -0x33) {
            uVar18 = 0;
          }
          else {
            uVar18 = uVar18 >> (0xfffffc0e - (ulong)in_stack_00000008._4_4_ & 0x3f);
          }
        }
        else {
          uVar18 = 1;
        }
      }
      else if ((int)uVar12 < 0x7ff) {
        uVar18 = uVar18 >> 0xb & 0xfffffffffffff | (ulong)uVar12 << 0x34;
      }
      else {
        uVar18 = 0x7ff0000000000000;
      }
    }
    else {
      uVar18 = 0x7ff0000000000000;
      if ((int)uVar12 < 1) {
        uVar18 = 0;
      }
    }
    uVar17 = FUN_05610694();
    uVar21 = uVar18 | 0x8000000000000000;
    if ((uVar17 & 1) == 0) {
      uVar21 = uVar18;
    }
  }
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar21;
  return auVar22;
}


