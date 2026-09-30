/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateFormatHandling
ENTRY_POINT: 08e0a404
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_DateFormatHandling
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_x9;
  long lVar6;
  long unaff_x22;
  
  if (in_x9 != 0) {
    lVar6 = *(long *)(param_1 + 0xb0) + 8;
    do {
      if (*(long *)(lVar6 + -8) == param_3) goto LAB_08e0a448;
      in_x9 = in_x9 + -1;
      lVar6 = lVar6 + 0x10;
    } while (in_x9 != 0);
  }
  FUN_04980e68();
LAB_08e0a448:
  FUN_05f878c4();
  puVar3 = PTR_DAT_0ac37c00;
  puVar2 = PTR_DAT_0ac0a0f8;
  puVar1 = PTR_DAT_0ac09e20;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar4 = FUN_04d0b2fc();
  uVar5 = FUN_08aa1c24();
  FUN_05b466fc(uVar4,uVar5,*(undefined8 *)puVar3);
  uVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
  FUN_08cc3ad0();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar4 = FUN_09b8bbb0(uVar4,0);
  uVar5 = FUN_08aa1c24();
  FUN_05b466fc(uVar4,uVar5,*(undefined8 *)puVar1);
  return;
}


