/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_Context
ENTRY_POINT: 0178ad38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long * Newtonsoft_Json_Serialization_JsonSerializerProxy__set_Context(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint in_w8;
  long unaff_x19;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if (0 < (int)in_w8) {
    uVar5 = 0;
    uVar6 = 0;
    do {
      if (in_w8 <= uVar5) goto LAB_0178adf4;
      lVar4 = *(long *)(unaff_x19 + 0x20 + uVar5 * 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar4 != 0) {
        if (*(uint *)(unaff_x19 + 0x18) <= uVar5) {
LAB_0178adf4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar4 = *(long *)(unaff_x19 + 0x20 + uVar5 * 8);
        if ((lVar4 != 0) &&
           (lVar2 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*param_1 + 0x40)), lVar2 == 0)) {
          uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar3,0);
        }
        if (*(uint *)(param_1 + 3) <= uVar6) goto LAB_0178adf4;
        lVar2 = (long)(int)uVar6;
        uVar6 = uVar6 + 1;
        param_1[lVar2 + 4] = lVar4;
      }
      in_w8 = *(uint *)(unaff_x19 + 0x18);
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)in_w8);
  }
  return param_1;
}


