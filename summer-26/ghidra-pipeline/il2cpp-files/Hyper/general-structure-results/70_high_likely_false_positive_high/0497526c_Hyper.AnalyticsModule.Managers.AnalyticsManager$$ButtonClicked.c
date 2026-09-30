/*
FUNCTION_NAME: Hyper.AnalyticsModule.Managers.AnalyticsManager$$ButtonClicked
ENTRY_POINT: 0497526c
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Hyper_AnalyticsModule_Managers_AnalyticsManager__ButtonClicked(void)

{
  uint uVar1;
  bool in_ZR;
  undefined8 uVar2;
  uint in_w8;
  long unaff_x20;
  long in_stack_00000028;
  
  if ((in_ZR) || (uVar1 = in_w8 & 0xff, uVar1 == 10)) {
LAB_049752fc:
    uVar2 = 1;
  }
  else {
    if (uVar1 == 0xc0) {
      if ((in_w8 >> 8 & 0xff) == 0xa8) goto LAB_049752fc;
    }
    else if ((uVar1 == 0xac) && ((in_w8 >> 8 & 0xf0) == 0x10)) goto LAB_049752fc;
    uVar2 = 0;
  }
  if (*(long *)(unaff_x20 + 0x28) == in_stack_00000028) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


