/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetInitialized
ENTRY_POINT: 03695408
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_38_0__ovrp_Media_GetInitialized
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  float *pfVar4;
  float *unaff_x19;
  long *unaff_x21;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s14;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  
  (**(code **)(param_1 + 0x138))(&stack0x00000018);
  fVar8 = in_stack_00000018;
  fStack0000000000000014 = fStack0000000000000020;
  fStack000000000000000c = in_stack_00000028._4_4_;
  fVar10 = in_stack_00000018;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar5 = (float)FUN_0407bb40();
  if (DAT_0482ee19 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    DAT_0482ee19 = '\x01';
  }
  puVar1 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
  lVar3 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8)
  ;
  fVar12 = *(float *)(lVar3 + 0x18);
  fVar11 = *(float *)(lVar3 + 0x1c);
  fVar9 = *(float *)(lVar3 + 0x20);
  if (DAT_0482f8ab == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    DAT_0482f8ab = '\x01';
  }
  fVar6 = fVar9 * fVar9 + fVar12 * fVar12 + fVar11 * fVar11;
  if (**(float **)
        (*(long *)
          Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__ +
        0xb8) <= fVar6) {
    fVar7 = param_4 * fVar9 + fVar5 * fVar12 + fVar10 * fVar11;
    fVar5 = fVar5 - (fVar12 * fVar7) / fVar6;
    fVar10 = fVar10 - (fVar11 * fVar7) / fVar6;
    param_4 = param_4 - (fVar9 * fVar7) / fVar6;
  }
  if (DAT_0482ee9b == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482ee9b = '\x01';
  }
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar9 = SQRT(param_4 * param_4 + fVar5 * fVar5 + fVar10 * fVar10);
  if (fVar9 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar5 = *pfVar4;
    fVar10 = pfVar4[1];
    param_4 = pfVar4[2];
  }
  else {
    fVar5 = fVar5 / fVar9;
    fVar10 = fVar10 / fVar9;
    param_4 = param_4 / fVar9;
  }
  fVar9 = fStack0000000000000024 * fStack0000000000000024 +
          fStack000000000000000c * fStack000000000000000c;
  fVar11 = unaff_x19[1] - unaff_x19[1];
  fVar8 = fVar8 - *unaff_x19;
  fStack0000000000000014 = fStack0000000000000014 - unaff_x19[2];
  fVar12 = (fVar11 * fVar11 + fVar8 * fVar8 + fStack0000000000000014 * fStack0000000000000014) -
           fVar9;
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (unaff_s14 < fVar12) {
    bVar2 = false;
  }
  else {
    fVar6 = param_4 * fVar11 - fVar10 * fStack0000000000000014;
    fVar12 = fVar5 * fStack0000000000000014 - param_4 * fVar8;
    fVar8 = fVar10 * fVar8 - fVar5 * fVar11;
    bVar2 = fVar8 * fVar8 + fVar6 * fVar6 + fVar12 * fVar12 <= fVar9;
  }
  return bVar2;
}


