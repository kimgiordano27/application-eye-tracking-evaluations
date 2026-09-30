/*
FUNCTION_NAME: OVRPlugin.Size3f$$.cctor
ENTRY_POINT: 03694650
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Size3f___cctor(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  float fVar2;
  float *pfVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float unaff_s11;
  float fVar11;
  float unaff_s12;
  float unaff_s13;
  float fVar12;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack000000000000006c;
  
                    /* try { // try from 03694660 to 037946b3 has its CatchHandler @ 03694850 */
  if (DAT_0482f8ab == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    DAT_0482f8ab = '\x01';
  }
  fVar4 = unaff_s13 * unaff_s13 + unaff_s12 * unaff_s12 + unaff_s11 * unaff_s11;
  fVar10 = param_1;
  fVar12 = param_2;
  fVar9 = param_3;
  if (**(float **)
        (*(long *)
          Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__ +
        0xb8) <= fVar4) {
    fVar9 = unaff_s13 * param_3 + unaff_s12 * param_1 + unaff_s11 * param_2;
    fVar10 = param_1 - (unaff_s12 * fVar9) / fVar4;
    fVar12 = param_2 - (unaff_s11 * fVar9) / fVar4;
    fVar9 = param_3 - (unaff_s13 * fVar9) / fVar4;
  }
  fStack0000000000000014 = param_3;
  fStack000000000000001c = param_1;
  if (DAT_0482ee9b == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482ee9b = '\x01';
  }
  puVar1 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar4 = DAT_00c926ac;
  fVar5 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar12 * fVar12);
  if (fVar5 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar3 = *(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    fStack000000000000006c = *pfVar3;
    fVar12 = pfVar3[1];
    fVar9 = pfVar3[2];
  }
  else {
    fStack000000000000006c = fVar10 / fVar5;
    fVar12 = fVar12 / fVar5;
    fVar9 = fVar9 / fVar5;
  }
  fVar10 = unaff_s13 * fStack000000000000006c;
  fVar5 = unaff_s11 * fStack000000000000006c;
  if (DAT_0482ee9b == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482ee9b = '\x01';
  }
  fVar11 = unaff_s13 * fVar12 - unaff_s11 * fVar9;
  fVar10 = unaff_s12 * fVar9 - fVar10;
  fVar5 = fVar5 - unaff_s12 * fVar12;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar2 = fStack000000000000006c;
  fVar5 = SQRT(fVar5 * fVar5 + fVar11 * fVar11 + fVar10 * fVar10);
  if (fVar5 <= fVar4) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    fVar11 = **(float **)
               (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    fVar10 = (*(float **)
               (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8))[1]
    ;
  }
  else {
    fVar11 = fVar11 / fVar5;
    fVar10 = fVar10 / fVar5;
  }
  fStack0000000000000004 = fVar10;
  FUN_01fdd7a4(fVar2,fVar12,fVar9,fStack000000000000001c,param_2,fStack0000000000000014,0);
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    FUN_040390ac(*(long *)(unaff_x20 + 0x40),0);
    FUN_040674b0(0);
    uVar8 = FUN_040677e4(0);
    if (fVar10 * fVar10 + (float)uVar8 * (float)uVar8 + fVar11 * fVar11 != 0.0) {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = FUN_0407bc20();
      uVar7 = FUN_04067568(uVar8,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar7;
      *(float *)(unaff_x19 + 0x10) = fVar11;
      *(float *)(unaff_x19 + 0x14) = fVar10;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar6;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


