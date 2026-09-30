/*
FUNCTION_NAME: FUN_066dc4c4
ENTRY_POINT: 066dc4c4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


float FUN_066dc4c4(float param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double local_48;
  
  if ((DAT_073a112e & 1) == 0) {
    FUN_02fe925c(OVRTask<List<OVRPlugin_Result>>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d508);
    DAT_073a112e = 1;
  }
  puVar3 = OVRTask<List<OVRPlugin_Result>>_TypeInfo;
  plVar10 = *(long **)(param_2 + 0x10);
  if (plVar10 == (long *)0x0) goto LAB_066dc8dc;
  lVar7 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)OVRTask<List<OVRPlugin_Result>>_TypeInfo) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
        goto LAB_066dc56c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_02feb5b8(plVar10,*(long *)OVRTask<List<OVRPlugin_Result>>_TypeInfo,6);
LAB_066dc56c:
  uVar8 = (*(code *)*puVar6)(plVar10,puVar6[1]);
  if ((uVar8 & 1) == 0) {
    iVar4 = *(int *)(param_2 + 0x28);
    fVar13 = *(float *)(param_2 + 0x48);
    if (DAT_0738ebb6 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738ebb6 = '\x01';
    }
    puVar2 = PTR_DAT_06f6d508;
    param_1 = (fVar13 * (float)iVar4) / param_1;
    if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    dVar12 = (double)param_1;
    dVar11 = modf(dVar12,&local_48);
    if (0.0 <= param_1) {
      if (dVar11 == 0.5) {
        dVar11 = 1.0;
        goto LAB_066dc6a0;
      }
      local_48 = (double)(long)(dVar12 + 0.5);
    }
    else if (dVar11 == -0.5) {
      dVar11 = -1.0;
LAB_066dc6a0:
      if (((long)local_48 & 1U) != 0) {
        local_48 = local_48 + dVar11;
      }
    }
    else {
      local_48 = (double)(long)(dVar12 + -0.5);
    }
    iVar4 = -0x80000000;
    if (local_48 != INFINITY) {
      iVar4 = (int)local_48;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    iVar4 = FUN_05af0054(1,iVar4,0);
    *(int *)(param_2 + 0x50) = iVar4;
    fVar13 = *(float *)(param_2 + 0x48) * (float)*(int *)(param_2 + 0x28);
  }
  else {
    fVar13 = *(float *)(param_2 + 0x48);
    if (DAT_0738ebb6 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738ebb6 = '\x01';
    }
    puVar2 = PTR_DAT_06f6d508;
    fVar13 = fVar13 / param_1;
    if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    dVar12 = (double)fVar13;
    dVar11 = modf(dVar12,&local_48);
    if (0.0 <= fVar13) {
      if (dVar11 == 0.5) {
        dVar11 = 1.0;
        goto LAB_066dc678;
      }
      local_48 = (double)(long)(dVar12 + 0.5);
    }
    else if (dVar11 == -0.5) {
      dVar11 = -1.0;
LAB_066dc678:
      if (((long)local_48 & 1U) != 0) {
        local_48 = local_48 + dVar11;
      }
    }
    else {
      local_48 = (double)(long)(dVar12 + -0.5);
    }
    iVar4 = -0x80000000;
    if (local_48 != INFINITY) {
      iVar4 = (int)local_48;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    iVar4 = FUN_05af0054(1,iVar4,0);
    fVar13 = *(float *)(param_2 + 0x48);
    *(int *)(param_2 + 0x50) = iVar4;
  }
  plVar10 = *(long **)(param_2 + 0x10);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_066dc7cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8(plVar10,*(long *)puVar3,6);
LAB_066dc7cc:
    uVar8 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    if ((uVar8 & 1) == 0) {
      plVar10 = *(long **)(param_2 + 0x10);
      if (plVar10 == (long *)0x0) goto LAB_066dc8dc;
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
            goto LAB_066dc834;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02feb5b8(plVar10,*(long *)puVar3,8);
LAB_066dc834:
      uVar8 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      if ((uVar8 & 1) == 0) {
        plVar10 = *(long **)(param_2 + 0x10);
        if (plVar10 == (long *)0x0) goto LAB_066dc8dc;
        lVar7 = *plVar10;
        iVar1 = *(int *)(param_2 + 0x50);
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_066dc89c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02feb5b8(plVar10,*(long *)puVar3,0);
LAB_066dc89c:
        iVar5 = (*(code *)*puVar6)(plVar10,puVar6[1]);
        *(float *)(param_2 + 0x4c) = 1.0 / (float)(iVar5 * iVar1);
      }
    }
    return fVar13 / (float)iVar4;
  }
LAB_066dc8dc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


