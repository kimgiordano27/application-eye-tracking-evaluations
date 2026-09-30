/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewObject
ENTRY_POINT: 06756250
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewObject(void)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int unaff_w21;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  long *unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000008;
  
  thunk_FUN_03ae8be4();
  lVar3 = *unaff_x22;
  lVar7 = *(long *)(lVar3 + 0xb8);
  lVar9 = *(long *)(lVar7 + 0x38);
  if (lVar9 == 0) {
LAB_06756498:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar10 = unaff_w25 - 1;
  if (uVar10 < *(uint *)(lVar9 + 0x18)) {
    iVar8 = (int)*(char *)(lVar9 + (ulong)uVar10 + 0x20);
    iVar6 = 1 - iVar8;
    if (-1 < unaff_w23) {
      iVar6 = iVar8;
    }
    in_stack_00000008._4_4_ = iVar6 + unaff_w21;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *unaff_x22;
      lVar7 = *(long *)(lVar3 + 0xb8);
    }
    if (*(long *)(lVar7 + 0x30) == 0) goto LAB_06756498;
    if (uVar10 + (unaff_w23 >> 0x1f & 0xfU) < *(uint *)(*(long *)(lVar7 + 0x30) + 0x18)) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar4 = FUN_0675ea34();
      if (unaff_w24 < 0x10) {
LAB_067563b0:
        iVar6 = in_stack_00000008._4_4_;
        if ((((uint)uVar4 >> 10 & 1) != 0) &&
           (uVar1 = uVar4 + (uVar4 >> 0xb & 1) + 0x3ff, bVar2 = uVar1 < uVar4, uVar4 = uVar1, bVar2)
           ) {
          uVar4 = uVar1 >> 1 | 0x8000000000000000;
          iVar6 = in_stack_00000008._4_4_ + 1;
        }
        in_stack_00000008._4_4_ = iVar6 + 0x3fe;
        if ((int)in_stack_00000008._4_4_ < 1) {
          if ((in_stack_00000008._4_4_ == 0xffffffcc) && (0x8000000000000057 < uVar4)) {
            uVar4 = 1;
          }
          else if ((int)in_stack_00000008._4_4_ < -0x33) {
            uVar4 = 0;
          }
          else {
            uVar4 = uVar4 >> ((ulong)(-iVar6 - 0x3f2) & 0x3f);
          }
        }
        else if (in_stack_00000008._4_4_ < 0x7ff) {
          uVar4 = uVar4 >> 0xb & 0xfffffffffffff | (ulong)in_stack_00000008._4_4_ << 0x34;
        }
        else {
          uVar4 = 0x7ff0000000000000;
        }
        uVar5 = FUN_0675fca8();
        uVar1 = uVar4 | 0x8000000000000000;
        if ((uVar5 & 1) == 0) {
          uVar1 = uVar4;
        }
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar1;
        return auVar13;
      }
      lVar3 = *unaff_x22;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar3 = *unaff_x22;
      }
      lVar7 = *(long *)(lVar3 + 0xb8);
      lVar9 = *(long *)(lVar7 + 0x48);
      if (lVar9 == 0) goto LAB_06756498;
      lVar11 = (long)((int)unaff_w24 >> 4) + -1;
      uVar10 = (uint)lVar11;
      if (uVar10 < *(uint *)(lVar9 + 0x18)) {
        iVar8 = (int)*(short *)(lVar9 + lVar11 * 2 + 0x20);
        iVar6 = 1 - iVar8;
        if (-1 < unaff_w23) {
          iVar6 = iVar8;
        }
        in_stack_00000008._4_4_ = iVar6 + in_stack_00000008._4_4_;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar3 = *unaff_x22;
          lVar7 = *(long *)(lVar3 + 0xb8);
        }
        lVar7 = *(long *)(lVar7 + 0x40);
        if (lVar7 == 0) goto LAB_06756498;
        uVar10 = uVar10 + (unaff_w23 >> 0x1f & 0x15U);
        if (uVar10 < *(uint *)(lVar7 + 0x18)) {
          uVar12 = *(undefined8 *)(lVar7 + (long)(int)uVar10 * 8 + 0x20);
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar4 = FUN_0675ea34(uVar4,uVar12,(long)&stack0x00000008 + 4);
          goto LAB_067563b0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


