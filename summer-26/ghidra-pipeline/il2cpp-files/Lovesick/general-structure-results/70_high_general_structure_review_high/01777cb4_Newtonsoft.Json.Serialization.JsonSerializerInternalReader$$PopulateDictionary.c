/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateDictionary
ENTRY_POINT: 01777cb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateDictionary(void)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  short *psVar9;
  uint uVar10;
  int iVar11;
  short unaff_w19;
  uint unaff_w20;
  int unaff_w21;
  uint *unaff_x22;
  uint unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  
  thunk_FUN_00d48444(Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileMember__);
  thunk_FUN_00d48444(StringLiteral_4591);
  *(undefined1 *)(unaff_x26 + 0xd96) = 1;
  if ((int)unaff_w24 < 2) {
    unaff_w24 = 1;
  }
  uVar10 = 5;
  uVar5 = unaff_w20 >> 0x10;
  if ((unaff_w20 & 0xffff0000) == 0) {
    uVar10 = 1;
    uVar5 = unaff_w20;
  }
  uVar2 = uVar10 | 2;
  if (uVar5 < 0x100) {
    uVar2 = uVar10;
  }
  uVar10 = uVar5 >> 8;
  if (uVar5 < 0x100) {
    uVar10 = uVar5;
  }
  if (0xf < uVar10) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if ((int)uVar2 <= (int)unaff_w24) {
    uVar2 = unaff_w24;
  }
  if (unaff_w21 < (int)uVar2) {
    uVar7 = 0;
    *unaff_x22 = 0;
  }
  else {
    *unaff_x22 = uVar2;
    puVar6 = Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileMember__;
    lVar8 = FUN_011204a4();
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar6);
    }
    psVar9 = (short *)(lVar8 + (ulong)(uVar2 << 1));
    iVar11 = unaff_w24 - 2;
    do {
      uVar10 = unaff_w20 & 0xf;
      sVar3 = 0x30;
      if (9 < uVar10) {
        sVar3 = unaff_w19;
      }
      unaff_w20 = unaff_w20 >> 4;
      psVar9 = psVar9 + -1;
      *psVar9 = sVar3 + (short)uVar10;
      iVar4 = iVar11 + -1;
      bVar1 = -1 < iVar11;
      iVar11 = iVar4;
    } while ((bVar1) || (unaff_w20 != 0));
    uVar7 = 1;
  }
  return uVar7;
}


