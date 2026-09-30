/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$.ctor
ENTRY_POINT: 0744b524
PROGRAM: cac-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer___ctor(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong unaff_x19;
  long unaff_x21;
  long unaff_x23;
  long *unaff_x25;
  uint uVar4;
  long unaff_x26;
  
  do {
    uVar4 = (uint)unaff_x26;
    uVar1 = uVar4 + 1;
    if (*(int *)(param_3 + 0x10) != 0 || uVar1 != (uint)param_1) {
      if ((unaff_x19 & 1) == 0) {
        lVar2 = FUN_0744b7f8();
      }
      else {
        lVar2 = FUN_0744b5c4();
      }
      if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_0744b5bc;
      *unaff_x25 = lVar2;
      thunk_FUN_03f86000(unaff_x23 + unaff_x26 * 8);
    }
    param_1 = *(undefined8 *)(unaff_x21 + 0x18);
    uVar3 = (uint)param_1;
    if (uVar3 <= uVar4) {
LAB_0744b5bc:
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    if (*unaff_x25 == 0) break;
    if ((int)uVar3 <= (int)uVar1) {
                    /* try { // try from 0744b594 to 0754b703 has its CatchHandler @ 0744b594
                       catch() { ... } // from try @ 0744b594 with catch @ 0744b594
                       catch() { ... } // from try @ 0744b7fc with catch @ 0744b594
                       catch() { ... } // from try @ 0744b864 with catch @ 0744b594
                       catch() { ... } // from try @ 0744b8a4 with catch @ 0744b594
                       catch() { ... } // from try @ 0744b8e0 with catch @ 0744b594 */
      FUN_07328410(*(undefined8 *)PTR_DAT_0910fe70);
      return;
    }
    if (uVar3 <= uVar1) goto LAB_0744b5bc;
    unaff_x26 = (long)(int)uVar1;
    unaff_x25 = (long *)(unaff_x21 + unaff_x26 * 8 + 0x20);
    param_3 = *unaff_x25;
  } while (param_3 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


