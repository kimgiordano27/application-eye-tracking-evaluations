/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateInternalEyeTrackingContextNative
ENTRY_POINT: 05b81ac8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


float Oculus_Avatar2_OvrPluginTracking__CreateInternalEyeTrackingContextNative(void)

{
  float fVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  long *unaff_x22;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float fVar9;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  
  fVar6 = fStack0000000000000038;
  fVar5 = fStack0000000000000030;
  fVar9 = unaff_s13 * fStack0000000000000044 +
          unaff_s8 * fStack000000000000003c + unaff_s14 * fStack0000000000000040;
  if (DAT_076ce2ba == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07279bf8);
    DAT_076ce2ba = '\x01';
  }
  fVar7 = ABS(fVar9);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar8 = **(float **)(*(long *)PTR_DAT_07279bf8 + 0xb8) * 8.0;
  fVar1 = fVar7 * DAT_013a03a0;
  if (fVar7 * DAT_013a03a0 <= fVar8) {
    fVar1 = fVar8;
  }
  if ((ABS(0.0 - fVar9) < fVar1) ||
     (((fStack000000000000000c * unaff_s13 +
       fStack0000000000000008 * unaff_s8 + unaff_s12 * unaff_s14) -
      (unaff_s13 * fVar6 + unaff_s8 * fVar5 + unaff_s14 * fStack0000000000000034)) / fVar9 <= 0.0))
  {
    if (DAT_076ce198 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07279af0);
      DAT_076ce198 = '\x01';
    }
    in_stack_00000000 = **(float **)(*(long *)PTR_DAT_07279af0 + 0xb8);
  }
  else {
    fVar5 = (float)UnityEngine_UIElements_BaseVerticalCollectionView__get_virtualizationController
                             (&stack0x00000030,0);
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (lVar2 = FUN_06be6b04(*(long *)(unaff_x19 + 0x20),0), lVar2 == 0)) {
LAB_05b81ca0:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar3 = FUN_06bf4764(lVar2,0);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*unaff_x22);
    }
    uVar4 = FUN_06be9890(uVar3,0,0);
    fVar6 = 1.0;
    if ((uVar4 & 1) != 0) {
      if (((*(long *)(unaff_x19 + 0x20) == 0) ||
          (lVar2 = FUN_06be6b04(*(long *)(unaff_x19 + 0x20),0), lVar2 == 0)) ||
         (lVar2 = FUN_06bf4764(lVar2,0), lVar2 == 0)) goto LAB_05b81ca0;
      fVar6 = (float)FUN_06bf6348(lVar2,0);
    }
    in_stack_00000000 = in_stack_00000000 - fVar5;
    if (in_stack_00000000 <= -in_stack_00000000) {
      in_stack_00000000 = -in_stack_00000000;
    }
    in_stack_00000000 = in_stack_00000000 / fVar6;
  }
  return in_stack_00000000;
}


