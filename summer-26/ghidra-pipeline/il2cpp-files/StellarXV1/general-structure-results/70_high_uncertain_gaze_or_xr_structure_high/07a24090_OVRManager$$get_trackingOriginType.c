/*
FUNCTION_NAME: OVRManager$$get_trackingOriginType
ENTRY_POINT: 07a24090
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


float OVRManager__get_trackingOriginType(undefined1 param_1 [16],float param_2,float param_3)

{
  int iVar1;
  undefined8 *puVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s15;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  
  if (DAT_098854e6 == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    DAT_098854e6 = '\x01';
  }
  fVar8 = unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10;
  if (**(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) <= fVar8) {
    fVar9 = unaff_s8 * param_3 + unaff_s9 * unaff_s11 + unaff_s10 * param_2;
    unaff_s11 = unaff_s11 - (unaff_s9 * fVar9) / fVar8;
    param_2 = param_2 - (unaff_s10 * fVar9) / fVar8;
    param_3 = param_3 - (unaff_s8 * fVar9) / fVar8;
  }
  if (*(char *)(unaff_x23 + 0x4e7) == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    *(undefined1 *)(unaff_x23 + 0x4e7) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar8 = SQRT(param_3 * param_3 + unaff_s11 * unaff_s11 + param_2 * param_2);
  if (fVar8 <= unaff_s15) {
    if (*(char *)(unaff_x24 + 0x4f1) == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      *(undefined1 *)(unaff_x24 + 0x4f1) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fVar9 = *pfVar3;
    param_2 = pfVar3[1];
    param_3 = pfVar3[2];
  }
  else {
    fVar9 = unaff_s11 / fVar8;
    param_2 = param_2 / fVar8;
    param_3 = param_3 / fVar8;
  }
  fVar8 = (float)FUN_041ee3bc(fVar9,param_2,param_3,uStack0000000000000018,uStack000000000000001c,
                              in_stack_00000020,0);
  plVar7 = *(long **)(unaff_x19 + 0x28);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x21) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_07a24218;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00(plVar7,*unaff_x21,0);
LAB_07a24218:
  iVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  fVar9 = -fVar8;
  if (iVar1 != 1) {
    fVar9 = fVar8;
  }
  if (fVar9 < -70.0) {
    fVar9 = fVar9 + 360.0;
  }
  return fVar9;
}


