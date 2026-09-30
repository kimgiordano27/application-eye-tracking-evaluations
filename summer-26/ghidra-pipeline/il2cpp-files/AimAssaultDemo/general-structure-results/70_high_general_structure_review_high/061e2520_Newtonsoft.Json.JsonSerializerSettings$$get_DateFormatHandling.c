/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateFormatHandling
ENTRY_POINT: 061e2520
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_DateFormatHandling(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x20;
  long *plVar3;
  
  FUN_062855bc();
  plVar3 = (long *)(param_1 + 0x10);
  *plVar3 = unaff_x20;
  thunk_FUN_037aeb94(plVar3);
  lVar2 = *plVar3;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x28);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar2 + 0x10);
    thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x20));
    if (*(long *)(param_1 + 0x10) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x10) + 0x20) == 0) {
        *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


