/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateInputTrackingContext
ENTRY_POINT: 05b81b44
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float Oculus_Avatar2_OvrPluginTracking__CreateInputTrackingContext
                (float param_1,undefined1 param_2 [16],float param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  long *unaff_x22;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  if ((ABS(param_3 - unaff_s11) < param_1) ||
     (((fStack000000000000000c * unaff_s13 +
       fStack0000000000000008 * unaff_s8 + unaff_s12 * unaff_s14) -
      (unaff_s13 * unaff_s15 + unaff_s8 * unaff_s9 + unaff_s14 * unaff_s10)) / unaff_s11 <= 0.0)) {
    if (DAT_076ce198 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07279af0);
      DAT_076ce198 = '\x01';
    }
    in_stack_00000000 = **(float **)(*(long *)PTR_DAT_07279af0 + 0xb8);
  }
  else {
    fVar4 = (float)UnityEngine_UIElements_BaseVerticalCollectionView__get_virtualizationController
                             (&stack0x00000030,0);
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (lVar1 = FUN_06be6b04(*(long *)(unaff_x19 + 0x20),0), lVar1 == 0)) {
LAB_05b81ca0:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar2 = FUN_06bf4764(lVar1,0);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*unaff_x22);
    }
    uVar3 = FUN_06be9890(uVar2,0,0);
    fVar5 = 1.0;
    if ((uVar3 & 1) != 0) {
      if (((*(long *)(unaff_x19 + 0x20) == 0) ||
          (lVar1 = FUN_06be6b04(*(long *)(unaff_x19 + 0x20),0), lVar1 == 0)) ||
         (lVar1 = FUN_06bf4764(lVar1,0), lVar1 == 0)) goto LAB_05b81ca0;
      fVar5 = (float)FUN_06bf6348(lVar1,0);
    }
    in_stack_00000000 = in_stack_00000000 - fVar4;
    if (in_stack_00000000 <= -in_stack_00000000) {
      in_stack_00000000 = -in_stack_00000000;
    }
    in_stack_00000000 = in_stack_00000000 / fVar5;
  }
  return in_stack_00000000;
}


