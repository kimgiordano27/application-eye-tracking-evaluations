/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerialized
ENTRY_POINT: 074edf80
PROGRAM: m3ar-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized(void)

{
  short sVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined2 uVar5;
  char cVar6;
  long unaff_x21;
  short *unaff_x23;
  int unaff_w25;
  long unaff_x26;
  int unaff_w27;
  long lVar7;
  
  uVar2 = *(uint *)(unaff_x21 + 0x18);
  if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
    if (*(uint *)(unaff_x21 + 0x10) <= uVar2) {
LAB_074ee13c:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    lVar7 = *(long *)(unaff_x21 + 8);
    uVar5 = FUN_07363804();
    *(undefined2 *)(lVar7 + (long)(int)uVar2 * 2) = uVar5;
    *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
    puVar3 = PTR_DAT_08f8ca68;
  }
  else {
    FUN_07386af0();
    puVar3 = PTR_DAT_08f8ca68;
  }
  PTR_DAT_08f8ca68 = puVar3;
  if (unaff_w25 < 0) {
    cVar6 = *(char *)(unaff_x26 + 0x2cd);
    do {
      if (cVar6 == '\0') {
        FUN_0403162c(puVar3);
        cVar6 = '\x01';
        *(undefined1 *)(unaff_x26 + 0x2cd) = 1;
      }
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
        if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_074ee13c;
        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
        *(undefined2 *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = 0x30;
      }
      else {
        FUN_073869c4();
        cVar6 = *(char *)(unaff_x26 + 0x2cd);
      }
      bVar4 = unaff_w25 != -1;
      unaff_w25 = unaff_w25 + 1;
    } while (bVar4);
  }
  puVar3 = PTR_DAT_08f8ca68;
  sVar1 = *unaff_x23;
  if (sVar1 != 0) {
    cVar6 = *(char *)(unaff_x26 + 0x2cd);
    do {
      unaff_x23 = unaff_x23 + 1;
      if (cVar6 == '\0') {
        FUN_0403162c(puVar3);
        cVar6 = '\x01';
        *(undefined1 *)(unaff_x26 + 0x2cd) = 1;
      }
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
        if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_074ee13c;
        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
        *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = sVar1;
      }
      else {
        FUN_073869c4();
        cVar6 = *(char *)(unaff_x26 + 0x2cd);
      }
      sVar1 = *unaff_x23;
    } while (sVar1 != 0);
  }
  if (unaff_w27 != 0) {
    if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_074ee50c();
    return;
  }
  return;
}


