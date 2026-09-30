/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$ClearErrorContext
ENTRY_POINT: 050ca290
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext(void)

{
  undefined *puVar1;
  short sVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long *unaff_x28;
  
code_r0x050ca290:
  uVar3 = FUN_050cc800();
  if ((uVar3 & 1) == 0) {
    FUN_050cd700();
    return 0;
  }
  do {
    unaff_w23 = unaff_w23 + 1;
    if (*(int *)(unaff_x22 + 0x10) <= unaff_w23) {
      uVar5 = *(uint *)(unaff_x19 + 0x24);
      if ((uVar5 >> 0xb & 1) == 0) {
        return 1;
      }
      if ((uVar5 >> 0xd & 1) != 0) {
        uVar3 = thunk_FUN_04f6d944();
        uVar5 = *(uint *)(unaff_x19 + 0x24);
        if ((uVar3 & 1) != 0) goto LAB_050ca304;
      }
      if ((uVar5 >> 0xe & 1) == 0) {
        return 1;
      }
      uVar3 = thunk_FUN_04f6d944();
      if ((uVar3 & 1) == 0) {
        return 1;
      }
      uVar5 = *(uint *)(unaff_x19 + 0x24);
LAB_050ca304:
      puVar1 = PTR_DAT_067c93a8;
      *(uint *)(unaff_x19 + 0x24) = uVar5 | 0x100;
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar4 = *(long *)puVar1;
      }
      *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar4 + 0xb8);
      return 1;
    }
    sVar2 = FUN_04f69818();
    if ((sVar2 != 0x20) || (*(char *)(unaff_x21 + 0x12) == '\0')) break;
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_050ccbd4();
  } while( true );
  FUN_04f69818();
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*unaff_x28);
  }
  goto code_r0x050ca290;
}


