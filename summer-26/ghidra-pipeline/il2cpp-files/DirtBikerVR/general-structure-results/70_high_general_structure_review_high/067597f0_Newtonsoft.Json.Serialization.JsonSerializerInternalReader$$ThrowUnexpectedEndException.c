/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ThrowUnexpectedEndException
ENTRY_POINT: 067597f0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ThrowUnexpectedEndException(void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  char cVar5;
  long unaff_x19;
  short *unaff_x20;
  int iVar6;
  int unaff_w26;
  int unaff_w28;
  
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  iVar6 = unaff_w26;
  if (-unaff_w28 < unaff_w26) {
    iVar6 = -unaff_w28;
  }
  FUN_065e60f8();
  puVar4 = PTR_DAT_0849fcb0;
  if (0 < unaff_w26 - iVar6) {
    iVar6 = (unaff_w26 - iVar6) + 1;
    cVar5 = DAT_0897af3c;
    do {
      sVar1 = *unaff_x20;
      sVar3 = 0x30;
      if (sVar1 != 0) {
        unaff_x20 = unaff_x20 + 1;
        sVar3 = sVar1;
      }
      if (cVar5 == '\0') {
        FUN_03a8a718(puVar4);
        cVar5 = '\x01';
        DAT_0897af3c = '\x01';
      }
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
        if (*(uint *)(unaff_x19 + 0x10) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
        *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 2) = sVar3;
      }
      else {
        FUN_065e5c34();
        cVar5 = DAT_0897af3c;
      }
      iVar6 = iVar6 + -1;
    } while (1 < iVar6);
  }
  return;
}


