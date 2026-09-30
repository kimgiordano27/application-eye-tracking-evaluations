/*
FUNCTION_NAME: OVRPlugin$$SetVirtualKeyboardModelVisibility
ENTRY_POINT: 0368c660
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__SetVirtualKeyboardModelVisibility
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  long lVar4;
  float *pfVar5;
  float *unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float fVar11;
  float unaff_s11;
  float unaff_s12;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_stack_00000010;
  undefined8 in_stack_00000018;
  float in_stack_00000020;
  
  plVar6 = *(long **)(unaff_x22 + 0x328);
  fVar8 = in_stack_00000018._4_4_;
  if (unaff_s12 < 360.0) {
    fVar9 = atan2f(param_4,unaff_s11);
    fVar12 = fmodf(fVar9 * DAT_00c92a9c,360.0);
    fVar9 = fmodf(in_stack_00000020,360.0);
    if (fVar12 <= fVar9 + 180.0) {
      in_stack_00000010 = param_2;
      if (fVar12 < fVar9 + -180.0) {
        fVar12 = fVar12 + 360.0;
      }
    }
    else {
      fVar12 = fVar12 + -360.0;
    }
    fVar10 = fVar9 - unaff_s12 * 0.5;
    fVar9 = unaff_s12 * 0.5 + fVar9;
    if (fVar12 <= fVar9) {
      fVar9 = fVar12;
    }
    if (fVar12 < fVar10) {
      fVar9 = fVar10;
    }
    fVar9 = fVar9 * DAT_00c925e8;
    fVar12 = sinf(fVar9);
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 == 0)) goto LAB_0368cbfc;
    fVar10 = *(float *)(lVar4 + 0x20);
    fVar12 = fVar12 * fVar10;
    fVar9 = cosf(fVar9);
    fVar9 = fVar9 * fVar10;
  }
  else {
    if (DAT_0482f03f == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482f03f = '\x01';
    }
    if (*(int *)(*plVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 == 0)) goto LAB_0368cbfc;
    fVar14 = *(float *)(lVar4 + 0x20);
    fVar10 = in_stack_00000018._4_4_ - in_stack_00000018._4_4_;
    if (DAT_0482f966 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482f966 = '\x01';
    }
    fVar9 = 0.0;
    fVar12 = 0.0 - param_4;
    fVar11 = 0.0 - unaff_s11;
    fVar13 = fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10;
    if (fVar13 == 0.0) {
      fVar12 = 0.0;
    }
    else {
      fVar14 = SQRT(unaff_s11 * unaff_s11 + param_4 * param_4 + fVar10 * fVar10) - fVar14;
      if ((fVar14 < 0.0) || (fVar14 * fVar14 < fVar13)) {
        if (*(int *)(*plVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar13 = SQRT(fVar13);
        fVar12 = param_4 + (fVar12 / fVar13) * fVar14;
        fVar9 = unaff_s11 + (fVar11 / fVar13) * fVar14;
        fVar8 = in_stack_00000018._4_4_ + (fVar10 / fVar13) * fVar14;
      }
      else {
        fVar12 = 0.0;
      }
    }
  }
  if (DAT_0482f03e == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03e = '\x01';
  }
  if (*(int *)(*plVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) {
    fVar10 = *(float *)(lVar4 + 0x20);
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    fVar11 = 0.0 - fVar12;
    fVar13 = 0.0 - fVar9;
    fVar14 = in_stack_00000018._4_4_ - fVar8;
    if (*(int *)(*plVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar2 = DAT_00c926ac;
    fVar7 = SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar11 * fVar11);
    if (fVar7 <= DAT_00c926ac) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      pfVar5 = *(float **)
                (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
      fVar11 = *pfVar5;
      fVar14 = pfVar5[1];
      fVar13 = pfVar5[2];
    }
    else {
      fVar11 = fVar11 / fVar7;
      fVar14 = fVar14 / fVar7;
      fVar13 = fVar13 / fVar7;
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      iVar1 = *(int *)(*(long *)(unaff_x20 + 0x20) + 0x28);
      if ((iVar1 != 1) &&
         ((iVar1 == 2 ||
          (fVar10 < SQRT(unaff_s11 * unaff_s11 +
                         param_4 * param_4 +
                         (in_stack_00000010 - in_stack_00000018._4_4_) *
                         (in_stack_00000010 - in_stack_00000018._4_4_)))))) {
        fVar11 = -fVar11;
        fVar14 = -fVar14;
        fVar13 = -fVar13;
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
        fVar12 = (float)FUN_0407ba80(fVar12,lVar4,0);
        *unaff_x19 = fVar12;
        unaff_x19[1] = fVar8;
        unaff_x19[2] = fVar9;
        fVar10 = *unaff_x21;
        fVar7 = unaff_x21[1];
        fVar15 = unaff_x21[2];
        if (DAT_0482f03f == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
          DAT_0482f03f = '\x01';
        }
        if (*(int *)(*plVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        unaff_x19[6] = SQRT((fVar15 - fVar9) * (fVar15 - fVar9) +
                            (fVar10 - fVar12) * (fVar10 - fVar12) +
                            (fVar7 - fVar8) * (fVar7 - fVar8));
        if (((*(long *)(unaff_x20 + 0x20) != 0) &&
            (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) &&
           (lVar4 = FUN_04070398(lVar4,0), lVar4 != 0)) {
          fVar8 = (float)FUN_0407e3a8(fVar11,lVar4,0);
          if (DAT_0482ee9b == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
            DAT_0482ee9b = '\x01';
          }
          if (*(int *)(*plVar6 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          fVar9 = SQRT(fVar13 * fVar13 + fVar8 * fVar8 + fVar14 * fVar14);
          if (fVar9 <= fVar2) {
            if (DAT_0482ee12 == '\0') {
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
              DAT_0482ee12 = '\x01';
            }
            pfVar5 = *(float **)
                      (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                      0xb8);
            fVar8 = *pfVar5;
            fVar14 = pfVar5[1];
            fVar13 = pfVar5[2];
          }
          else {
            fVar8 = fVar8 / fVar9;
            fVar14 = fVar14 / fVar9;
            fVar13 = fVar13 / fVar9;
          }
          unaff_x19[3] = fVar8;
          unaff_x19[4] = fVar14;
          unaff_x19[5] = fVar13;
          if (unaff_s8 <= 0.0) {
            bVar3 = true;
          }
          else {
            bVar3 = unaff_x19[6] <= unaff_s8;
          }
          return bVar3;
        }
      }
    }
  }
LAB_0368cbfc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


