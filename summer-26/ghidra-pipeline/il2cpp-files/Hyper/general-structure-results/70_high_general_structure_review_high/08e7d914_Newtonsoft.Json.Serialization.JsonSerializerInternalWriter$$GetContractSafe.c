/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContractSafe
ENTRY_POINT: 08e7d914
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContractSafe(code *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 *unaff_x19;
  long *unaff_x28;
  undefined8 in_stack_00000028;
  
  lVar1 = (*param_1)();
  if (lVar1 != 0) {
    in_stack_00000028 = FUN_07764808(lVar1,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar2 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
      thunk_FUN_049ee3d8(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a2327c(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
      lVar1 = *unaff_x28;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_08c7f478(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


