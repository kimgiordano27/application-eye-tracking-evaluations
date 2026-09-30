/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 07107428
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x071075a0) */

void Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  int iVar2;
  uint unaff_w22;
  uint unaff_w25;
  int unaff_w26;
  undefined8 in_stack_00000008;
  
  __cxa_end_catch();
  do {
    iVar2 = 0;
    do {
      if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_071cd540(*(long *)(unaff_x19 + 0x70),unaff_w25,0);
      while( true ) {
        if (unaff_w26 <= (int)unaff_w22) {
          if (0 < iVar2) {
            FUN_070bc224();
          }
          if (in_stack_00000008._4_1_ != '\0') {
            thunk_FUN_03d180a8();
          }
          return;
        }
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        unaff_w25 = (uint)*(ushort *)(unaff_x20 + (long)(int)unaff_w22 * 2 + 0x20);
        uVar1 = FUN_071cd770(*(long *)(unaff_x19 + 0x70),unaff_w25,0);
        unaff_w22 = unaff_w22 + 1;
        if ((uVar1 & 1) != 0) break;
        iVar2 = iVar2 + 1;
      }
    } while (iVar2 < 1);
    FUN_070bc224();
  } while( true );
}


