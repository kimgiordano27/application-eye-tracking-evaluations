/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJObject
ENTRY_POINT: 0177a46c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJObject(void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  long unaff_x21;
  long unaff_x25;
  short *unaff_x26;
  int unaff_w27;
  
  do {
    sVar1 = *unaff_x26;
    sVar3 = 0x30;
    if (sVar1 != 0) {
      unaff_x26 = unaff_x26 + 1;
      sVar3 = sVar1;
    }
    if (*(char *)(unaff_x25 + 0x1dd) == '\0') {
      thunk_FUN_00d48444();
      *(undefined1 *)(unaff_x25 + 0x1dd) = 1;
    }
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
      if (*(uint *)(unaff_x21 + 0x10) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = sVar3;
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
    }
    else {
      FUN_0161aa84();
    }
    puVar4 = Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileMember__;
    unaff_w27 = unaff_w27 + -1;
  } while (0 < unaff_w27);
  FUN_01780054();
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_0177acb0();
  return;
}


