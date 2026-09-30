/*
FUNCTION_NAME: DuckStream.Mvvm.GameFlowDuckStream$$RequestConfirmStartRun
ENTRY_POINT: 03714180
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


int DuckStream_Mvvm_GameFlowDuckStream__RequestConfirmStartRun
              (long param_1,undefined8 param_2,char **param_3)

{
  int iVar1;
  ulonglong uVar2;
  long lVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  char *unaff_x22;
  int *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  long unaff_x29;
  
  uVar2 = strtoull_l(unaff_x22,param_3,unaff_w21,*(__locale_t *)(param_1 + 0xfb0));
  if (*unaff_x23 == 0) {
    lVar3 = *(long *)(unaff_x29 + 0x18);
    *unaff_x23 = unaff_w25;
    if (lVar3 != unaff_x20) goto LAB_037141c0;
LAB_037141e8:
    if (uVar2 >> 0x20 == 0) {
      if (unaff_w24 == 0x2d) {
        return -(int)uVar2;
      }
      return (int)uVar2;
    }
  }
  else {
    if (*(long *)(unaff_x29 + 0x18) != unaff_x20) {
LAB_037141c0:
      iVar1 = 0;
      goto LAB_037141c8;
    }
    if (*unaff_x23 != 0x22) goto LAB_037141e8;
  }
  iVar1 = -1;
LAB_037141c8:
  *unaff_x19 = 4;
  return iVar1;
}


