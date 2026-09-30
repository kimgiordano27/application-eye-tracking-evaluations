/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 050165c4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(void)

{
  bool in_CY;
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint in_w8;
  uint unaff_w19;
  int *unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  long unaff_x23;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  undefined8 in_stack_00000008;
  
  if (in_CY) {
LAB_05016674:
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
  if (*(short *)(unaff_x23 + (long)unaff_w25 * 2) == 0x30) {
    if (unaff_w21 <= in_w8) goto LAB_05016674;
    if ((*(ushort *)(unaff_x23 + (long)(int)in_w8 * 2) | 0x20) == 0x78) {
      unaff_w25 = unaff_w25 + 2;
      unaff_w22 = 0x10;
      in_stack_00000008._4_4_ = unaff_w25;
    }
  }
  lVar1 = FUN_050168c0(unaff_w22);
  if (in_stack_00000008._4_4_ == unaff_w25) {
    thunk_FUN_02dc61f4(PTR_DAT_0676fbb0);
    uVar2 = thunk_FUN_02d9d534();
    puVar3 = PTR_DAT_0677aad8;
  }
  else {
    if (((unaff_w19 >> 0xc & 1) == 0) || ((int)unaff_w21 <= in_stack_00000008._4_4_)) {
      *unaff_x20 = in_stack_00000008._4_4_;
      if ((((unaff_w19 >> 9 & 1) != 0) || (unaff_w22 != 10)) ||
         (unaff_w26 != 0 || lVar1 != -0x8000000000000000)) {
        if (unaff_w22 != 10) {
          unaff_x27 = 1;
        }
        return lVar1 * unaff_x27;
      }
      thunk_FUN_02dc61f4(PTR_DAT_06764c60);
      uVar2 = thunk_FUN_02d9d534();
      uVar4 = thunk_FUN_02dc61f4(PTR_DAT_067771e8);
      FUN_05015fe0(uVar2,uVar4);
      goto LAB_050167a0;
    }
    thunk_FUN_02dc61f4(PTR_DAT_0676fbb0);
    uVar2 = thunk_FUN_02d9d534();
    puVar3 = PTR_DAT_0677a6f8;
  }
  uVar4 = thunk_FUN_02dc61f4(puVar3);
  FUN_04fefd84(uVar2,uVar4,0);
LAB_050167a0:
  uVar4 = thunk_FUN_02dc61f4(PTR_DAT_0677aaf8);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar2,uVar4);
}


