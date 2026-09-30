/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_ShareSpaces
ENTRY_POINT: 036a5394
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


long OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  
  lVar1 = FUN_023360e0();
  if ((lVar1 != 0) && (FUN_040c1b7c(lVar1,*(undefined1 *)(unaff_x19 + 0x38),0), unaff_x20 != 0)) {
    fVar3 = (float)FUN_0407d3c8();
    fVar3 = unaff_s11 - fVar3;
    param_2 = unaff_s10 - param_2;
    param_3 = unaff_s9 - param_3;
    FUN_0406761c(fVar3,param_2,param_3,0);
    if (DAT_0482f03e == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482f03e = '\x01';
    }
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar3 = SQRT(param_3 * param_3 + fVar3 * fVar3 + param_2 * param_2) - ABS(unaff_s8);
    FUN_040c256c(lVar1,0);
    FUN_040c25f4(unaff_s12 + unaff_s12 + fVar3,lVar1,0);
    FUN_040c2640(lVar1,2,0);
    if (DAT_0482ee1d == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee1d = '\x01';
    }
    fVar3 = unaff_s8 + fVar3 * 0.5;
    lVar2 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                     0xb8);
    FUN_040c2498(fVar3 * *(float *)(lVar2 + 0x48),fVar3 * *(float *)(lVar2 + 0x4c),
                 fVar3 * *(float *)(lVar2 + 0x50),lVar1,0);
    lVar2 = FUN_04070398(lVar1,0);
    if (lVar2 != 0) {
      FUN_0407dcf4();
      FUN_0407d3c8();
      FUN_0407de3c(lVar2,0);
      lVar2 = FUN_040703d4(lVar1,0);
      if (lVar2 != 0) {
        FUN_040732d0(lVar2,*(undefined4 *)(unaff_x19 + 0x3c),0);
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


