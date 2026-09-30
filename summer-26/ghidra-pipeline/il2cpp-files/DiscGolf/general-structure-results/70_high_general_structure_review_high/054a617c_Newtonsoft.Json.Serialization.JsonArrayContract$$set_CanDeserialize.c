/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$set_CanDeserialize
ENTRY_POINT: 054a617c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonArrayContract__set_CanDeserialize(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  puVar1 = PTR_DAT_06a21290;
  if (unaff_x22 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar2 = thunk_FUN_02dd3144();
    puVar1 = PTR_DAT_06a0dcf8;
  }
  else {
    if (unaff_x21 != 0) {
      if (*(int *)(*(long *)PTR_DAT_06a21290 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_054c26ec(&stack0x00000008);
      uVar2 = in_stack_00000008;
      if (unaff_w20 == 3) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_054c3688(uVar2,in_stack_00000000);
        return;
      }
      if (unaff_w20 == 2) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_054c348c(uVar2,in_stack_00000000);
        return;
      }
      if (unaff_w20 == 1) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_054c3290(uVar2,in_stack_00000000);
        return;
      }
      thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
      uVar2 = thunk_FUN_02dd3144();
      uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a212a8);
      FUN_05453f78(uVar2,uVar3,0);
      goto LAB_054a62ac;
    }
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar2 = thunk_FUN_02dd3144();
    puVar1 = PTR_DAT_06a21298;
  }
  uVar3 = thunk_FUN_02dfd288(puVar1);
  FUN_0544bf54(uVar2,uVar3,0);
LAB_054a62ac:
  uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a212a0);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar2,uVar3);
}


