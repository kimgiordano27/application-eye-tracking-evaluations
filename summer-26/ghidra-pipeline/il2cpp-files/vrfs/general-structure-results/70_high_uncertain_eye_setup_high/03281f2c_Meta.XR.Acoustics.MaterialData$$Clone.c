/*
FUNCTION_NAME: Meta.XR.Acoustics.MaterialData$$Clone
ENTRY_POINT: 03281f2c
PROGRAM: vrfs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_Acoustics_MaterialData__Clone
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  
  iVar1 = (**(code **)(*(long *)(param_1 + 0x70) + 8))();
  if ((unaff_w20 < 0) && (iVar1 != 0)) {
    FUN_031dbd14(0);
  }
  iVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70) + 8))
                    (param_5);
  if ((unaff_w19 < 0) && (iVar1 != 0)) {
    FUN_031db91c(0x10,4,0);
  }
  if (*(int *)(param_5 + 0x18) != 0) {
    if (*(int *)(param_5 + 0x18) <= unaff_w20) {
      FUN_031db91c(0xd,0x22,0);
    }
    if (unaff_w20 + 1 < unaff_w19) {
      FUN_031db91c(0x10,0x22,0);
    }
                    /* WARNING: Could not recover jumptable at 0x03282000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x158) + 8))
                      (param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x10),unaff_w20,unaff_w19);
    return uVar2;
  }
  return 0xffffffff;
}


