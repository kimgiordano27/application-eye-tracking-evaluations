/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 0368ea08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__RetrieveSpaceQueryResults(long *param_1,float param_2)

{
  undefined *puVar1;
  float *pfVar2;
  long lVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar9;
  float unaff_s11;
  float fVar10;
  float unaff_s12;
  float unaff_s13;
  float fVar11;
  float unaff_s15;
  float fVar12;
  float fStack0000000000000004;
  float in_stack_00000008;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  fStack000000000000000c = unaff_s10 * unaff_s10 + param_2 + unaff_s11 * unaff_s11;
  if (**(float **)(*param_1 + 0xb8) <= fStack000000000000000c) {
    fVar4 = unaff_s12 * unaff_s10 + unaff_s15 * unaff_s13 + unaff_s8 * unaff_s11;
    fStack0000000000000014 = (unaff_s13 * fVar4) / fStack000000000000000c;
    fVar8 = (unaff_s11 * fVar4) / fStack000000000000000c;
    fStack000000000000000c = (unaff_s10 * fVar4) / fStack000000000000000c;
  }
  else {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fStack0000000000000014 = *pfVar2;
    fVar8 = pfVar2[1];
    fStack000000000000000c = pfVar2[2];
  }
  puVar1 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  fVar9 = unaff_s15 - fStack0000000000000014;
  fStack0000000000000018 = unaff_s8 - fVar8;
  fVar11 = unaff_s12 - fStack000000000000000c;
  fVar4 = fVar11 * fVar11 + fVar9 * fVar9 + fStack0000000000000018 * fStack0000000000000018;
  fVar10 = SQRT(fVar4);
  if (DAT_00c92314 <= fVar4) {
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (fVar10 <= DAT_00c926ac) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      pfVar2 = *(float **)(*unaff_x21 + 0xb8);
      fStack000000000000001c = *pfVar2;
      fStack0000000000000018 = pfVar2[1];
      fVar11 = pfVar2[2];
    }
    else {
      fStack000000000000001c = fVar9 / fVar10;
      fStack0000000000000018 = fStack0000000000000018 / fVar10;
      fVar11 = fVar11 / fVar10;
    }
  }
  else {
    if (DAT_0482ee1d == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee1d = '\x01';
    }
    lVar3 = *(long *)(*unaff_x21 + 0xb8);
    fStack000000000000001c = *(float *)(lVar3 + 0x48);
    fStack0000000000000018 = *(float *)(lVar3 + 0x4c);
    fVar11 = *(float *)(lVar3 + 0x50);
  }
  if (DAT_0482f03e == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03e = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fStack0000000000000004 = fVar10;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar10 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    fVar9 = fStack0000000000000014 + fStack000000000000001c * fVar10;
    fVar4 = fStack000000000000000c + fVar11 * fVar10;
    if (DAT_0482f03f == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482f03f = '\x01';
    }
    fVar9 = unaff_s15 - fVar9;
    in_stack_00000008 = in_stack_00000008 - (fVar8 + fStack0000000000000018 * fVar10);
    fVar4 = unaff_s12 - fVar4;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar4 = SQRT(fVar4 * fVar4 + fVar9 * fVar9 + in_stack_00000008 * in_stack_00000008);
    if ((0.0 < unaff_s9) && (fVar9 = (float)FUN_0368ed88(fVar4), unaff_s9 < fVar9)) {
      return 0;
    }
    fVar9 = fStack000000000000001c;
    if ((*(int *)(unaff_x20 + 0x28) == 1) ||
       ((fVar12 = fStack000000000000001c, fVar7 = fVar11, fVar6 = fStack0000000000000018,
        *(int *)(unaff_x20 + 0x28) != 2 && (fStack0000000000000004 <= fVar10)))) {
      fVar12 = -fStack000000000000001c;
      fVar7 = -fVar11;
      fVar6 = -fStack0000000000000018;
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar3 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0);
      if ((*(long *)(unaff_x20 + 0x20) != 0) && (lVar3 != 0)) {
        fVar10 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
        fVar11 = fStack000000000000000c + fVar11 * fVar10;
        fVar8 = fVar8 + fStack0000000000000018 * fVar10;
        uVar5 = FUN_0407ba80(fStack0000000000000014 + fVar9 * fVar10,lVar3,0);
        *unaff_x19 = uVar5;
        unaff_x19[1] = fVar8;
        unaff_x19[2] = fVar11;
        if ((*(long *)(unaff_x20 + 0x20) != 0) &&
           (lVar3 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), lVar3 != 0)) {
          uVar5 = FUN_0407e3a8(fVar12,lVar3,0);
          unaff_x19[3] = uVar5;
          unaff_x19[4] = fVar6;
          unaff_x19[5] = fVar7;
          uVar5 = FUN_0368ed88(fVar4);
          unaff_x19[6] = uVar5;
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


