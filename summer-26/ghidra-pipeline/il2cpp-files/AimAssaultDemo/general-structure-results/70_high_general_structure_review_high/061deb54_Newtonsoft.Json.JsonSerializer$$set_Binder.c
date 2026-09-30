/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_Binder
ENTRY_POINT: 061deb54
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_Binder(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  if ((unaff_x22 != 0) && (lVar1 = thunk_FUN_037787d0(), lVar1 == 0)) {
LAB_061debfc:
    uVar2 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar2,0);
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(long *)(unaff_x20 + 0x20) = unaff_x22;
    thunk_FUN_037aeb94();
    if ((unaff_x21 != 0) && (lVar1 = thunk_FUN_037787d0(), lVar1 == 0)) goto LAB_061debfc;
    if (1 < *(uint *)(unaff_x20 + 0x18)) {
      *(long *)(unaff_x20 + 0x28) = unaff_x21;
      thunk_FUN_037aeb94();
      if ((unaff_x19 != 0) && (lVar1 = thunk_FUN_037787d0(), lVar1 == 0)) goto LAB_061debfc;
      if (2 < *(uint *)(unaff_x20 + 0x18)) {
        *(long *)(unaff_x20 + 0x30) = unaff_x19;
        thunk_FUN_037aeb94((long *)(unaff_x20 + 0x30));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


