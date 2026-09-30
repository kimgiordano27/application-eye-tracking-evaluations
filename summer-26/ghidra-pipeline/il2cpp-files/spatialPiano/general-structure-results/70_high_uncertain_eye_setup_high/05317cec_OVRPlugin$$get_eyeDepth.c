/*
FUNCTION_NAME: OVRPlugin$$get_eyeDepth
ENTRY_POINT: 05317cec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_eyeDepth(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  
  do {
    uVar1 = FUN_05315da4(param_1);
    if ((((*(long *)(unaff_x20 + 0x170) == 0) ||
         (lVar3 = *(long *)(*(long *)(unaff_x20 + 0x170) + 0x18), lVar3 == 0)) ||
        (*(char *)(lVar3 + 0x10) == '\0')) || (*(long *)(lVar3 + 0x18) == 0)) break;
    uVar2 = FUN_05315da4();
    FUN_05317d8c(unaff_s9,uVar2,unaff_x22,uVar1,uVar2,unaff_x21 & 0xffffffff);
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x21 == 5) {
      return;
    }
    lVar3 = *unaff_x19;
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    fVar4 = *(float *)(lVar3 + unaff_x21 * 4 + 0x20);
    unaff_s9 = unaff_s8;
    if (fVar4 <= unaff_s8) {
      unaff_s9 = fVar4;
    }
    if (*(long *)(unaff_x20 + 0x138) == 0) break;
    unaff_x22 = FUN_05315da4();
    param_1 = *(long *)(unaff_x20 + 0x140);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


