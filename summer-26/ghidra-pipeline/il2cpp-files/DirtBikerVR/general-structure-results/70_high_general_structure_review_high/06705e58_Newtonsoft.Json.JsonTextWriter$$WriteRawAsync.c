/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteRawAsync
ENTRY_POINT: 06705e58
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_4;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonTextWriter__WriteRawAsync(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w19;
  long unaff_x20;
  long unaff_x22;
  
  FUN_0670aaf0(param_1,0);
  if (unaff_x22 == 0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar2 = thunk_FUN_03ac74bc();
    puVar1 = PTR_DAT_0848fa20;
  }
  else {
    if (unaff_x20 != 0) {
      if (*(int *)(unaff_x22 + 0x10) == 0) {
        thunk_FUN_03af1434(PTR_DAT_08488490);
        uVar2 = thunk_FUN_03ac74bc();
        uVar3 = thunk_FUN_03af1434(PTR_DAT_084a8430);
        FUN_066b6070(uVar2,uVar3,0);
      }
      else {
        if (0 < unaff_w19) {
          thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08491ea0);
          FUN_06721cf0();
          FUN_06705b84();
          return;
        }
        thunk_FUN_03af1434(PTR_DAT_08491280);
        uVar2 = thunk_FUN_03ac74bc();
        uVar3 = thunk_FUN_03af1434(PTR_DAT_08494068);
        uVar4 = thunk_FUN_03af1434(PTR_DAT_084a50e0);
        System_Threading_CancellationToken__get_IsCancellationRequested(uVar2,uVar3,uVar4,0);
      }
      goto FUN_06705fb0;
    }
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar2 = thunk_FUN_03ac74bc();
    puVar1 = PTR_DAT_084a0238;
  }
  uVar3 = thunk_FUN_03af1434(puVar1);
  FUN_066af6a0(uVar2,uVar3,0);
FUN_06705fb0:
  uVar3 = thunk_FUN_03af1434(PTR_DAT_084a8568);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar2,uVar3);
}


