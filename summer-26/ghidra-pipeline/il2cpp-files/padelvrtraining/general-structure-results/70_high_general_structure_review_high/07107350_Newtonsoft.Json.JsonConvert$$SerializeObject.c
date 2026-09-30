/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 07107350
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x071075a0) */

void Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  int iVar1;
  undefined2 uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  int iVar4;
  uint unaff_w22;
  int unaff_w23;
  undefined8 in_stack_00000008;
  
  FUN_071e78b0();
  iVar4 = 0;
  iVar1 = unaff_w23 + unaff_w22;
  while( true ) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w22) break;
    if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = *(undefined2 *)(unaff_x20 + (long)(int)unaff_w22 * 2 + 0x20);
    uVar3 = FUN_071cd770(*(long *)(unaff_x19 + 0x70),uVar2,0);
    unaff_w22 = unaff_w22 + 1;
    if ((uVar3 & 1) == 0) {
      iVar4 = iVar4 + 1;
    }
    else {
      if (0 < iVar4) {
        FUN_070bc224();
        iVar4 = 0;
      }
      if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_071cd540(*(long *)(unaff_x19 + 0x70),uVar2,0);
    }
    if (iVar1 <= (int)unaff_w22) {
      if (0 < iVar4) {
        FUN_070bc224();
      }
      if (in_stack_00000008._4_1_ != '\0') {
        thunk_FUN_03d180a8();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


