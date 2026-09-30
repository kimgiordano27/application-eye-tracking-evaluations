/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerialized
ENTRY_POINT: 04f39ef0
PROGRAM: hellodot-libil2cpp.so
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
  long unaff_x21;
  short *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  long unaff_x26;
  int unaff_w27;
  long lVar6;
  
  if (*(int *)(unaff_x24 + 0x10) == 1) {
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
      if (*(uint *)(unaff_x21 + 0x10) <= uVar2) {
LAB_04f3a0b4:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      lVar6 = *(long *)(unaff_x21 + 8);
      uVar5 = FUN_04db48b0();
      *(undefined2 *)(lVar6 + (long)(int)uVar2 * 2) = uVar5;
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
      puVar3 = PTR_DAT_065f1cf0;
      goto joined_r0x04f39f4c;
    }
  }
  FUN_04dd53c4();
  puVar3 = PTR_DAT_065f1cf0;
joined_r0x04f39f4c:
  PTR_DAT_065f1cf0 = puVar3;
  if (unaff_w25 < 0) {
    do {
      if (*(char *)(unaff_x26 + 0x9d0) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(puVar3);
        *(undefined1 *)(unaff_x26 + 0x9d0) = 1;
      }
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
        if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_04f3a0b4;
        *(undefined2 *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = 0x30;
        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
      }
      else {
        FUN_04dd5298();
      }
      bVar4 = unaff_w25 != -1;
      unaff_w25 = unaff_w25 + 1;
    } while (bVar4);
  }
  puVar3 = PTR_DAT_065f1cf0;
  sVar1 = *unaff_x23;
  do {
    if (sVar1 == 0) {
      if (unaff_w27 != 0) {
        if (*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_04f3a470();
        return;
      }
      return;
    }
    if (*(char *)(unaff_x26 + 0x9d0) == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(puVar3);
      *(undefined1 *)(unaff_x26 + 0x9d0) = 1;
    }
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
      if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_04f3a0b4;
      *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = sVar1;
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
    }
    else {
      FUN_04dd5298();
    }
    unaff_x23 = unaff_x23 + 1;
    sVar1 = *unaff_x23;
  } while( true );
}


