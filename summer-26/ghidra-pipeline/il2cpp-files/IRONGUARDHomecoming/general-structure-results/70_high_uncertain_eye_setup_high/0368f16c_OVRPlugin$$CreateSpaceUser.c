/*
FUNCTION_NAME: OVRPlugin$$CreateSpaceUser
ENTRY_POINT: 0368f16c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__CreateSpaceUser
          (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  char cVar7;
  float *pfVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float fVar15;
  float fVar16;
  float unaff_s11;
  float fVar17;
  float unaff_s12;
  float fVar18;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar19;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  fVar13 = (unaff_s13 * param_4 - unaff_s12 * unaff_s8) - unaff_s11 * unaff_s14;
  if (*(char *)(unaff_x24 + 0xe9b) == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    *(undefined1 *)(unaff_x24 + 0xe9b) = 1;
  }
  if ((*(int *)(*unaff_x25 + 0xe0) == 0) &&
     (thunk_FUN_01ee6d7c(), *(char *)(unaff_x24 + 0xe9b) == '\0')) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    *(undefined1 *)(unaff_x24 + 0xe9b) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_0482f03e == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03e = '\x01';
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0368f764;
  iVar1 = *(int *)(unaff_x20 + 0x28);
  fVar19 = unaff_s12 + (unaff_s8 * fVar13) / param_1;
  fVar15 = (unaff_s13 * fVar13) / param_1 + 0.0;
  fVar18 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar13 = unaff_s11 + (unaff_s14 * fVar13) / param_1;
  fVar17 = SQRT(unaff_s12 * unaff_s12 + 0.0 + unaff_s11 * unaff_s11);
  fVar16 = SQRT(fVar13 * fVar13 + fVar19 * fVar19 + fVar15 * fVar15);
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if (iVar1 == 0) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar17) && !NAN(fVar18)) {
      bVar3 = fVar17 < fVar18;
      bVar4 = fVar17 == fVar18;
      bVar5 = false;
    }
  }
  if (bVar4 || bVar3 != bVar5) {
    iVar1 = 1;
  }
  if (fVar18 < fVar16) {
    return 0;
  }
  if (DAT_0482ef73 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    DAT_0482ef73 = '\x01';
  }
  fVar9 = ABS(fStack000000000000000c);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar14 = **(float **)(*unaff_x26 + 0xb8) * 8.0;
  fVar2 = fVar9 * DAT_00c927dc;
  if (fVar9 * DAT_00c927dc <= fVar14) {
    fVar2 = fVar14;
  }
  if (ABS(0.0 - fStack000000000000000c) < fVar2) {
    return 0;
  }
  if (fVar17 <= fVar18) {
    if (iVar1 == 2) {
      return 0;
    }
  }
  else if ((unaff_s13 * -0.0 - fStack0000000000000010 * fStack0000000000000008) -
           fStack0000000000000014 * unaff_s14 < 0.0) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0368f764;
  fVar17 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar16 = SQRT(fVar17 * fVar17 - fVar16 * fVar16);
  if (DAT_0482f03f == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03f = '\x01';
  }
  fVar9 = fStack0000000000000010 - (fVar19 - fStack0000000000000008 * fVar16);
  fVar18 = (unaff_s13 * fVar16 - fVar15) + 0.0;
  fVar17 = fStack0000000000000014 - (fVar13 - unaff_s14 * fVar16);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    cVar7 = DAT_0482f03f;
  }
  else {
    cVar7 = '\x01';
  }
  fVar17 = fVar17 * fVar17;
  fVar18 = fVar17 + fVar9 * fVar9 + fVar18 * fVar18;
  if (cVar7 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03f = '\x01';
  }
  fStack0000000000000010 = fStack0000000000000010 - (fVar19 + fStack0000000000000008 * fVar16);
  fVar15 = 0.0 - (fVar15 + unaff_s13 * fVar16);
  fVar18 = SQRT(fVar18) / fStack000000000000000c;
  fStack0000000000000014 = fStack0000000000000014 - (fVar13 + unaff_s14 * fVar16);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fStack0000000000000014 = fStack0000000000000014 * fStack0000000000000014;
  fStack000000000000000c =
       SQRT(fStack0000000000000014 +
            fStack0000000000000010 * fStack0000000000000010 + fVar15 * fVar15) /
       fStack000000000000000c;
  uVar11 = FUN_04043b74(fVar18,&stack0x00000018,0);
  fVar13 = fVar17;
  fVar15 = fStack0000000000000014;
  uVar12 = FUN_04043b74(fStack000000000000000c,&stack0x00000018,0);
  if ((in_stack_00000000._4_4_ <= 0.0) ||
     (fVar16 = (float)FUN_0368ed88(fVar18), fVar16 <= in_stack_00000000._4_4_)) {
    fVar16 = *(float *)(unaff_x20 + 0x2c);
    bVar3 = fVar16 <= 0.0 || ABS(fStack0000000000000014) <= fVar16 * 0.5;
    if (0.0 < in_stack_00000000._4_4_) goto LAB_0368f4dc;
LAB_0368f508:
    if (!(bool)(bVar3 & iVar1 != 1)) {
      if ((0.0 < fVar16) && (fVar16 * 0.5 < ABS(fVar15))) {
        return 0;
      }
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (lVar6 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), lVar6 != 0)) {
        fVar16 = fVar13;
        uVar10 = FUN_0407ba80(uVar12,lVar6,0);
        *unaff_x19 = uVar10;
        unaff_x19[1] = fVar15;
        unaff_x19[2] = fVar16;
        if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0368f764;
        lVar6 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0);
        if (*(char *)(unaff_x24 + 0xe9b) == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
          *(undefined1 *)(unaff_x24 + 0xe9b) = 1;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar16 = (float)uVar12;
        fVar15 = SQRT(fVar13 * fVar13 + fVar16 * fVar16 + 0.0);
        if (fVar15 <= unaff_s15) {
          if (*(char *)(unaff_x23 + 0xe12) == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
            *(undefined1 *)(unaff_x23 + 0xe12) = 1;
          }
          pfVar8 = *(float **)(*unaff_x22 + 0xb8);
          fVar16 = *pfVar8;
          fVar17 = pfVar8[1];
          fVar15 = pfVar8[2];
        }
        else {
          fVar17 = 0.0 / fVar15;
          fVar16 = -fVar16 / fVar15;
          fVar15 = -fVar13 / fVar15;
        }
        if (lVar6 == 0) goto LAB_0368f764;
        uVar10 = FUN_0407e3a8(fVar16,lVar6,0);
        unaff_x19[3] = uVar10;
        unaff_x19[4] = fVar17;
        unaff_x19[5] = fVar15;
        goto LAB_0368f608;
      }
      goto LAB_0368f764;
    }
  }
  else {
    bVar3 = false;
LAB_0368f4dc:
    fVar16 = (float)FUN_0368ed88(fStack000000000000000c);
    if (fVar16 <= in_stack_00000000._4_4_) {
      fVar16 = *(float *)(unaff_x20 + 0x2c);
      goto LAB_0368f508;
    }
    if (!(bool)(bVar3 & iVar1 != 1)) {
      return 0;
    }
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar6 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), lVar6 != 0)) {
    fVar13 = fVar17;
    uVar10 = FUN_0407ba80(uVar11,lVar6,0);
    *unaff_x19 = uVar10;
    unaff_x19[1] = fStack0000000000000014;
    unaff_x19[2] = fVar13;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar6 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0);
      if (*(char *)(unaff_x24 + 0xe9b) == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        *(undefined1 *)(unaff_x24 + 0xe9b) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar13 = (float)uVar11;
      fVar15 = SQRT(fVar17 * fVar17 + fVar13 * fVar13 + 0.0);
      if (fVar15 <= unaff_s15) {
        if (*(char *)(unaff_x23 + 0xe12) == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          *(undefined1 *)(unaff_x23 + 0xe12) = 1;
        }
        pfVar8 = *(float **)(*unaff_x22 + 0xb8);
        fVar13 = *pfVar8;
        fVar16 = pfVar8[1];
        fVar17 = pfVar8[2];
      }
      else {
        fVar13 = fVar13 / fVar15;
        fVar16 = 0.0 / fVar15;
        fVar17 = fVar17 / fVar15;
      }
      if (lVar6 != 0) {
        uVar10 = FUN_0407e3a8(fVar13,lVar6,0);
        unaff_x19[3] = uVar10;
        unaff_x19[4] = fVar16;
        unaff_x19[5] = fVar17;
        fStack000000000000000c = fVar18;
LAB_0368f608:
        uVar10 = FUN_0368ed88(fStack000000000000000c);
        unaff_x19[6] = uVar10;
        return 1;
      }
    }
  }
LAB_0368f764:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


