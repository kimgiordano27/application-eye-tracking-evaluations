/*
FUNCTION_NAME: FUN_036943c8
ENTRY_POINT: 036943c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_036943c8(undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  
  if (*(long *)(param_4 + 0x28) != 0) {
                    /* try { // try from 036943f4 to 037943f7 has its CatchHandler @ 03694920 */
    fVar2 = (float)FUN_0407d7c4(*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x28) != 0) {
      fVar11 = param_5[1];
      fVar9 = param_5[2];
                    /* try { // try from 0369440c to 03794417 has its CatchHandler @ 0369491c */
      fVar13 = *param_5;
      fVar4 = param_2;
      fVar7 = param_3;
      fVar3 = (float)FUN_0407d3c8(*(long *)(param_4 + 0x28),0);
      if (DAT_0482ee9b == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee9b = '\x01';
      }
      fVar13 = fVar13 - fVar3;
      fVar11 = fVar11 - fVar4;
      fVar9 = fVar9 - fVar7;
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar8 = (ulong)(uint)(fVar9 * fVar9);
      fVar4 = SQRT(fVar9 * fVar9 + fVar13 * fVar13 + fVar11 * fVar11);
      if (fVar4 <= DAT_00c926ac) {
        if (DAT_0482ee12 == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          DAT_0482ee12 = '\x01';
        }
        pfVar1 = *(float **)
                  (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
        fVar13 = *pfVar1;
        fVar11 = pfVar1[1];
        fVar9 = pfVar1[2];
      }
      else {
        fVar13 = fVar13 / fVar4;
        fVar11 = fVar11 / fVar4;
        fVar9 = fVar9 / fVar4;
      }
      uVar5 = (ulong)(uint)fVar13;
      uVar6 = (ulong)(uint)(fVar9 * fVar9);
      uVar10 = (ulong)(uint)fVar11;
      uVar12 = (ulong)(uint)fVar9;
      if (fVar13 * fVar13 + fVar11 * fVar11 + fVar9 * fVar9 == 0.0) {
        if (*(long *)(param_4 + 0x28) == 0) goto OVRPlugin_Sizei___cctor;
        uVar5 = FUN_0407d840(*(long *)(param_4 + 0x28),0);
        uVar10 = uVar6;
        uVar12 = uVar8;
      }
      FUN_0406761c(uVar5,uVar10,uVar12,0);
      if (*(long *)(param_4 + 0x38) != 0) {
        FUN_040390ac((param_3 * (float)uVar12 + fVar2 * (float)uVar5 + param_2 * (float)uVar10) *
                     0.5 + 0.5,*(long *)(param_4 + 0x38),0);
        fVar4 = param_5[4];
        fVar7 = param_5[5];
        fVar3 = param_5[6];
        fVar2 = (float)FUN_040671f8(param_5[3],0);
        param_5[3] = fVar2;
        param_5[4] = fVar4;
        param_5[5] = fVar7;
        param_5[6] = fVar3;
        return;
      }
    }
  }
OVRPlugin_Sizei___cctor:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


