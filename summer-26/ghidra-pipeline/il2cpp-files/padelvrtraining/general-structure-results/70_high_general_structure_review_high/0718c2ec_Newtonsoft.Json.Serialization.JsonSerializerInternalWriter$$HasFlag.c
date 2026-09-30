/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 0718c2ec
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  uint unaff_w24;
  int unaff_w25;
  long unaff_x26;
  long in_stack_00000028;
  
  do {
    thunk_FUN_03db619c();
    do {
      iVar1 = FUN_070d1880(unaff_x20 + unaff_x23 * 2,unaff_w24,0);
      if (iVar1 != 0) {
LAB_0718c340:
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00000028) {
          return iVar1;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      unaff_x23 = FUN_071c5e28(unaff_x23,1,0);
      uVar2 = FUN_071c5e1c(unaff_x23,0);
      uVar3 = FUN_071c5e1c();
      iVar1 = unaff_w25;
      if (uVar3 <= uVar2) goto LAB_0718c340;
      unaff_w24 = (uint)*(ushort *)(unaff_x19 + unaff_x23 * 2);
    } while (*(int *)(*unaff_x21 + 0xe0) != 0);
  } while( true );
}


