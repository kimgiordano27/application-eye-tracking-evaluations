/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$GetErrorContext
ENTRY_POINT: 01776c94
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalBase__GetErrorContext(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  int unaff_w25;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000008;
  
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_01776e78;
  if (*(uint *)(*(long *)(param_1 + 0x30) + 0x18) <= unaff_w25 + (unaff_w23 >> 0x1f & 0xfU))
  goto LAB_01776e7c;
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_0177f2c8();
  if (unaff_w24 >> 4 == 0) {
LAB_01776d98:
    uVar8 = uVar2;
    if ((((uint)uVar2 >> 10 & 1) != 0) &&
       (uVar8 = uVar2 + (uVar2 >> 0xb & 1) + 0x3ff, uVar8 < uVar2)) {
      uVar8 = uVar8 >> 1 | 0x8000000000000000;
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    }
    uVar9 = in_stack_00000008._4_4_ + 0x3fe;
    if ((int)uVar9 < 1) {
      if ((uVar8 < 0x8000000000000058) || (uVar9 != 0xffffffcc)) {
        if ((int)uVar9 < -0x33) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar8 >> ((ulong)(0xe - in_stack_00000008._4_4_) & 0x3f);
        }
      }
      else {
        uVar8 = 1;
      }
    }
    else if ((int)uVar9 < 0x7ff) {
      uVar8 = uVar8 >> 0xb & 0xfffffffffffff | (ulong)uVar9 << 0x34;
    }
    else {
      uVar8 = 0x7ff0000000000000;
    }
    in_stack_00000008._4_4_ = uVar9;
    uVar4 = FUN_01780038();
    uVar2 = uVar8 | 0x8000000000000000;
    if ((uVar4 & 1) == 0) {
      uVar2 = uVar8;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar2;
    return auVar12;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
                    /* try { // try from 01776cf0 to 01876cfb has its CatchHandler @ 01776880 */
    thunk_FUN_00d32864();
    lVar3 = *unaff_x22;
  }
  lVar5 = *(long *)(lVar3 + 0xb8);
                    /* try { // try from 01776cfc to 01876d03 has its CatchHandler @ 01776d0c */
  lVar7 = *(long *)(lVar5 + 0x48);
  if (lVar7 != 0) {
                    /* catch() { ... } // from try @ 01776c78 with catch @ 01776d04 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01776c88 with catch @ 01776d0c
                       catch(type#2 @ 00000000) { ... } // from try @ 01776cfc with catch @ 01776d0c
                        */
    lVar10 = (long)(unaff_w24 >> 4) + -1;
    uVar9 = (uint)lVar10;
    if (uVar9 < *(uint *)(lVar7 + 0x18)) {
      iVar6 = (int)*(short *)(lVar7 + lVar10 * 2 + 0x20);
      iVar1 = 1 - iVar6;
      if (-1 < unaff_w23) {
        iVar1 = iVar6;
      }
      in_stack_00000008._4_4_ = iVar1 + in_stack_00000008._4_4_;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *unaff_x22;
        lVar5 = *(long *)(lVar3 + 0xb8);
      }
      lVar5 = *(long *)(lVar5 + 0x40);
      if (lVar5 == 0) goto LAB_01776e78;
      uVar9 = uVar9 + (unaff_w23 >> 0x1f & 0x15U);
      if (uVar9 < *(uint *)(lVar5 + 0x18)) {
        uVar11 = *(undefined8 *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar2 = FUN_0177f2c8(uVar2,uVar11,(long)&stack0x00000008 + 4);
        goto LAB_01776d98;
      }
    }
LAB_01776e7c:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_01776e78:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


