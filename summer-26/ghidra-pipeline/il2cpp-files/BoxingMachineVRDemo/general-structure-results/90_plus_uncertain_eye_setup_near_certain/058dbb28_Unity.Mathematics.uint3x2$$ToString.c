/*
FUNCTION_NAME: Unity.Mathematics.uint3x2$$ToString
ENTRY_POINT: 058dbb28
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Mathematics_uint3x2__ToString(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  code *in_x9;
  int *piVar8;
  long *unaff_x19;
  float *unaff_x20;
  undefined8 uVar9;
  long *unaff_x23;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  plVar3 = (long *)(*in_x9)(param_2,*(undefined8 *)(param_1 + 0x270));
  puVar2 = PTR_DAT_06767fc8;
  if (unaff_x19[7] == 0) goto LAB_058dc088;
  uVar9 = *(undefined8 *)(unaff_x19[7] + 0x40);
  if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (DAT_06b7c2c2 == '\0') {
    FUN_02d6084c(PTR_DAT_06767fc8);
    DAT_06b7c2c2 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *(long *)puVar2;
  }
  FUN_033c3938(uVar9,plVar3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x60),
               *(undefined8 *)PTR_DAT_067860c0);
  if (plVar3 == (long *)0x0) goto LAB_058dc088;
  uVar5 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
  if (unaff_x19[7] == 0) goto LAB_058dc088;
  if (*(char *)(unaff_x19[7] + 0x38) == '\0') {
    return;
  }
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(unaff_x19 + 0x73) = 0;
    return;
  }
  fVar15 = *unaff_x20;
  fVar14 = unaff_x20[1];
  if (DAT_06b72814 == '\0') {
    FUN_02d6084c(PTR_DAT_0675ebd8);
    DAT_06b72814 = '\x01';
  }
  fVar12 = ABS(fVar15);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  fVar13 = **(float **)(*(long *)PTR_DAT_0675ebd8 + 0xb8) * 8.0;
  fVar11 = fVar12 * DAT_012084b4;
  if (fVar12 * DAT_012084b4 <= fVar13) {
    fVar11 = fVar13;
  }
  if (fVar11 <= ABS(0.0 - fVar15)) {
LAB_058dbc70:
    plVar3 = (long *)**(undefined8 **)(*(long *)PTR_DAT_067685a8 + 0xb8);
    if (plVar3 == (long *)0x0) goto LAB_058dc088;
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067685a0) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0x15) * 0x10 + 0x138);
          goto LAB_058dbce0;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_067685a0,0x15);
LAB_058dbce0:
    fVar14 = (float)(*(code *)*puVar6)(plVar3,puVar6[1]);
    fVar15 = *unaff_x20;
    fVar12 = unaff_x20[1];
    if (fVar15 * fVar15 + fVar12 * fVar12 <= 0.0) {
      iVar10 = 4;
      bVar1 = true;
    }
    else {
      bVar1 = false;
      if (ABS(fVar15) <= ABS(fVar12)) {
        if (fVar12 <= 0.0) {
          iVar10 = 3;
        }
        else {
          iVar10 = 1;
        }
      }
      else if (fVar15 <= 0.0) {
        iVar10 = 0;
      }
      else {
        iVar10 = 2;
      }
    }
    if (iVar10 != *(int *)((long)unaff_x19 + 0x39c)) {
      *(undefined4 *)(unaff_x19 + 0x73) = 0;
    }
    if (bVar1) goto LAB_058dbd48;
    if ((int)unaff_x19[0x73] != 0) {
      if ((int)unaff_x19[0x73] < 2) {
        fVar11 = *(float *)(unaff_x19 + 0xb);
      }
      else {
        fVar11 = *(float *)((long)unaff_x19 + 0x5c);
      }
      if (fVar14 <= *(float *)(unaff_x19 + 0x74) + fVar11) goto LAB_058dbd4c;
    }
    plVar3 = (long *)unaff_x19[0x75];
    if (plVar3 == (long *)0x0) {
      lVar4 = unaff_x19[7];
      plVar3 = (long *)thunk_FUN_02d9d534(*(undefined8 *)OVRPlugin_OVRP_1_55_1_TypeInfo);
      FUN_0636a0ac(plVar3,lVar4,0);
      unaff_x19[0x75] = (long)plVar3;
      thunk_FUN_02dd37b4(unaff_x19 + 0x75,plVar3);
      if (plVar3 == (long *)0x0) goto LAB_058dc088;
    }
    (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
    *(float *)(plVar3 + 4) = fVar15;
    *(float *)((long)plVar3 + 0x24) = fVar12;
    *(int *)(plVar3 + 5) = iVar10;
    uVar5 = FUN_058dc08c();
    puVar2 = PTR_DAT_06767fc8;
    if ((uVar5 & 1) != 0) {
      if (unaff_x19[7] != 0) {
        if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (DAT_06b80b9b == '\0') {
          FUN_02d6084c(PTR_DAT_06767fc8);
          DAT_06b80b9b = '\x01';
        }
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar4 = *(long *)puVar2;
        }
        FUN_0638a03c(*(undefined8 *)(lVar4 + 0xb8));
        return;
      }
      goto LAB_058dc088;
    }
  }
  else {
    fVar15 = ABS(fVar14);
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    fVar12 = fVar15 * DAT_012084b4;
    if (fVar15 * DAT_012084b4 <= fVar13) {
      fVar12 = fVar13;
    }
    if (fVar12 <= ABS(0.0 - fVar14)) goto LAB_058dbc70;
LAB_058dbd48:
    *(undefined4 *)(unaff_x19 + 0x73) = 0;
  }
LAB_058dbd4c:
  if (unaff_x19[7] != 0) {
    uVar9 = *(undefined8 *)(unaff_x19[7] + 0x40);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_0606a004(uVar9,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (unaff_x19[0x11] == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_0582a780(unaff_x19[0x11],0);
    }
    if (unaff_x19[0x12] == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_0582a780(unaff_x19[0x12],0);
    }
    plVar3 = (long *)(**(code **)(*unaff_x19 + 0x268))();
    if ((lVar7 != 0) && (uVar5 = FUN_05814b80(lVar7,0), puVar2 = PTR_DAT_06767fc8, (uVar5 & 1) != 0)
       ) {
      if (unaff_x19[7] == 0) goto LAB_058dc088;
      uVar9 = *(undefined8 *)(unaff_x19[7] + 0x40);
      if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (DAT_06b80b9c == '\0') {
        FUN_02d6084c(PTR_DAT_06767fc8);
        DAT_06b80b9c = '\x01';
      }
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar7 = *(long *)puVar2;
      }
      FUN_033c3938(uVar9,plVar3,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x88),
                   *(undefined8 *)OVRPlugin_OVRP_1_54_0_TypeInfo);
    }
    if (plVar3 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
      if (lVar4 == 0) {
        return;
      }
      if ((uVar5 & 1) != 0) {
        return;
      }
      uVar5 = FUN_05814b80(lVar4,0);
      puVar2 = PTR_DAT_06767fc8;
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (unaff_x19[7] != 0) {
        uVar9 = *(undefined8 *)(unaff_x19[7] + 0x40);
        if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (DAT_06b80b9d == '\0') {
          FUN_02d6084c(PTR_DAT_06767fc8);
          DAT_06b80b9d = '\x01';
        }
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar4 = *(long *)puVar2;
        }
        FUN_033c3938(uVar9,plVar3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x80),
                     *(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
        return;
      }
    }
  }
LAB_058dc088:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


