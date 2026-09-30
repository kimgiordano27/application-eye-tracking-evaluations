/*
FUNCTION_NAME: OVRPlugin$$TryLocateSpace
ENTRY_POINT: 0368f450
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__TryLocateSpace(undefined1 param_1 [16],float param_2,float param_3)

{
  bool bVar1;
  long lVar2;
  float *pfVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000014;
  
  uVar7 = FUN_04043b74(&stack0x00000018,0);
  fStack0000000000000014 = param_3;
  fVar6 = param_2;
  uVar8 = FUN_04043b74(&stack0x00000018,0);
  if ((fStack0000000000000004 <= 0.0) ||
     (fVar4 = (float)FUN_0368ed88(), fVar4 <= fStack0000000000000004)) {
    fVar4 = *(float *)(unaff_x20 + 0x2c);
    bVar1 = fVar4 <= 0.0 || ABS(param_2) <= fVar4 * 0.5;
    if (0.0 < fStack0000000000000004) goto LAB_0368f4dc;
LAB_0368f508:
    if (!(bool)(bVar1 & unaff_w21 != 1)) {
      if ((0.0 < fVar4) && (fVar4 * 0.5 < ABS(fVar6))) {
        return 0;
      }
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (lVar2 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), fVar4 = fStack0000000000000014,
         lVar2 != 0)) {
        fVar9 = fStack0000000000000014;
        uVar5 = FUN_0407ba80(uVar8,lVar2,0);
        *unaff_x19 = uVar5;
        unaff_x19[1] = fVar6;
        unaff_x19[2] = fVar9;
        if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0368f764;
        lVar2 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0);
        if (*(char *)(unaff_x24 + 0xe9b) == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
          *(undefined1 *)(unaff_x24 + 0xe9b) = 1;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar9 = (float)uVar8;
        fVar6 = SQRT(fVar4 * fVar4 + fVar9 * fVar9 + 0.0);
        if (fVar6 <= fStack0000000000000000) {
          if (*(char *)(unaff_x23 + 0xe12) == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
            *(undefined1 *)(unaff_x23 + 0xe12) = 1;
          }
          pfVar3 = *(float **)(*unaff_x22 + 0xb8);
          fVar9 = *pfVar3;
          fVar10 = pfVar3[1];
          fVar6 = pfVar3[2];
        }
        else {
          fVar10 = 0.0 / fVar6;
          fVar9 = -fVar9 / fVar6;
          fVar6 = -fVar4 / fVar6;
        }
        if (lVar2 == 0) goto LAB_0368f764;
        uVar5 = FUN_0407e3a8(fVar9,lVar2,0);
        unaff_x19[3] = uVar5;
        unaff_x19[4] = fVar10;
        unaff_x19[5] = fVar6;
        goto LAB_0368f608;
      }
      goto LAB_0368f764;
    }
  }
  else {
    bVar1 = false;
LAB_0368f4dc:
    fVar4 = (float)FUN_0368ed88();
    if (fVar4 <= fStack0000000000000004) {
      fVar4 = *(float *)(unaff_x20 + 0x2c);
      goto LAB_0368f508;
    }
    if (!(bool)(bVar1 & unaff_w21 != 1)) {
      return 0;
    }
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar2 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) {
    fVar6 = param_3;
    uVar5 = FUN_0407ba80(uVar7,lVar2,0);
    *unaff_x19 = uVar5;
    unaff_x19[1] = param_2;
    unaff_x19[2] = fVar6;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar2 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0);
      if (*(char *)(unaff_x24 + 0xe9b) == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        *(undefined1 *)(unaff_x24 + 0xe9b) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar6 = (float)uVar7;
      fVar4 = SQRT(param_3 * param_3 + fVar6 * fVar6 + 0.0);
      if (fVar4 <= fStack0000000000000000) {
        if (*(char *)(unaff_x23 + 0xe12) == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          *(undefined1 *)(unaff_x23 + 0xe12) = 1;
        }
        pfVar3 = *(float **)(*unaff_x22 + 0xb8);
        fVar6 = *pfVar3;
        fVar9 = pfVar3[1];
        param_3 = pfVar3[2];
      }
      else {
        fVar6 = fVar6 / fVar4;
        fVar9 = 0.0 / fVar4;
        param_3 = param_3 / fVar4;
      }
      if (lVar2 != 0) {
        uVar5 = FUN_0407e3a8(fVar6,lVar2,0);
        unaff_x19[3] = uVar5;
        unaff_x19[4] = fVar9;
        unaff_x19[5] = param_3;
LAB_0368f608:
        uVar5 = FUN_0368ed88();
        unaff_x19[6] = uVar5;
        return 1;
      }
    }
  }
LAB_0368f764:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


