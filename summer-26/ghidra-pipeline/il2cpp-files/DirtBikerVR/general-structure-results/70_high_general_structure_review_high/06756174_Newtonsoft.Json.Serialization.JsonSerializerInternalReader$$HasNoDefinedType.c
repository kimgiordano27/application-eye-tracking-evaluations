/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasNoDefinedType
ENTRY_POINT: 06756174
PROGRAM: DirtBikerVR-libil2cpp.so
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
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType(long param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long unaff_x19;
  int unaff_w20;
  ulong uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long *unaff_x22;
  int unaff_w23;
  ulong unaff_x25;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000008;
  
  uVar2 = (unaff_w23 - unaff_w20) + *(int *)(unaff_x19 + 4);
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar13 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar13 = uVar2;
  }
  if ((int)uVar13 < 0x160) {
    bVar4 = unaff_x25 >> 0x20 != 0;
    uVar12 = unaff_x25 << 0x20;
    if (bVar4) {
      uVar12 = unaff_x25;
    }
    iVar11 = 0x20;
    if (bVar4) {
      iVar11 = 0x40;
    }
    iVar9 = iVar11 + -0x10;
    uVar1 = uVar12 << 0x10;
    if (uVar12 >> 0x30 != 0) {
      iVar9 = iVar11;
      uVar1 = uVar12;
    }
    iVar11 = iVar9 + -8;
    uVar12 = uVar1 << 8;
    if (uVar1 >> 0x38 != 0) {
      iVar11 = iVar9;
      uVar12 = uVar1;
    }
    iVar9 = iVar11 + -4;
    uVar1 = uVar12 << 4;
    if (uVar12 >> 0x3c != 0) {
      iVar9 = iVar11;
      uVar1 = uVar12;
    }
    iVar11 = iVar9 + -2;
    uVar12 = uVar1 << 2;
    if (uVar1 >> 0x3e != 0) {
      iVar11 = iVar9;
      uVar12 = uVar1;
    }
    uVar3 = (uint)(uVar12 >> 0x3f) ^ 1;
    uVar12 = uVar12 << uVar3;
    iVar11 = iVar11 - uVar3;
    in_stack_00000008._4_4_ = iVar11;
    if ((uVar13 & 0xf) != 0) {
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar5 = *unaff_x22;
      }
      lVar7 = *(long *)(lVar5 + 0xb8);
      lVar10 = *(long *)(lVar7 + 0x38);
      if (lVar10 == 0) goto LAB_06756498;
      uVar3 = (uVar13 & 0xf) - 1;
      if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_0675649c;
      iVar8 = (int)*(char *)(lVar10 + (ulong)uVar3 + 0x20);
      iVar9 = 1 - iVar8;
      if (-1 < (int)uVar2) {
        iVar9 = iVar8;
      }
      in_stack_00000008._4_4_ = iVar9 + iVar11;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar5 = *unaff_x22;
        lVar7 = *(long *)(lVar5 + 0xb8);
      }
      lVar7 = *(long *)(lVar7 + 0x30);
      if (lVar7 == 0) goto LAB_06756498;
      uVar3 = uVar3 + ((int)uVar2 >> 0x1f & 0xfU);
      if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_0675649c;
      uVar14 = *(undefined8 *)(lVar7 + (ulong)uVar3 * 8 + 0x20);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar12 = FUN_0675ea34(uVar12,uVar14,(long)&stack0x00000008 + 4);
    }
    if (0xf < uVar13) {
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar5 = *unaff_x22;
      }
      lVar7 = *(long *)(lVar5 + 0xb8);
      lVar10 = *(long *)(lVar7 + 0x48);
      if (lVar10 == 0) {
LAB_06756498:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar15 = (long)((int)uVar13 >> 4) + -1;
      uVar13 = (uint)lVar15;
      if (*(uint *)(lVar10 + 0x18) <= uVar13) {
LAB_0675649c:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      iVar9 = (int)*(short *)(lVar10 + lVar15 * 2 + 0x20);
      iVar11 = 1 - iVar9;
      if (-1 < (int)uVar2) {
        iVar11 = iVar9;
      }
      in_stack_00000008._4_4_ = iVar11 + in_stack_00000008._4_4_;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar5 = *unaff_x22;
        lVar7 = *(long *)(lVar5 + 0xb8);
      }
      lVar7 = *(long *)(lVar7 + 0x40);
      if (lVar7 == 0) goto LAB_06756498;
      uVar13 = uVar13 + ((int)uVar2 >> 0x1f & 0x15U);
      if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_0675649c;
      uVar14 = *(undefined8 *)(lVar7 + (long)(int)uVar13 * 8 + 0x20);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar12 = FUN_0675ea34(uVar12,uVar14,(long)&stack0x00000008 + 4);
    }
    iVar11 = in_stack_00000008._4_4_;
    if ((((uint)uVar12 >> 10 & 1) != 0) &&
       (uVar1 = uVar12 + (uVar12 >> 0xb & 1) + 0x3ff, bVar4 = uVar1 < uVar12, uVar12 = uVar1, bVar4)
       ) {
      uVar12 = uVar1 >> 1 | 0x8000000000000000;
      iVar11 = in_stack_00000008._4_4_ + 1;
    }
    in_stack_00000008._4_4_ = iVar11 + 0x3fe;
    if ((int)in_stack_00000008._4_4_ < 1) {
      if ((in_stack_00000008._4_4_ == 0xffffffcc) && (0x8000000000000057 < uVar12)) {
        uVar12 = 1;
      }
      else if ((int)in_stack_00000008._4_4_ < -0x33) {
        uVar12 = 0;
      }
      else {
        uVar12 = uVar12 >> ((ulong)(-iVar11 - 0x3f2) & 0x3f);
      }
    }
    else if (in_stack_00000008._4_4_ < 0x7ff) {
      uVar12 = uVar12 >> 0xb & 0xfffffffffffff | (ulong)in_stack_00000008._4_4_ << 0x34;
    }
    else {
      uVar12 = 0x7ff0000000000000;
    }
  }
  else {
    uVar12 = 0x7ff0000000000000;
    if ((int)uVar2 < 1) {
      uVar12 = 0;
    }
  }
  uVar6 = FUN_0675fca8();
  uVar1 = uVar12 | 0x8000000000000000;
  if ((uVar6 & 1) == 0) {
    uVar1 = uVar12;
  }
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar1;
  return auVar16;
}


