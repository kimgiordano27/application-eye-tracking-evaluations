/*
FUNCTION_NAME: OVRManager$$remove_SpaceListSaveComplete
ENTRY_POINT: 019fef64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__remove_SpaceListSaveComplete(double param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double unaff_d9;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 in_stack_00000000;
  double in_stack_00000008;
  
  if (param_1 == 0.5) {
    if (((long)in_stack_00000008 & 1U) != 0) {
      in_stack_00000008 = in_stack_00000008 + 1.0;
    }
  }
  else {
    in_stack_00000008 = (double)(long)(unaff_d9 + 0.5);
  }
  uVar1 = 0x80000000;
  if (in_stack_00000008 != INFINITY) {
    uVar1 = (int)in_stack_00000008;
  }
  lVar4 = FUN_00da4fb8(*unaff_x20,uVar1);
  puVar3 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  puVar2 = Method_System_Collections_Generic_List<DelaunayTriangle>_GetEnumerator__;
  if (0 < (int)uVar1) {
    iVar7 = 0;
    uVar8 = 0;
    pfVar9 = (float *)(lVar4 + 0x3c);
    do {
      if (DAT_037750c4 == '\0') {
        thunk_FUN_00d48444(puVar3);
        DAT_037750c4 = '\x01';
      }
      lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
      uVar12 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar14 = (ulong)*(uint *)(lVar5 + 0x1c);
      uVar16 = (ulong)*(uint *)(lVar5 + 0x20);
      uVar11 = FUN_02698d50((float)iVar7 - in_stack_00000000._4_4_,0);
      if (DAT_03775377 == '\0') {
        thunk_FUN_00d48444(puVar3);
        DAT_03775377 = '\x01';
      }
      lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
      uVar13 = uVar12;
      uVar15 = uVar14;
      fVar10 = (float)FUN_02699088(uVar11,uVar12,uVar14,uVar16,*(undefined4 *)(lVar5 + 0x48),
                                   *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
      lVar5 = *(long *)puVar2;
      fVar21 = *(float *)(unaff_x19 + 0x58);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar2;
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      pfVar6 = *(float **)(lVar5 + 0xb8);
      fVar19 = pfVar6[2];
      fVar20 = pfVar6[3];
      fVar17 = *pfVar6;
      fVar18 = pfVar6[1];
      pfVar9[-7] = fVar10 * fVar21;
      pfVar9[-6] = (float)uVar13 * fVar21;
      fVar22 = (float)uVar11;
      fVar24 = (float)uVar16;
      fVar23 = (float)uVar12;
      fVar10 = (float)uVar14;
      *pfVar9 = (1.0 / (float)(int)uVar1) * (float)(int)uVar8;
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + -1;
      pfVar9[-5] = (float)uVar15 * fVar21;
      pfVar9[-4] = (fVar23 * fVar19 + fVar24 * fVar17 + fVar22 * fVar20) - fVar10 * fVar18;
      pfVar9[-3] = (fVar10 * fVar17 + fVar24 * fVar18 + fVar23 * fVar20) - fVar22 * fVar19;
      pfVar9[-2] = (fVar22 * fVar18 + fVar24 * fVar19 + fVar10 * fVar20) - fVar23 * fVar17;
      pfVar9[-1] = ((fVar24 * fVar20 - fVar22 * fVar17) - fVar23 * fVar18) - fVar10 * fVar19;
      pfVar9 = pfVar9 + 8;
    } while (uVar1 != uVar8);
  }
  return lVar4;
}


