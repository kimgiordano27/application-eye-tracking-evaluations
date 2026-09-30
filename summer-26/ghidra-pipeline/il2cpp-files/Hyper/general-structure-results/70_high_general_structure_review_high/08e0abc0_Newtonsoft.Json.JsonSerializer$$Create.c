/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Create
ENTRY_POINT: 08e0abc0
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


void Newtonsoft_Json_JsonSerializer__Create(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long lVar5;
  undefined8 *unaff_x23;
  undefined8 *unaff_x29;
  
  FUN_08aa1c24();
  FUN_05b466fc();
  lVar5 = *(long *)(unaff_x19 + 0x40);
  uVar3 = thunk_FUN_04983f60(*unaff_x29);
  FUN_05f8bf14();
  puVar2 = PTR_DAT_0ac0a0f8;
  puVar1 = PTR_DAT_0ac09d30;
  if (lVar5 != 0) {
    UnityEngine_InputForUI_Event_MapAsEventModifiers__Map<CommandEvent>(lVar5,uVar3,0);
    FUN_08e0acb0();
    uVar3 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_08cc3ad0();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar3 = FUN_09b8bbb0(uVar3,0);
    uVar4 = FUN_08aa1c24();
    FUN_05b466fc(uVar3,uVar4,*unaff_x23);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


