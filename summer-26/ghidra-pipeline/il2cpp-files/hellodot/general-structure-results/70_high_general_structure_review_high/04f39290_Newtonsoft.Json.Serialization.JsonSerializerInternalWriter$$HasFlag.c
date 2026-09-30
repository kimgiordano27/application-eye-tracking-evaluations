/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 04f39290
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(void)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long lVar5;
  long lVar6;
  long unaff_x29;
  
FUN_04f392f0:
  do {
    unaff_w24 = unaff_w24 + 1;
    if (*(int *)(unaff_x23 + 0x10) <= unaff_w24) {
      return;
    }
    sVar3 = FUN_04db48b0();
    if (sVar3 == 0x2d) {
      cVar1 = *(char *)(unaff_x29 + 0x6db);
      lVar5 = *(long *)(unaff_x19 + 0x30);
    }
    else {
      if (sVar3 != 0x24) {
        if (sVar3 == 0x23) {
          if (*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_04f39328();
        }
        else {
          if (*(char *)(unaff_x25 + 0x9d0) == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
            *(undefined1 *)(unaff_x25 + 0x9d0) = 1;
          }
          uVar2 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_04f39324;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar3;
            *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          }
          else {
            FUN_04dd5298();
          }
        }
        goto FUN_04f392f0;
      }
      cVar1 = *(char *)(unaff_x29 + 0x6db);
      lVar5 = *(long *)(unaff_x19 + 0x58);
    }
    if (cVar1 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
      *(undefined1 *)(unaff_x29 + 0x6db) = 1;
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(int *)(lVar5 + 0x10) == 1) {
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar2) goto LAB_04f39280;
      if (*(uint *)(unaff_x22 + 0x10) <= uVar2) {
LAB_04f39324:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      lVar6 = *(long *)(unaff_x22 + 8);
      uVar4 = FUN_04db48b0(lVar5,0,0);
      *(undefined2 *)(lVar6 + (long)(int)uVar2 * 2) = uVar4;
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
    }
    else {
LAB_04f39280:
      FUN_04dd53c4();
    }
  } while( true );
}


