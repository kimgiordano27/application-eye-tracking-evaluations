/*
FUNCTION_NAME: Hyper.AnalyticsModule.Managers.AnalyticsManager$$DashboardSectionDisplayed
ENTRY_POINT: 04975794
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_3;telemetry_or_network_hits_10
*/


void Hyper_AnalyticsModule_Managers_AnalyticsManager__DashboardSectionDisplayed
               (long param_1,byte *param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  sockaddr *__sa;
  undefined8 uVar4;
  socklen_t __salen;
  byte *pbVar5;
  byte *unaff_x21;
  long unaff_x22;
  char *unaff_x23;
  undefined8 in_stack_00000008;
  
  pbVar5 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
  }
  uVar3 = Hyper_AnalyticsModule_Managers_AnalyticsManager__PopupClosed(pbVar5);
  if ((uVar3 & 1) == 0) {
    pcVar1 = unaff_x23;
    if ((*unaff_x21 & 1) != 0) {
      pcVar1 = *(char **)(unaff_x21 + 0x10);
    }
    FUN_04975210(pcVar1);
  }
  memset(&stack0x00000028,0,0x400);
  pcVar1 = unaff_x23;
  if ((*unaff_x21 & 1) != 0) {
    pcVar1 = *(char **)(unaff_x21 + 0x10);
  }
  iVar2 = inet_pton(2,pcVar1,&stack0x0000042c);
  if (iVar2 < 1) {
    if ((*unaff_x21 & 1) != 0) {
      unaff_x23 = *(char **)(unaff_x21 + 0x10);
    }
    iVar2 = inet_pton(10,unaff_x23,&stack0x00000014);
    if (0 < iVar2) {
      in_stack_00000008._4_2_ = 10;
      __sa = (sockaddr *)((long)&stack0x00000008 + 4);
      __salen = 0x1c;
      goto LAB_04975854;
    }
  }
  else {
    __sa = (sockaddr *)&stack0x00000428;
    __salen = 0x10;
LAB_04975854:
    iVar2 = getnameinfo(__sa,__salen,&stack0x00000028,0x400,(char *)0x0,0,0);
    if (iVar2 == 0) {
      uVar4 = FUN_04975328(&stack0x00000028,0,param_3);
      goto Hyper_AnalyticsModule_Managers_AnalyticsManager__OnPopupClosed;
    }
  }
  uVar4 = 0xfffffffd;
Hyper_AnalyticsModule_Managers_AnalyticsManager__OnPopupClosed:
  if (*(long *)(unaff_x22 + 0x28) == param_1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


