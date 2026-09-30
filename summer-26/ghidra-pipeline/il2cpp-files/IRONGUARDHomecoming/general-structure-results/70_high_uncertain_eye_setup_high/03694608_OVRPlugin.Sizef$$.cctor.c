/*
FUNCTION_NAME: OVRPlugin.Sizef$$.cctor
ENTRY_POINT: 03694608
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Sizef___cctor(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  *(undefined1 *)(unaff_x21 + 0xede) = 1;
  puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__;
                    /* try { // try from 03694610 to 03794613 has its CatchHandler @ 03694890 */
                    /* try { // try from 03694614 to 03794617 has its CatchHandler @ 0369493c */
  if (*(long *)(unaff_x20 + 0x28) != 0) {
                    /* try { // try from 03694618 to 0379461b has its CatchHandler @ 03694874 */
                    /* try { // try from 0369461c to 0379461f has its CatchHandler @ 03694888 */
                    /* try { // try from 03694620 to 03794623 has its CatchHandler @ 03694868 */
                    /* try { // try from 03694624 to 0379463b has its CatchHandler @ 0369486c */
    fVar4 = (float)FUN_0407d7c4(*(long *)(unaff_x20 + 0x28),0);
                    /* try { // try from 0369463c to 03794643 has its CatchHandler @ 03694858 */
    fVar11 = param_2;
    fVar13 = param_3;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
                    /* try { // try from 03694648 to 0379465b has its CatchHandler @ 03694854 */
    fVar5 = (float)FUN_0407bb40();
    if (DAT_0482f8ab == '\0') {
      thunk_FUN_01efb3a4(
                        Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                        );
      DAT_0482f8ab = '\x01';
    }
    fVar6 = param_3 * param_3 + fVar4 * fVar4 + param_2 * param_2;
    fVar16 = fVar11;
    fVar12 = fVar13;
    fVar14 = fVar5;
    if (**(float **)
          (*(long *)
            Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__ +
          0xb8) <= fVar6) {
      fVar12 = param_3 * fVar13 + fVar4 * fVar5 + param_2 * fVar11;
      fVar14 = fVar5 - (fVar4 * fVar12) / fVar6;
      fVar16 = fVar11 - (param_2 * fVar12) / fVar6;
      fVar12 = fVar13 - (param_3 * fVar12) / fVar6;
    }
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    puVar1 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar6 = DAT_00c926ac;
    fVar7 = SQRT(fVar12 * fVar12 + fVar14 * fVar14 + fVar16 * fVar16);
    if (fVar7 <= DAT_00c926ac) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      pfVar3 = *(float **)
                (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
      fVar14 = *pfVar3;
      fVar16 = pfVar3[1];
      fVar12 = pfVar3[2];
    }
    else {
      fVar14 = fVar14 / fVar7;
      fVar16 = fVar16 / fVar7;
      fVar12 = fVar12 / fVar7;
    }
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    fVar7 = param_3 * fVar16 - param_2 * fVar12;
    fVar15 = fVar4 * fVar12 - param_3 * fVar14;
    fVar4 = param_2 * fVar14 - fVar4 * fVar16;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar4 = SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar15 * fVar15);
    if (fVar4 <= fVar6) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      fVar7 = **(float **)
                (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
      fVar15 = (*(float **)
                 (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8))
               [1];
    }
    else {
      fVar7 = fVar7 / fVar4;
      fVar15 = fVar15 / fVar4;
    }
    FUN_01fdd7a4(fVar14,fVar16,fVar12,fVar5,fVar11,fVar13,0);
    if (*(long *)(unaff_x20 + 0x40) != 0) {
      FUN_040390ac(*(long *)(unaff_x20 + 0x40),0);
      FUN_040674b0(0);
      uVar10 = FUN_040677e4(0);
      if (fVar15 * fVar15 + (float)uVar10 * (float)uVar10 + fVar7 * fVar7 != 0.0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar8 = FUN_0407bc20();
        uVar9 = FUN_04067568(uVar10,0);
        *(undefined4 *)(unaff_x19 + 0xc) = uVar9;
        *(float *)(unaff_x19 + 0x10) = fVar7;
        *(float *)(unaff_x19 + 0x14) = fVar15;
        *(undefined4 *)(unaff_x19 + 0x18) = uVar8;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


