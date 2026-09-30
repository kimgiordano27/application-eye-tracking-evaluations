/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_FloatParseHandling
ENTRY_POINT: 0170b5fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializer__set_FloatParseHandling(uint param_1)

{
  uint uVar1;
  uint uVar2;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w23;
  int unaff_w24;
  uint unaff_w25;
  
  do {
    if (unaff_w25 != (param_1 & 0xffff)) {
LAB_0170b638:
      uVar1 = (**(code **)(*unaff_x21 + 0x1c8))();
      uVar2 = (**(code **)(*unaff_x21 + 0x1c8))();
      return (uVar1 & 0xffff) - (uVar2 & 0xffff);
    }
    if ((unaff_w23 <= unaff_w24) || (unaff_w22 <= unaff_w24)) {
      if (unaff_w23 <= unaff_w24) {
        return -(uint)(unaff_w24 < unaff_w22);
      }
      if (unaff_w24 < unaff_w22 == 0) {
        return 1;
      }
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      goto LAB_0170b638;
    }
    uVar1 = (**(code **)(*unaff_x21 + 0x1c8))();
    unaff_w25 = uVar1 & 0xffff;
    param_1 = (**(code **)(*unaff_x21 + 0x1c8))();
    unaff_w24 = unaff_w24 + 1;
  } while( true );
}


