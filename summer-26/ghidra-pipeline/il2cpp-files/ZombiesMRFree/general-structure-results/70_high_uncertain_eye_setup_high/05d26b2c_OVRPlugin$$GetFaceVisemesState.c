/*
FUNCTION_NAME: OVRPlugin$$GetFaceVisemesState
ENTRY_POINT: 05d26b2c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceVisemesState(ulong param_1)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  float *unaff_x24;
  float *unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  float *unaff_x28;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s9;
  
  while( true ) {
    unaff_x26 = unaff_x26 + 0x20;
    pfVar1 = unaff_x28 + 3;
    uVar2 = (uint)param_1;
    if ((long)(int)uVar2 <= (long)unaff_x23) {
      return;
    }
    if (unaff_x26 == 0x3c) {
      if (uVar2 < 2) goto LAB_05d26b68;
      uVar8 = *(undefined8 *)(unaff_x19 + 0x2c);
      uVar11 = *(undefined8 *)(unaff_x19 + 0x20);
      pfVar3 = unaff_x25;
      pfVar4 = unaff_x24;
    }
    else {
      if (((param_1 & 0xffffffff) <= unaff_x23) || (uVar2 <= (int)unaff_x23 - 1U))
      goto LAB_05d26b68;
      uVar8 = *(undefined8 *)(unaff_x28 + 1);
      uVar11 = *(undefined8 *)(unaff_x28 + -2);
      pfVar3 = unaff_x28;
      pfVar4 = pfVar1;
    }
    fVar6 = (float)uVar8 - (float)uVar11;
    fVar9 = (float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar11 >> 0x20);
    lVar5 = *unaff_x20;
    if (lVar5 == 0) break;
    if (((param_1 & 0xffffffff) <= unaff_x23) || (*(uint *)(lVar5 + 0x18) <= unaff_x23)) {
LAB_05d26b68:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    fVar13 = *pfVar1;
    fVar14 = *pfVar4;
    fVar10 = *pfVar3;
    *(undefined8 *)(lVar5 + unaff_x26 + -0x1c) = *(undefined8 *)(unaff_x28 + 1);
    *(float *)(lVar5 + unaff_x26 + -0x14) = fVar13;
    lVar5 = *unaff_x20;
    if (lVar5 == 0) break;
    fVar14 = fVar14 - fVar10;
    fVar10 = fVar9;
    fVar12 = fVar14;
    uVar7 = FUN_068ed124(0);
    if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_05d26b68;
    lVar5 = lVar5 + unaff_x26;
    *(undefined4 *)(lVar5 + -0x10) = uVar7;
    *(float *)(lVar5 + -0xc) = fVar10;
    *(float *)(lVar5 + -8) = fVar12;
    *(float *)(lVar5 + -4) = fVar13;
    lVar5 = *unaff_x20;
    if (lVar5 == 0) break;
    if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) <= unaff_x23) goto LAB_05d26b68;
    fVar10 = 0.0;
    if (unaff_x26 != 0x3c) {
      if ((uint)*(ulong *)(lVar5 + 0x18) <= (int)unaff_x23 - 1U) goto LAB_05d26b68;
      fVar10 = *(float *)(lVar5 + unaff_x26 + -0x20);
      if (*(char *)(unaff_x22 + 0x6c8) == '\0') {
        FUN_02fe925c();
        *(undefined1 *)(unaff_x22 + 0x6c8) = unaff_w27;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      fVar10 = SQRT(fVar6 * fVar6 + fVar9 * fVar9 + fVar14 * fVar14) / unaff_s9 + fVar10;
    }
    *(float *)(lVar5 + unaff_x26) = fVar10;
    param_1 = *(ulong *)(unaff_x19 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    unaff_x28 = pfVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


