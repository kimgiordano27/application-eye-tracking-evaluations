/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MaxDepth
ENTRY_POINT: 05016538
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0501661c) */
/* WARNING: Removing unreachable block (ram,0x05016620) */
/* WARNING: Removing unreachable block (ram,0x05016628) */
/* WARNING: Removing unreachable block (ram,0x0501663c) */
/* WARNING: Removing unreachable block (ram,0x05016644) */
/* WARNING: Removing unreachable block (ram,0x0501664c) */
/* WARNING: Removing unreachable block (ram,0x05016650) */
/* WARNING: Removing unreachable block (ram,0x050166ec) */
/* WARNING: Removing unreachable block (ram,0x050166cc) */

void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MaxDepth(void)

{
  uint uVar1;
  short sVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint unaff_w19;
  uint unaff_w21;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  undefined8 in_stack_00000008;
  
  FUN_05016800();
  if (in_stack_00000008._4_4_ == unaff_w21) {
    thunk_FUN_02dc61f4(PTR_DAT_0676fbb0);
    uVar3 = thunk_FUN_02d9d534();
    puVar4 = PTR_DAT_0677aae0;
  }
  else {
    if (unaff_w21 <= in_stack_00000008._4_4_) {
LAB_05016674:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    sVar2 = *(short *)(unaff_x23 + (long)(int)in_stack_00000008._4_4_ * 2);
    if (sVar2 == 0x2b) {
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    }
    else if (sVar2 == 0x2d) {
      if (unaff_w22 != 10) {
        thunk_FUN_02dc61f4(PTR_DAT_06763b78);
        uVar3 = thunk_FUN_02d9d534();
        uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0677aae8);
        FUN_04f7d8e0(uVar3,uVar5,0);
        goto LAB_050167a0;
      }
      if ((unaff_w19 >> 9 & 1) != 0) {
        thunk_FUN_02dc61f4(PTR_DAT_06764c60);
        uVar3 = thunk_FUN_02d9d534();
        uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0677aaf0);
        FUN_05015fe0(uVar3,uVar5);
        goto LAB_050167a0;
      }
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    }
    if (((unaff_w24 == 0x10) || (unaff_w24 == -1)) &&
       (uVar1 = in_stack_00000008._4_4_ + 1, (int)uVar1 < (int)unaff_w21)) {
      if (unaff_w21 <= in_stack_00000008._4_4_) goto LAB_05016674;
      if (*(short *)(unaff_x23 + (long)(int)in_stack_00000008._4_4_ * 2) == 0x30) {
        if (unaff_w21 <= uVar1) goto LAB_05016674;
        if ((*(ushort *)(unaff_x23 + (long)(int)uVar1 * 2) | 0x20) == 0x78) {
          unaff_w22 = 0x10;
        }
      }
    }
    FUN_050168c0(unaff_w22);
    thunk_FUN_02dc61f4(PTR_DAT_0676fbb0);
    uVar3 = thunk_FUN_02d9d534();
    puVar4 = PTR_DAT_0677aad8;
  }
  uVar5 = thunk_FUN_02dc61f4(puVar4);
  FUN_04fefd84(uVar3,uVar5,0);
LAB_050167a0:
  uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0677aaf8);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar3,uVar5);
}


