/*
FUNCTION_NAME: OVRPlugin$$GetSpaceUserId
ENTRY_POINT: 0368f090
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceUserId(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  char cVar8;
  float *pfVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float unaff_s8;
  float fVar17;
  float fVar18;
  float unaff_s9;
  float fVar19;
  float unaff_s10;
  float fVar20;
  float unaff_s11;
  float fVar21;
  float unaff_s12;
  float fVar22;
  float unaff_s13;
  float fVar23;
  float unaff_s15;
  undefined8 in_stack_00000000;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  fVar10 = SQRT(param_2 + param_1);
  fStack000000000000000c = unaff_s13;
  if (fVar10 <= unaff_s15) {
    if (*(char *)(unaff_x23 + 0xe12) == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      *(undefined1 *)(unaff_x23 + 0xe12) = 1;
    }
    pfVar9 = *(float **)(*unaff_x22 + 0xb8);
    fVar17 = *pfVar9;
    fVar23 = pfVar9[1];
    fVar10 = pfVar9[2];
  }
  else {
    fVar17 = unaff_s8 / fVar10;
    fVar23 = unaff_s10 / fVar10;
    fVar10 = unaff_s9 / fVar10;
  }
  if (DAT_04833bbb == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    DAT_04833bbb = '\x01';
  }
  puVar3 = Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__;
  fVar11 = fVar10 * fVar10 + fVar17 * fVar17 + fVar23 * fVar23;
  if (**(float **)
        (*(long *)
          Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__ +
        0xb8) <= fVar11) {
    fVar20 = (fVar23 * -0.0 - unaff_s12 * fVar17) - unaff_s11 * fVar10;
    fVar18 = (fVar17 * fVar20) / fVar11;
    fVar19 = (fVar23 * fVar20) / fVar11;
    fVar11 = (fVar10 * fVar20) / fVar11;
  }
  else {
    if (*(char *)(unaff_x23 + 0xe12) == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      *(undefined1 *)(unaff_x23 + 0xe12) = 1;
    }
    pfVar9 = *(float **)(*unaff_x22 + 0xb8);
    fVar18 = *pfVar9;
    fVar19 = pfVar9[1];
    fVar11 = pfVar9[2];
  }
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
  fVar18 = unaff_s12 + fVar18;
  fVar19 = fVar19 + 0.0;
  fVar22 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar11 = unaff_s11 + fVar11;
  fVar21 = SQRT(unaff_s12 * unaff_s12 + 0.0 + unaff_s11 * unaff_s11);
  fVar20 = SQRT(fVar11 * fVar11 + fVar18 * fVar18 + fVar19 * fVar19);
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  if (iVar1 == 0) {
    bVar4 = false;
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar21) && !NAN(fVar22)) {
      bVar4 = fVar21 < fVar22;
      bVar5 = fVar21 == fVar22;
      bVar6 = false;
    }
  }
  if (bVar5 || bVar4 != bVar6) {
    iVar1 = 1;
  }
  if (fVar22 < fVar20) {
    return 0;
  }
  if (DAT_0482ef73 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    DAT_0482ef73 = '\x01';
  }
  fVar12 = ABS(fStack000000000000000c);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  fVar16 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
  fVar2 = fVar12 * DAT_00c927dc;
  if (fVar12 * DAT_00c927dc <= fVar16) {
    fVar2 = fVar16;
  }
  if (ABS(0.0 - fStack000000000000000c) < fVar2) {
    return 0;
  }
  if (fVar21 <= fVar22) {
    if (iVar1 == 2) {
      return 0;
    }
  }
  else if ((fVar23 * -0.0 - fStack0000000000000010 * fVar17) - fStack0000000000000014 * fVar10 < 0.0
          ) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0368f764;
  fVar21 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar20 = SQRT(fVar21 * fVar21 - fVar20 * fVar20);
  if (DAT_0482f03f == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03f = '\x01';
  }
  fVar12 = fStack0000000000000010 - (fVar18 - fVar17 * fVar20);
  fVar22 = (fVar23 * fVar20 - fVar19) + 0.0;
  fVar21 = fStack0000000000000014 - (fVar11 - fVar10 * fVar20);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    cVar8 = DAT_0482f03f;
  }
  else {
    cVar8 = '\x01';
  }
  fVar21 = fVar21 * fVar21;
  fVar22 = fVar21 + fVar12 * fVar12 + fVar22 * fVar22;
  if (cVar8 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03f = '\x01';
  }
  fStack0000000000000010 = fStack0000000000000010 - (fVar18 + fVar17 * fVar20);
  fVar17 = 0.0 - (fVar19 + fVar23 * fVar20);
  fVar23 = SQRT(fVar22) / fStack000000000000000c;
  fStack0000000000000014 = fStack0000000000000014 - (fVar11 + fVar10 * fVar20);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fStack0000000000000014 = fStack0000000000000014 * fStack0000000000000014;
  fVar10 = SQRT(fStack0000000000000014 +
                fStack0000000000000010 * fStack0000000000000010 + fVar17 * fVar17) /
           fStack000000000000000c;
  uVar14 = FUN_04043b74(fVar23,&stack0x00000018,0);
  fVar17 = fVar21;
  fVar11 = fStack0000000000000014;
  uVar15 = FUN_04043b74(fVar10,&stack0x00000018,0);
  if ((in_stack_00000000._4_4_ <= 0.0) ||
     (fVar20 = (float)FUN_0368ed88(fVar23), fVar20 <= in_stack_00000000._4_4_)) {
    fVar20 = *(float *)(unaff_x20 + 0x2c);
    bVar4 = fVar20 <= 0.0 || ABS(fStack0000000000000014) <= fVar20 * 0.5;
    if (0.0 < in_stack_00000000._4_4_) goto LAB_0368f4dc;
LAB_0368f508:
    if (!(bool)(bVar4 & iVar1 != 1)) {
      if ((0.0 < fVar20) && (fVar20 * 0.5 < ABS(fVar11))) {
        return 0;
      }
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (lVar7 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), lVar7 != 0)) {
        fVar23 = fVar17;
        uVar13 = FUN_0407ba80(uVar15,lVar7,0);
        *unaff_x19 = uVar13;
        unaff_x19[1] = fVar11;
        unaff_x19[2] = fVar23;
        if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0368f764;
        lVar7 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0);
        if (*(char *)(unaff_x24 + 0xe9b) == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
          *(undefined1 *)(unaff_x24 + 0xe9b) = 1;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar11 = (float)uVar15;
        fVar23 = SQRT(fVar17 * fVar17 + fVar11 * fVar11 + 0.0);
        if (fVar23 <= unaff_s15) {
          if (*(char *)(unaff_x23 + 0xe12) == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
            *(undefined1 *)(unaff_x23 + 0xe12) = 1;
          }
          pfVar9 = *(float **)(*unaff_x22 + 0xb8);
          fVar11 = *pfVar9;
          fVar20 = pfVar9[1];
          fVar23 = pfVar9[2];
        }
        else {
          fVar20 = 0.0 / fVar23;
          fVar11 = -fVar11 / fVar23;
          fVar23 = -fVar17 / fVar23;
        }
        if (lVar7 == 0) goto LAB_0368f764;
        uVar13 = FUN_0407e3a8(fVar11,lVar7,0);
        unaff_x19[3] = uVar13;
        unaff_x19[4] = fVar20;
        unaff_x19[5] = fVar23;
        goto LAB_0368f608;
      }
      goto LAB_0368f764;
    }
  }
  else {
    bVar4 = false;
LAB_0368f4dc:
    fVar20 = (float)FUN_0368ed88(fVar10);
    if (fVar20 <= in_stack_00000000._4_4_) {
      fVar20 = *(float *)(unaff_x20 + 0x2c);
      goto LAB_0368f508;
    }
    if (!(bool)(bVar4 & iVar1 != 1)) {
      return 0;
    }
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar7 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), lVar7 != 0)) {
    fVar10 = fVar21;
    uVar13 = FUN_0407ba80(uVar14,lVar7,0);
    *unaff_x19 = uVar13;
    unaff_x19[1] = fStack0000000000000014;
    unaff_x19[2] = fVar10;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar7 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0);
      if (*(char *)(unaff_x24 + 0xe9b) == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        *(undefined1 *)(unaff_x24 + 0xe9b) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar10 = (float)uVar14;
      fVar17 = SQRT(fVar21 * fVar21 + fVar10 * fVar10 + 0.0);
      if (fVar17 <= unaff_s15) {
        if (*(char *)(unaff_x23 + 0xe12) == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          *(undefined1 *)(unaff_x23 + 0xe12) = 1;
        }
        pfVar9 = *(float **)(*unaff_x22 + 0xb8);
        fVar10 = *pfVar9;
        fVar11 = pfVar9[1];
        fVar21 = pfVar9[2];
      }
      else {
        fVar10 = fVar10 / fVar17;
        fVar11 = 0.0 / fVar17;
        fVar21 = fVar21 / fVar17;
      }
      if (lVar7 != 0) {
        uVar13 = FUN_0407e3a8(fVar10,lVar7,0);
        unaff_x19[3] = uVar13;
        unaff_x19[4] = fVar11;
        unaff_x19[5] = fVar21;
        fVar10 = fVar23;
LAB_0368f608:
        uVar13 = FUN_0368ed88(fVar10);
        unaff_x19[6] = uVar13;
        return 1;
      }
    }
  }
LAB_0368f764:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


