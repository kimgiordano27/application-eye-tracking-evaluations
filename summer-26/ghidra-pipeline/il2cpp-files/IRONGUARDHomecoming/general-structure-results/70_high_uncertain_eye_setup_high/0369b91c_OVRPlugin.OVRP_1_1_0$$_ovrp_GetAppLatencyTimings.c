/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetAppLatencyTimings
ENTRY_POINT: 0369b91c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_1_0___ovrp_GetAppLatencyTimings(double param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  double in_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 in_stack_00000000;
  
  uVar1 = 0x80000000;
  if (param_1 != in_x9) {
    uVar1 = (int)param_1;
  }
  lVar4 = FUN_01f08890(*unaff_x20,uVar1);
  puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  puVar2 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
  if (0 < (int)uVar1) {
    iVar7 = 0;
    uVar8 = 0;
    pfVar9 = (float *)(lVar4 + 0x3c);
    do {
      if (DAT_0482ee19 == '\0') {
        thunk_FUN_01efb3a4(puVar2);
        DAT_0482ee19 = '\x01';
      }
      lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
      uVar12 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar14 = (ulong)*(uint *)(lVar5 + 0x1c);
      uVar16 = (ulong)*(uint *)(lVar5 + 0x20);
      uVar11 = FUN_040674b0((float)iVar7 - in_stack_00000000._4_4_,0);
      if (DAT_0482ee1d == '\0') {
        thunk_FUN_01efb3a4(puVar2);
        DAT_0482ee1d = '\x01';
      }
      lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
      uVar13 = uVar12;
      uVar15 = uVar14;
      fVar10 = (float)FUN_040677e4(uVar11,uVar12,uVar14,uVar16,*(undefined4 *)(lVar5 + 0x48),
                                   *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
      lVar5 = *(long *)puVar3;
      fVar21 = *(float *)(unaff_x19 + 0x94);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar3;
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      pfVar6 = *(float **)(lVar5 + 0xb8);
      fVar19 = pfVar6[2];
      fVar20 = pfVar6[3];
      fVar17 = *pfVar6;
      fVar18 = pfVar6[1];
      pfVar9[-7] = fVar10 * fVar21;
      pfVar9[-6] = (float)uVar13 * fVar21;
      fVar22 = (float)uVar11;
      fVar24 = (float)uVar16;
      fVar23 = (float)uVar12;
      fVar10 = (float)uVar14;
      *pfVar9 = (1.0 / (float)(int)uVar1) * (float)(int)uVar8;
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + -1;
      pfVar9[-5] = (float)uVar15 * fVar21;
      pfVar9[-4] = (fVar23 * fVar19 + fVar24 * fVar17 + fVar22 * fVar20) - fVar10 * fVar18;
      pfVar9[-3] = (fVar10 * fVar17 + fVar24 * fVar18 + fVar23 * fVar20) - fVar22 * fVar19;
      pfVar9[-2] = (fVar22 * fVar18 + fVar24 * fVar19 + fVar10 * fVar20) - fVar23 * fVar17;
      pfVar9[-1] = ((fVar24 * fVar20 - fVar22 * fVar17) - fVar23 * fVar18) - fVar10 * fVar19;
      pfVar9 = pfVar9 + 8;
    } while (uVar1 != uVar8);
  }
  return lVar4;
}


