/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$remove_FlushFinished
ENTRY_POINT: 076b7d14
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_Internal_Dispatcher__remove_FlushFinished(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  int iVar4;
  long unaff_x20;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_08504730);
  *(undefined1 *)(unaff_x20 + 0x87d) = 1;
  puVar1 = PTR_DAT_08504730;
  lVar2 = *(long *)(unaff_x19 + 0x28);
  if (lVar2 == 0) {
    return;
  }
  iVar4 = 0;
  do {
    if (*(int *)(lVar2 + 0x18) <= iVar4) {
      return;
    }
    plVar3 = (long *)FUN_04de82e0(lVar2,iVar4,*(undefined8 *)puVar1);
    if (plVar3 == (long *)0x0) break;
    (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
    lVar2 = *(long *)(unaff_x19 + 0x28);
    iVar4 = iVar4 + 1;
  } while (lVar2 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


