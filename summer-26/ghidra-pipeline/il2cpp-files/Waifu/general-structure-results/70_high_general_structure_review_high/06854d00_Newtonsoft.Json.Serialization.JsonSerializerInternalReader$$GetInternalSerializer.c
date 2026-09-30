/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetInternalSerializer
ENTRY_POINT: 06854d00
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 unaff_w19;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  long unaff_x23;
  
  FUN_0335b6c8(param_1 + 0x838,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x23 + 0xe30) = 1;
  lVar2 = FUN_03398188(DAT_083c7838,3);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (((uVar1 != 0) && (*(undefined4 *)(lVar2 + 0x20) = unaff_w22, uVar1 != 1)) &&
     (*(undefined4 *)(lVar2 + 0x24) = unaff_w21, 2 < uVar1)) {
    *(undefined4 *)(lVar2 + 0x28) = unaff_w19;
    FUN_0334d0b0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


