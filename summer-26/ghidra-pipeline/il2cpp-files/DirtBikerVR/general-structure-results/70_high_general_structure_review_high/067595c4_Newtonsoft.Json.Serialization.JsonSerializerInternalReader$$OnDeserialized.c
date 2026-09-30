/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserialized
ENTRY_POINT: 067595c4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserialized(void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined2 uVar5;
  char cVar6;
  long unaff_x19;
  short *unaff_x20;
  long lVar7;
  int iVar8;
  int unaff_w26;
  long unaff_x27;
  int unaff_w28;
  
  if (unaff_w26 < 1) {
    return;
  }
  if (DAT_0897bb55 == '\0') {
    FUN_03a8a718(PTR_DAT_0849fcb0);
    DAT_0897bb55 = '\x01';
  }
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(int *)(unaff_x27 + 0x10) == 1) {
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) {
LAB_067598e0:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      lVar7 = *(long *)(unaff_x19 + 8);
      uVar5 = FUN_065c7d98();
      *(undefined2 *)(lVar7 + (long)(int)uVar2 * 2) = uVar5;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      goto joined_r0x067597ec;
    }
  }
  FUN_065e5d60();
joined_r0x067597ec:
  if (unaff_w28 < 0) {
    if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    iVar8 = unaff_w26;
    if (-unaff_w28 < unaff_w26) {
      iVar8 = -unaff_w28;
    }
    FUN_065e60f8();
    unaff_w26 = unaff_w26 - iVar8;
    if (unaff_w26 < 1) {
      return;
    }
  }
  puVar4 = PTR_DAT_0849fcb0;
  iVar8 = unaff_w26 + 1;
  cVar6 = DAT_0897af3c;
  do {
    sVar1 = *unaff_x20;
    sVar3 = 0x30;
    if (sVar1 != 0) {
      unaff_x20 = unaff_x20 + 1;
      sVar3 = sVar1;
    }
    if (cVar6 == '\0') {
      FUN_03a8a718(puVar4);
      cVar6 = '\x01';
      DAT_0897af3c = '\x01';
    }
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) goto LAB_067598e0;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 2) = sVar3;
    }
    else {
      FUN_065e5c34();
      cVar6 = DAT_0897af3c;
    }
    iVar8 = iVar8 + -1;
    if (iVar8 < 2) {
      return;
    }
  } while( true );
}


