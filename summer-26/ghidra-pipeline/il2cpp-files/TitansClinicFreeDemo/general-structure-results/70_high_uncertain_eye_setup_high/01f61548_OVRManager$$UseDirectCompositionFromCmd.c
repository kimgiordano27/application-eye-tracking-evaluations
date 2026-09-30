/*
FUNCTION_NAME: OVRManager$$UseDirectCompositionFromCmd
ENTRY_POINT: 01f61548
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__UseDirectCompositionFromCmd(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint unaff_w20;
  
  iVar1 = FUN_01f63964();
  if (iVar1 < 0) {
    if ((unaff_w20 >> 6 & 1) == 0) goto LAB_01f61580;
  }
  else if ((unaff_w20 & 0x44) != 0) {
LAB_01f61580:
    iVar2 = FUN_01f63964(param_1);
    if (iVar2 < 0) {
      if ((unaff_w20 >> 5 & 1) == 0) goto LAB_01f615b0;
    }
    else if ((unaff_w20 & 0x22) != 0) {
LAB_01f615b0:
      iVar3 = FUN_01f63964(param_1);
      if (iVar3 < 0) {
        if ((unaff_w20 >> 4 & 1) == 0) goto LAB_01f615d4;
      }
      else if ((unaff_w20 & 0x11) != 0) {
LAB_01f615d4:
        if (iVar1 < 0) {
          if (iVar2 < 0) {
            uVar4 = FUN_01f62130(param_1);
          }
          else {
            uVar4 = FUN_01f61af4(param_1);
          }
        }
        else {
          uVar4 = FUN_01f61814(param_1);
        }
        goto LAB_01f61610;
      }
    }
  }
  FUN_01f63b18();
  uVar4 = 0;
LAB_01f61610:
  return uVar4 & 1;
}


