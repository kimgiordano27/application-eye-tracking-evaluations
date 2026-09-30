/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerializing
ENTRY_POINT: 06760efc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerializing(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_w8;
  uint unaff_w19;
  int unaff_w20;
  uint *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  uint unaff_w25;
  int unaff_w26;
  int unaff_w27;
  undefined8 in_stack_00000008;
  undefined *puVar4;
  
  if ((int)in_w8 < (int)unaff_w22) {
    if (unaff_w22 <= unaff_w25) {
LAB_0676100c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (*(short *)(unaff_x23 + (long)(int)unaff_w25 * 2) == 0x30) {
      if (unaff_w22 <= in_w8) goto LAB_0676100c;
      if ((*(ushort *)(unaff_x23 + (long)(int)in_w8 * 2) | 0x20) == 0x78) {
        unaff_w25 = unaff_w25 + 2;
        unaff_w20 = 0x10;
        in_stack_00000008._4_4_ = unaff_w25;
      }
    }
  }
  uVar1 = FUN_06761198(unaff_w20);
  if (in_stack_00000008._4_4_ == unaff_w25) {
    thunk_FUN_03af1434(PTR_DAT_0849e2e8);
    uVar2 = thunk_FUN_03ac74bc();
    puVar4 = PTR_DAT_084a9d48;
  }
  else {
    if (((unaff_w19 >> 0xc & 1) == 0) || ((int)unaff_w22 <= (int)in_stack_00000008._4_4_)) {
      *unaff_x21 = in_stack_00000008._4_4_;
      if ((unaff_w19 >> 10 & 1) == 0) {
        if ((unaff_w19 >> 0xb & 1) == 0) {
          if (uVar1 != 0x80000000) {
            unaff_w27 = 1;
          }
          if ((((unaff_w19 >> 9 & 1) != 0) || (unaff_w20 != 10)) || (unaff_w27 != 0)) {
LAB_06760fe4:
            if (unaff_w20 != 10) {
              unaff_w26 = 1;
            }
            return uVar1 * unaff_w26;
          }
          thunk_FUN_03af1434(PTR_DAT_08489850);
          uVar2 = thunk_FUN_03ac74bc();
          puVar4 = PTR_DAT_084a5c78;
        }
        else {
          if (uVar1 < 0x10000) goto LAB_06760fe4;
          thunk_FUN_03af1434(PTR_DAT_08489850);
          uVar2 = thunk_FUN_03ac74bc();
          puVar4 = PTR_DAT_084a5c58;
        }
      }
      else {
        if (uVar1 < 0x100) goto LAB_06760fe4;
        thunk_FUN_03af1434(PTR_DAT_08489850);
        uVar2 = thunk_FUN_03ac74bc();
        puVar4 = PTR_DAT_084a5c48;
      }
      uVar3 = thunk_FUN_03af1434(puVar4);
      FUN_06760338(uVar2,uVar3);
      goto LAB_06761180;
    }
    thunk_FUN_03af1434(PTR_DAT_0849e2e8);
    uVar2 = thunk_FUN_03ac74bc();
    puVar4 = PTR_DAT_084a9988;
  }
  uVar3 = thunk_FUN_03af1434(puVar4);
  FUN_06739308(uVar2,uVar3,0);
LAB_06761180:
  uVar3 = thunk_FUN_03af1434(PTR_DAT_084a9d70);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar2,uVar3);
}


