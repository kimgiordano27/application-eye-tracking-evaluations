/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$Flush
ENTRY_POINT: 076b7dcc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_Internal_Dispatcher__Flush(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  int iVar6;
  long unaff_x21;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_08504728);
  FUN_03a8a718(PTR_DAT_08504730);
  FUN_03a8a718(PTR_DAT_08504748);
  *(undefined1 *)(unaff_x21 + 0x87e) = 1;
  plVar5 = (long *)(unaff_x20 + 0x28);
  lVar3 = *plVar5;
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08504748);
    FUN_04de7d48(lVar3,*(undefined8 *)PTR_DAT_08504740);
    *plVar5 = lVar3;
    thunk_FUN_03afed3c(plVar5,lVar3);
    lVar3 = *plVar5;
    if (lVar3 == 0) goto LAB_076b7e90;
  }
  puVar2 = PTR_DAT_08504730;
  iVar6 = 0;
  do {
    if (*(int *)(lVar3 + 0x18) <= iVar6) {
LAB_076b7e98:
      FUN_04de937c(lVar3,iVar6);
      return;
    }
    if (unaff_x19 == 0) break;
    iVar1 = *(int *)(unaff_x19 + 0x24);
    lVar4 = FUN_04de82e0(lVar3,iVar6,*(undefined8 *)puVar2);
    if (lVar4 == 0) break;
    lVar3 = *plVar5;
    if (*(int *)(lVar4 + 0x24) <= iVar1) {
      if (lVar3 != 0) goto LAB_076b7e98;
      break;
    }
    iVar6 = iVar6 + 1;
  } while (lVar3 != 0);
LAB_076b7e90:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


