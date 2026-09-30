/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 0368ebb8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__RetrieveSpaceQueryResults(void)

{
  long lVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float fVar5;
  float unaff_s11;
  float unaff_s12;
  float fVar6;
  float unaff_s15;
  float fVar7;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  thunk_FUN_01ee6d7c();
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar6 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    fStack0000000000000004 = unaff_s11;
    if (DAT_0482f03f == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482f03f = '\x01';
    }
    fVar7 = unaff_s15 - (fStack0000000000000014 + fStack000000000000001c * fVar6);
    fStack0000000000000008 =
         fStack0000000000000008 - (fStack0000000000000010 + fStack0000000000000018 * fVar6);
    fVar5 = unaff_s12 - (fStack000000000000000c + unaff_s8 * fVar6);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar5 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fStack0000000000000008 * fStack0000000000000008);
    if ((0.0 < unaff_s9) && (fVar7 = (float)FUN_0368ed88(fVar5), unaff_s9 < fVar7)) {
      return 0;
    }
    if ((*(int *)(unaff_x20 + 0x28) == 1) ||
       ((fVar7 = fStack000000000000001c, fVar4 = unaff_s8, fVar3 = fStack0000000000000018,
        *(int *)(unaff_x20 + 0x28) != 2 && (fStack0000000000000004 <= fVar6)))) {
      fVar7 = -fStack000000000000001c;
      fVar4 = -unaff_s8;
      fVar3 = -fStack0000000000000018;
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar1 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0);
      if ((*(long *)(unaff_x20 + 0x20) != 0) && (lVar1 != 0)) {
        fVar6 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
        fStack000000000000000c = fStack000000000000000c + unaff_s8 * fVar6;
        fStack0000000000000010 = fStack0000000000000010 + fStack0000000000000018 * fVar6;
        uVar2 = FUN_0407ba80(fStack0000000000000014 + fStack000000000000001c * fVar6,lVar1,0);
        *unaff_x19 = uVar2;
        unaff_x19[1] = fStack0000000000000010;
        unaff_x19[2] = fStack000000000000000c;
        if ((*(long *)(unaff_x20 + 0x20) != 0) &&
           (lVar1 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), lVar1 != 0)) {
          uVar2 = FUN_0407e3a8(fVar7,lVar1,0);
          unaff_x19[3] = uVar2;
          unaff_x19[4] = fVar3;
          unaff_x19[5] = fVar4;
          uVar2 = FUN_0368ed88(fVar5);
          unaff_x19[6] = uVar2;
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


