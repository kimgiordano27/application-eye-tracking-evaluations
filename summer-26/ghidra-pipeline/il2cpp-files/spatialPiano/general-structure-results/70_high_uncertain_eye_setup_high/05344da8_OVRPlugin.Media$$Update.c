/*
FUNCTION_NAME: OVRPlugin.Media$$Update
ENTRY_POINT: 05344da8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__Update(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_0534a8f8();
  lVar1 = *(long *)(unaff_x21 + 0x28);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (unaff_w20 < *(uint *)(lVar1 + 0x18)) {
    lVar1 = lVar1 + (long)(int)unaff_w20 * 0x1c;
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    uVar4 = *(undefined8 *)(lVar1 + 0x34);
    uVar3 = *(undefined8 *)(lVar1 + 0x2c);
    unaff_x19[1] = *(undefined8 *)(lVar1 + 0x28);
    *unaff_x19 = uVar2;
    *(undefined8 *)((long)unaff_x19 + 0x14) = uVar4;
    *(undefined8 *)((long)unaff_x19 + 0xc) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


