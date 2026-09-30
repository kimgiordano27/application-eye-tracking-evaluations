/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 0368c724
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_10;validity_or_gating_hits_11;functionality_gaze_retrieval_or_extraction
*/


bool OVRPlugin__get_faceTrackingEnabled
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  long lVar4;
  float *pfVar5;
  float *unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float fVar9;
  float unaff_s9;
  float fVar10;
  float unaff_s10;
  float unaff_s11;
  float fVar11;
  float unaff_s12;
  float unaff_s13;
  float fVar12;
  float unaff_s14;
  float unaff_s15;
  float fVar13;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  fVar8 = fStack000000000000001c;
  if (unaff_s14 == 0.0) {
    fVar12 = 0.0;
  }
  else {
    fVar6 = SQRT(param_3 * param_3 + unaff_s10 * unaff_s10 + unaff_s11) - unaff_s15;
    if ((fVar6 < 0.0) || (fVar6 * fVar6 < unaff_s14)) {
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar9 = SQRT(unaff_s14);
      fVar12 = fStack0000000000000014 + (unaff_s13 / fVar9) * fVar6;
      fVar8 = fStack000000000000001c + (unaff_s8 / fVar9) * fVar6;
      unaff_s12 = param_3 + (unaff_s9 / fVar9) * fVar6;
    }
    else {
      fVar12 = 0.0;
    }
  }
  if (DAT_0482f03e == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03e = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) {
    fVar6 = *(float *)(lVar4 + 0x20);
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    fVar11 = 0.0 - fVar12;
    fVar10 = 0.0 - unaff_s12;
    fVar9 = fStack000000000000001c - fVar8;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar2 = DAT_00c926ac;
    fVar7 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11);
    if (fVar7 <= DAT_00c926ac) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      pfVar5 = *(float **)
                (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
      fVar11 = *pfVar5;
      fVar9 = pfVar5[1];
      fVar10 = pfVar5[2];
    }
    else {
      fVar11 = fVar11 / fVar7;
      fVar9 = fVar9 / fVar7;
      fVar10 = fVar10 / fVar7;
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      iVar1 = *(int *)(*(long *)(unaff_x20 + 0x20) + 0x28);
      if ((iVar1 != 1) &&
         ((iVar1 == 2 ||
          (fVar6 < SQRT(param_3 * param_3 +
                        fStack0000000000000014 * fStack0000000000000014 +
                        (fStack0000000000000010 - fStack000000000000001c) *
                        (fStack0000000000000010 - fStack000000000000001c)))))) {
        fVar11 = -fVar11;
        fVar9 = -fVar9;
        fVar10 = -fVar10;
      }
      unaff_x19[0] = 0.0;
      unaff_x19[1] = 0.0;
      unaff_x19[2] = 0.0;
      unaff_x19[3] = 0.0;
      unaff_x19[6] = 0.0;
      unaff_x19[4] = 0.0;
      unaff_x19[5] = 0.0;
      if (((*(long *)(unaff_x20 + 0x20) != 0) &&
          (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) &&
         (lVar4 = FUN_04070398(lVar4,0), lVar4 != 0)) {
        fVar6 = (float)FUN_0407ba80(fVar12,lVar4,0);
        *unaff_x19 = fVar6;
        unaff_x19[1] = fVar8;
        unaff_x19[2] = unaff_s12;
        fVar12 = *unaff_x21;
        fVar7 = unaff_x21[1];
        fVar13 = unaff_x21[2];
        if (*(char *)(unaff_x23 + 0x3f) == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
          *(undefined1 *)(unaff_x23 + 0x3f) = 1;
        }
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        unaff_x19[6] = SQRT((fVar13 - unaff_s12) * (fVar13 - unaff_s12) +
                            (fVar12 - fVar6) * (fVar12 - fVar6) + (fVar7 - fVar8) * (fVar7 - fVar8))
        ;
        if (((*(long *)(unaff_x20 + 0x20) != 0) &&
            (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) &&
           (lVar4 = FUN_04070398(lVar4,0), lVar4 != 0)) {
          fVar8 = (float)FUN_0407e3a8(fVar11,lVar4,0);
          if (DAT_0482ee9b == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
            DAT_0482ee9b = '\x01';
          }
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          fVar6 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
          if (fVar6 <= fVar2) {
            if (DAT_0482ee12 == '\0') {
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
              DAT_0482ee12 = '\x01';
            }
            pfVar5 = *(float **)
                      (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                      0xb8);
            fVar8 = *pfVar5;
            fVar9 = pfVar5[1];
            fVar10 = pfVar5[2];
          }
          else {
            fVar8 = fVar8 / fVar6;
            fVar9 = fVar9 / fVar6;
            fVar10 = fVar10 / fVar6;
          }
          unaff_x19[3] = fVar8;
          unaff_x19[4] = fVar9;
          unaff_x19[5] = fVar10;
          if (fStack0000000000000018 <= 0.0) {
            bVar3 = true;
          }
          else {
            bVar3 = unaff_x19[6] <= fStack0000000000000018;
          }
          return bVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


