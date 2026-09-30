/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 03690278
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin__GetSpaceBoundary2D(void)

{
  float fVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulong unaff_d8;
  undefined8 in_register_00005108;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  
  _fStack0000000000000000 = 0;
  uVar2 = FUN_036904d8();
  uVar3 = FUN_036904d8();
  fVar4 = fStack0000000000000000;
  fVar1 = fStack0000000000000004;
  if (((uVar2 & 1) == 0) || ((uVar3 & 1) == 0)) {
    if ((uVar2 & 1) == 0) {
      if ((uVar3 & 1) == 0) goto LAB_0369043c;
      if (DAT_0482ee9b == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee9b = '\x01';
      }
      fStack0000000000000010 = unaff_s12 - fVar4;
      fStack0000000000000014 = unaff_s10 - fVar1;
      in_stack_00000018 = unaff_s9 - in_stack_00000008;
    }
    else {
      if (DAT_0482ee9b == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee9b = '\x01';
      }
      fStack0000000000000010 = fStack0000000000000010 - unaff_s12;
      fStack0000000000000014 = fStack0000000000000014 - unaff_s10;
      in_stack_00000018 = in_stack_00000018 - unaff_s9;
    }
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar4 = SQRT(in_stack_00000018 * in_stack_00000018 +
                 fStack0000000000000010 * fStack0000000000000010 +
                 fStack0000000000000014 * fStack0000000000000014);
    if (fVar4 <= DAT_00c926ac) goto LAB_03690404;
    fStack0000000000000010 = fStack0000000000000010 / fVar4;
  }
  else {
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    fStack0000000000000010 = fStack0000000000000010 - fVar4;
    fStack0000000000000014 = fStack0000000000000014 - fVar1;
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar4 = SQRT((in_stack_00000018 - in_stack_00000008) * (in_stack_00000018 - in_stack_00000008) +
                 fStack0000000000000010 * fStack0000000000000010 +
                 fStack0000000000000014 * fStack0000000000000014);
    if (fVar4 <= DAT_00c926ac) {
LAB_03690404:
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      unaff_d8 = (ulong)**(uint **)(*(long *)
                                     Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__
                                   + 0xb8);
      in_register_00005108 = 0;
      goto LAB_0369043c;
    }
    fStack0000000000000010 = fStack0000000000000010 / fVar4;
  }
  in_register_00005108 = 0;
  unaff_d8 = (ulong)(uint)fStack0000000000000010;
LAB_0369043c:
  auVar5._8_8_ = in_register_00005108;
  auVar5._0_8_ = unaff_d8;
  return auVar5;
}


