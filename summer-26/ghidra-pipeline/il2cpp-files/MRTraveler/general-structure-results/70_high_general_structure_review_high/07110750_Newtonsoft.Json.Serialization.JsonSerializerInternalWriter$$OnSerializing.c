/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerializing
ENTRY_POINT: 07110750
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerializing(void)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  char in_NG;
  char in_OV;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint unaff_w19;
  uint *unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  long lVar8;
  undefined8 in_stack_00000008;
  undefined *puVar7;
  
  if (in_NG == in_OV) {
    thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
    uVar5 = thunk_FUN_03cf5234();
    uVar6 = thunk_FUN_03ce5214(PTR_DAT_08e80488);
    FUN_07066198(uVar5,uVar6,0);
    goto LAB_071109c8;
  }
  if (((unaff_w19 & 0x3000) == 0) &&
     (FUN_07110a28(), unaff_w25 = in_stack_00000008._4_4_, in_stack_00000008._4_4_ == unaff_w21)) {
    thunk_FUN_03ce5214(PTR_DAT_08e9a7e8);
    uVar5 = thunk_FUN_03cf5234();
    puVar7 = PTR_DAT_08ea5978;
    goto LAB_07110950;
  }
  if (unaff_w21 <= unaff_w25) goto LAB_0711089c;
  sVar2 = *(short *)(unaff_x23 + (long)(int)unaff_w25 * 2);
  if (sVar2 == 0x2b) {
    unaff_w25 = unaff_w25 + 1;
    in_stack_00000008._4_4_ = unaff_w25;
LAB_071107c8:
    bVar3 = false;
    lVar8 = 1;
LAB_071107cc:
    if (((unaff_w24 == 0x10) || (unaff_w24 == -1)) &&
       (uVar1 = unaff_w25 + 1, (int)uVar1 < (int)unaff_w21)) {
      if (unaff_w21 <= unaff_w25) {
LAB_0711089c:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      if (*(short *)(unaff_x23 + (long)(int)unaff_w25 * 2) == 0x30) {
        if (unaff_w21 <= uVar1) goto LAB_0711089c;
        if ((*(ushort *)(unaff_x23 + (long)(int)uVar1 * 2) | 0x20) == 0x78) {
          unaff_w25 = unaff_w25 + 2;
          unaff_w22 = 0x10;
          in_stack_00000008._4_4_ = unaff_w25;
        }
      }
    }
    lVar4 = FUN_07110af4(unaff_w22);
    if (in_stack_00000008._4_4_ == unaff_w25) {
      thunk_FUN_03ce5214(PTR_DAT_08e9a7e8);
      uVar5 = thunk_FUN_03cf5234();
      puVar7 = PTR_DAT_08ea5970;
    }
    else {
      if (((unaff_w19 >> 0xc & 1) == 0) || ((int)unaff_w21 <= (int)in_stack_00000008._4_4_)) {
        *unaff_x20 = in_stack_00000008._4_4_;
        if (((unaff_w19 >> 9 & 1) != 0) ||
           ((unaff_w22 != 10 || (bVar3 || lVar4 != -0x8000000000000000)))) {
          if (unaff_w22 != 10) {
            lVar8 = 1;
          }
          return lVar4 * lVar8;
        }
        thunk_FUN_03ce5214(PTR_DAT_08e6a810);
        uVar5 = thunk_FUN_03cf5234();
        puVar7 = PTR_DAT_08ea1cb8;
        goto LAB_071109b8;
      }
      thunk_FUN_03ce5214(PTR_DAT_08e9a7e8);
      uVar5 = thunk_FUN_03cf5234();
      puVar7 = PTR_DAT_08ea5578;
    }
LAB_07110950:
    uVar6 = thunk_FUN_03ce5214(puVar7);
    Newtonsoft_Json_Utilities_ReflectionUtils__GetDefaultConstructor(uVar5,uVar6,0);
  }
  else {
    if (sVar2 != 0x2d) goto LAB_071107c8;
    if (unaff_w22 != 10) {
      thunk_FUN_03ce5214(PTR_DAT_08e76350);
      uVar5 = thunk_FUN_03cf5234();
      uVar6 = thunk_FUN_03ce5214(PTR_DAT_08ea5980);
      FUN_07064ba8(uVar5,uVar6,0);
      goto LAB_071109c8;
    }
    if ((unaff_w19 >> 9 & 1) == 0) {
      unaff_w25 = unaff_w25 + 1;
      lVar8 = -1;
      bVar3 = true;
      in_stack_00000008._4_4_ = unaff_w25;
      goto LAB_071107cc;
    }
    thunk_FUN_03ce5214(PTR_DAT_08e6a810);
    uVar5 = thunk_FUN_03cf5234();
    puVar7 = PTR_DAT_08ea5988;
LAB_071109b8:
    uVar6 = thunk_FUN_03ce5214(puVar7);
    FUN_0711020c(uVar5,uVar6);
  }
LAB_071109c8:
  uVar6 = thunk_FUN_03ce5214(PTR_DAT_08ea5990);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar5,uVar6);
}


