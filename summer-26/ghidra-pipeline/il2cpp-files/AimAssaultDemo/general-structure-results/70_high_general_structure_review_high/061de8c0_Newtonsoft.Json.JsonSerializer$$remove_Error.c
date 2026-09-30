/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$remove_Error
ENTRY_POINT: 061de8c0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__remove_Error(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x23;
  
  if (param_1 != 0) {
    if (1 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[5] = unaff_x21;
      thunk_FUN_037aeb94();
      lVar1 = thunk_FUN_037784fc(*(undefined8 *)(unaff_x23 + 0x48),&stack0x00000004);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_037787d0(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
      goto LAB_061de940;
      if (2 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[6] = lVar1;
        thunk_FUN_037aeb94(unaff_x19 + 6,lVar1);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
LAB_061de940:
  uVar3 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar3,0);
}


