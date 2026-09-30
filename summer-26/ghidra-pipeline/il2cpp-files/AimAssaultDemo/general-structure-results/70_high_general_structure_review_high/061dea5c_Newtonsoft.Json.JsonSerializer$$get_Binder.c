/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Binder
ENTRY_POINT: 061dea5c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_Binder(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  
  lVar1 = thunk_FUN_037784fc(*(undefined8 *)(param_1 + 0x68),&stack0x00000008);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_037787d0(lVar1,*(undefined8 *)(*param_2 + 0x40)), lVar2 == 0)) {
LAB_061deaf0:
    uVar3 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar3,0);
  }
  if ((int)param_2[3] != 0) {
    param_2[4] = lVar1;
    thunk_FUN_037aeb94(param_2 + 4,lVar1);
    if ((unaff_x19 != 0) && (lVar1 = thunk_FUN_037787d0(), lVar1 == 0)) goto LAB_061deaf0;
    if (1 < *(uint *)(param_2 + 3)) {
      param_2[5] = unaff_x19;
      thunk_FUN_037aeb94(param_2 + 5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


