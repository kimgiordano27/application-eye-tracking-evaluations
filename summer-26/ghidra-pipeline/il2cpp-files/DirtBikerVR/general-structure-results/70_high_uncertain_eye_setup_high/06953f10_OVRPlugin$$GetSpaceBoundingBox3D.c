/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundingBox3D
ENTRY_POINT: 06953f10
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetSpaceBoundingBox3D(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  float *pfVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((DAT_0897d038 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486c50);
    FUN_03a8a718(PTR_DAT_08487fd0);
    DAT_0897d038 = 1;
  }
  puVar4 = PTR_DAT_08487fd0;
  iVar2 = *(int *)(param_4 + 0x10);
  lVar9 = *(long *)(param_4 + 0x20);
  if (iVar2 == 2) {
LAB_06953f68:
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) ||
       (lVar6 = FUN_07c98f88(*(long *)(lVar9 + 0x10),0), lVar6 == 0)) goto LAB_06954318;
    fVar10 = (float)FUN_07cac824(lVar6,0);
    fVar18 = param_2;
    fVar16 = param_3;
    if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar11 = (float)FUN_07d27e2c(0);
    if (DAT_08974d8c == '\0') {
      FUN_03a8a718(PTR_DAT_08486c60);
      DAT_08974d8c = '\x01';
    }
    puVar3 = PTR_DAT_08486c60;
    if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar12 = SQRT(fVar16 * fVar16 + fVar11 * fVar11 + fVar18 * fVar18);
    if (fVar12 <= DAT_015c5ce0) {
      if (DAT_08974d8f == '\0') {
        FUN_03a8a718(PTR_DAT_084868a0);
        DAT_08974d8f = '\x01';
      }
      pfVar8 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
      fVar11 = *pfVar8;
      fVar18 = pfVar8[1];
      fVar16 = pfVar8[2];
    }
    else {
      fVar11 = fVar11 / fVar12;
      fVar18 = fVar18 / fVar12;
      fVar16 = fVar16 / fVar12;
    }
    if (DAT_08974d91 == '\0') {
      FUN_03a8a718(PTR_DAT_08486c60);
      DAT_08974d91 = '\x01';
    }
    fVar12 = fVar11 * fVar11 + fVar18 * fVar18;
    fVar17 = fVar16 * fVar16 + fVar12;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar15 = 0.0;
    fVar17 = SQRT((param_3 * param_3 + fVar10 * fVar10 + param_2 * param_2) * fVar17);
    if (DAT_015c5594 <= fVar17) {
      fVar12 = -1.0;
      fVar17 = ((param_2 * -fVar18 - fVar10 * fVar11) - param_3 * fVar16) / fVar17;
      fVar18 = 1.0;
      if (fVar17 <= 1.0) {
        fVar18 = fVar17;
      }
      fVar16 = -1.0;
      if (-1.0 <= fVar17) {
        fVar16 = fVar18;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      dVar13 = acos((double)fVar16);
      fVar15 = (float)dVar13 * DAT_015c595c;
    }
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_06954318;
    fVar18 = (float)FUN_06926524(*(long *)(lVar9 + 0x10),0);
    fVar16 = *(float *)(lVar9 + 0x38);
    if (fVar16 <= fVar18) {
LAB_069541fc:
      bVar1 = false;
    }
    else {
      if ((*(long *)(lVar9 + 0x10) == 0) ||
         (lVar6 = *(long *)(*(long *)(lVar9 + 0x10) + 0x20), lVar6 == 0)) goto LAB_06954318;
      fVar18 = (float)FUN_07d30208(lVar6,0);
      if (DAT_08974e24 == '\0') {
        FUN_03a8a718(PTR_DAT_08486c60);
        DAT_08974e24 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (*(float *)(lVar9 + 0x38) <= SQRT(fVar12 * fVar12 + fVar18 * fVar18 + fVar16 * fVar16))
      goto LAB_069541fc;
      bVar1 = *(float *)(lVar9 + 0x2c) < fVar15;
    }
    *(bool *)(lVar9 + 0x34) = bVar1;
    if ((*(char *)(lVar9 + 0x44) == '\0') && (bVar1)) {
      if ((*(long *)(lVar9 + 0x10) == 0) ||
         (lVar6 = *(long *)(*(long *)(lVar9 + 0x10) + 0xd8), lVar6 == 0)) goto LAB_06954318;
      bVar5 = FUN_069608f8(lVar6,0);
      if (((bVar5 & *(int *)(lVar9 + 0x28) == 0) != 0) || (*(int *)(lVar9 + 0x28) == 1)) {
        if (*(int *)(lVar9 + 0x24) != 0) {
          FUN_06953cec(lVar9);
          uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
          FUN_07ca4ee0(0x3f800000,uVar7,0);
          *(undefined8 *)(param_4 + 0x18) = uVar7;
          thunk_FUN_03afed3c((undefined8 *)(param_4 + 0x18),uVar7);
          uVar14 = 1;
          goto LAB_069542f0;
        }
        lVar6 = *(long *)(lVar9 + 0x10);
        uVar7 = FUN_06953c58(lVar9);
        if (lVar6 == 0) goto LAB_06954318;
        FUN_07c9ee6c(lVar6,uVar7,0);
      }
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 0) {
        return 0;
      }
      goto LAB_06953f68;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar9 == 0) goto LAB_06954318;
  }
  if ((*(long *)(lVar9 + 0x10) != 0) &&
     (lVar6 = *(long *)(*(long *)(lVar9 + 0x10) + 0xd8), lVar6 != 0)) {
    FUN_06960900(lVar6,0,0);
    uVar14 = *(undefined4 *)(lVar9 + 0x3c);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
    FUN_07ca4ee0(uVar14,uVar7,0);
    *(undefined8 *)(param_4 + 0x18) = uVar7;
    thunk_FUN_03afed3c((undefined8 *)(param_4 + 0x18),uVar7);
    uVar14 = 2;
LAB_069542f0:
    *(undefined4 *)(param_4 + 0x10) = uVar14;
    return 1;
  }
LAB_06954318:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


