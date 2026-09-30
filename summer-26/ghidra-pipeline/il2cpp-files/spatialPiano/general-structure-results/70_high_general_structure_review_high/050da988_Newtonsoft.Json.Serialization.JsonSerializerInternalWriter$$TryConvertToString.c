/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$TryConvertToString
ENTRY_POINT: 050da988
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString(void)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  long *unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  ulong unaff_x25;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000008;
  
  if ((int)unaff_w24 < 0x160) {
    bVar2 = unaff_x25 >> 0x20 != 0;
    uVar10 = unaff_x25 << 0x20;
    if (bVar2) {
      uVar10 = unaff_x25;
    }
    iVar9 = 0x20;
    if (bVar2) {
      iVar9 = 0x40;
    }
    iVar7 = iVar9 + -0x10;
    uVar1 = uVar10 << 0x10;
    if (uVar10 >> 0x30 != 0) {
      iVar7 = iVar9;
      uVar1 = uVar10;
    }
                    /* try { // try from 050da9cc to 051da9f3 has its CatchHandler @ 050dab74 */
    iVar9 = iVar7 + -8;
    uVar10 = uVar1 << 8;
    if (uVar1 >> 0x38 != 0) {
      iVar9 = iVar7;
      uVar10 = uVar1;
    }
    iVar7 = iVar9 + -4;
    uVar1 = uVar10 << 4;
    if (uVar10 >> 0x3c != 0) {
      iVar7 = iVar9;
      uVar1 = uVar10;
    }
    iVar9 = iVar7 + -2;
    uVar10 = uVar1 << 2;
    if (uVar1 >> 0x3e != 0) {
      iVar9 = iVar7;
      uVar10 = uVar1;
    }
    uVar11 = (uint)(uVar10 >> 0x3f) ^ 1;
    uVar10 = uVar10 << uVar11;
    iVar9 = iVar9 - uVar11;
    in_stack_00000008._4_4_ = iVar9;
    if ((unaff_w24 & 0xf) != 0) {
      lVar3 = *unaff_x22;
                    /* try { // try from 050daa30 to 051daa7b has its CatchHandler @ 050dab7c */
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar3 = *unaff_x22;
      }
      lVar5 = *(long *)(lVar3 + 0xb8);
      lVar8 = *(long *)(lVar5 + 0x38);
      if (lVar8 == 0) goto LAB_050dac7c;
      uVar11 = (unaff_w24 & 0xf) - 1;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_050dac80;
      iVar6 = (int)*(char *)(lVar8 + (ulong)uVar11 + 0x20);
      iVar7 = 1 - iVar6;
      if (-1 < unaff_w23) {
        iVar7 = iVar6;
      }
      in_stack_00000008._4_4_ = iVar7 + iVar9;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar3 = *unaff_x22;
        lVar5 = *(long *)(lVar3 + 0xb8);
      }
      lVar5 = *(long *)(lVar5 + 0x30);
      if (lVar5 == 0) goto LAB_050dac7c;
      uVar11 = uVar11 + (unaff_w23 >> 0x1f & 0xfU);
      if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_050dac80;
      uVar12 = *(undefined8 *)(lVar5 + (ulong)uVar11 * 8 + 0x20);
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_050e3218(uVar10,uVar12,(long)&stack0x00000008 + 4);
    }
    if (0xf < unaff_w24) {
      lVar3 = *unaff_x22;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar3 = *unaff_x22;
      }
      lVar5 = *(long *)(lVar3 + 0xb8);
      lVar8 = *(long *)(lVar5 + 0x48);
      if (lVar8 == 0) {
LAB_050dac7c:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar13 = (long)((int)unaff_w24 >> 4) + -1;
      uVar11 = (uint)lVar13;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) {
LAB_050dac80:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      iVar7 = (int)*(short *)(lVar8 + lVar13 * 2 + 0x20);
      iVar9 = 1 - iVar7;
      if (-1 < unaff_w23) {
        iVar9 = iVar7;
      }
      in_stack_00000008._4_4_ = iVar9 + in_stack_00000008._4_4_;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar3 = *unaff_x22;
        lVar5 = *(long *)(lVar3 + 0xb8);
      }
      lVar5 = *(long *)(lVar5 + 0x40);
      if (lVar5 == 0) goto LAB_050dac7c;
      uVar11 = uVar11 + (unaff_w23 >> 0x1f & 0x15U);
      if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_050dac80;
      uVar12 = *(undefined8 *)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_050e3218(uVar10,uVar12,(long)&stack0x00000008 + 4);
    }
    iVar9 = in_stack_00000008._4_4_;
    if ((((uint)uVar10 >> 10 & 1) != 0) &&
       (uVar1 = uVar10 + (uVar10 >> 0xb & 1) + 0x3ff, bVar2 = uVar1 < uVar10, uVar10 = uVar1, bVar2)
       ) {
      uVar10 = uVar1 >> 1 | 0x8000000000000000;
      iVar9 = in_stack_00000008._4_4_ + 1;
    }
    in_stack_00000008._4_4_ = iVar9 + 0x3fe;
    if ((int)in_stack_00000008._4_4_ < 1) {
      if ((in_stack_00000008._4_4_ == 0xffffffcc) && (0x8000000000000057 < uVar10)) {
        uVar10 = 1;
      }
      else if ((int)in_stack_00000008._4_4_ < -0x33) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar10 >> ((ulong)(-iVar9 - 0x3f2) & 0x3f);
      }
    }
    else if (in_stack_00000008._4_4_ < 0x7ff) {
      uVar10 = uVar10 >> 0xb & 0xfffffffffffff | (ulong)in_stack_00000008._4_4_ << 0x34;
    }
    else {
      uVar10 = 0x7ff0000000000000;
    }
  }
  else {
    uVar10 = 0x7ff0000000000000;
    if (unaff_w23 < 1) {
      uVar10 = 0;
    }
  }
  uVar4 = FUN_050e41c4();
  uVar1 = uVar10 | 0x8000000000000000;
  if ((uVar4 & 1) == 0) {
    uVar1 = uVar10;
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar1;
  return auVar14;
}


