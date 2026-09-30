/*
FUNCTION_NAME: FUN_066dbad0
ENTRY_POINT: 066dbad0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_066dbad0(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                 uint param_6,uint param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  int *piVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  if ((DAT_073a112c & 1) == 0) {
    FUN_02fe925c(OVRTask<List<OVRPlugin_Result>>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d508);
    DAT_073a112c = 1;
  }
  puVar3 = OVRTask<List<OVRPlugin_Result>>_TypeInfo;
  plVar20 = *(long **)(param_5 + 0x10);
  if (plVar20 == (long *)0x0) {
LAB_066dc12c:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar16 = *plVar20;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)OVRTask<List<OVRPlugin_Result>>_TypeInfo) {
        puVar14 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_066dbb88;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar14 = (undefined8 *)FUN_02feb5b8(plVar20,*(long *)OVRTask<List<OVRPlugin_Result>>_TypeInfo,0);
LAB_066dbb88:
  iVar7 = (*(code *)*puVar14)(plVar20,puVar14[1]);
  plVar20 = *(long **)(param_5 + 0x10);
  if (plVar20 == (long *)0x0) goto LAB_066dc12c;
  lVar16 = *plVar20;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
        puVar14 = (undefined8 *)(lVar16 + (long)(*piVar19 + 2) * 0x10 + 0x138);
        goto LAB_066dbbf0;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar14 = (undefined8 *)FUN_02feb5b8(plVar20,*(long *)puVar3,2);
LAB_066dbbf0:
  uVar8 = (*(code *)*puVar14)(plVar20,puVar14[1]);
  plVar20 = *(long **)(param_5 + 0x10);
  if (plVar20 == (long *)0x0) goto LAB_066dc12c;
  lVar16 = *plVar20;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
        puVar14 = (undefined8 *)(lVar16 + (long)(*piVar19 + 4) * 0x10 + 0x138);
        goto LAB_066dbc58;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar14 = (undefined8 *)FUN_02feb5b8(plVar20,*(long *)puVar3,4);
LAB_066dbc58:
  uVar9 = (*(code *)*puVar14)(plVar20,puVar14[1]);
  plVar20 = *(long **)(param_5 + 0x10);
  if (plVar20 == (long *)0x0) goto LAB_066dc12c;
  lVar16 = *plVar20;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
        puVar14 = (undefined8 *)(lVar16 + (long)(*piVar19 + 6) * 0x10 + 0x138);
        goto LAB_066dbcc0;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar14 = (undefined8 *)FUN_02feb5b8(plVar20,*(long *)puVar3,6);
LAB_066dbcc0:
  uVar10 = (*(code *)*puVar14)(plVar20,puVar14[1]);
  plVar20 = *(long **)(param_5 + 0x10);
  if (plVar20 == (long *)0x0) goto LAB_066dc12c;
  lVar16 = *plVar20;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
        puVar14 = (undefined8 *)(lVar16 + (long)(*piVar19 + 8) * 0x10 + 0x138);
        goto LAB_066dbd28;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar14 = (undefined8 *)FUN_02feb5b8(plVar20,*(long *)puVar3,8);
LAB_066dbd28:
  uVar11 = (*(code *)*puVar14)(plVar20,puVar14[1]);
  plVar20 = *(long **)(param_5 + 0x10);
  if (plVar20 == (long *)0x0) goto LAB_066dc12c;
  lVar16 = *plVar20;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
        puVar14 = (undefined8 *)(lVar16 + (long)(*piVar19 + 10) * 0x10 + 0x138);
        goto LAB_066dbd90;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar14 = (undefined8 *)FUN_02feb5b8(plVar20,*(long *)puVar3,10);
LAB_066dbd90:
  bVar4 = (*(code *)*puVar14)(plVar20,puVar14[1]);
  plVar20 = *(long **)(param_5 + 0x10);
  if (plVar20 == (long *)0x0) goto LAB_066dc12c;
  lVar16 = *plVar20;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
        puVar14 = (undefined8 *)(lVar16 + (long)(*piVar19 + 0xc) * 0x10 + 0x138);
        goto LAB_066dbdf8;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar14 = (undefined8 *)FUN_02feb5b8(plVar20,*(long *)puVar3,0xc);
LAB_066dbdf8:
  bVar5 = (*(code *)*puVar14)(plVar20,puVar14[1]);
  puVar2 = PTR_DAT_06f6d508;
  plVar20 = *(long **)(param_5 + 0x10);
  if (plVar20 == (long *)0x0) goto LAB_066dc12c;
  lVar16 = *plVar20;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
        puVar14 = (undefined8 *)(lVar16 + (long)(*piVar19 + 0xe) * 0x10 + 0x138);
        goto LAB_066dbe68;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar14 = (undefined8 *)FUN_02feb5b8(plVar20,*(long *)puVar3,0xe);
LAB_066dbe68:
  bVar6 = (*(code *)*puVar14)(plVar20,puVar14[1]);
  bVar6 = bVar4 & bVar5 & bVar6 & 1;
  *(byte *)(param_5 + 0x25) = bVar4 & bVar5 & 1;
  *(byte *)(param_5 + 0x26) = (bVar4 | bVar5) & 1;
  *(byte *)(param_5 + 0x27) = bVar6;
  *(byte *)(param_5 + 0x54) = bVar6;
  iVar13 = 0;
  if (uVar8 != 0) {
    iVar13 = (int)param_6 / (int)uVar8;
  }
  iVar1 = 0;
  if (uVar9 != 0) {
    iVar1 = (int)param_7 / (int)uVar9;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar12 = FUN_05af019c(iVar1,iVar13,0);
  iVar13 = FUN_05af0054(1,uVar12,0);
  *(int *)(param_5 + 0x28) = iVar13;
  *(undefined1 *)(param_5 + 0x2c) = 0;
  *(undefined8 *)(param_5 + 0x30) = 0;
  if (*(char *)(param_5 + 0x26) == '\0') {
    if ((1 < iVar13) && (((uVar10 ^ 1) & 1) == 0)) {
      uVar15 = 0;
      if (iVar13 != 0) {
        uVar15 = (int)param_6 / iVar13;
      }
      uVar17 = 0;
      if (iVar13 != 0) {
        uVar17 = (int)param_7 / iVar13;
      }
      *(undefined1 *)(param_5 + 0x2c) = 1;
      if ((int)uVar15 < 0) {
        uVar15 = uVar15 + 1;
      }
      if ((int)uVar17 < 0) {
        uVar17 = uVar17 + 1;
      }
      uVar15 = uVar15 & 0xfffffffe;
      uVar17 = uVar17 & 0xfffffffe;
LAB_066dbfd8:
      *(uint *)(param_5 + 0x30) = uVar15;
      goto LAB_066dbfdc;
    }
    fVar21 = (float)FUN_068c2ee4(0);
    fVar22 = param_2;
    fVar24 = param_3;
    fVar25 = param_4;
  }
  else {
    *(undefined1 *)(param_5 + 0x2c) = 1;
    if ((uVar10 & 1) == 0) {
      if (*(char *)(param_5 + 0x25) == '\0') {
        if ((bVar5 & 1) == 0) {
          uVar15 = iVar13 * uVar8;
          uVar17 = param_7;
          goto LAB_066dbfd8;
        }
        *(uint *)(param_5 + 0x30) = param_6;
        uVar17 = iVar13 * uVar9;
        uVar15 = param_6;
      }
      else {
        *(uint *)(param_5 + 0x30) = iVar13 * uVar8;
        uVar17 = iVar13 * uVar9;
        uVar15 = iVar13 * uVar8;
      }
    }
    else {
      uVar17 = uVar9;
      uVar15 = uVar8;
      if (*(char *)(param_5 + 0x25) == '\0') {
        if ((bVar5 & 1) == 0) {
          *(uint *)(param_5 + 0x30) = uVar8;
          uVar17 = 0;
          if (iVar13 != 0) {
            uVar17 = (int)param_7 / iVar13;
          }
          if ((int)uVar17 < 0) {
            uVar17 = uVar17 + 1;
          }
          uVar17 = uVar17 & 0xfffffffe;
        }
        else {
          uVar15 = 0;
          if (iVar13 != 0) {
            uVar15 = (int)param_6 / iVar13;
          }
          if ((int)uVar15 < 0) {
            uVar15 = uVar15 + 1;
          }
          *(uint *)(param_5 + 0x30) = uVar15 & 0xfffffffe;
          uVar15 = uVar15 & 0xfffffffe;
        }
      }
      else {
        *(uint *)(param_5 + 0x30) = uVar8;
      }
    }
LAB_066dbfdc:
    *(uint *)(param_5 + 0x34) = uVar17;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar24 = (float)(int)uVar15;
    fVar25 = (float)(int)uVar17;
  }
  *(float *)(param_5 + 0x38) = fVar21;
  *(float *)(param_5 + 0x3c) = fVar22;
  *(float *)(param_5 + 0x40) = fVar24;
  *(float *)(param_5 + 0x44) = fVar25;
  iVar13 = iVar7;
  if ((bVar5 & 1) == 0) {
    if ((bVar4 & 1) == 0) {
      if (((uVar10 & 1) != 0) && (1 < *(int *)(param_5 + 0x28))) {
        fVar22 = (float)iVar7;
        *(float *)(param_5 + 0x48) = ((float)*(int *)(param_5 + 0x34) * 0.5) / fVar22;
        goto LAB_066dc0d8;
      }
      fVar23 = (float)FUN_068c2ee4(0);
      if (((fVar21 == fVar23) && (fVar25 == param_4)) &&
         ((fVar22 == param_2 && (fVar24 == param_3)))) {
        fVar22 = (float)(int)param_7;
      }
      else {
        fVar22 = *(float *)(param_5 + 0x44);
      }
      iVar13 = *(int *)(param_5 + 0x28) * iVar7;
    }
    else {
      fVar23 = (float)FUN_068c2ee4(0);
      if ((((fVar21 == fVar23) && (fVar25 == param_4)) && (fVar22 == param_2)) &&
         (fVar24 == param_3)) {
        fVar22 = (float)(int)param_6;
        fVar24 = (float)(int)param_7;
      }
      else {
        fVar22 = *(float *)(param_5 + 0x40);
        fVar24 = *(float *)(param_5 + 0x44);
      }
      fVar22 = (float)(int)uVar8 / (fVar22 / fVar24);
    }
  }
  else {
    fVar22 = (float)(int)uVar9;
  }
  *(float *)(param_5 + 0x48) = (fVar22 * 0.5) / (float)iVar13;
  if (((uVar10 | uVar11) & 1) == 0) {
    fVar22 = (float)(*(int *)(param_5 + 0x28) * iVar7);
  }
  else {
    fVar22 = (float)iVar7;
  }
LAB_066dc0d8:
  *(float *)(param_5 + 0x4c) = 1.0 / fVar22;
  return;
}


