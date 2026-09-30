/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializable
ENTRY_POINT: 0560a484
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable(void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined2 uVar5;
  int in_w8;
  long unaff_x19;
  short *unaff_x20;
  long lVar6;
  int iVar7;
  int unaff_w26;
  int unaff_w27;
  
  if (in_w8 == 1) {
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) {
LAB_0560a5cc:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar6 = *(long *)(unaff_x19 + 8);
      uVar5 = FUN_05460528();
      *(undefined2 *)(lVar6 + (long)(int)uVar2 * 2) = uVar5;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      goto joined_r0x0560a4dc;
    }
  }
  FUN_054833ec();
joined_r0x0560a4dc:
  if (unaff_w26 < 0) {
    if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    iVar7 = unaff_w27;
    if (-unaff_w26 <= unaff_w27) {
      iVar7 = -unaff_w26;
    }
    FUN_0548375c();
    unaff_w27 = unaff_w27 - iVar7;
    if (unaff_w27 < 1) {
      return;
    }
  }
  puVar4 = PTR_DAT_06d48780;
  iVar7 = unaff_w27 + 1;
  do {
    sVar1 = *unaff_x20;
    sVar3 = 0x30;
    if (sVar1 != 0) {
      unaff_x20 = unaff_x20 + 1;
      sVar3 = sVar1;
    }
    if (DAT_071c1f5e == '\0') {
      FUN_02f07e70(puVar4);
      DAT_071c1f5e = '\x01';
    }
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) goto LAB_0560a5cc;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 2) = sVar3;
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
    }
    else {
      FUN_054832c0();
    }
    iVar7 = iVar7 + -1;
    if (iVar7 < 2) {
      return;
    }
  } while( true );
}


