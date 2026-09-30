/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughSupported
ENTRY_POINT: 06abf0a8
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


void OVRPlugin__IsInsightPassthroughSupported(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined1 unaff_w21;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x1ef) = unaff_w21;
  if (unaff_x19[0xe] != 0) {
    iVar1 = (**(code **)(*unaff_x19 + 0x1c8))();
    lVar4 = unaff_x19[0xe];
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (iVar1 != *(int *)(lVar4 + 0x48)) {
      if (*(char *)((long)unaff_x19 + 0x21) != '\0') {
        (**(code **)(*unaff_x19 + 0x248))();
        *(undefined1 *)((long)unaff_x19 + 0x21) = 0;
      }
      uVar3 = (**(code **)(*unaff_x19 + 600))();
      uVar2 = (**(code **)(*unaff_x19 + 0x1c8))();
      FUN_06abf150(lVar4,uVar3,uVar2);
      return;
    }
  }
  return;
}


