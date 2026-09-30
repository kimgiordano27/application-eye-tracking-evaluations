/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$Shutdown
ENTRY_POINT: 05b818d4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


float Oculus_Avatar2_OvrPluginTracking__Shutdown(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  long *unaff_x22;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float unaff_s9;
  float fVar15;
  float unaff_s12;
  float fVar16;
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
  
  if (*(int *)(param_1 + 0xe0) == 0) {
                    /* try { // try from 05b818e0 to 05c81923 has its CatchHandler @ 05b81960 */
    thunk_FUN_032cd7c0(param_1);
  }
  uVar4 = FUN_06bece64();
  if ((uVar4 & 1) != 0) {
    if (unaff_x20 == 0) goto LAB_05b81ca0;
    uVar4 = FUN_039599a0();
    if ((uVar4 & 1) != 0) {
      if (in_stack_00000028 == 0) goto LAB_05b81ca0;
      uVar7 = *(undefined8 *)(in_stack_00000028 + 0x28);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
                    /* try { // try from 05b81934 to 05c8193b has its CatchHandler @ 05b81a18 */
      uVar4 = FUN_06be9890(uVar7,0,0);
      if ((uVar4 & 1) != 0) {
        if (in_stack_00000028 == 0) goto LAB_05b81ca0;
                    /* try { // try from 05b81950 to 05c81953 has its CatchHandler @ 05b8196c */
        unaff_x21 = *(long *)(in_stack_00000028 + 0x28);
        goto FUN_05b81964;
      }
    }
    unaff_x21 = FUN_06bb0054(0);
  }
FUN_05b81964:
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar4 = FUN_06bece64(unaff_x21,0,0);
  if ((uVar4 & 1) != 0) {
LAB_05b81c44:
    if (DAT_076ce198 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07279af0);
      DAT_076ce198 = '\x01';
    }
    return **(float **)(*(long *)PTR_DAT_07279af0 + 0xb8);
  }
  if (unaff_x21 != 0) {
    fVar8 = (float)FUN_06bafe28(unaff_x21,0);
    unaff_s8 = unaff_s8 + in_stack_00000098._4_4_;
    fVar16 = 0.0;
    FUN_06bb0010(&stack0x00000010,fVar8 + unaff_s12,unaff_x21,0);
    _fStack0000000000000038 = in_stack_00000018;
    _fStack0000000000000030 = in_stack_00000010;
    _fStack0000000000000040 = in_stack_00000020;
    if ((unaff_x20 != 0) && (lVar5 = FUN_06be6b04(), lVar5 != 0)) {
      fVar9 = (float)FUN_06bf4ce0(lVar5,0);
      fVar8 = fVar16;
      fVar12 = unaff_s8;
      lVar5 = FUN_06be6b04();
      if (lVar5 != 0) {
        fVar10 = (float)FUN_06bf4868(lVar5,0);
        if (DAT_076cd827 == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07279c00);
          DAT_076cd827 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        fVar11 = SQRT(fVar16 * fVar16 + fVar9 * fVar9 + unaff_s8 * unaff_s8);
        if (fVar11 <= DAT_013a01c0) {
          if (DAT_076cd829 == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_072795b0);
            DAT_076cd829 = '\x01';
          }
          pfVar6 = *(float **)(*(long *)PTR_DAT_072795b0 + 0xb8);
          fVar9 = *pfVar6;
          unaff_s8 = pfVar6[1];
          fVar16 = pfVar6[2];
        }
        else {
          fVar9 = fVar9 / fVar11;
          unaff_s8 = unaff_s8 / fVar11;
          fVar16 = fVar16 / fVar11;
        }
        fVar3 = fStack0000000000000038;
        fVar11 = fStack0000000000000030;
        fVar2 = fStack0000000000000034;
        fVar15 = fVar16 * fStack0000000000000044 +
                 fVar9 * fStack000000000000003c + unaff_s8 * fStack0000000000000040;
        if (DAT_076ce2ba == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07279bf8);
          DAT_076ce2ba = '\x01';
        }
        fVar13 = ABS(fVar15);
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        fVar14 = **(float **)(*(long *)PTR_DAT_07279bf8 + 0xb8) * 8.0;
        fVar1 = fVar13 * DAT_013a03a0;
        if (fVar13 * DAT_013a03a0 <= fVar14) {
          fVar1 = fVar14;
        }
        if ((ABS(0.0 - fVar15) < fVar1) ||
           (((fVar8 * fVar16 + fVar10 * fVar9 + fVar12 * unaff_s8) -
            (fVar16 * fVar3 + fVar9 * fVar11 + unaff_s8 * fVar2)) / fVar15 <= 0.0))
        goto LAB_05b81c44;
        fVar8 = (float)UnityEngine_UIElements_BaseVerticalCollectionView__get_virtualizationController
                                 (&stack0x00000030,0);
        if ((*(long *)(unaff_x19 + 0x20) != 0) &&
           (lVar5 = FUN_06be6b04(*(long *)(unaff_x19 + 0x20),0), lVar5 != 0)) {
          uVar7 = FUN_06bf4764(lVar5,0);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*unaff_x22);
          }
          uVar4 = FUN_06be9890(uVar7,0,0);
          fVar16 = 1.0;
          if ((uVar4 & 1) != 0) {
            if (((*(long *)(unaff_x19 + 0x20) == 0) ||
                (lVar5 = FUN_06be6b04(*(long *)(unaff_x19 + 0x20),0), lVar5 == 0)) ||
               (lVar5 = FUN_06bf4764(lVar5,0), lVar5 == 0)) goto LAB_05b81ca0;
            fVar16 = (float)FUN_06bf6348(lVar5,0);
          }
          fVar8 = unaff_s9 - fVar8;
          if (fVar8 <= -fVar8) {
            fVar8 = -fVar8;
          }
          return fVar8 / fVar16;
        }
      }
    }
  }
LAB_05b81ca0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


