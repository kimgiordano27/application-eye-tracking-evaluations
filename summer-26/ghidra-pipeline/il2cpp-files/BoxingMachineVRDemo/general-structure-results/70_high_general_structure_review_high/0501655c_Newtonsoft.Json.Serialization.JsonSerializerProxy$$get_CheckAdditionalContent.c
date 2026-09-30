/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_CheckAdditionalContent
ENTRY_POINT: 0501655c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__get_CheckAdditionalContent(void)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  uint unaff_w19;
  uint *unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  long lVar7;
  undefined8 in_stack_00000008;
  undefined *puVar6;
  
  if (in_w8 == 0x2b) {
    unaff_w25 = unaff_w25 + 1;
    in_stack_00000008._4_4_ = unaff_w25;
LAB_050165a0:
    bVar2 = false;
    lVar7 = 1;
LAB_050165a4:
    if (((unaff_w24 == 0x10) || (unaff_w24 == -1)) &&
       (uVar1 = unaff_w25 + 1, (int)uVar1 < (int)unaff_w21)) {
      if (unaff_w21 <= unaff_w25) {
LAB_05016674:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      if (*(short *)(unaff_x23 + (long)(int)unaff_w25 * 2) == 0x30) {
        if (unaff_w21 <= uVar1) goto LAB_05016674;
        if ((*(ushort *)(unaff_x23 + (long)(int)uVar1 * 2) | 0x20) == 0x78) {
          unaff_w25 = unaff_w25 + 2;
          unaff_w22 = 0x10;
          in_stack_00000008._4_4_ = unaff_w25;
        }
      }
    }
    lVar3 = FUN_050168c0(unaff_w22);
    if (in_stack_00000008._4_4_ == unaff_w25) {
      thunk_FUN_02dc61f4(PTR_DAT_0676fbb0);
      uVar4 = thunk_FUN_02d9d534();
      puVar6 = PTR_DAT_0677aad8;
    }
    else {
      if (((unaff_w19 >> 0xc & 1) == 0) || ((int)unaff_w21 <= (int)in_stack_00000008._4_4_)) {
        *unaff_x20 = in_stack_00000008._4_4_;
        if (((unaff_w19 >> 9 & 1) != 0) ||
           ((unaff_w22 != 10 || (bVar2 || lVar3 != -0x8000000000000000)))) {
          if (unaff_w22 != 10) {
            lVar7 = 1;
          }
          return lVar3 * lVar7;
        }
        thunk_FUN_02dc61f4(PTR_DAT_06764c60);
        uVar4 = thunk_FUN_02d9d534();
        puVar6 = PTR_DAT_067771e8;
        goto LAB_05016790;
      }
      thunk_FUN_02dc61f4(PTR_DAT_0676fbb0);
      uVar4 = thunk_FUN_02d9d534();
      puVar6 = PTR_DAT_0677a6f8;
    }
    uVar5 = thunk_FUN_02dc61f4(puVar6);
    FUN_04fefd84(uVar4,uVar5,0);
  }
  else {
    if (in_w8 != 0x2d) goto LAB_050165a0;
    if (unaff_w22 != 10) {
      thunk_FUN_02dc61f4(PTR_DAT_06763b78);
      uVar4 = thunk_FUN_02d9d534();
      uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0677aae8);
      FUN_04f7d8e0(uVar4,uVar5,0);
      goto LAB_050167a0;
    }
    if ((unaff_w19 >> 9 & 1) == 0) {
      unaff_w25 = unaff_w25 + 1;
      lVar7 = -1;
      bVar2 = true;
      in_stack_00000008._4_4_ = unaff_w25;
      goto LAB_050165a4;
    }
    thunk_FUN_02dc61f4(PTR_DAT_06764c60);
    uVar4 = thunk_FUN_02d9d534();
    puVar6 = PTR_DAT_0677aaf0;
LAB_05016790:
    uVar5 = thunk_FUN_02dc61f4(puVar6);
    FUN_05015fe0(uVar4,uVar5);
  }
LAB_050167a0:
  uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0677aaf8);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar4,uVar5);
}


