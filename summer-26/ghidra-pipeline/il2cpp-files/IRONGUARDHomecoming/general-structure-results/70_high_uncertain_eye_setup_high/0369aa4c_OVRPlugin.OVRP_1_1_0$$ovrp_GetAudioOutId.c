/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAudioOutId
ENTRY_POINT: 0369aa4c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAudioOutId(long param_1,float param_2)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float unaff_s8;
  float fVar4;
  float unaff_s9;
  float fVar5;
  float unaff_s10;
  float fVar6;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  fVar3 = **(float **)(param_1 + 0xb8);
  if (fVar3 <= param_2) {
    fVar4 = (fStack0000000000000008 - unaff_s15) * unaff_s11 +
            (unaff_s12 - unaff_s14) * unaff_s10 + (unaff_s13 - unaff_s8) * unaff_s9;
    fVar3 = unaff_s10 * fVar4;
    fVar5 = fVar3 / param_2;
    fVar6 = (unaff_s9 * fVar4) / param_2;
    param_2 = (unaff_s11 * fVar4) / param_2;
  }
  else {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar1 = *(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    fVar5 = *pfVar1;
    fVar6 = pfVar1[1];
    param_2 = pfVar1[2];
  }
  if (DAT_0482f03e == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03e = '\x01';
  }
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  param_2 = param_2 * param_2;
  fVar4 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + param_2);
  fVar5 = (float)FUN_0407bbb0();
  if ((fStack0000000000000008 - unaff_s15) * fVar3 +
      (unaff_s12 - unaff_s14) * fVar5 + (unaff_s13 - unaff_s8) * param_2 < 0.0) {
    fVar4 = -fVar4;
  }
  fVar3 = 1.0;
  if (fVar4 < 0.0) {
    fVar3 = -1.0;
  }
  *(float *)(unaff_x19 + 0x160) = fVar4;
  if (fStack000000000000000c != fVar3) {
    lVar2 = *(long *)(unaff_x19 + 0x168);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0369aba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  return;
}


