/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_Binder
ENTRY_POINT: 0760f924
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_Binder(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  undefined4 unaff_w21;
  long unaff_x22;
  long unaff_x23;
  undefined4 in_stack_00000008;
  
  lVar1 = thunk_FUN_040b4e00();
  if (lVar1 != 0) {
    if ((int)unaff_x19[3] != 0) {
      unaff_x19[4] = unaff_x22;
      thunk_FUN_040ec700();
      in_stack_00000008 = unaff_w21;
      lVar1 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x23 + 0x48),&stack0x00000008);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
      goto LAB_0760f9f8;
      if ((*(uint *)(unaff_x19 + 3) & 0xfffffffe) != 0) {
        unaff_x19[5] = lVar1;
        thunk_FUN_040ec700(unaff_x19 + 5,lVar1);
        lVar1 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x23 + 0x48),&stack0x00000004);
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
        goto LAB_0760f9f8;
        if (2 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[6] = lVar1;
          thunk_FUN_040ec700(unaff_x19 + 6,lVar1);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_0760f9f8:
  uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar3,0);
}


