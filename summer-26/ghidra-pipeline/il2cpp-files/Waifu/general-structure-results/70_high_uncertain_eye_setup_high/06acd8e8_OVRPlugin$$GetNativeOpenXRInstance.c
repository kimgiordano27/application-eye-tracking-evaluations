/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRInstance
ENTRY_POINT: 06acd8e8
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNativeOpenXRInstance
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  long lVar1;
  code *pcVar2;
  long unaff_x22;
  long unaff_x23;
  float fVar3;
  undefined8 unaff_d9;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined4 in_stack_00000018;
  
  pcVar2 = *(code **)(unaff_x23 + 0x188);
  if (pcVar2 == (code *)0x0) {
    pcVar2 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    *(code **)(unaff_x23 + 0x188) = pcVar2;
  }
  lVar1 = (*pcVar2)();
  if (lVar1 != 0) {
    FUN_07a172b0(lVar1,0);
    fVar3 = (float)FUN_07a00400(0);
    if (unaff_x22 != 0) {
      *(undefined8 *)(unaff_x22 + 0x20) = unaff_d9;
      *(undefined4 *)(unaff_x22 + 0x28) = in_stack_00000018;
      *(float *)(unaff_x22 + 0x2c) =
           (unaff_s14 * param_2 + unaff_s12 * param_4 + unaff_s13 * fVar3) - unaff_s11 * param_3;
      *(float *)(unaff_x22 + 0x30) =
           (unaff_s12 * param_3 + unaff_s11 * param_4 + unaff_s13 * param_2) - unaff_s14 * fVar3;
      *(float *)(unaff_x22 + 0x34) =
           (unaff_s11 * fVar3 + unaff_s14 * param_4 + unaff_s13 * param_3) - unaff_s12 * param_2;
      *(float *)(unaff_x22 + 0x38) =
           ((unaff_s13 * param_4 - unaff_s12 * fVar3) - unaff_s11 * param_2) - unaff_s14 * param_3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


