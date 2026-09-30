/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.cctor
ENTRY_POINT: 0170f98c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings___cctor(long param_1)

{
  ushort uVar1;
  short sVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w21;
  short unaff_w22;
  byte unaff_w24;
  
code_r0x0170f98c:
  if (param_1 != 0) {
    do {
      if (*(int *)(param_1 + 0x10) <= unaff_w21) {
        unaff_x20 = FUN_015f5b28();
LAB_0170f9a8:
        *(undefined8 *)(unaff_x19 + 0x70) = unaff_x20;
        return unaff_x20;
      }
      lVar3 = FUN_0170f484();
      if (lVar3 == 0) break;
      uVar1 = FUN_015fa29c(lVar3,unaff_w21,0);
      if (uVar1 < 0x26) {
        if (uVar1 == 0x25) {
Newtonsoft_Json_JsonSerializerSettings__set_CheckAdditionalContent:
          unaff_w21 = unaff_w21 + 1;
        }
        else if (uVar1 == 0x22) {
LAB_0170f93c:
          lVar3 = FUN_0170f484();
          if ((unaff_w24 & 1) == 0) goto LAB_0170f968;
          if (lVar3 == 0) break;
          sVar2 = FUN_015fa29c(lVar3,unaff_w21,0);
          unaff_w24 = unaff_w22 != sVar2;
        }
      }
      else {
        if (uVar1 == 0x5c) goto Newtonsoft_Json_JsonSerializerSettings__set_CheckAdditionalContent;
        if (uVar1 == 0x7a) {
          if ((unaff_w24 & 1) == 0) goto LAB_0170f9a8;
        }
        else if (uVar1 == 0x27) goto LAB_0170f93c;
      }
      unaff_w21 = unaff_w21 + 1;
      param_1 = FUN_0170f484();
      if (param_1 == 0) break;
    } while( true );
  }
LAB_0170f990:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_0170f968:
  if (lVar3 == 0) goto LAB_0170f990;
  unaff_w22 = FUN_015fa29c(lVar3,unaff_w21,0);
  unaff_w21 = unaff_w21 + 1;
  param_1 = FUN_0170f484();
  unaff_w24 = 1;
  goto code_r0x0170f98c;
}


