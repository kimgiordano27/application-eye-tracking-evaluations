/*
FUNCTION_NAME: OVRManager$$set_suggestedGpuPerfLevel
ENTRY_POINT: 073c4148
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__set_suggestedGpuPerfLevel(undefined4 param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  undefined4 uVar2;
  float fVar3;
  
  *(undefined4 *)(unaff_x19 + 0x30) = param_1;
  *(undefined4 *)(unaff_x19 + 0x34) = 0;
  lVar1 = *(long *)(unaff_x21 + 0x20);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0xb0) = 0;
    uVar2 = *(undefined4 *)(unaff_x19 + 0x28);
    *(undefined1 *)(lVar1 + 0xa8) = 0;
    *(undefined4 *)(lVar1 + 0xac) = uVar2;
    FUN_073c3b5c();
    lVar1 = *(long *)(unaff_x21 + 0x20);
    if (*(float *)(unaff_x19 + 0x2c) <= *(float *)(unaff_x19 + 0x34)) {
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0xac) = 0;
        *(undefined4 *)(lVar1 + 0xb0) = 0;
        *(undefined1 *)(lVar1 + 0xa8) = 0;
        FUN_073c3b5c(lVar1);
        return 0;
      }
    }
    else if ((*(long *)(unaff_x21 + 0x38) != 0) &&
            (uVar2 = FUN_0859c728(*(long *)(unaff_x21 + 0x38),0), lVar1 != 0)) {
      *(undefined4 *)(lVar1 + 0xb0) = uVar2;
      if (*(long *)(unaff_x21 + 0x20) != 0) {
        *(bool *)(*(long *)(unaff_x21 + 0x20) + 0xa8) = DAT_018b012c < *(float *)(unaff_x21 + 0x50);
        lVar1 = *(long *)(unaff_x21 + 0x48);
        if (lVar1 != 0) {
          fVar3 = (float)(**(code **)(lVar1 + 0x18))
                                   (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
          *(float *)(unaff_x19 + 0x34) = fVar3 - *(float *)(unaff_x19 + 0x30);
          if (*(long *)(unaff_x21 + 0x20) != 0) {
            FUN_073c3b5c();
            *(undefined8 *)(unaff_x19 + 0x18) = 0;
            thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x18),0);
            *(undefined4 *)(unaff_x19 + 0x10) = 1;
            return 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


