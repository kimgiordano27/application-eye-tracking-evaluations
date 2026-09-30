/*
FUNCTION_NAME: OVRManager$$add_SpaceEraseComplete
ENTRY_POINT: 019feaa0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceEraseComplete
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  int in_w8;
  float *pfVar1;
  long unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (in_w8 == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    *(undefined1 *)(unaff_x21 + 0xd76) = 1;
  }
  pfVar1 = *(float **)
            (*(long *)
              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ + 0xb8
            );
  fVar11 = *pfVar1;
  fVar12 = pfVar1[1];
  uVar8 = (ulong)(uint)fVar12;
  fVar13 = pfVar1[2];
  uVar10 = (ulong)(uint)fVar13;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    fVar2 = unaff_x20[2];
    fVar14 = *(float *)(*(long *)(unaff_x19 + 0x38) + 0x58);
    fVar3 = *unaff_x20;
    fVar4 = unaff_x20[1];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar5 = (float)FUN_02666f6c();
    fVar15 = *(float *)(unaff_x19 + 0x50);
    uVar7 = param_2;
    uVar9 = param_3;
    uVar6 = FUN_02666f6c();
    uVar7 = FUN_02698e08(fVar11,uVar8,uVar10,uVar6,uVar7,uVar9,0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_026a01f4((fVar3 - fVar11 * fVar14) + fVar5 * fVar15,
                   (fVar4 - fVar12 * fVar14) + (float)param_2 * fVar15,
                   (fVar2 - fVar13 * fVar14) + (float)param_3 * fVar15,uVar7,uVar8,uVar10,uVar6,
                   *(long *)(unaff_x19 + 0x30),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


