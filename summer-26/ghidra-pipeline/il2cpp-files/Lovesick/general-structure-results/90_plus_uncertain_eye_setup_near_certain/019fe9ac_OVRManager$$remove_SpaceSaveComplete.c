/*
FUNCTION_NAME: OVRManager$$remove_SpaceSaveComplete
ENTRY_POINT: 019fe9ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceSaveComplete(void)

{
  undefined1 in_w8;
  float *pfVar1;
  long unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float unaff_s8;
  float unaff_s9;
  float fVar14;
  float unaff_s10;
  float fVar15;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar16;
  float unaff_s15;
  float fVar17;
  undefined8 in_stack_00000058;
  
  *(undefined1 *)(unaff_x21 + 0x18b) = in_w8;
  fVar2 = unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11;
  fVar14 = unaff_s14 - unaff_s9;
  fVar15 = unaff_s15 - unaff_s10;
  in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - unaff_s8;
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar2) {
    fVar7 = in_stack_00000058._4_4_ * unaff_s12 + fVar14 * unaff_s13 + fVar15 * unaff_s11;
    fVar14 = fVar14 - (unaff_s13 * fVar7) / fVar2;
    fVar15 = fVar15 - (unaff_s11 * fVar7) / fVar2;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - (unaff_s12 * fVar7) / fVar2;
  }
  if (DAT_0377518c == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_0377518c = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = (ulong)(uint)DAT_028aa038;
  uVar11 = (ulong)(uint)(in_stack_00000058._4_4_ * in_stack_00000058._4_4_);
  fVar2 = SQRT(in_stack_00000058._4_4_ * in_stack_00000058._4_4_ + fVar14 * fVar14 + fVar15 * fVar15
              );
  if (fVar2 <= DAT_028aa038) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar1 = *(float **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8);
    fVar14 = *pfVar1;
    fVar15 = pfVar1[1];
    in_stack_00000058._4_4_ = pfVar1[2];
  }
  else {
    fVar14 = fVar14 / fVar2;
    fVar15 = fVar15 / fVar2;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ / fVar2;
  }
  uVar13 = (ulong)(uint)in_stack_00000058._4_4_;
  uVar10 = (ulong)(uint)fVar15;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    fVar2 = unaff_x20[2];
    fVar16 = *(float *)(*(long *)(unaff_x19 + 0x38) + 0x58);
    fVar7 = *unaff_x20;
    fVar3 = unaff_x20[1];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar4 = (float)FUN_02666f6c();
    fVar17 = *(float *)(unaff_x19 + 0x50);
    uVar9 = uVar8;
    uVar12 = uVar11;
    uVar5 = FUN_02666f6c();
    uVar6 = FUN_02698e08(fVar14,uVar10,uVar13,uVar5,uVar9,uVar12,0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_026a01f4((fVar7 - fVar14 * fVar16) + fVar4 * fVar17,
                   (fVar3 - fVar15 * fVar16) + (float)uVar8 * fVar17,
                   (fVar2 - in_stack_00000058._4_4_ * fVar16) + (float)uVar11 * fVar17,uVar6,uVar10,
                   uVar13,uVar5,*(long *)(unaff_x19 + 0x30),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


