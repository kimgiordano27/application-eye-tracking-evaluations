/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_CheckAdditionalContent
ENTRY_POINT: 05016580
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x050166ec) */

long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_CheckAdditionalContent(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint unaff_w19;
  uint *unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  long unaff_x27;
  uint uStack000000000000000c;
  
  uStack000000000000000c = unaff_w25;
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
        uStack000000000000000c = unaff_w25 + 2;
        unaff_w22 = 0x10;
      }
    }
  }
  uVar1 = uStack000000000000000c;
  lVar2 = FUN_050168c0(unaff_w22);
  if (uStack000000000000000c == uVar1) {
    thunk_FUN_02dc61f4(PTR_DAT_0676fbb0);
    uVar3 = thunk_FUN_02d9d534();
    puVar4 = PTR_DAT_0677aad8;
  }
  else {
    if (((unaff_w19 >> 0xc & 1) == 0) || ((int)unaff_w21 <= (int)uStack000000000000000c)) {
      *unaff_x20 = uStack000000000000000c;
      if (unaff_w22 != 10) {
        unaff_x27 = 1;
      }
      return lVar2 * unaff_x27;
    }
    thunk_FUN_02dc61f4(PTR_DAT_0676fbb0);
    uVar3 = thunk_FUN_02d9d534();
    puVar4 = PTR_DAT_0677a6f8;
  }
  uVar5 = thunk_FUN_02dc61f4(puVar4);
  FUN_04fefd84(uVar3,uVar5,0);
  uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0677aaf8);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar3,uVar5);
}


