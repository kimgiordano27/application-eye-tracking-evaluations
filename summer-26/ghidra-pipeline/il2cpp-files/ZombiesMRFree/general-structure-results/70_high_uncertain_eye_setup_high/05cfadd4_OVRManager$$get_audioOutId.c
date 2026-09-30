/*
FUNCTION_NAME: OVRManager$$get_audioOutId
ENTRY_POINT: 05cfadd4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_audioOutId(float param_1,undefined1 param_2 [16],float param_3)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  long unaff_x20;
  long *unaff_x21;
  float fVar3;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  if (param_3 <= param_1) {
    fVar3 = (float)unaff_d10 * unaff_s12 + (float)unaff_d8 * unaff_s11 + (float)unaff_d9 * unaff_s13
    ;
    unaff_d8 = (ulong)(uint)((float)unaff_d8 - (unaff_s11 * fVar3) / param_1);
    unaff_d9 = (ulong)(uint)((float)unaff_d9 - (unaff_s13 * fVar3) / param_1);
    unaff_d10 = (ulong)(uint)((float)unaff_d10 - (unaff_s12 * fVar3) / param_1);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_05cf5a4c(fStack000000000000007c - unaff_s14,fStack0000000000000078 - unaff_s15,
                 fStack000000000000000c - fStack0000000000000008,*(long *)(unaff_x19 + 0x20),0);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if (*(char *)(unaff_x20 + 0x662) == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      *(undefined1 *)(unaff_x20 + 0x662) = 1;
    }
    lVar1 = *(long *)(*unaff_x21 + 0xb8);
    UnityEngine_UIElements_BackgroundRepeat__GetHashCode
              (unaff_d8,unaff_d9,unaff_d10,*(undefined4 *)(lVar1 + 0x18),
               *(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x20),0);
    if (lVar2 != 0) {
      FUN_05cf598c(lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


