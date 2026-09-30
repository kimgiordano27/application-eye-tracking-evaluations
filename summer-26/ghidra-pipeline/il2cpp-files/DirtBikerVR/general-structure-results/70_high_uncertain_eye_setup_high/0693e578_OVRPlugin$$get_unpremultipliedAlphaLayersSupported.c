/*
FUNCTION_NAME: OVRPlugin$$get_unpremultipliedAlphaLayersSupported
ENTRY_POINT: 0693e578
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_unpremultipliedAlphaLayersSupported(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x21;
  
  FUN_03a8a718();
  *(undefined1 *)(unaff_x21 + 0xf84) = 1;
  uVar2 = FUN_0693d3f4();
  puVar1 = PTR_DAT_084883a0;
  if ((uVar2 & 1) == 0) {
LAB_0693e640:
    return uVar2 & 1;
  }
  if (((*(long *)(unaff_x19 + 0x10) != 0) &&
      (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar4 != 0)) &&
     (lVar4 = *(long *)(lVar4 + 0x40), lVar4 != 0)) {
    lVar4 = *(long *)(lVar4 + 0xb0);
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
    FUN_07cb26a0();
    if (lVar4 != 0) {
      FUN_07cb2800(lVar4,uVar3,0);
      if (((*(long *)(unaff_x19 + 0x10) != 0) &&
          (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar4 != 0)) &&
         (lVar4 = *(long *)(lVar4 + 0x40), lVar4 != 0)) {
        lVar4 = *(long *)(lVar4 + 0xb8);
        uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
        FUN_07cb26a0();
        if (lVar4 != 0) {
          FUN_07cb2800(lVar4,uVar3,0);
          goto LAB_0693e640;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


