/*
FUNCTION_NAME: OVRPlugin$$GetFaceStateInternal
ENTRY_POINT: 0368c7f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetFaceStateInternal(float param_1,float param_2,float param_3,float param_4)

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
  float fVar10;
  float fVar11;
  float unaff_s10;
  float unaff_s11;
  float fVar12;
  float fVar13;
  float in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  fVar7 = param_2 + param_1;
  if (unaff_s8 <= param_2 + param_1) {
    fVar7 = unaff_s8;
  }
  if (unaff_s8 < param_4) {
    fVar7 = param_4;
  }
  fVar6 = sinf(fVar7 * param_3);
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) {
    fVar10 = *(float *)(lVar4 + 0x20);
    fVar6 = fVar6 * fVar10;
    fVar7 = cosf(fVar7 * param_3);
    fVar7 = fVar7 * fVar10;
    if (DAT_0482f03e == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482f03e = '\x01';
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if ((*(long *)(unaff_x20 + 0x20) != 0) &&
       (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) {
      fVar10 = *(float *)(lVar4 + 0x20);
      if (DAT_0482ee9b == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee9b = '\x01';
      }
      fVar12 = 0.0 - fVar6;
      fVar11 = 0.0 - fVar7;
      fVar9 = fStack000000000000001c - fStack000000000000001c;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar2 = DAT_00c926ac;
      fVar8 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar12 * fVar12);
      if (fVar8 <= DAT_00c926ac) {
        if (DAT_0482ee12 == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          DAT_0482ee12 = '\x01';
        }
        pfVar5 = *(float **)
                  (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
        fVar12 = *pfVar5;
        fVar9 = pfVar5[1];
        fVar11 = pfVar5[2];
      }
      else {
        fVar12 = fVar12 / fVar8;
        fVar9 = fVar9 / fVar8;
        fVar11 = fVar11 / fVar8;
      }
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        iVar1 = *(int *)(*(long *)(unaff_x20 + 0x20) + 0x28);
        if ((iVar1 != 1) &&
           ((iVar1 == 2 ||
            (fVar10 < SQRT(unaff_s11 * unaff_s11 +
                           unaff_s10 * unaff_s10 +
                           (in_stack_00000010 - fStack000000000000001c) *
                           (in_stack_00000010 - fStack000000000000001c)))))) {
          fVar12 = -fVar12;
          fVar9 = -fVar9;
          fVar11 = -fVar11;
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
          fVar6 = (float)FUN_0407ba80(fVar6,lVar4,0);
          *unaff_x19 = fVar6;
          unaff_x19[1] = fStack000000000000001c;
          unaff_x19[2] = fVar7;
          fVar10 = *unaff_x21;
          fVar8 = unaff_x21[1];
          fVar13 = unaff_x21[2];
          if (*(char *)(unaff_x23 + 0x3f) == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
            *(undefined1 *)(unaff_x23 + 0x3f) = 1;
          }
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          unaff_x19[6] = SQRT((fVar13 - fVar7) * (fVar13 - fVar7) +
                              (fVar10 - fVar6) * (fVar10 - fVar6) +
                              (fVar8 - fStack000000000000001c) * (fVar8 - fStack000000000000001c));
          if (((*(long *)(unaff_x20 + 0x20) != 0) &&
              (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) &&
             (lVar4 = FUN_04070398(lVar4,0), lVar4 != 0)) {
            fVar7 = (float)FUN_0407e3a8(fVar12,lVar4,0);
            if (DAT_0482ee9b == '\0') {
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
              DAT_0482ee9b = '\x01';
            }
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar6 = SQRT(fVar11 * fVar11 + fVar7 * fVar7 + fVar9 * fVar9);
            if (fVar6 <= fVar2) {
              if (DAT_0482ee12 == '\0') {
                thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
                DAT_0482ee12 = '\x01';
              }
              pfVar5 = *(float **)
                        (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                        0xb8);
              fVar7 = *pfVar5;
              fVar9 = pfVar5[1];
              fVar11 = pfVar5[2];
            }
            else {
              fVar7 = fVar7 / fVar6;
              fVar9 = fVar9 / fVar6;
              fVar11 = fVar11 / fVar6;
            }
            unaff_x19[3] = fVar7;
            unaff_x19[4] = fVar9;
            unaff_x19[5] = fVar11;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


