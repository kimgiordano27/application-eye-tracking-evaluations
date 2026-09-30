/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Culture
ENTRY_POINT: 0170f914
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


undefined8 Newtonsoft_Json_JsonSerializerSettings__set_Culture(void)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  long lVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w21;
  short unaff_w22;
  byte unaff_w24;
  
code_r0x0170f914:
  if ((unaff_w24 & 1) == 0) {
LAB_0170f9a8:
    *(undefined8 *)(unaff_x19 + 0x70) = unaff_x20;
    return unaff_x20;
  }
LAB_0170f920:
  lVar4 = FUN_0170f484();
  iVar1 = unaff_w21;
  if (lVar4 != 0) {
    do {
      unaff_w21 = iVar1 + 1;
      if (*(int *)(lVar4 + 0x10) <= unaff_w21) {
        unaff_x20 = FUN_015f5b28();
        goto LAB_0170f9a8;
      }
      lVar4 = FUN_0170f484();
      if (lVar4 == 0) break;
      uVar2 = FUN_015fa29c(lVar4,unaff_w21,0);
      if (uVar2 < 0x26) {
        if (uVar2 == 0x25) {
Newtonsoft_Json_JsonSerializerSettings__set_CheckAdditionalContent:
          unaff_w21 = iVar1 + 2;
          goto LAB_0170f920;
        }
        if (uVar2 != 0x22) goto LAB_0170f920;
      }
      else {
        if (uVar2 == 0x5c) goto Newtonsoft_Json_JsonSerializerSettings__set_CheckAdditionalContent;
        if (uVar2 == 0x7a) goto code_r0x0170f914;
        if (uVar2 != 0x27) goto LAB_0170f920;
      }
      lVar4 = FUN_0170f484();
      if ((unaff_w24 & 1) != 0) goto code_r0x0170f948;
      if (lVar4 == 0) break;
      unaff_w22 = FUN_015fa29c(lVar4,unaff_w21,0);
      lVar4 = FUN_0170f484();
      unaff_w24 = 1;
      iVar1 = unaff_w21;
      if (lVar4 == 0) break;
    } while( true );
  }
  goto LAB_0170f990;
code_r0x0170f948:
  if (lVar4 == 0) {
LAB_0170f990:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  sVar3 = FUN_015fa29c(lVar4,unaff_w21,0);
  unaff_w24 = unaff_w22 != sVar3;
  goto LAB_0170f920;
}


