/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateFormatHandling
ENTRY_POINT: 08e0a3c8
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


void Newtonsoft_Json_JsonSerializer__get_DateFormatHandling(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *in_x10;
  long lVar7;
  long *unaff_x20;
  long unaff_x22;
  undefined8 *unaff_x24;
  long *unaff_x25;
  
  (**(code **)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138))();
  uVar4 = thunk_FUN_04983f60(*unaff_x24);
  uVar6 = (ulong)*(ushort *)(*unaff_x20 + 0x12e);
  if (uVar6 != 0) {
    lVar7 = *(long *)(*unaff_x20 + 0xb0) + 8;
    do {
      if (*(long *)(lVar7 + -8) == *unaff_x25) goto LAB_08e0a448;
      uVar6 = uVar6 - 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar6 != 0);
  }
  FUN_04980e68();
LAB_08e0a448:
  FUN_05f878c4(uVar4);
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


