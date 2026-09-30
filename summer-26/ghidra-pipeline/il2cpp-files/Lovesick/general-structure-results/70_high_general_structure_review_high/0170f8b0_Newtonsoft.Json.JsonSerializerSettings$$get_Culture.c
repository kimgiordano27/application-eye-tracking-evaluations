/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Culture
ENTRY_POINT: 0170f8b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_Culture(long param_1)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  long lVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  int iVar6;
  
  iVar6 = 0;
  bVar1 = false;
  sVar4 = 0x27;
  do {
    if (*(int *)(param_1 + 0x10) <= iVar6) {
      unaff_x20 = FUN_015f5b28();
LAB_0170f9a8:
      *(undefined8 *)(unaff_x19 + 0x70) = unaff_x20;
      return unaff_x20;
    }
    lVar5 = FUN_0170f484();
    if (lVar5 == 0) break;
    uVar2 = FUN_015fa29c(lVar5,iVar6,0);
    if (uVar2 < 0x26) {
      if (uVar2 == 0x25) goto Newtonsoft_Json_JsonSerializerSettings__set_CheckAdditionalContent;
      if (uVar2 != 0x22) goto LAB_0170f920;
LAB_0170f93c:
      lVar5 = FUN_0170f484();
      if (bVar1) {
        if (lVar5 != 0) {
          sVar3 = FUN_015fa29c(lVar5,iVar6,0);
          bVar1 = sVar4 != sVar3;
          goto LAB_0170f920;
        }
        break;
      }
      if (lVar5 == 0) break;
      sVar4 = FUN_015fa29c(lVar5,iVar6,0);
      param_1 = FUN_0170f484();
      bVar1 = true;
    }
    else {
      if (uVar2 != 0x5c) {
        if (uVar2 == 0x7a) {
          if (!bVar1) goto LAB_0170f9a8;
        }
        else if (uVar2 == 0x27) goto LAB_0170f93c;
        goto LAB_0170f920;
      }
Newtonsoft_Json_JsonSerializerSettings__set_CheckAdditionalContent:
      iVar6 = iVar6 + 1;
LAB_0170f920:
      param_1 = FUN_0170f484();
    }
    iVar6 = iVar6 + 1;
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


