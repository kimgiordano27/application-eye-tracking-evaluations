/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNativeSDKVersion
ENTRY_POINT: 0369a9c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetNativeSDKVersion(float param_1,long param_2)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s12;
  float unaff_s13;
  float fVar10;
  float fVar11;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  fVar7 = *(float *)(unaff_x21 + 8);
  fVar10 = *unaff_x20;
  fVar9 = unaff_x20[1];
  fVar11 = unaff_x20[2];
  fVar5 = 1.0;
  fStack000000000000000c = 1.0;
  if (param_1 < 0.0) {
    fStack000000000000000c = -1.0;
  }
  fStack0000000000000008 = fVar7;
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar3 = (float)FUN_0407bbb0();
  if (DAT_04833bbb == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    DAT_04833bbb = '\x01';
  }
  fVar4 = fVar7 * fVar7 + fVar3 * fVar3 + fVar5 * fVar5;
  fVar11 = fStack0000000000000008 - fVar11;
  fVar8 = **(float **)
            (*(long *)
              Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
            + 0xb8);
  if (fVar8 <= fVar4) {
    fVar6 = fVar11 * fVar7 + (unaff_s12 - fVar10) * fVar3 + (unaff_s13 - fVar9) * fVar5;
    fVar8 = fVar3 * fVar6;
    fVar3 = fVar8 / fVar4;
    fVar5 = (fVar5 * fVar6) / fVar4;
    fVar4 = (fVar7 * fVar6) / fVar4;
  }
  else {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar1 = *(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    fVar3 = *pfVar1;
    fVar5 = pfVar1[1];
    fVar4 = pfVar1[2];
  }
  if (DAT_0482f03e == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03e = '\x01';
  }
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar4 = fVar4 * fVar4;
  fVar5 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4);
  fVar7 = (float)FUN_0407bbb0();
  if (fVar11 * fVar8 + (unaff_s12 - fVar10) * fVar7 + (unaff_s13 - fVar9) * fVar4 < 0.0) {
    fVar5 = -fVar5;
  }
  fVar7 = 1.0;
  if (fVar5 < 0.0) {
    fVar7 = -1.0;
  }
  *(float *)(unaff_x19 + 0x160) = fVar5;
  if (fStack000000000000000c != fVar7) {
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


