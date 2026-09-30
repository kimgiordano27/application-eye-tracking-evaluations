/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateParseHandling
ENTRY_POINT: 066ec564
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


void Newtonsoft_Json_JsonSerializerSettings__set_DateParseHandling(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (unaff_x20 == 0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar3 = thunk_FUN_03ac74bc();
    uVar4 = thunk_FUN_03af1434(PTR_DAT_084912a0);
    FUN_066af6a0(uVar3,uVar4,0);
  }
  else {
    iVar2 = thunk_FUN_03a9985c();
    if (iVar2 == 1) {
      if (unaff_w19 < 0) {
        thunk_FUN_03af1434(PTR_DAT_08491280);
        uVar3 = thunk_FUN_03ac74bc();
        uVar4 = thunk_FUN_03af1434(PTR_DAT_08486d40);
        uVar5 = thunk_FUN_03af1434(PTR_DAT_08491498);
        System_Threading_CancellationToken__get_IsCancellationRequested(uVar3,uVar4,uVar5,0);
      }
      else {
        iVar2 = FUN_06769a04();
        puVar1 = PTR_DAT_08496a20;
        if (*(int *)(unaff_x21 + 0x1c) <= iVar2 - unaff_w19) {
          for (lVar6 = *(long *)(unaff_x21 + 0x10); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x20)) {
            in_stack_00000010 = *(undefined8 *)(lVar6 + 0x10);
            uVar4 = *(undefined8 *)(lVar6 + 0x18);
            in_stack_00000018 = 0;
            thunk_FUN_03afed3c(&stack0x00000010);
            in_stack_00000018 = uVar4;
            thunk_FUN_03afed3c(&stack0x00000018,uVar4);
            thunk_FUN_03ac70f4(*(undefined8 *)puVar1);
            FUN_067736d4();
          }
          return;
        }
        thunk_FUN_03af1434(PTR_DAT_08488490);
        uVar3 = thunk_FUN_03ac74bc();
        uVar4 = thunk_FUN_03af1434(PTR_DAT_08491290);
        uVar5 = thunk_FUN_03af1434(PTR_DAT_08486d40);
        FUN_066af718(uVar3,uVar4,uVar5,0);
      }
    }
    else {
      thunk_FUN_03af1434(PTR_DAT_08488490);
      uVar3 = thunk_FUN_03ac74bc();
      uVar4 = thunk_FUN_03af1434(PTR_DAT_08492ff0);
      FUN_066b6070(uVar3,uVar4,0);
    }
  }
  uVar4 = thunk_FUN_03af1434(PTR_DAT_084a7be8);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar3,uVar4);
}


