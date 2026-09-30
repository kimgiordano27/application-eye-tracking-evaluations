/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MaxDepth
ENTRY_POINT: 061e234c
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


void Newtonsoft_Json_JsonSerializerSettings__get_MaxDepth(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  if (param_1 == 0) {
    uVar4 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar4,0);
  }
  if ((uint)unaff_x22 < *(uint *)(unaff_x21 + 0x18)) {
    *(undefined8 *)(unaff_x21 + unaff_x22 * 8 + 0x20) = unaff_x20;
    thunk_FUN_037aeb94();
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
      iVar1 = *(int *)(unaff_x19 + 0x1c) + 1;
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = iVar1 / iVar2;
      }
      *(int *)(unaff_x19 + 0x1c) = iVar1 - iVar3 * iVar2;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


