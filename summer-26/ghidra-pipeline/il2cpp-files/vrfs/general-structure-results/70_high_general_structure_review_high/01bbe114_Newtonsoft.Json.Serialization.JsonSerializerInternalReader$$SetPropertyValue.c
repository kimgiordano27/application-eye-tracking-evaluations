/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyValue
ENTRY_POINT: 01bbe114
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyValue
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long unaff_x19;
  int unaff_w20;
  int unaff_w23;
  int unaff_w25;
  
  while( true ) {
    FUN_0187eff8(param_1,param_2,param_3,param_4);
    do {
      unaff_w23 = unaff_w25 + unaff_w23;
      unaff_w20 = unaff_w20 - unaff_w25;
      *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x19 + 0x30) + (long)unaff_w25;
      if (unaff_w20 == 0) {
        return unaff_w23;
      }
      do {
        do {
          uVar1 = FUN_01bbd248();
          if ((uVar1 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_01bbe1ac;
            if (*(int *)(*(long *)(unaff_x19 + 0x50) + 0x1c) < 1) {
              return unaff_w23;
            }
            if (*(int *)(unaff_x19 + 0x10) == 0xb) {
              return unaff_w23;
            }
          }
        } while (*(int *)(unaff_x19 + 0x10) == 0xb);
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_01bbe1ac;
        unaff_w25 = FUN_01bbe2ec();
      } while (unaff_w25 < 1);
      param_1 = *(long *)(unaff_x19 + 0x70);
    } while (param_1 == 0);
    FUN_020029c0();
    if (param_1 == 0) break;
    param_2 = 0;
    param_3 = 0;
    param_4 = 0;
  }
LAB_01bbe1ac:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


