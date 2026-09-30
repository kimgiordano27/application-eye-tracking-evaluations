/*
FUNCTION_NAME: OVRPlugin.Media$$Update
ENTRY_POINT: 03695484
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_Media__Update(void)

{
  bool bVar1;
  long lVar2;
  float *pfVar3;
  float *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar9;
  float fVar10;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  lVar2 = *(long *)(*unaff_x20 + 0xb8);
  fVar10 = *(float *)(lVar2 + 0x18);
  fVar9 = *(float *)(lVar2 + 0x1c);
  fVar8 = *(float *)(lVar2 + 0x20);
  if (*(char *)(unaff_x21 + 0x8ab) == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    *(undefined1 *)(unaff_x21 + 0x8ab) = 1;
  }
  fVar4 = fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9;
  if (**(float **)
        (*(long *)
          Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__ +
        0xb8) <= fVar4) {
    fVar5 = unaff_s11 * fVar8 + unaff_s9 * fVar10 + unaff_s10 * fVar9;
    unaff_s9 = unaff_s9 - (fVar10 * fVar5) / fVar4;
    unaff_s10 = unaff_s10 - (fVar9 * fVar5) / fVar4;
    unaff_s11 = unaff_s11 - (fVar8 * fVar5) / fVar4;
  }
  if (DAT_0482ee9b == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482ee9b = '\x01';
  }
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar8 = SQRT(unaff_s11 * unaff_s11 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10);
  if (fVar8 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar3 = *(float **)(*unaff_x20 + 0xb8);
    fVar9 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  else {
    fVar9 = unaff_s9 / fVar8;
    fVar10 = unaff_s10 / fVar8;
    fVar8 = unaff_s11 / fVar8;
  }
  fVar4 = unaff_s15 * unaff_s15 + in_stack_00000008._4_4_ * in_stack_00000008._4_4_;
  fVar5 = unaff_x19[1] - unaff_x19[1];
  fStack0000000000000010 = fStack0000000000000010 - *unaff_x19;
  fStack0000000000000014 = fStack0000000000000014 - unaff_x19[2];
  fVar7 = (fVar5 * fVar5 + fStack0000000000000010 * fStack0000000000000010 +
          fStack0000000000000014 * fStack0000000000000014) - fVar4;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (unaff_s14 < fVar7) {
    bVar1 = false;
  }
  else {
    fVar6 = fVar8 * fVar5 - fVar10 * fStack0000000000000014;
    fVar7 = fVar9 * fStack0000000000000014 - fVar8 * fStack0000000000000010;
    fVar8 = fVar10 * fStack0000000000000010 - fVar9 * fVar5;
    bVar1 = fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7 <= fVar4;
  }
  return bVar1;
}


