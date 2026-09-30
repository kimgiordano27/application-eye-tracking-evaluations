/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Formatting
ENTRY_POINT: 0178ad5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Formatting(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  long lVar3;
  ulong unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  
  do {
    if ((param_1 & 0xffffffff) <= unaff_x22) goto LAB_0178adf4;
    lVar3 = *(long *)(unaff_x25 + unaff_x22 * 8);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (lVar3 != 0) {
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x22) {
LAB_0178adf4:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar3 = *(long *)(unaff_x25 + unaff_x22 * 8);
      if ((lVar3 != 0) &&
         (lVar1 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)), lVar1 == 0)) {
        uVar2 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar2,0);
      }
      if (*(uint *)(unaff_x20 + 3) <= unaff_w24) goto LAB_0178adf4;
      lVar1 = (long)(int)unaff_w24;
      unaff_w24 = unaff_w24 + 1;
      unaff_x20[lVar1 + 4] = lVar3;
    }
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
    unaff_x22 = unaff_x22 + 1;
    if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x22) {
      return;
    }
  } while( true );
}


