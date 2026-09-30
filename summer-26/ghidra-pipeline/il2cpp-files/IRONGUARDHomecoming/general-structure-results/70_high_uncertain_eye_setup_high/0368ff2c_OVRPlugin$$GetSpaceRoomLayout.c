/*
FUNCTION_NAME: OVRPlugin$$GetSpaceRoomLayout
ENTRY_POINT: 0368ff2c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetSpaceRoomLayout
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,undefined8 param_8,float *param_9,undefined4 *param_10)

{
  undefined8 uVar1;
  float *pfVar2;
  long unaff_x21;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack0000000000000004;
  float fStack000000000000000c;
  
  if (*(char *)(unaff_x21 + 0xe9b) == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    *(undefined1 *)(unaff_x21 + 0xe9b) = 1;
  }
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar3 = SQRT(param_6 * param_6 + param_4 * param_4 + param_5 * param_5);
  fStack0000000000000004 = param_7;
  fStack000000000000000c = param_3;
  if (fVar3 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar2 = *(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    param_4 = *pfVar2;
    param_5 = pfVar2[1];
    param_6 = pfVar2[2];
  }
  else {
    param_4 = param_4 / fVar3;
    param_5 = param_5 / fVar3;
    param_6 = param_6 / fVar3;
  }
  fVar10 = param_9[2];
  fVar8 = *param_9;
  fVar9 = param_9[1];
  fVar3 = param_6 * param_9[5] + param_4 * param_9[3] + param_5 * param_9[4];
  if (DAT_0482ef73 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    DAT_0482ef73 = '\x01';
  }
  fVar6 = ABS(fVar3);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar7 = **(float **)
            (*(long *)
              Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
            + 0xb8) * 8.0;
  fVar4 = fVar6 * DAT_00c927dc;
  if (fVar6 * DAT_00c927dc <= fVar7) {
    fVar4 = fVar7;
  }
  if (fVar4 <= ABS(0.0 - fVar3)) {
    fVar8 = param_4 * fVar8;
    fVar3 = ((fStack000000000000000c * param_6 + param_1 * param_4 + param_2 * param_5) -
            (param_6 * fVar10 + fVar8 + param_5 * fVar9)) / fVar3;
    uVar1 = 0;
    if ((0.0 < fVar3) && (fVar3 <= fStack0000000000000004)) {
      uVar5 = FUN_04043b74(param_9,0);
      uVar1 = 1;
      *param_10 = uVar5;
      param_10[1] = fStack0000000000000004;
      param_10[2] = fVar8;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


