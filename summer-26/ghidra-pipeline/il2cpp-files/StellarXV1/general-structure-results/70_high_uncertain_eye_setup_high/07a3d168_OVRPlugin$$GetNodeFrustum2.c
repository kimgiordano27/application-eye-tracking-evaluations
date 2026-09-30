/*
FUNCTION_NAME: OVRPlugin$$GetNodeFrustum2
ENTRY_POINT: 07a3d168
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeFrustum2(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong uVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float unaff_s9;
  
  if (0 < (int)param_2) {
    uVar3 = 0;
    pfVar4 = (float *)(unaff_x19 + 0x28);
    lVar5 = 0x20;
    do {
      if (lVar5 == 0x20) {
        if ((uint)param_2 < 2) goto LAB_07a3d2f0;
        fVar14 = *(float *)(unaff_x19 + 0x34);
        uVar10 = *(undefined8 *)(unaff_x19 + 0x2c);
        uVar12 = *(undefined8 *)(unaff_x19 + 0x20);
        fVar13 = *(float *)(unaff_x19 + 0x28);
      }
      else {
        if ((param_2 & 0xffffffff) <= uVar3) goto LAB_07a3d2f0;
        fVar14 = *pfVar4;
        uVar10 = *(undefined8 *)(pfVar4 + -2);
        uVar12 = *(undefined8 *)(pfVar4 + -5);
        fVar13 = pfVar4[-3];
      }
      fVar6 = (float)uVar10 - (float)uVar12;
      fVar8 = (float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar12 >> 0x20);
      fVar14 = fVar14 - fVar13;
      lVar2 = *unaff_x20;
      if (lVar2 == 0) {
LAB_07a3d2f4:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (((param_2 & 0xffffffff) <= uVar3) || (*(uint *)(lVar2 + 0x18) <= uVar3)) {
LAB_07a3d2f0:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      fVar9 = *pfVar4;
      *(undefined8 *)(lVar2 + lVar5) = *(undefined8 *)(pfVar4 + -2);
      *(float *)((undefined8 *)(lVar2 + lVar5) + 1) = fVar9;
      lVar2 = *unaff_x20;
      if (lVar2 == 0) goto LAB_07a3d2f4;
      fVar9 = fVar8;
      fVar11 = fVar14;
      uVar7 = FUN_089b94d0(0);
      if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_07a3d2f0;
      lVar2 = lVar2 + lVar5;
      *(undefined4 *)(lVar2 + 0xc) = uVar7;
      *(float *)(lVar2 + 0x10) = fVar9;
      *(float *)(lVar2 + 0x14) = fVar11;
      *(float *)(lVar2 + 0x18) = fVar13;
      lVar2 = *unaff_x20;
      if (lVar2 == 0) goto LAB_07a3d2f4;
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (lVar5 == 0x20) {
        fVar13 = 0.0;
        if ((ulong)uVar1 == 0) goto LAB_07a3d2f0;
      }
      else {
        if ((uVar1 <= uVar3) || (uVar1 <= (int)uVar3 - 1U)) goto LAB_07a3d2f0;
        fVar13 = *(float *)(lVar2 + lVar5 + -4);
        if (*(char *)(unaff_x22 + 0x4e9) == '\0') {
          FUN_04077588();
          *(undefined1 *)(unaff_x22 + 0x4e9) = 1;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        fVar13 = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar14 * fVar14) / unaff_s9 + fVar13;
      }
      param_2 = *(ulong *)(unaff_x19 + 0x18);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + lVar5;
      lVar5 = lVar5 + 0x20;
      pfVar4 = pfVar4 + 3;
      *(float *)(lVar2 + 0x1c) = fVar13;
    } while ((long)uVar3 < (long)(int)param_2);
  }
  return;
}


