/*
FUNCTION_NAME: OVRManager$$add_VrFocusLost
ENTRY_POINT: 05cf8658
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusLost(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  float fVar6;
  float fVar7;
  undefined8 in_stack_00000008;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  fVar7 = *(float *)(lVar1 + 0x18);
  fVar6 = *(float *)(lVar1 + 0x1c);
  fVar5 = *(float *)(lVar1 + 0x20);
  if (*(char *)(unaff_x22 + 0xca3) == '\0') {
    FUN_02fe925c(PTR_DAT_06f6e7c0);
    *(undefined1 *)(unaff_x22 + 0xca3) = 1;
  }
  fVar3 = fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6;
  if (**(float **)(*unaff_x23 + 0xb8) <= fVar3) {
    fVar4 = (float)unaff_d13 * fVar5 + (float)unaff_d11 * fVar7 + (float)unaff_d12 * fVar6;
    unaff_d11 = (ulong)(uint)((float)unaff_d11 - (fVar7 * fVar4) / fVar3);
    unaff_d12 = (ulong)(uint)((float)unaff_d12 - (fVar6 * fVar4) / fVar3);
    unaff_d13 = (ulong)(uint)((float)unaff_d13 - (fVar5 * fVar4) / fVar3);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_05cf5a4c(in_stack_00000008._4_4_,*(long *)(unaff_x19 + 0x20),0);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (*(char *)(unaff_x20 + 0x662) == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      *(undefined1 *)(unaff_x20 + 0x662) = 1;
    }
    lVar2 = *(long *)(*unaff_x21 + 0xb8);
    UnityEngine_UIElements_BackgroundRepeat__GetHashCode
              (unaff_d11,unaff_d12,unaff_d13,*(undefined4 *)(lVar2 + 0x18),
               *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),0);
    if (lVar1 != 0) {
      FUN_05cf598c(lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


