/*
FUNCTION_NAME: FUN_0497576c
ENTRY_POINT: 0497576c
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_3;telemetry_or_network_hits_6
*/


void FUN_0497576c(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *__cp;
  long lVar1;
  int iVar2;
  ulong uVar3;
  sockaddr *__sa;
  undefined8 uVar4;
  socklen_t __salen;
  byte *pbVar5;
  sockaddr local_474;
  char acStack_458 [1024];
  sockaddr local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  __cp = param_1 + 1;
  local_48 = *(long *)(lVar1 + 0x28);
  pbVar5 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar5 = param_1 + 1;
  }
  uVar3 = Hyper_AnalyticsModule_Managers_AnalyticsManager__PopupClosed(pbVar5);
  if ((uVar3 & 1) == 0) {
    pbVar5 = __cp;
    if ((*param_1 & 1) != 0) {
      pbVar5 = *(byte **)(param_1 + 0x10);
    }
    FUN_04975210(pbVar5);
  }
  memset(acStack_458,0,0x400);
  pbVar5 = __cp;
  if ((*param_1 & 1) != 0) {
    pbVar5 = *(byte **)(param_1 + 0x10);
  }
  iVar2 = inet_pton(2,(char *)pbVar5,local_58.sa_data + 2);
  if (iVar2 < 1) {
    if ((*param_1 & 1) != 0) {
      __cp = *(byte **)(param_1 + 0x10);
    }
    iVar2 = inet_pton(10,(char *)__cp,local_474.sa_data + 6);
    if (0 < iVar2) {
      local_474.sa_family = 10;
      __sa = &local_474;
      __salen = 0x1c;
      goto LAB_04975854;
    }
  }
  else {
    __sa = &local_58;
    __salen = 0x10;
    local_58.sa_family = 2;
LAB_04975854:
    iVar2 = getnameinfo(__sa,__salen,acStack_458,0x400,(char *)0x0,0,0);
    if (iVar2 == 0) {
      uVar4 = FUN_04975328(acStack_458,0,param_2,param_4);
      goto Hyper_AnalyticsModule_Managers_AnalyticsManager__OnPopupClosed;
    }
  }
  uVar4 = 0xfffffffd;
Hyper_AnalyticsModule_Managers_AnalyticsManager__OnPopupClosed:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


