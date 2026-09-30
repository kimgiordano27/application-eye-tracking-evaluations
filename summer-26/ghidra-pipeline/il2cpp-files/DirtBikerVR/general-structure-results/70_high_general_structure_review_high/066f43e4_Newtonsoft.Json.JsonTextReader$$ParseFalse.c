/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParseFalse
ENTRY_POINT: 066f43e4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonTextReader__ParseFalse(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  int unaff_w20;
  long lVar6;
  long unaff_x21;
  
  FUN_03a8a718(PTR_DAT_0848cfa0);
  FUN_03a8a718(PTR_DAT_08486858);
  *(undefined1 *)(unaff_x21 + 0x750) = 1;
  FUN_0679343c();
  if (-1 < unaff_w20) {
    if (unaff_w20 == 0) {
      lVar6 = *(long *)PTR_DAT_0848cfa0;
      lVar5 = *(long *)(lVar6 + 0x38);
      if (lVar5 == 0) {
        FUN_03ac40ec(lVar6);
        lVar5 = *(long *)(lVar6 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03ac4090();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03ac4090();
      }
      uVar2 = **(undefined8 **)(lVar5 + 0xb8);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
    }
    else {
      uVar2 = FUN_03a8a804(*(undefined8 *)PTR_DAT_08486858,unaff_w20);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x10,uVar2);
    return;
  }
  uVar2 = thunk_FUN_03af1434(PTR_DAT_0849fba0);
  puVar1 = PTR_DAT_08493f98;
  uVar3 = thunk_FUN_03af1434(PTR_DAT_08493f98);
  uVar2 = FUN_065adf54(uVar2,uVar3,0);
  thunk_FUN_03af1434(PTR_DAT_08491280);
  uVar3 = thunk_FUN_03ac74bc();
  uVar4 = thunk_FUN_03af1434(puVar1);
  System_Threading_CancellationToken__get_IsCancellationRequested(uVar3,uVar4,uVar2,0);
  uVar2 = thunk_FUN_03af1434(PTR_DAT_084a7f00);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar3,uVar2);
}


