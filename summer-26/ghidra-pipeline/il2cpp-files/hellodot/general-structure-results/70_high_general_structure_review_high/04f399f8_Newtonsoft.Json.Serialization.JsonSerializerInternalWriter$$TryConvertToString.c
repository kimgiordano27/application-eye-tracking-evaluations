/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$TryConvertToString
ENTRY_POINT: 04f399f8
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString
               (undefined2 param_1)

{
  uint uVar1;
  short sVar2;
  int in_w8;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  long lVar3;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
code_r0x04f399f8:
  *(undefined2 *)(unaff_x28 + unaff_x27 * 2) = param_1;
  *(int *)(unaff_x22 + 0x18) = in_w8;
  do {
    while( true ) {
      unaff_w24 = unaff_w24 + 1;
      if (*(int *)(unaff_x23 + 0x10) <= unaff_w24) {
        return;
      }
      sVar2 = FUN_04db48b0();
      if (sVar2 == 0x2d) break;
      if (sVar2 == 0x23) {
        if (unaff_x19 == 0) {
LAB_04f39aa4:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_04f39328();
      }
      else {
        if (*(char *)(unaff_x29 + 0x9d0) == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
          *(undefined1 *)(unaff_x29 + 0x9d0) = 1;
        }
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar1) goto LAB_04f39aa8;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar1 * 2) = sVar2;
          *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        }
        else {
          FUN_04dd5298();
        }
      }
    }
    if (unaff_x19 == 0) goto LAB_04f39aa4;
    lVar3 = *(long *)(unaff_x19 + 0x30);
    if (DAT_06a6f6db == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
      DAT_06a6f6db = '\x01';
    }
    if (lVar3 == 0) goto LAB_04f39aa4;
    if (*(int *)(lVar3 + 0x10) == 1) {
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      unaff_x27 = (long)(int)uVar1;
      if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) break;
    }
    FUN_04dd53c4();
  } while( true );
  if (*(uint *)(unaff_x22 + 0x10) <= uVar1) {
LAB_04f39aa8:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  unaff_x28 = *(long *)(unaff_x22 + 8);
  param_1 = FUN_04db48b0(lVar3,0,0);
  in_w8 = uVar1 + 1;
  goto code_r0x04f399f8;
}


