/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializableItem
ENTRY_POINT: 058f461c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x058f4830) */

undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializableItem(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  char cStack000000000000003c;
  undefined8 in_stack_00000048;
  
  lVar1 = in_stack_00000030;
  cStack000000000000003c = param_1 == unaff_w21 || in_stack_00000030 != 0;
  if (param_1 == unaff_w21 || in_stack_00000030 != 0) {
    if (in_stack_00000030 == 0) {
      uVar2 = FUN_058f43f0();
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_070c21f8 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar2 = FUN_03c530b4(lVar1,*(undefined8 *)PTR_DAT_071045a8);
    }
    if (cStack000000000000003c != '\0') {
      if (*in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      FUN_05995d98(*in_stack_00000018,0);
    }
  }
  else {
    if ((*(uint *)(unaff_x19 + 0x18) < (uint)(param_1 + unaff_w22)) ||
       (*(uint *)(unaff_x19 + 0x18) - (param_1 + unaff_w22) < (uint)(unaff_w21 - param_1))) {
      FUN_05950030(0);
    }
    _in_stack_00000020 = FUN_058f4894();
    uVar2 = FUN_04da3dd8(&stack0x00000020,*(undefined8 *)PTR_DAT_07104ad8);
  }
  return uVar2;
}


