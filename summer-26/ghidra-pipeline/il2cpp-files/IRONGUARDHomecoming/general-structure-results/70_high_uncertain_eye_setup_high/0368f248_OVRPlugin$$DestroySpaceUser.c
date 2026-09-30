/*
FUNCTION_NAME: OVRPlugin$$DestroySpaceUser
ENTRY_POINT: 0368f248
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__DestroySpaceUser(long param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  char cVar6;
  float *pfVar7;
  int in_w9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float unaff_s9;
  float unaff_s10;
  float fVar14;
  float unaff_s11;
  float fVar15;
  float fVar16;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  fVar16 = *(float *)(param_1 + 0x20);
  fVar13 = unaff_s11 + unaff_s10;
  fVar15 = SQRT(param_3 + param_4 + param_2);
  fVar14 = SQRT(fVar13 * fVar13 + unaff_s15 * unaff_s15 + unaff_s9 * unaff_s9);
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  if (in_w9 == 0) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar15) && !NAN(fVar16)) {
      bVar2 = fVar15 < fVar16;
      bVar3 = fVar15 == fVar16;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar2 != bVar4) {
    in_w9 = 1;
  }
  if (fVar16 < fVar14) {
    return 0;
  }
  if (DAT_0482ef73 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    DAT_0482ef73 = '\x01';
  }
  fVar8 = ABS(fStack000000000000000c);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar12 = **(float **)(*unaff_x26 + 0xb8) * 8.0;
  fVar1 = fVar8 * DAT_00c927dc;
  if (fVar8 * DAT_00c927dc <= fVar12) {
    fVar1 = fVar12;
  }
  if (ABS(0.0 - fStack000000000000000c) < fVar1) {
    return 0;
  }
  if (fVar15 <= fVar16) {
    if (in_w9 == 2) {
      return 0;
    }
  }
  else if ((unaff_s13 * -0.0 - fStack0000000000000010 * fStack0000000000000008) -
           fStack0000000000000014 * unaff_s14 < 0.0) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0368f764;
  fVar15 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar14 = SQRT(fVar15 * fVar15 - fVar14 * fVar14);
  if (DAT_0482f03f == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03f = '\x01';
  }
  fVar8 = fStack0000000000000010 - (unaff_s15 - fStack0000000000000008 * fVar14);
  fVar16 = (unaff_s13 * fVar14 - unaff_s9) + 0.0;
  fVar15 = fStack0000000000000014 - (fVar13 - unaff_s14 * fVar14);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    cVar6 = DAT_0482f03f;
  }
  else {
    cVar6 = '\x01';
  }
  fVar15 = fVar15 * fVar15;
  fVar16 = fVar15 + fVar8 * fVar8 + fVar16 * fVar16;
  if (cVar6 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03f = '\x01';
  }
  fStack0000000000000010 = fStack0000000000000010 - (unaff_s15 + fStack0000000000000008 * fVar14);
  fVar8 = 0.0 - (unaff_s9 + unaff_s13 * fVar14);
  fVar16 = SQRT(fVar16) / fStack000000000000000c;
  fStack0000000000000014 = fStack0000000000000014 - (fVar13 + unaff_s14 * fVar14);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fStack0000000000000014 = fStack0000000000000014 * fStack0000000000000014;
  fStack000000000000000c =
       SQRT(fStack0000000000000014 + fStack0000000000000010 * fStack0000000000000010 + fVar8 * fVar8
           ) / fStack000000000000000c;
  uVar10 = FUN_04043b74(fVar16,&stack0x00000018,0);
  fVar13 = fVar15;
  fVar14 = fStack0000000000000014;
  uVar11 = FUN_04043b74(fStack000000000000000c,&stack0x00000018,0);
  if ((fStack0000000000000004 <= 0.0) ||
     (fVar8 = (float)FUN_0368ed88(fVar16), fVar8 <= fStack0000000000000004)) {
    fVar8 = *(float *)(unaff_x20 + 0x2c);
    bVar2 = fVar8 <= 0.0 || ABS(fStack0000000000000014) <= fVar8 * 0.5;
    if (0.0 < fStack0000000000000004) goto LAB_0368f4dc;
LAB_0368f508:
    if (!(bool)(bVar2 & in_w9 != 1)) {
      if ((0.0 < fVar8) && (fVar8 * 0.5 < ABS(fVar14))) {
        return 0;
      }
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (lVar5 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), lVar5 != 0)) {
        fVar15 = fVar13;
        uVar9 = FUN_0407ba80(uVar11,lVar5,0);
        *unaff_x19 = uVar9;
        unaff_x19[1] = fVar14;
        unaff_x19[2] = fVar15;
        if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0368f764;
        lVar5 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0);
        if (*(char *)(unaff_x24 + 0xe9b) == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
          *(undefined1 *)(unaff_x24 + 0xe9b) = 1;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar15 = (float)uVar11;
        fVar14 = SQRT(fVar13 * fVar13 + fVar15 * fVar15 + 0.0);
        if (fVar14 <= fStack0000000000000000) {
          if (*(char *)(unaff_x23 + 0xe12) == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
            *(undefined1 *)(unaff_x23 + 0xe12) = 1;
          }
          pfVar7 = *(float **)(*unaff_x22 + 0xb8);
          fVar15 = *pfVar7;
          fVar16 = pfVar7[1];
          fVar14 = pfVar7[2];
        }
        else {
          fVar16 = 0.0 / fVar14;
          fVar15 = -fVar15 / fVar14;
          fVar14 = -fVar13 / fVar14;
        }
        if (lVar5 == 0) goto LAB_0368f764;
        uVar9 = FUN_0407e3a8(fVar15,lVar5,0);
        unaff_x19[3] = uVar9;
        unaff_x19[4] = fVar16;
        unaff_x19[5] = fVar14;
        goto LAB_0368f608;
      }
      goto LAB_0368f764;
    }
  }
  else {
    bVar2 = false;
LAB_0368f4dc:
    fVar8 = (float)FUN_0368ed88(fStack000000000000000c);
    if (fVar8 <= fStack0000000000000004) {
      fVar8 = *(float *)(unaff_x20 + 0x2c);
      goto LAB_0368f508;
    }
    if (!(bool)(bVar2 & in_w9 != 1)) {
      return 0;
    }
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar5 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), lVar5 != 0)) {
    fVar13 = fVar15;
    uVar9 = FUN_0407ba80(uVar10,lVar5,0);
    *unaff_x19 = uVar9;
    unaff_x19[1] = fStack0000000000000014;
    unaff_x19[2] = fVar13;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar5 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0);
      if (*(char *)(unaff_x24 + 0xe9b) == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        *(undefined1 *)(unaff_x24 + 0xe9b) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar13 = (float)uVar10;
      fVar14 = SQRT(fVar15 * fVar15 + fVar13 * fVar13 + 0.0);
      if (fVar14 <= fStack0000000000000000) {
        if (*(char *)(unaff_x23 + 0xe12) == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          *(undefined1 *)(unaff_x23 + 0xe12) = 1;
        }
        pfVar7 = *(float **)(*unaff_x22 + 0xb8);
        fVar13 = *pfVar7;
        fVar8 = pfVar7[1];
        fVar15 = pfVar7[2];
      }
      else {
        fVar13 = fVar13 / fVar14;
        fVar8 = 0.0 / fVar14;
        fVar15 = fVar15 / fVar14;
      }
      if (lVar5 != 0) {
        uVar9 = FUN_0407e3a8(fVar13,lVar5,0);
        unaff_x19[3] = uVar9;
        unaff_x19[4] = fVar8;
        unaff_x19[5] = fVar15;
        fStack000000000000000c = fVar16;
LAB_0368f608:
        uVar9 = FUN_0368ed88(fStack000000000000000c);
        unaff_x19[6] = uVar9;
        return 1;
      }
    }
  }
LAB_0368f764:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


