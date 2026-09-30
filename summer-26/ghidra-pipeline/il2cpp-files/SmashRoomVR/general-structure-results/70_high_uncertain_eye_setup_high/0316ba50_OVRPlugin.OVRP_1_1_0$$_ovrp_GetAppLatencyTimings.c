/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetAppLatencyTimings
ENTRY_POINT: 0316ba50
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_1_0___ovrp_GetAppLatencyTimings(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long unaff_x19;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  double dVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_s8;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 in_stack_00000000;
  double in_stack_00000008;
  
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar2 = PTR_DAT_03d80850;
  dVar23 = (double)unaff_s8;
  dVar11 = modf(dVar23,&stack0x00000008);
  if (0.0 <= unaff_s8) {
    if (dVar11 != 0.5) {
      dVar11 = (double)(long)(dVar23 + 0.5);
      goto LAB_0316bad4;
    }
    dVar23 = 1.0;
  }
  else {
    if (dVar11 != -0.5) {
      dVar11 = (double)(long)(dVar23 + -0.5);
      goto LAB_0316bad4;
    }
    dVar23 = -1.0;
  }
  dVar11 = in_stack_00000008;
  if (((long)in_stack_00000008 & 1U) != 0) {
    dVar11 = in_stack_00000008 + dVar23;
  }
LAB_0316bad4:
  uVar1 = 0x80000000;
  if (dVar11 != INFINITY) {
    uVar1 = (int)dVar11;
  }
  lVar4 = FUN_01b47fd0(*(undefined8 *)puVar2,uVar1);
  puVar3 = PTR_DAT_03d80950;
  puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  if (0 < (int)uVar1) {
    iVar7 = 0;
    uVar8 = 0;
    pfVar9 = (float *)(lVar4 + 0x3c);
    do {
      if (DAT_03fed25b == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed25b = '\x01';
      }
      lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
      uVar13 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar15 = (ulong)*(uint *)(lVar5 + 0x1c);
      uVar17 = (ulong)*(uint *)(lVar5 + 0x20);
      uVar12 = FUN_03914748((float)iVar7 - in_stack_00000000._4_4_,0);
      if (DAT_03fed260 == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed260 = '\x01';
      }
      lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
      uVar14 = uVar13;
      uVar16 = uVar15;
      fVar10 = (float)FUN_03914a7c(uVar12,uVar13,uVar15,uVar17,*(undefined4 *)(lVar5 + 0x48),
                                   *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
      lVar5 = *(long *)puVar3;
      fVar22 = *(float *)(unaff_x19 + 0x94);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *(long *)puVar3;
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      pfVar6 = *(float **)(lVar5 + 0xb8);
      fVar20 = pfVar6[2];
      fVar21 = pfVar6[3];
      fVar18 = *pfVar6;
      fVar19 = pfVar6[1];
      pfVar9[-7] = fVar10 * fVar22;
      pfVar9[-6] = (float)uVar14 * fVar22;
      fVar24 = (float)uVar12;
      fVar26 = (float)uVar17;
      fVar25 = (float)uVar13;
      fVar10 = (float)uVar15;
      *pfVar9 = (1.0 / (float)(int)uVar1) * (float)(int)uVar8;
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + -1;
      pfVar9[-5] = (float)uVar16 * fVar22;
      pfVar9[-4] = (fVar25 * fVar20 + fVar26 * fVar18 + fVar24 * fVar21) - fVar10 * fVar19;
      pfVar9[-3] = (fVar10 * fVar18 + fVar26 * fVar19 + fVar25 * fVar21) - fVar24 * fVar20;
      pfVar9[-2] = (fVar24 * fVar19 + fVar26 * fVar20 + fVar10 * fVar21) - fVar25 * fVar18;
      pfVar9[-1] = ((fVar26 * fVar21 - fVar24 * fVar18) - fVar25 * fVar19) - fVar10 * fVar20;
      pfVar9 = pfVar9 + 8;
    } while (uVar1 != uVar8);
  }
  return lVar4;
}


