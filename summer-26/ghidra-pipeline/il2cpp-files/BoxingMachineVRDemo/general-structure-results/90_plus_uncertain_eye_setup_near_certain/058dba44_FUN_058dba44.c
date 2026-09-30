/*
FUNCTION_NAME: FUN_058dba44
ENTRY_POINT: 058dba44
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_058dba44(long *param_1,float *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_06b80b2b & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_54_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_067860b8);
    FUN_02d6084c(OVRPlugin_OVRP_1_55_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_067860c0);
    FUN_02d6084c(PTR_DAT_06767fc8);
    FUN_02d6084c(OVRPlugin_OVRP_1_55_1_TypeInfo);
    FUN_02d6084c(PTR_DAT_067685a0);
    FUN_02d6084c(PTR_DAT_067685a8);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    DAT_06b80b2b = 1;
  }
  puVar2 = PTR_DAT_0675e1b8;
  if (param_1[7] == 0) goto LAB_058dc088;
  uVar10 = *(undefined8 *)(param_1[7] + 0x40);
  if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_0606a004(uVar10,0,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    plVar5 = (long *)(**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
    puVar3 = PTR_DAT_06767fc8;
    if (param_1[7] == 0) goto LAB_058dc088;
    uVar10 = *(undefined8 *)(param_1[7] + 0x40);
    if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (DAT_06b7c2c2 == '\0') {
      FUN_02d6084c(PTR_DAT_06767fc8);
      DAT_06b7c2c2 = '\x01';
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar3;
    }
    FUN_033c3938(uVar10,plVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60),
                 *(undefined8 *)PTR_DAT_067860c0);
    if (plVar5 == (long *)0x0) goto LAB_058dc088;
    uVar4 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
  }
  if (param_1[7] == 0) goto LAB_058dc088;
  if (*(char *)(param_1[7] + 0x38) == '\0') {
    return;
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x73) = 0;
    return;
  }
  fVar16 = *param_2;
  fVar15 = param_2[1];
  if (DAT_06b72814 == '\0') {
    FUN_02d6084c(PTR_DAT_0675ebd8);
    DAT_06b72814 = '\x01';
  }
  fVar13 = ABS(fVar16);
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar14 = **(float **)(*(long *)PTR_DAT_0675ebd8 + 0xb8) * 8.0;
  fVar12 = fVar13 * DAT_012084b4;
  if (fVar13 * DAT_012084b4 <= fVar14) {
    fVar12 = fVar14;
  }
  if (fVar12 <= ABS(0.0 - fVar16)) {
LAB_058dbc70:
    plVar5 = (long *)**(undefined8 **)(*(long *)PTR_DAT_067685a8 + 0xb8);
    if (plVar5 == (long *)0x0) goto LAB_058dc088;
    lVar6 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067685a0) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x15) * 0x10 + 0x138);
          goto LAB_058dbce0;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_067685a0,0x15);
LAB_058dbce0:
    fVar15 = (float)(*(code *)*puVar7)(plVar5,puVar7[1]);
    fVar16 = *param_2;
    fVar13 = param_2[1];
    if (fVar16 * fVar16 + fVar13 * fVar13 <= 0.0) {
      iVar11 = 4;
      bVar1 = true;
    }
    else {
      bVar1 = false;
      if (ABS(fVar16) <= ABS(fVar13)) {
        if (fVar13 <= 0.0) {
          iVar11 = 3;
        }
        else {
          iVar11 = 1;
        }
      }
      else if (fVar16 <= 0.0) {
        iVar11 = 0;
      }
      else {
        iVar11 = 2;
      }
    }
    if (iVar11 != *(int *)((long)param_1 + 0x39c)) {
      *(undefined4 *)(param_1 + 0x73) = 0;
    }
    if (bVar1) goto LAB_058dbd48;
    if ((int)param_1[0x73] != 0) {
      if ((int)param_1[0x73] < 2) {
        fVar12 = *(float *)(param_1 + 0xb);
      }
      else {
        fVar12 = *(float *)((long)param_1 + 0x5c);
      }
      if (fVar15 <= *(float *)(param_1 + 0x74) + fVar12) goto LAB_058dbd4c;
    }
    plVar5 = (long *)param_1[0x75];
    if (plVar5 == (long *)0x0) {
      lVar6 = param_1[7];
      plVar5 = (long *)thunk_FUN_02d9d534(*(undefined8 *)OVRPlugin_OVRP_1_55_1_TypeInfo);
      FUN_0636a0ac(plVar5,lVar6,0);
      param_1[0x75] = (long)plVar5;
      thunk_FUN_02dd37b4(param_1 + 0x75,plVar5);
      if (plVar5 == (long *)0x0) goto LAB_058dc088;
    }
    (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    *(float *)(plVar5 + 4) = fVar16;
    *(float *)((long)plVar5 + 0x24) = fVar13;
    *(int *)(plVar5 + 5) = iVar11;
    uVar4 = FUN_058dc08c(param_1,plVar5);
    puVar3 = PTR_DAT_06767fc8;
    if ((uVar4 & 1) != 0) {
      if (param_1[7] != 0) {
        if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (DAT_06b80b9b == '\0') {
          FUN_02d6084c(PTR_DAT_06767fc8);
          DAT_06b80b9b = '\x01';
        }
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar6 = *(long *)puVar3;
        }
        FUN_0638a03c(*(undefined8 *)(lVar6 + 0xb8));
        return;
      }
      goto LAB_058dc088;
    }
  }
  else {
    fVar16 = ABS(fVar15);
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    fVar13 = fVar16 * DAT_012084b4;
    if (fVar16 * DAT_012084b4 <= fVar14) {
      fVar13 = fVar14;
    }
    if (fVar13 <= ABS(0.0 - fVar15)) goto LAB_058dbc70;
LAB_058dbd48:
    *(undefined4 *)(param_1 + 0x73) = 0;
  }
LAB_058dbd4c:
  if (param_1[7] != 0) {
    uVar10 = *(undefined8 *)(param_1[7] + 0x40);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_0606a004(uVar10,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (param_1[0x11] == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_0582a780(param_1[0x11],0);
    }
    if (param_1[0x12] == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_0582a780(param_1[0x12],0);
    }
    plVar5 = (long *)(**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
    if ((lVar8 != 0) && (uVar4 = FUN_05814b80(lVar8,0), puVar2 = PTR_DAT_06767fc8, (uVar4 & 1) != 0)
       ) {
      if (param_1[7] == 0) goto LAB_058dc088;
      uVar10 = *(undefined8 *)(param_1[7] + 0x40);
      if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (DAT_06b80b9c == '\0') {
        FUN_02d6084c(PTR_DAT_06767fc8);
        DAT_06b80b9c = '\x01';
      }
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar8 = *(long *)puVar2;
      }
      FUN_033c3938(uVar10,plVar5,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x88),
                   *(undefined8 *)OVRPlugin_OVRP_1_54_0_TypeInfo);
    }
    if (plVar5 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
      if (lVar6 == 0) {
        return;
      }
      if ((uVar4 & 1) != 0) {
        return;
      }
      uVar4 = FUN_05814b80(lVar6,0);
      puVar2 = PTR_DAT_06767fc8;
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (param_1[7] != 0) {
        uVar10 = *(undefined8 *)(param_1[7] + 0x40);
        if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (DAT_06b80b9d == '\0') {
          FUN_02d6084c(PTR_DAT_06767fc8);
          DAT_06b80b9d = '\x01';
        }
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar6 = *(long *)puVar2;
        }
        FUN_033c3938(uVar10,plVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x80),
                     *(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
        return;
      }
    }
  }
LAB_058dc088:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


