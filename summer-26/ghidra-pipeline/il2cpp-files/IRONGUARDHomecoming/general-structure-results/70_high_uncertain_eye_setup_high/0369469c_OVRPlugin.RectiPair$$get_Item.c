/*
FUNCTION_NAME: OVRPlugin.RectiPair$$get_Item
ENTRY_POINT: 0369469c
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


void OVRPlugin_RectiPair__get_Item(long param_1,float param_2)

{
  float fVar1;
  undefined *puVar2;
  float fVar3;
  float *pfVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float unaff_s10;
  float unaff_s11;
  float fVar11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
  float fVar12;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack000000000000006c;
  
  fVar10 = unaff_s8;
  fVar12 = unaff_s15;
  fVar9 = unaff_s10;
  if (**(float **)(param_1 + 0xb8) <= param_2) {
                    /* try { // try from 036946bc to 037946cb has its CatchHandler @ 0369483c */
    fVar9 = unaff_s13 * unaff_s10 + unaff_s12 * unaff_s8 + unaff_s11 * unaff_s15;
                    /* try { // try from 036946d0 to 03794707 has its CatchHandler @ 03694838 */
    fVar10 = unaff_s8 - (unaff_s12 * fVar9) / param_2;
    fVar12 = unaff_s15 - (unaff_s11 * fVar9) / param_2;
    fVar9 = unaff_s10 - (unaff_s13 * fVar9) / param_2;
  }
  fStack0000000000000014 = unaff_s10;
  fStack0000000000000018 = unaff_s15;
  fStack000000000000001c = unaff_s8;
  if (DAT_0482ee9b == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482ee9b = '\x01';
  }
  puVar2 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
                    /* try { // try from 03694718 to 0379473b has its CatchHandler @ 03694870 */
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar1 = DAT_00c926ac;
  fVar5 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar12 * fVar12);
  if (fVar5 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar4 = *(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    fStack000000000000006c = *pfVar4;
    fVar12 = pfVar4[1];
    fVar9 = pfVar4[2];
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
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar3 = fStack000000000000006c;
  fVar5 = SQRT(fVar5 * fVar5 + fVar11 * fVar11 + fVar10 * fVar10);
  if (fVar5 <= fVar1) {
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
  FUN_01fdd7a4(fVar3,fVar12,fVar9,fStack000000000000001c,fStack0000000000000018,
               fStack0000000000000014,0);
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


