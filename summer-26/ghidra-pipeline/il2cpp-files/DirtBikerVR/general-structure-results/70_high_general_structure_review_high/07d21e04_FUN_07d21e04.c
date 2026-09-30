/*
FUNCTION_NAME: FUN_07d21e04
ENTRY_POINT: 07d21e04
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_3;telemetry_or_network_hits_1
*/


void FUN_07d21e04(undefined8 param_1,int param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_28;
  int local_24;
  
  if ((-1 < param_2) && (iVar2 = FUN_07d21c9c(param_1), param_2 < iVar2)) {
    if (param_3 != 0) {
      FUN_07d21f44(param_1,param_2,param_3);
      return;
    }
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar4 = thunk_FUN_03ac74bc();
    uVar5 = thunk_FUN_03af1434(System_Xml_XmlUtf8RawTextWriterIndent_TypeInfo);
    FUN_066af6a0(uVar4,uVar5,0);
    uVar5 = thunk_FUN_03af1434(System_Xml_XmlUtf8RawTextWriter_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar4,uVar5);
  }
  puVar1 = PTR_DAT_08486760;
  local_24 = param_2;
  uVar4 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),&local_24);
  local_28 = FUN_07d21c9c(param_1);
  local_28 = local_28 + -1;
  uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&local_28);
  uVar3 = thunk_FUN_03af1434(System_Xml_XmlUrlResolver_TypeInfo);
  uVar4 = FUN_065ce754(uVar3,uVar4,uVar5,0);
  thunk_FUN_03af1434(PTR_DAT_08491280);
  uVar5 = thunk_FUN_03ac74bc();
  uVar3 = thunk_FUN_03af1434(PTR_DAT_08486d40);
  System_Threading_CancellationToken__get_IsCancellationRequested(uVar5,uVar3,uVar4,0);
  uVar4 = thunk_FUN_03af1434(System_Xml_XmlUtf8RawTextWriter_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar5,uVar4);
}


