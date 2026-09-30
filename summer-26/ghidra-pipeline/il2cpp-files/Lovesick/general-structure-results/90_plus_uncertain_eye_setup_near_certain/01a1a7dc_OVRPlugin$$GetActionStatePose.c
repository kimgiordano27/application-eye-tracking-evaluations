/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 01a1a7dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStatePose(long param_1)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float *unaff_x23;
  ulong uVar6;
  undefined1 unaff_w24;
  ulong unaff_x25;
  long lVar7;
  float *pfVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 in_s3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar16;
  float unaff_s13;
  float fVar17;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    uVar2 = (ulong)uVar1;
    unaff_s10 = unaff_s10 + SQRT(unaff_s13 * unaff_s13 + unaff_s9 * unaff_s9 + unaff_s8 * unaff_s8);
    if ((long)(int)uVar1 <= (long)(unaff_x25 + 2)) {
      if ((int)uVar1 < 1) {
        return;
      }
      uVar6 = 0;
      lVar7 = 0x20;
      pfVar8 = (float *)(unaff_x19 + 0x28);
      goto LAB_01a1a838;
    }
    if ((uVar2 <= unaff_x25 + 2) || (unaff_x25 = unaff_x25 + 1, uVar2 <= unaff_x25)) break;
    fVar9 = *unaff_x23;
    fVar12 = unaff_x23[1];
    fVar16 = unaff_x23[2];
    fVar13 = unaff_x23[3];
    fVar15 = unaff_x23[-2];
    fVar17 = unaff_x23[-1];
    if (*(char *)(unaff_x22 + 0xe1b) == '\0') {
      thunk_FUN_00d48444();
      *(undefined1 *)(unaff_x22 + 0xe1b) = unaff_w24;
    }
    param_1 = *unaff_x21;
    unaff_s13 = fVar12 - fVar15;
    unaff_s9 = fVar16 - fVar17;
    unaff_s8 = fVar13 - fVar9;
    unaff_x23 = unaff_x23 + 3;
  }
LAB_01a1a9c4:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
LAB_01a1a838:
  if (lVar7 == 0x20) {
    if ((uint)uVar2 < 2) goto LAB_01a1a9c4;
    uVar11 = *(undefined8 *)(unaff_x19 + 0x2c);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x20);
    pfVar3 = (float *)(unaff_x19 + 0x28);
    pfVar4 = (float *)(unaff_x19 + 0x34);
  }
  else {
    if (((uVar2 & 0xffffffff) <= uVar6) || ((uint)uVar2 <= (int)uVar6 - 1U)) goto LAB_01a1a9c4;
    uVar11 = *(undefined8 *)(pfVar8 + -2);
    uVar14 = *(undefined8 *)(pfVar8 + -5);
    pfVar3 = pfVar8 + -3;
    pfVar4 = pfVar8;
  }
  fVar9 = (float)uVar11 - (float)uVar14;
  fVar12 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar14 >> 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x68);
  if (lVar5 == 0) {
LAB_01a1a9c8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (((uVar2 & 0xffffffff) <= uVar6) || (*(uint *)(lVar5 + 0x18) <= uVar6)) goto LAB_01a1a9c4;
  fVar15 = *pfVar4;
  fVar16 = *pfVar8;
  fVar13 = *pfVar3;
  *(undefined8 *)(lVar5 + lVar7) = *(undefined8 *)(pfVar8 + -2);
  *(float *)((undefined8 *)(lVar5 + lVar7) + 1) = fVar16;
  lVar5 = *(long *)(unaff_x20 + 0x68);
  if (lVar5 == 0) goto LAB_01a1a9c8;
  fVar15 = fVar15 - fVar13;
  fVar16 = fVar12;
  fVar13 = fVar15;
  uVar10 = FUN_02698ebc(0);
  if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_01a1a9c4;
  lVar5 = lVar5 + lVar7;
  *(undefined4 *)(lVar5 + 0xc) = uVar10;
  *(float *)(lVar5 + 0x10) = fVar16;
  *(float *)(lVar5 + 0x14) = fVar13;
  *(undefined4 *)(lVar5 + 0x18) = in_s3;
  lVar5 = *(long *)(unaff_x20 + 0x68);
  if (lVar5 == 0) goto LAB_01a1a9c8;
  if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) <= uVar6) goto LAB_01a1a9c4;
  fVar16 = 0.0;
  if (lVar7 != 0x20) {
    if ((uint)*(ulong *)(lVar5 + 0x18) <= (int)uVar6 - 1U) goto LAB_01a1a9c4;
    fVar16 = *(float *)(lVar5 + lVar7 + -4);
    if (*(char *)(unaff_x22 + 0xe1b) == '\0') {
      thunk_FUN_00d48444();
      *(undefined1 *)(unaff_x22 + 0xe1b) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar16 = SQRT(fVar15 * fVar15 + fVar12 * fVar12 + fVar9 * fVar9) / unaff_s10 + fVar16;
  }
  *(float *)(lVar5 + lVar7 + 0x1c) = fVar16;
  uVar2 = *(ulong *)(unaff_x19 + 0x18);
  uVar6 = uVar6 + 1;
  lVar7 = lVar7 + 0x20;
  pfVar8 = pfVar8 + 3;
  if ((long)(int)uVar2 <= (long)uVar6) {
    return;
  }
  goto LAB_01a1a838;
}


