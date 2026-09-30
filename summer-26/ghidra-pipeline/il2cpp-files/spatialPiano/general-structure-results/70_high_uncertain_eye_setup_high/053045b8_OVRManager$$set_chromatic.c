/*
FUNCTION_NAME: OVRManager$$set_chromatic
ENTRY_POINT: 053045b8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__set_chromatic(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  int *piVar3;
  long unaff_x19;
  long unaff_x21;
  undefined4 uVar4;
  
  if (in_x9 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
        goto LAB_05304604;
      }
      in_x9 = in_x9 + -1;
      piVar3 = piVar3 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_02f421d0();
LAB_05304604:
  uVar4 = (*(code *)*puVar1)();
  if (unaff_x21 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x28);
    *(undefined4 *)(unaff_x21 + 0x78) = uVar4;
    if (lVar2 != 0) {
      FUN_052368cc(lVar2,*(undefined8 *)(unaff_x19 + 0x68),0,0);
      OVRManager__OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


