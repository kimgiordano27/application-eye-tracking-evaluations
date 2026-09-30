/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DateFormatHandling
ENTRY_POINT: 0178ada4
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DateFormatHandling
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  
  do {
    lVar1 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(param_1 + 0x40));
    param_2 = unaff_x21;
    if (lVar1 == 0) {
      uVar2 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar2,0);
    }
    do {
      if (*(uint *)(unaff_x20 + 3) <= unaff_w24) {
LAB_0178adf4:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar1 = (long)(int)unaff_w24;
      unaff_w24 = unaff_w24 + 1;
      unaff_x20[lVar1 + 4] = param_2;
      do {
        while( true ) {
          unaff_x22 = unaff_x22 + 1;
          if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x22) {
            return;
          }
          if (*(uint *)(unaff_x19 + 0x18) <= unaff_x22) goto LAB_0178adf4;
          lVar1 = *(long *)(unaff_x25 + unaff_x22 * 8);
          if (*(int *)(*unaff_x23 + 0xe0) == 0) break;
          if (lVar1 != 0) goto LAB_0178ad84;
        }
        thunk_FUN_00d32864();
      } while (lVar1 == 0);
LAB_0178ad84:
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x22) goto LAB_0178adf4;
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      param_2 = *(long *)(unaff_x25 + unaff_x22 * 8);
    } while (param_2 == 0);
    param_1 = *unaff_x20;
    unaff_x21 = param_2;
  } while( true );
}


