/*
FUNCTION_NAME: Hyper.AnalyticsModule.Managers.AnalyticsManager$$PopupClosed
ENTRY_POINT: 04975690
PROGRAM: Hyper-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Hyper_AnalyticsModule_Managers_AnalyticsManager__PopupClosed(char *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar3 = strcmp(param_1,"localhost");
  if (iVar3 == 0) {
    bVar2 = true;
  }
  else {
    local_48 = 0;
    local_40 = 0;
    iVar3 = inet_pton(2,param_1,(void *)((ulong)&local_48 | 4));
    if (iVar3 < 1) {
      local_48 = 0;
      local_40 = 0;
      local_30 = 0;
      local_38 = 0;
      iVar3 = inet_pton(10,param_1,&local_40);
      if (iVar3 < 1) {
        bVar2 = false;
      }
      else {
        bVar2 = false;
        if ((((int)local_40 == 0) && (local_40._4_4_ == 0)) && ((int)local_38 == 0)) {
          bVar2 = local_38._4_4_ == 0x1000000;
        }
      }
    }
    else {
      bVar2 = local_48._4_1_ == '\x7f';
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


