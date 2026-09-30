/*
FUNCTION_NAME: OVRPlugin.RectiPair$$set_Item
ENTRY_POINT: 03694748
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_RectiPair__set_Item(float param_1)

{
  float fVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  float *pfVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  float in_s4;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float fVar7;
  float unaff_s12;
  float unaff_s13;
  float fVar8;
  float fVar9;
  float unaff_s15;
  float fStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack000000000000006c;
  
  if (in_ZR || in_NG != in_OV) {
                    /* try { // try from 03694760 to 03794777 has its CatchHandler @ 0369484c */
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
                    /* try { // try from 0369477c to 037947b3 has its CatchHandler @ 03694844 */
      DAT_0482ee12 = '\x01';
    }
    pfVar2 = *(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    fStack000000000000006c = *pfVar2;
    fVar6 = pfVar2[1];
    param_1 = pfVar2[2];
  }
  else {
                    /* try { // try from 0369474c to 0379474f has its CatchHandler @ 0369485c */
    fStack000000000000006c = unaff_s8 / param_1;
    fVar6 = unaff_s15 / param_1;
    param_1 = unaff_s10 / param_1;
                    /* try { // try from 03694758 to 0379475f has its CatchHandler @ 03694870 */
  }
  fVar8 = unaff_s13 * fStack000000000000006c;
  fVar9 = unaff_s11 * fStack000000000000006c;
                    /* try { // try from 036947bc to 037947e3 has its CatchHandler @ 0369485c */
  if (*(char *)(unaff_x22 + 0xe9b) == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    *(undefined1 *)(unaff_x22 + 0xe9b) = 1;
  }
                    /* try { // try from 036947e4 to 037947fb has its CatchHandler @ 03694848 */
  fVar7 = unaff_s13 * fVar6 - unaff_s11 * param_1;
  fVar8 = unaff_s12 * param_1 - fVar8;
  fVar9 = fVar9 - unaff_s12 * fVar6;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar1 = fStack000000000000006c;
  fVar9 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
  if (fVar9 <= in_s4) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    fVar7 = **(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    fVar8 = (*(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8))[1];
  }
  else {
    fVar7 = fVar7 / fVar9;
    fVar8 = fVar8 / fVar9;
  }
  fStack0000000000000004 = fVar8;
  FUN_01fdd7a4(fVar1,fVar6,param_1,uStack000000000000001c,uStack0000000000000018,
               in_stack_00000010._4_4_,0);
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    FUN_040390ac(*(long *)(unaff_x20 + 0x40),0);
    FUN_040674b0(0);
    uVar5 = FUN_040677e4(0);
    if (fVar8 * fVar8 + (float)uVar5 * (float)uVar5 + fVar7 * fVar7 != 0.0) {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_0407bc20();
      uVar4 = FUN_04067568(uVar5,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar4;
      *(float *)(unaff_x19 + 0x10) = fVar7;
      *(float *)(unaff_x19 + 0x14) = fVar8;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


