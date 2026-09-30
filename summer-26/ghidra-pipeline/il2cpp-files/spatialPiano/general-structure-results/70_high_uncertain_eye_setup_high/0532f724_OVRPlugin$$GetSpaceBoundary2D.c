/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 0532f724
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundary2D(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 in_w8;
  undefined8 *puVar3;
  long lVar4;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x316) = in_w8;
  puVar3 = *(undefined8 **)(*unaff_x19 + 0xb8);
  *puVar3 = DAT_011b1b60;
  lVar4 = *unaff_x19;
  *(undefined4 *)(puVar3 + 1) = 0;
  uVar2 = *unaff_x20;
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0xc) = DAT_011b1cd8;
  lVar4 = FUN_02f0880c(uVar2,5);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (uVar1 != 0) {
    *(undefined8 *)(lVar4 + 0x20) = DAT_011b1490;
    uVar2 = DAT_011b1f38;
    if (uVar1 != 1) {
      *(undefined8 *)(lVar4 + 0x28) = DAT_011b1f38;
      if (((2 < uVar1) && (*(undefined8 *)(lVar4 + 0x30) = uVar2, uVar1 != 3)) &&
         (*(undefined8 *)(lVar4 + 0x38) = uVar2, 4 < uVar1)) {
        *(undefined8 *)(lVar4 + 0x40) = DAT_011b09d8;
        *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x18) = lVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


