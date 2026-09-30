/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.ovrpTrackingInitializationData$$.ctor
ENTRY_POINT: 05b818b0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


float Oculus_Avatar2_OvrPluginTracking_ovrpTrackingInitializationData___ctor(void)

{
  float fVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  long unaff_x19;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s8;
  float unaff_s9;
  float fVar17;
  float unaff_s12;
  float fVar18;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined8 in_stack_00000098;
  
  puVar2 = PTR_DAT_072794f0;
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05b81ca0;
  lVar5 = FUN_05b8ab68(*(long *)(unaff_x19 + 0x20),0);
  lVar8 = *(long *)(unaff_x19 + 0x48);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar2);
  }
  uVar6 = FUN_06bece64(lVar8,0,0);
  if ((uVar6 & 1) != 0) {
    if (lVar5 == 0) goto LAB_05b81ca0;
    uVar6 = FUN_039599a0(lVar5,&stack0x00000028,*(undefined8 *)PTR_DAT_072a59e8);
    if ((uVar6 & 1) != 0) {
      if (in_stack_00000028 == 0) goto LAB_05b81ca0;
      uVar9 = *(undefined8 *)(in_stack_00000028 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar6 = FUN_06be9890(uVar9,0,0);
      if ((uVar6 & 1) != 0) {
        if (in_stack_00000028 == 0) goto LAB_05b81ca0;
        lVar8 = *(long *)(in_stack_00000028 + 0x28);
        goto FUN_05b81964;
      }
    }
    lVar8 = FUN_06bb0054(0);
  }
FUN_05b81964:
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar6 = FUN_06bece64(lVar8,0,0);
  if ((uVar6 & 1) != 0) {
LAB_05b81c44:
    if (DAT_076ce198 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07279af0);
      DAT_076ce198 = '\x01';
    }
    return **(float **)(*(long *)PTR_DAT_07279af0 + 0xb8);
  }
  if (lVar8 != 0) {
    fVar10 = (float)FUN_06bafe28(lVar8,0);
    unaff_s8 = unaff_s8 + in_stack_00000098._4_4_;
    fVar18 = 0.0;
    FUN_06bb0010(&stack0x00000010,fVar10 + unaff_s12,lVar8,0);
    _fStack0000000000000038 = in_stack_00000018;
    _fStack0000000000000030 = in_stack_00000010;
    _fStack0000000000000040 = in_stack_00000020;
    if ((lVar5 != 0) && (lVar8 = FUN_06be6b04(lVar5,0), lVar8 != 0)) {
      fVar11 = (float)FUN_06bf4ce0(lVar8,0);
      fVar10 = fVar18;
      fVar14 = unaff_s8;
      lVar5 = FUN_06be6b04(lVar5,0);
      if (lVar5 != 0) {
        fVar12 = (float)FUN_06bf4868(lVar5,0);
        if (DAT_076cd827 == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07279c00);
          DAT_076cd827 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        fVar13 = SQRT(fVar18 * fVar18 + fVar11 * fVar11 + unaff_s8 * unaff_s8);
        if (fVar13 <= DAT_013a01c0) {
          if (DAT_076cd829 == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_072795b0);
            DAT_076cd829 = '\x01';
          }
          pfVar7 = *(float **)(*(long *)PTR_DAT_072795b0 + 0xb8);
          fVar11 = *pfVar7;
          unaff_s8 = pfVar7[1];
          fVar18 = pfVar7[2];
        }
        else {
          fVar11 = fVar11 / fVar13;
          unaff_s8 = unaff_s8 / fVar13;
          fVar18 = fVar18 / fVar13;
        }
        fVar4 = fStack0000000000000038;
        fVar13 = fStack0000000000000030;
        fVar3 = fStack0000000000000034;
        fVar17 = fVar18 * fStack0000000000000044 +
                 fVar11 * fStack000000000000003c + unaff_s8 * fStack0000000000000040;
        if (DAT_076ce2ba == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07279bf8);
          DAT_076ce2ba = '\x01';
        }
        fVar15 = ABS(fVar17);
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        fVar16 = **(float **)(*(long *)PTR_DAT_07279bf8 + 0xb8) * 8.0;
        fVar1 = fVar15 * DAT_013a03a0;
        if (fVar15 * DAT_013a03a0 <= fVar16) {
          fVar1 = fVar16;
        }
        if ((ABS(0.0 - fVar17) < fVar1) ||
           (((fVar10 * fVar18 + fVar12 * fVar11 + fVar14 * unaff_s8) -
            (fVar18 * fVar4 + fVar11 * fVar13 + unaff_s8 * fVar3)) / fVar17 <= 0.0))
        goto LAB_05b81c44;
        fVar10 = (float)UnityEngine_UIElements_BaseVerticalCollectionView__get_virtualizationController
                                  (&stack0x00000030,0);
        if ((*(long *)(unaff_x19 + 0x20) != 0) &&
           (lVar5 = FUN_06be6b04(*(long *)(unaff_x19 + 0x20),0), lVar5 != 0)) {
          uVar9 = FUN_06bf4764(lVar5,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)puVar2);
          }
          uVar6 = FUN_06be9890(uVar9,0,0);
          fVar18 = 1.0;
          if ((uVar6 & 1) != 0) {
            if (((*(long *)(unaff_x19 + 0x20) == 0) ||
                (lVar5 = FUN_06be6b04(*(long *)(unaff_x19 + 0x20),0), lVar5 == 0)) ||
               (lVar5 = FUN_06bf4764(lVar5,0), lVar5 == 0)) goto LAB_05b81ca0;
            fVar18 = (float)FUN_06bf6348(lVar5,0);
          }
          fVar10 = unaff_s9 - fVar10;
          if (fVar10 <= -fVar10) {
            fVar10 = -fVar10;
          }
          return fVar10 / fVar18;
        }
      }
    }
  }
LAB_05b81ca0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


