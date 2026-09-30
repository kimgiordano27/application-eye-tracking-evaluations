/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeDeserialize
ENTRY_POINT: 071e9d98
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeDeserialize(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  undefined4 uVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
                    /* try { // try from 071e9d9c to 072e9ddb has its CatchHandler @ 071e9ff8 */
  if ((DAT_08268439 & 1) == 0) {
    FUN_0373b518(System_Func<float,_float,_float,_float>_TypeInfo);
    DAT_08268439 = 1;
  }
  fVar15 = *(float *)(param_1 + 0x11c);
  fVar10 = *(float *)(param_1 + 0x120);
  fVar16 = *(float *)(param_1 + 0x118);
  fVar12 = fVar15;
  if (fVar15 <= fVar10) {
    fVar12 = fVar10;
  }
  fVar18 = fVar16;
  if (fVar16 <= fVar12) {
    fVar18 = fVar12;
  }
  *(float *)(param_1 + 0x10c) = fVar18;
                    /* try { // try from 071e9de4 to 072e9def has its CatchHandler @ 071e9fbc */
  if (fVar18 == fVar16) {
    iVar11 = *(int *)(param_1 + 0x108);
    lVar9 = *(long *)(param_1 + 0x140);
                    /* try { // try from 071e9dfc to 072e9e3b has its CatchHandler @ 071e9ff0 */
    if (DAT_082528b8 == '\0') {
      FUN_0373b518(PTR_DAT_07d863e8);
      DAT_082528b8 = '\x01';
    }
    puVar3 = PTR_DAT_07d863e8;
    fVar18 = (fVar16 * (float)iVar11) / fVar18;
    if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    dVar17 = (double)fVar18;
    dVar14 = modf(dVar17,(double *)&stack0x00000018);
    if (0.0 <= fVar18) {
      if (dVar14 == 0.5) {
        dVar14 = 1.0;
        goto LAB_071e9efc;
      }
      dVar17 = (double)(long)(dVar17 + 0.5);
    }
    else if (dVar14 == -0.5) {
      dVar14 = -1.0;
LAB_071e9efc:
      dVar17 = (double)CONCAT44(uStack000000000000001c,uStack0000000000000018);
      if (((long)dVar17 & 1U) != 0) {
        dVar17 = dVar17 + dVar14;
      }
    }
    else {
      dVar17 = (double)(long)(dVar17 + -0.5);
    }
    iVar11 = -0x80000000;
    if (dVar17 != INFINITY) {
      iVar11 = (int)dVar17;
    }
    if (iVar11 < 2) {
      iVar11 = 1;
    }
    if (lVar9 == 0) goto LAB_071ea52c;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_071ea4e0;
    *(int *)(lVar9 + 0x20) = iVar11;
    iVar11 = *(int *)(param_1 + 0x108);
    fVar12 = *(float *)(param_1 + 0x11c);
    lVar9 = *(long *)(param_1 + 0x140);
    fVar10 = *(float *)(param_1 + 0x10c);
    if (DAT_08252d5d == '\0') {
      FUN_0373b518(PTR_DAT_07d863e8);
      DAT_08252d5d = '\x01';
    }
    fVar10 = (fVar12 * (float)iVar11) / fVar10;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    iVar11 = -0x80000000;
    if ((float)(int)fVar10 != INFINITY) {
      iVar11 = (int)fVar10;
    }
    if (iVar11 < 2) {
      iVar11 = 1;
    }
    if (lVar9 == 0) goto LAB_071ea52c;
    if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_071ea4e0;
    *(int *)(lVar9 + 0x24) = iVar11;
    iVar11 = *(int *)(param_1 + 0x108);
    fVar12 = *(float *)(param_1 + 0x120);
    lVar9 = *(long *)(param_1 + 0x140);
    fVar10 = *(float *)(param_1 + 0x10c);
    if (DAT_08252d5d == '\0') {
      FUN_0373b518(PTR_DAT_07d863e8);
      DAT_08252d5d = '\x01';
    }
    fVar10 = (fVar12 * (float)iVar11) / fVar10;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    iVar11 = -0x80000000;
    if ((float)(int)fVar10 != INFINITY) {
      iVar11 = (int)fVar10;
    }
    if (iVar11 < 2) {
      iVar11 = 1;
    }
    if (lVar9 == 0) goto LAB_071ea52c;
    if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_071ea4e0;
    *(int *)(lVar9 + 0x28) = iVar11;
    lVar9 = *(long *)(param_1 + 0x140);
    if (lVar9 == 0) goto LAB_071ea52c;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_071ea4e0;
    fVar12 = *(float *)(param_1 + 0x10c);
    piVar6 = (int *)(lVar9 + 0x20);
LAB_071ea41c:
    fVar12 = fVar12 / (float)*piVar6;
  }
  else {
    if (fVar18 == fVar15) {
      iVar11 = *(int *)(param_1 + 0x108);
      lVar9 = *(long *)(param_1 + 0x140);
      if (DAT_082528b8 == '\0') {
        FUN_0373b518(PTR_DAT_07d863e8);
        DAT_082528b8 = '\x01';
      }
      puVar3 = PTR_DAT_07d863e8;
      fVar18 = (fVar15 * (float)iVar11) / fVar18;
      if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      dVar17 = (double)fVar18;
      dVar14 = modf(dVar17,(double *)&stack0x00000018);
      if (0.0 <= fVar18) {
        if (dVar14 == 0.5) {
          dVar14 = 1.0;
          goto FUN_071e9fb4;
        }
        dVar17 = (double)(long)(dVar17 + 0.5);
      }
      else if (dVar14 == -0.5) {
        dVar14 = -1.0;
FUN_071e9fb4:
        dVar17 = (double)CONCAT44(uStack000000000000001c,uStack0000000000000018);
        if (((long)dVar17 & 1U) != 0) {
          dVar17 = dVar17 + dVar14;
        }
      }
      else {
        dVar17 = (double)(long)(dVar17 + -0.5);
      }
      iVar11 = -0x80000000;
      if (dVar17 != INFINITY) {
        iVar11 = (int)dVar17;
      }
      if (iVar11 < 2) {
        iVar11 = 1;
      }
      if (lVar9 == 0) goto LAB_071ea52c;
      if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_071ea4e0;
      *(int *)(lVar9 + 0x24) = iVar11;
      iVar11 = *(int *)(param_1 + 0x108);
      fVar12 = *(float *)(param_1 + 0x118);
      lVar9 = *(long *)(param_1 + 0x140);
      fVar10 = *(float *)(param_1 + 0x10c);
      if (DAT_08252d5d == '\0') {
        FUN_0373b518(PTR_DAT_07d863e8);
        DAT_08252d5d = '\x01';
      }
      fVar10 = (fVar12 * (float)iVar11) / fVar10;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      iVar11 = -0x80000000;
      if ((float)(int)fVar10 != INFINITY) {
        iVar11 = (int)fVar10;
      }
      if (iVar11 < 2) {
        iVar11 = 1;
      }
      if (lVar9 == 0) goto LAB_071ea52c;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_071ea4e0;
      *(int *)(lVar9 + 0x20) = iVar11;
      iVar11 = *(int *)(param_1 + 0x108);
      fVar12 = *(float *)(param_1 + 0x120);
      lVar9 = *(long *)(param_1 + 0x140);
      fVar10 = *(float *)(param_1 + 0x10c);
      if (DAT_08252d5d == '\0') {
        FUN_0373b518(PTR_DAT_07d863e8);
        DAT_08252d5d = '\x01';
      }
      fVar10 = (fVar12 * (float)iVar11) / fVar10;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      iVar11 = -0x80000000;
      if ((float)(int)fVar10 != INFINITY) {
        iVar11 = (int)fVar10;
      }
      if (iVar11 < 2) {
        iVar11 = 1;
      }
      if (lVar9 == 0) goto LAB_071ea52c;
      if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_071ea4e0;
      *(int *)(lVar9 + 0x28) = iVar11;
      lVar9 = *(long *)(param_1 + 0x140);
      if (lVar9 == 0) goto LAB_071ea52c;
      if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_071ea4e0;
      fVar12 = *(float *)(param_1 + 0x10c);
      piVar6 = (int *)(lVar9 + 0x24);
      goto LAB_071ea41c;
    }
    if (fVar18 == fVar10) {
      iVar11 = *(int *)(param_1 + 0x108);
      lVar9 = *(long *)(param_1 + 0x140);
      if (DAT_082528b8 == '\0') {
        FUN_0373b518(PTR_DAT_07d863e8);
        DAT_082528b8 = '\x01';
      }
      puVar3 = PTR_DAT_07d863e8;
      fVar18 = (fVar10 * (float)iVar11) / fVar18;
      if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      dVar17 = (double)fVar18;
      dVar14 = modf(dVar17,(double *)&stack0x00000018);
      if (0.0 <= fVar18) {
        if (dVar14 == 0.5) {
          dVar14 = 1.0;
          goto LAB_071ea148;
        }
        dVar17 = (double)(long)(dVar17 + 0.5);
      }
      else if (dVar14 == -0.5) {
        dVar14 = -1.0;
LAB_071ea148:
        dVar17 = (double)CONCAT44(uStack000000000000001c,uStack0000000000000018);
        if (((long)dVar17 & 1U) != 0) {
          dVar17 = dVar17 + dVar14;
        }
      }
      else {
        dVar17 = (double)(long)(dVar17 + -0.5);
      }
      iVar11 = -0x80000000;
      if (dVar17 != INFINITY) {
        iVar11 = (int)dVar17;
      }
      if (iVar11 < 2) {
        iVar11 = 1;
      }
      if (lVar9 == 0) goto LAB_071ea52c;
      if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_071ea4e0;
      *(int *)(lVar9 + 0x28) = iVar11;
      iVar11 = *(int *)(param_1 + 0x108);
      fVar12 = *(float *)(param_1 + 0x11c);
      lVar9 = *(long *)(param_1 + 0x140);
      fVar10 = *(float *)(param_1 + 0x10c);
      if (DAT_08252d5d == '\0') {
        FUN_0373b518(PTR_DAT_07d863e8);
        DAT_08252d5d = '\x01';
      }
      fVar10 = (fVar12 * (float)iVar11) / fVar10;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      iVar11 = -0x80000000;
      if ((float)(int)fVar10 != INFINITY) {
        iVar11 = (int)fVar10;
      }
      if (iVar11 < 2) {
        iVar11 = 1;
      }
      if (lVar9 == 0) goto LAB_071ea52c;
      if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_071ea4e0;
      *(int *)(lVar9 + 0x24) = iVar11;
      iVar11 = *(int *)(param_1 + 0x108);
      fVar12 = *(float *)(param_1 + 0x118);
      lVar9 = *(long *)(param_1 + 0x140);
      fVar10 = *(float *)(param_1 + 0x10c);
      if (DAT_08252d5d == '\0') {
        FUN_0373b518(PTR_DAT_07d863e8);
        DAT_08252d5d = '\x01';
      }
      fVar10 = (fVar12 * (float)iVar11) / fVar10;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      iVar11 = -0x80000000;
      if ((float)(int)fVar10 != INFINITY) {
        iVar11 = (int)fVar10;
      }
      if (iVar11 < 2) {
        iVar11 = 1;
      }
      if (lVar9 == 0) goto LAB_071ea52c;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_071ea4e0;
      *(int *)(lVar9 + 0x20) = iVar11;
      lVar9 = *(long *)(param_1 + 0x140);
      if (lVar9 == 0) goto LAB_071ea52c;
      if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_071ea4e0;
      fVar12 = *(float *)(param_1 + 0x10c);
      piVar6 = (int *)(lVar9 + 0x28);
      goto LAB_071ea41c;
    }
    fVar12 = 0.0;
  }
  puVar3 = System_Func<float,_float,_float,_float>_TypeInfo;
  iVar11 = FUN_071e9d48(param_1);
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar9);
    lVar9 = *(long *)puVar3;
  }
  puVar3 = System_Func<float,_float,_float,_float>_TypeInfo;
  if ((long)(ulong)*(uint *)(*(long *)(lVar9 + 0xb8) + 4) < (long)iVar11) {
    thunk_FUN_037a15ac(System_Func<float,_float,_float,_float>_TypeInfo);
    FUN_031ae340();
    lVar9 = thunk_FUN_037a15ac(puVar3);
    uVar13 = NEON_ucvtf(*(undefined4 *)(*(long *)(lVar9 + 0xb8) + 4));
    uStack0000000000000018 = FUN_071f6850(uVar13,0x40000000,0);
    uVar4 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x78),&stack0x00000018);
    uVar5 = thunk_FUN_037a15ac(
                              System_Func<Stream,_XmlReaderSettings,_XmlParserContext,_XmlReader>_TypeInfo
                              );
    uVar4 = FUN_060b76a8(uVar5,uVar4,0);
    thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
    uVar5 = thunk_FUN_037788cc();
    FUN_061a843c(uVar5,uVar4,0);
    uVar4 = thunk_FUN_037a15ac(System_Func<string,_AsyncCallback,_object,_IAsyncResult>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar5,uVar4);
  }
  lVar9 = *(long *)(param_1 + 0x140);
  if (lVar9 != 0) {
    uVar1 = *(uint *)(lVar9 + 0x18);
    uVar7 = 0;
    while (uVar7 < uVar1) {
      lVar2 = uVar7 * 4;
      iVar11 = (int)uVar7;
      pfVar8 = (float *)(param_1 + 0x118);
      if (((iVar11 != 0) && (pfVar8 = (float *)(param_1 + 0x120), iVar11 != 2)) &&
         (pfVar8 = (float *)(param_1 + 0x11c), iVar11 != 1)) {
        thunk_FUN_037a15ac(PTR_DAT_07d92788);
        uVar4 = thunk_FUN_037788cc();
        uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d92790);
        FUN_0623e69c(uVar4,uVar5,0);
        uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d927a0);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar4,uVar5);
      }
      uVar7 = uVar7 + 1;
      *pfVar8 = fVar12 * (float)*(int *)(lVar9 + 0x20 + lVar2);
      if (uVar7 == 3) {
        return;
      }
    }
LAB_071ea4e0:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
LAB_071ea52c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


