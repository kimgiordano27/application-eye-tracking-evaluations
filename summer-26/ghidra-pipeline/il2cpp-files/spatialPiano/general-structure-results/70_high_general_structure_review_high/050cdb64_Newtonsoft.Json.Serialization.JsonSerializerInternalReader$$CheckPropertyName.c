/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CheckPropertyName
ENTRY_POINT: 050cdb64
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CheckPropertyName
               (undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint unaff_w20;
  int unaff_w21;
  
  if (unaff_w21 != 0) {
    iVar1 = FUN_050e3e50();
    if (iVar1 < 0) {
      if ((unaff_w20 >> 6 & 1) == 0) goto LAB_050cdba0;
    }
    else if ((unaff_w20 & 0x44) != 0) {
LAB_050cdba0:
      iVar2 = FUN_050e3e50(param_1);
      if (iVar2 < 0) {
        if ((unaff_w20 >> 5 & 1) == 0) goto LAB_050cdbd0;
      }
      else if ((unaff_w20 & 0x22) != 0) {
LAB_050cdbd0:
        iVar3 = FUN_050e3e50(param_1);
        if (iVar3 < 0) {
          if ((unaff_w20 >> 4 & 1) == 0) goto LAB_050cdbf4;
        }
        else if ((unaff_w20 & 0x11) != 0) {
LAB_050cdbf4:
          if (iVar1 < 0) {
            if (iVar2 < 0) {
              uVar4 = FUN_050ceaf8(param_1);
            }
            else {
              uVar4 = FUN_050ce544(param_1);
            }
          }
          else {
            uVar4 = FUN_050ce2b8(param_1);
          }
          goto LAB_050cdc38;
        }
      }
    }
  }
  FUN_050cedd0();
  uVar4 = 0;
LAB_050cdc38:
  return uVar4 & 1;
}


