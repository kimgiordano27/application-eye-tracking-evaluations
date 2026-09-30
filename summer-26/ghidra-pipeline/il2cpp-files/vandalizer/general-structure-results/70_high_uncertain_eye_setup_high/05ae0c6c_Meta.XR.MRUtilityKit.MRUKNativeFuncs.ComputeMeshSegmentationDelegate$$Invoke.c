/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.ComputeMeshSegmentationDelegate$$Invoke
ENTRY_POINT: 05ae0c6c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUKNativeFuncs_ComputeMeshSegmentationDelegate__Invoke(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long unaff_x19;
  
  if (param_1 == 0) {
LAB_05ae0cec:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(unaff_x19 + 8);
  do {
    uVar4 = uVar2;
    if (uVar1 <= uVar4) {
      *(uint *)(unaff_x19 + 8) = uVar1 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      goto LAB_05ae0cdc;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = uVar4 + 1;
    if (lVar3 == 0) goto LAB_05ae0cec;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar2 = uVar4 + 1;
  } while (*(int *)(lVar3 + (long)(int)uVar4 * 0x14 + 0x20) < 0);
  *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(lVar3 + (long)(int)uVar4 * 0x14 + 0x2c);
LAB_05ae0cdc:
  return uVar4 < uVar1;
}


