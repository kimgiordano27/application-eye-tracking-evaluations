/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CalculatePropertyValues
ENTRY_POINT: 055de0f8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CalculatePropertyValues
               (long param_1)

{
  undefined *puVar1;
  short sVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x25;
  
                    /* try { // try from 055de0f8 to 056de0ff has its CatchHandler @ 055de72c */
                    /* try { // try from 055de104 to 056de10b has its CatchHandler @ 055de6a0 */
  uVar3 = thunk_FUN_0548b788(*unaff_x25,**(undefined8 **)(param_1 + 0xcc8));
  puVar1 = PTR_DAT_06a368c0;
  if ((uVar3 & 1) == 0) {
                    /* try { // try from 055de11c to 056de127 has its CatchHandler @ 055de6a4 */
    lVar4 = *(long *)PTR_DAT_06a368c0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar4 = *(long *)puVar1;
    }
                    /* try { // try from 055de130 to 056de133 has its CatchHandler @ 055de730 */
                    /* try { // try from 055de134 to 056de247 has its CatchHandler @ 055dded0 */
    unaff_x19 = FUN_0548e384(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10));
    uVar3 = FUN_0564c4a0(0);
    if (((uVar3 & 1) == 0) && (uVar3 = FUN_0548ba80(), (uVar3 & 1) != 0)) {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      if ((0 < *(int *)(unaff_x19 + 0x10)) && (sVar2 = FUN_05487524(unaff_x19,0,0), sVar2 != 0x2f))
      {
        lVar4 = FUN_05482ce0();
        return lVar4;
      }
    }
  }
  return unaff_x19;
}


