/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughSupported
ENTRY_POINT: 01a1bcb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsInsightPassthroughSupported(float param_1,float param_2,float param_3)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  float fVar6;
  float fVar7;
  
  param_1 = SQRT(param_1);
  if (param_1 <= param_2) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fVar6 = *pfVar3;
    fVar7 = pfVar3[1];
    param_1 = pfVar3[2];
  }
  else {
    fVar6 = unaff_s11 / param_1;
    fVar7 = unaff_s9 / param_1;
    param_1 = unaff_s8 / param_1;
  }
  lVar1 = FUN_0268fd10();
  lVar2 = FUN_0268fd10();
  if (lVar2 != 0) {
    fVar4 = (float)FUN_0269f578(lVar2,0);
    if (DAT_037750c4 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_037750c4 = '\x01';
    }
    if (lVar1 != 0) {
      param_2 = param_2 - fVar7;
      param_3 = param_3 - param_1;
      lVar2 = *(long *)(*unaff_x22 + 0xb8);
      thunk_FUN_026a0a94(fVar4 - fVar6,param_2,param_3,*(undefined4 *)(lVar2 + 0x18),
                         *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),lVar1,0);
      if (*(char *)(unaff_x19 + 0x58) == '\0') {
        return;
      }
      lVar1 = FUN_0268fd10();
      if (lVar1 != 0) {
        fVar6 = (float)FUN_0269f578(lVar1,0);
        if (*(long *)(unaff_x19 + 0x48) != 0) {
          fVar7 = param_2;
          fVar4 = param_3;
          fVar5 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x48),0);
          if (DAT_03774e1a == '\0') {
            thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
            DAT_03774e1a = '\x01';
          }
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if ((*(long *)(unaff_x19 + 0x40) != 0) &&
             (lVar1 = FUN_0268fd10(*(long *)(unaff_x19 + 0x40),0), lVar1 != 0)) {
            fVar6 = SQRT((param_3 - fVar4) * (param_3 - fVar4) +
                         (fVar6 - fVar5) * (fVar6 - fVar5) + (param_2 - fVar7) * (param_2 - fVar7));
            FUN_0269fd98(fVar6 * *(float *)(unaff_x19 + 0x5c),fVar6 * *(float *)(unaff_x19 + 0x60),
                         fVar6 * *(float *)(unaff_x19 + 100),lVar1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01a1be7c to 01b1bfcb has its CatchHandler @ 01a1be7c
                       catch() { ... } // from try @ 01a1be7c with catch @ 01a1be7c
                       catch() { ... } // from try @ 01a1c398 with catch @ 01a1be7c
                       catch() { ... } // from try @ 01a1c428 with catch @ 01a1be7c
                       catch() { ... } // from try @ 01a1c448 with catch @ 01a1be7c
                       catch() { ... } // from try @ 01a1c53c with catch @ 01a1be7c */
  FUN_00da518c();
}


