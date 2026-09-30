/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_3$$ovrp_GetNodeAcceleration
ENTRY_POINT: 0696dcc0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_3__ovrp_GetNodeAcceleration(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  long unaff_x19;
  long *unaff_x20;
  long lVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 in_stack_00000008;
  
  thunk_FUN_03afed3c();
  puVar2 = PTR_DAT_084b71c0;
  puVar3 = PTR_DAT_08486bc0;
  plVar8 = *(long **)(unaff_x19 + 0x20);
  if (plVar8 == (long *)0x0) goto LAB_0696eee8;
  (**(code **)(*plVar8 + 0x5e8))
            (plVar8,*(undefined8 *)PTR_DAT_08486bc0,*(undefined8 *)(*plVar8 + 0x5f0));
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar9 = *(long *)puVar2;
  }
  puVar4 = PTR_DAT_084922d8;
  puVar12 = *(undefined8 **)(lVar9 + 0xb8);
  lVar18 = puVar12[1];
  if (lVar18 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar19 = *puVar12;
    lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b5a00);
    FUN_04962b78(lVar18,uVar19,*(undefined8 *)PTR_DAT_084b71b8,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar8 = lVar18;
    thunk_FUN_03afed3c(plVar8,lVar18);
  }
  puVar2 = PTR_DAT_084b5a10;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  bVar6 = FUN_045b08cc(lVar18,*(undefined8 *)puVar2);
  *(byte *)(unaff_x19 + 0x198) = bVar6 & 1;
  if ((bVar6 & 1) != 0) {
    lVar9 = *(long *)(unaff_x19 + 400);
    if (lVar9 == 0) goto LAB_0696eee8;
    uVar7 = FUN_07c986c8(lVar9,0);
    FUN_07c9877c(lVar9,(uVar7 ^ 0xffffffff) & 1,0);
  }
  puVar2 = PTR_DAT_08486738;
  if (DAT_0897cf36 == '\0') {
    FUN_03a8a718(PTR_DAT_084b59e8);
    DAT_0897cf36 = '\x01';
  }
  puVar4 = PTR_DAT_084b59e8;
  uVar19 = **(undefined8 **)(*(long *)PTR_DAT_084b59e8 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar10 = FUN_07c9c218(uVar19,0,0);
  if ((uVar10 & 1) != 0) {
    if (DAT_0897cf36 == '\0') {
      FUN_03a8a718(PTR_DAT_084b59e8);
      DAT_0897cf36 = '\x01';
    }
    lVar9 = **(long **)(*(long *)puVar4 + 0xb8);
    if (lVar9 == 0) goto LAB_0696eee8;
    iVar1 = *(int *)(lVar9 + 0x54);
    if (iVar1 == 2) {
      if (*unaff_x20 == 0) goto LAB_0696eee8;
      fVar20 = (float)FUN_06926524(*unaff_x20,0);
      if (DAT_0897cf36 == '\0') {
        FUN_03a8a718(PTR_DAT_084b59e8);
        DAT_0897cf36 = '\x01';
      }
      lVar9 = **(long **)(*(long *)puVar4 + 0xb8);
      if (lVar9 == 0) goto LAB_0696eee8;
      if (fVar20 < *(float *)(lVar9 + 0x50)) {
        plVar8 = *(long **)(unaff_x19 + 0x20);
        if (plVar8 == (long *)0x0) goto LAB_0696eee8;
        uVar19 = (**(code **)(*plVar8 + 0x5d8))(plVar8,*(undefined8 *)(*plVar8 + 0x5e0));
        puVar12 = (undefined8 *)PTR_DAT_084b71d8;
        goto LAB_0696df00;
      }
    }
    else if (iVar1 == 1) {
      plVar8 = *(long **)(unaff_x19 + 0x20);
      if (plVar8 == (long *)0x0) goto LAB_0696eee8;
      uVar19 = (**(code **)(*plVar8 + 0x5d8))(plVar8,*(undefined8 *)(*plVar8 + 0x5e0));
      puVar12 = (undefined8 *)PTR_DAT_084b71e8;
LAB_0696df00:
      uVar19 = FUN_065c0764(uVar19,*puVar12,0);
      (**(code **)(*plVar8 + 0x5e8))(plVar8,uVar19,*(undefined8 *)(*plVar8 + 0x5f0));
    }
  }
  lVar9 = *unaff_x20;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar10 = FUN_07c9e200(lVar9,0,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  plVar8 = (long *)(unaff_x19 + 0xf0);
  lVar9 = *plVar8;
  uVar19 = *(undefined8 *)(unaff_x19 + 0xe8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar10 = FUN_07c9c218(uVar19,lVar9,0);
  if ((uVar10 & 1) != 0) {
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar11 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b71a8);
    if ((plVar11 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180))
       , plVar11 == (long *)0x0)) {
      plVar11 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0xf8) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6920;
      bVar6 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar11;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0xf8) = plVar13;
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar11 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
        plVar11 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0xf8,plVar11);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar11 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b71a0);
    if ((plVar11 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180))
       , plVar11 == (long *)0x0)) {
      plVar11 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x100) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6a48;
      bVar6 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar11;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x100) = plVar13;
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar11 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
        plVar11 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x100,plVar11);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar11 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b6d90);
    if ((plVar11 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180))
       , plVar11 == (long *)0x0)) {
      plVar11 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x108) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6ad0;
      bVar6 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar11;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x108) = plVar13;
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar11 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
        plVar11 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x108,plVar11);
    puVar4 = PTR_DAT_084b6d98;
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar11 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b6d98);
    if ((plVar11 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180))
       , plVar11 == (long *)0x0)) {
      plVar11 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x110) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6948;
      bVar6 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar11;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x110) = plVar13;
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar11 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
        plVar11 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x110,plVar11);
    puVar5 = PTR_DAT_084b7198;
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar11 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7198);
    if ((plVar11 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180))
       , plVar11 == (long *)0x0)) {
      plVar11 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x118) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6a50;
      bVar6 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar11;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x118) = plVar13;
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar11 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
        plVar11 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x118,plVar11);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar11 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7178);
    if ((plVar11 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180))
       , plVar11 == (long *)0x0)) {
      plVar11 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x120) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6aa8;
      bVar6 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar11;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x120) = plVar13;
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar11 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
        plVar11 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x120,plVar11);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar11 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)puVar4);
    if ((plVar11 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180))
       , plVar11 == (long *)0x0)) {
      plVar11 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x110) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6948;
      bVar6 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar11;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x110) = plVar13;
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar11 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
        plVar11 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x110,plVar11);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar11 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)puVar5);
    if ((plVar11 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180))
       , plVar11 == (long *)0x0)) {
      plVar11 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x118) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6a50;
      bVar6 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar11;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x118) = plVar13;
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar11 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
        plVar11 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x118,plVar11);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar11 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7188);
    if ((plVar11 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180))
       , plVar11 == (long *)0x0)) {
      plVar11 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x130) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6a68;
      bVar6 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar11;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x130) = plVar13;
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar11 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
        plVar11 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x130,plVar11);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar11 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7180);
    if ((plVar11 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180))
       , plVar11 == (long *)0x0)) {
      plVar11 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x128) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6a70;
      bVar6 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar11;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x128) = plVar13;
      if (*(byte *)(*plVar11 + 0x130) < bVar6) {
        plVar11 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != lVar9) {
        plVar11 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x128,plVar11);
  }
  lVar9 = *unaff_x20;
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + 0x168) == '\0') {
      return;
    }
    if ((*(long *)(lVar9 + 0xd8) != 0) &&
       (plVar11 = *(long **)(unaff_x19 + 0xa0), plVar11 != (long *)0x0)) {
      fVar22 = *(float *)(*(long *)(lVar9 + 0xd8) + 0x34);
      fVar20 = 1.0;
      if (fVar22 <= 1.0) {
        fVar20 = fVar22;
      }
      fVar21 = 0.0;
      if (0.0 <= fVar22) {
        fVar21 = fVar20;
      }
      (**(code **)(*plVar11 + 0x428))(fVar21,plVar11,*(undefined8 *)(*plVar11 + 0x430));
      if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
          (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar9 != 0)) &&
         (plVar11 = *(long **)(unaff_x19 + 0xa8), plVar11 != (long *)0x0)) {
        fVar22 = *(float *)(lVar9 + 0x44);
        fVar20 = 1.0;
        if (fVar22 <= 1.0) {
          fVar20 = fVar22;
        }
        fVar21 = 0.0;
        if (0.0 <= fVar22) {
          fVar21 = fVar20;
        }
        (**(code **)(*plVar11 + 0x428))(fVar21,plVar11,*(undefined8 *)(*plVar11 + 0x430));
        if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
            (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar9 != 0)) &&
           ((lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0 &&
            (plVar11 = *(long **)(unaff_x19 + 0xb0), plVar11 != (long *)0x0)))) {
          fVar22 = *(float *)(lVar9 + 0x78);
          fVar20 = 1.0;
          if (fVar22 <= 1.0) {
            fVar20 = fVar22;
          }
          fVar21 = 0.0;
          if (0.0 <= fVar22) {
            fVar21 = fVar20;
          }
          (**(code **)(*plVar11 + 0x428))(fVar21,plVar11,*(undefined8 *)(*plVar11 + 0x430));
          if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
              (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar9 != 0)) &&
             (plVar11 = *(long **)(unaff_x19 + 0xb8), plVar11 != (long *)0x0)) {
            fVar22 = *(float *)(lVar9 + 0x54);
            fVar20 = 1.0;
            if (fVar22 <= 1.0) {
              fVar20 = fVar22;
            }
            fVar21 = 0.0;
            if (0.0 <= fVar22) {
              fVar21 = fVar20;
            }
            (**(code **)(*plVar11 + 0x428))(fVar21,plVar11,*(undefined8 *)(*plVar11 + 0x430));
            if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar9 != 0)) &&
               (plVar11 = *(long **)(unaff_x19 + 0xc0), plVar11 != (long *)0x0)) {
              fVar22 = *(float *)(lVar9 + 0x24);
              fVar20 = 1.0;
              if (-1.0 <= fVar22) {
                fVar20 = -fVar22;
              }
              fVar21 = 0.0;
              if (fVar22 <= 0.0) {
                fVar21 = fVar20;
              }
              (**(code **)(*plVar11 + 0x428))(fVar21,plVar11,*(undefined8 *)(*plVar11 + 0x430));
              if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                  (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar9 != 0)) &&
                 (plVar11 = *(long **)(unaff_x19 + 200), plVar11 != (long *)0x0)) {
                fVar22 = *(float *)(lVar9 + 0x24);
                fVar20 = 1.0;
                if (fVar22 <= 1.0) {
                  fVar20 = fVar22;
                }
                fVar21 = 0.0;
                if (0.0 <= fVar22) {
                  fVar21 = fVar20;
                }
                (**(code **)(*plVar11 + 0x428))(fVar21,plVar11,*(undefined8 *)(*plVar11 + 0x430));
                lVar9 = *(long *)(unaff_x19 + 0xf8);
                if (((lVar9 != 0) && (*(char *)(lVar9 + 0x58) != '\0')) &&
                   (*(char *)(lVar9 + 0x21) == '\0')) {
                  plVar11 = *(long **)(unaff_x19 + 0x20);
                  if (plVar11 == (long *)0x0) goto LAB_0696eee8;
                  uVar19 = (**(code **)(*plVar11 + 0x5d8))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x5e0));
                  uVar19 = FUN_065c0764(uVar19,*(undefined8 *)PTR_DAT_084b71d0,0);
                  (**(code **)(*plVar11 + 0x5e8))(plVar11,uVar19,*(undefined8 *)(*plVar11 + 0x5f0));
                }
                lVar9 = *(long *)(unaff_x19 + 0x100);
                if (((lVar9 != 0) && (*(int *)(lVar9 + 0x28) == 0)) &&
                   (*(char *)(lVar9 + 0x34) != '\0')) {
                  plVar11 = *(long **)(unaff_x19 + 0x20);
                  if (plVar11 == (long *)0x0) goto LAB_0696eee8;
                  uVar19 = (**(code **)(*plVar11 + 0x5d8))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x5e0));
                  uVar19 = FUN_065c0764(uVar19,*(undefined8 *)PTR_DAT_084b71f0,0);
                  (**(code **)(*plVar11 + 0x5e8))(plVar11,uVar19,*(undefined8 *)(*plVar11 + 0x5f0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x108) != 0) {
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x18), lVar9 == 0))
                  goto LAB_0696eee8;
                  plVar11 = *(long **)(*(long *)(unaff_x19 + 0x40) + 0xe0);
                  lVar18 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar9 + 0x18) == '\0') {
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar18 = *(long *)puVar4;
                    }
                    puVar14 = *(undefined4 **)(lVar18 + 0xb8);
                    puVar15 = puVar14 + 1;
                    puVar16 = puVar14 + 2;
                    puVar17 = puVar14 + 3;
                  }
                  else {
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar18 = *(long *)puVar4;
                    }
                    lVar9 = *(long *)(lVar18 + 0xb8);
                    puVar14 = (undefined4 *)(lVar9 + 0x10);
                    puVar15 = (undefined4 *)(lVar9 + 0x14);
                    puVar16 = (undefined4 *)(lVar9 + 0x18);
                    puVar17 = (undefined4 *)(lVar9 + 0x1c);
                  }
                  if (plVar11 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar11 + 0x2a8))
                            (*puVar14,*puVar15,*puVar16,*puVar17,plVar11,
                             *(undefined8 *)(*plVar11 + 0x2b0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x110) != 0) {
                  if ((*(long *)(unaff_x19 + 0x48) == 0) ||
                     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x110) + 0x18), lVar9 == 0))
                  goto LAB_0696eee8;
                  plVar11 = *(long **)(*(long *)(unaff_x19 + 0x48) + 0xe0);
                  lVar18 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar9 + 0x18) == '\0') {
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar18 = *(long *)puVar4;
                    }
                    puVar14 = *(undefined4 **)(lVar18 + 0xb8);
                    puVar15 = puVar14 + 1;
                    puVar16 = puVar14 + 2;
                    puVar17 = puVar14 + 3;
                  }
                  else {
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar18 = *(long *)puVar4;
                    }
                    lVar9 = *(long *)(lVar18 + 0xb8);
                    puVar14 = (undefined4 *)(lVar9 + 0x10);
                    puVar15 = (undefined4 *)(lVar9 + 0x14);
                    puVar16 = (undefined4 *)(lVar9 + 0x18);
                    puVar17 = (undefined4 *)(lVar9 + 0x1c);
                  }
                  if (plVar11 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar11 + 0x2a8))
                            (*puVar14,*puVar15,*puVar16,*puVar17,plVar11,
                             *(undefined8 *)(*plVar11 + 0x2b0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x118) != 0) {
                  if ((*(long *)(unaff_x19 + 0x50) == 0) ||
                     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x18), lVar9 == 0))
                  goto LAB_0696eee8;
                  plVar11 = *(long **)(*(long *)(unaff_x19 + 0x50) + 0xe0);
                  lVar18 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar9 + 0x18) == '\0') {
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar18 = *(long *)puVar4;
                    }
                    puVar14 = *(undefined4 **)(lVar18 + 0xb8);
                    puVar15 = puVar14 + 1;
                    puVar16 = puVar14 + 2;
                    puVar17 = puVar14 + 3;
                  }
                  else {
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar18 = *(long *)puVar4;
                    }
                    lVar9 = *(long *)(lVar18 + 0xb8);
                    puVar14 = (undefined4 *)(lVar9 + 0x10);
                    puVar15 = (undefined4 *)(lVar9 + 0x14);
                    puVar16 = (undefined4 *)(lVar9 + 0x18);
                    puVar17 = (undefined4 *)(lVar9 + 0x1c);
                  }
                  if (plVar11 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar11 + 0x2a8))
                            (*puVar14,*puVar15,*puVar16,*puVar17,plVar11,
                             *(undefined8 *)(*plVar11 + 0x2b0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x120) != 0) {
                  if ((*(long *)(unaff_x19 + 0x58) == 0) ||
                     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x18), lVar9 == 0))
                  goto LAB_0696eee8;
                  plVar11 = *(long **)(*(long *)(unaff_x19 + 0x58) + 0xe0);
                  lVar18 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar9 + 0x18) == '\0') {
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar18 = *(long *)puVar4;
                    }
                    puVar14 = *(undefined4 **)(lVar18 + 0xb8);
                    puVar15 = puVar14 + 1;
                    puVar16 = puVar14 + 2;
                    puVar17 = puVar14 + 3;
                  }
                  else {
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar18 = *(long *)puVar4;
                    }
                    lVar9 = *(long *)(lVar18 + 0xb8);
                    puVar14 = (undefined4 *)(lVar9 + 0x10);
                    puVar15 = (undefined4 *)(lVar9 + 0x14);
                    puVar16 = (undefined4 *)(lVar9 + 0x18);
                    puVar17 = (undefined4 *)(lVar9 + 0x1c);
                  }
                  if (plVar11 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar11 + 0x2a8))
                            (*puVar14,*puVar15,*puVar16,*puVar17,plVar11,
                             *(undefined8 *)(*plVar11 + 0x2b0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x128) != 0) {
                  if ((*(long *)(unaff_x19 + 0x78) == 0) ||
                     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x128) + 0x18), lVar9 == 0))
                  goto LAB_0696eee8;
                  plVar11 = *(long **)(*(long *)(unaff_x19 + 0x78) + 0xe0);
                  lVar18 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar9 + 0x18) == '\0') {
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar18 = *(long *)puVar4;
                    }
                    puVar14 = *(undefined4 **)(lVar18 + 0xb8);
                    puVar15 = puVar14 + 1;
                    puVar16 = puVar14 + 2;
                    puVar17 = puVar14 + 3;
                  }
                  else {
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar18 = *(long *)puVar4;
                    }
                    lVar9 = *(long *)(lVar18 + 0xb8);
                    puVar14 = (undefined4 *)(lVar9 + 0x10);
                    puVar15 = (undefined4 *)(lVar9 + 0x14);
                    puVar16 = (undefined4 *)(lVar9 + 0x18);
                    puVar17 = (undefined4 *)(lVar9 + 0x1c);
                  }
                  if (plVar11 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar11 + 0x2a8))
                            (*puVar14,*puVar15,*puVar16,*puVar17,plVar11,
                             *(undefined8 *)(*plVar11 + 0x2b0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x130) != 0) {
                  if ((*(long *)(unaff_x19 + 0x70) == 0) ||
                     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x130) + 0x18), lVar9 == 0))
                  goto LAB_0696eee8;
                  plVar11 = *(long **)(*(long *)(unaff_x19 + 0x70) + 0xe0);
                  lVar18 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar9 + 0x18) == '\0') {
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar18 = *(long *)puVar4;
                    }
                    puVar14 = *(undefined4 **)(lVar18 + 0xb8);
                    puVar15 = puVar14 + 1;
                    puVar16 = puVar14 + 2;
                    puVar17 = puVar14 + 3;
                  }
                  else {
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar18 = *(long *)puVar4;
                    }
                    lVar9 = *(long *)(lVar18 + 0xb8);
                    puVar14 = (undefined4 *)(lVar9 + 0x10);
                    puVar15 = (undefined4 *)(lVar9 + 0x14);
                    puVar16 = (undefined4 *)(lVar9 + 0x18);
                    puVar17 = (undefined4 *)(lVar9 + 0x1c);
                  }
                  if (plVar11 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar11 + 0x2a8))
                            (*puVar14,*puVar15,*puVar16,*puVar17,plVar11,
                             *(undefined8 *)(*plVar11 + 0x2b0));
                }
                uVar19 = *(undefined8 *)(unaff_x19 + 0xd8);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar10 = FUN_07c9c218(uVar19,0,0);
                if ((uVar10 & 1) != 0) {
                  if ((((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0xe8), lVar9 == 0)) ||
                      (lVar9 = *(long *)(lVar9 + 0x40), lVar9 == 0)) ||
                     (lVar9 = *(long *)(lVar9 + 0x88), lVar9 == 0)) goto LAB_0696eee8;
                  plVar11 = *(long **)(unaff_x19 + 0xd8);
                  if (*(char *)(lVar9 + 0x10) == '\0') {
                    if (plVar11 == (long *)0x0) goto LAB_0696eee8;
                    (**(code **)(*plVar11 + 0x5e8))
                              (plVar11,*(undefined8 *)puVar3,*(undefined8 *)(*plVar11 + 0x5f0));
                    plVar11 = *(long **)(unaff_x19 + 0xe0);
                    if (plVar11 == (long *)0x0) goto LAB_0696eee8;
                    lVar9 = *plVar11;
                    uVar19 = *(undefined8 *)puVar3;
                  }
                  else {
                    if (plVar11 == (long *)0x0) goto LAB_0696eee8;
                    (**(code **)(*plVar11 + 0x5e8))
                              (plVar11,*(undefined8 *)PTR_DAT_084b71e0,
                               *(undefined8 *)(*plVar11 + 0x5f0));
                    if (((*(long *)(unaff_x19 + 0xe8) == 0) ||
                        (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar9 == 0)) ||
                       ((lVar9 = *(long *)(lVar9 + 0x40), lVar9 == 0 ||
                        (lVar9 = *(long *)(lVar9 + 0x88), lVar9 == 0)))) goto LAB_0696eee8;
                    plVar11 = *(long **)(unaff_x19 + 0xe0);
                    in_stack_00000008._4_4_ = *(float *)(lVar9 + 0x14) * 100.0;
                    uVar19 = FUN_067638d0((long)&stack0x00000008 + 4,*(undefined8 *)PTR_DAT_084b71c8
                                          ,0);
                    uVar19 = FUN_065c0764(uVar19,*(undefined8 *)PTR_DAT_084b71f8,0);
                    if (plVar11 == (long *)0x0) goto LAB_0696eee8;
                    lVar9 = *plVar11;
                  }
                  (**(code **)(lVar9 + 0x5e8))(plVar11,uVar19,*(undefined8 *)(lVar9 + 0x5f0));
                }
                if (*unaff_x20 != 0) {
                  lVar9 = FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7190);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4(*(long *)puVar2);
                  }
                  uVar10 = FUN_07c9c218(lVar9,0,0);
                  if ((uVar10 & 1) == 0) {
LAB_0696eec0:
                    *plVar8 = *unaff_x20;
                    thunk_FUN_03afed3c(plVar8);
                    return;
                  }
                  if ((*(long *)(unaff_x19 + 0x60) != 0) && (lVar9 != 0)) {
                    plVar11 = *(long **)(*(long *)(unaff_x19 + 0x60) + 0xe0);
                    uVar10 = FUN_07c986c8(lVar9,0);
                    puVar3 = PTR_DAT_084b71b0;
                    lVar18 = *(long *)PTR_DAT_084b71b0;
                    if ((uVar10 & 1) == 0) {
                      if (*(int *)(lVar18 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                        lVar18 = *(long *)puVar3;
                      }
                      puVar14 = *(undefined4 **)(lVar18 + 0xb8);
                      puVar15 = puVar14 + 1;
                      puVar16 = puVar14 + 2;
                      puVar17 = puVar14 + 3;
                    }
                    else {
                      if (*(int *)(lVar18 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                        lVar18 = *(long *)puVar3;
                      }
                      lVar18 = *(long *)(lVar18 + 0xb8);
                      puVar14 = (undefined4 *)(lVar18 + 0x10);
                      puVar15 = (undefined4 *)(lVar18 + 0x14);
                      puVar16 = (undefined4 *)(lVar18 + 0x18);
                      puVar17 = (undefined4 *)(lVar18 + 0x1c);
                    }
                    if (plVar11 != (long *)0x0) {
                      (**(code **)(*plVar11 + 0x2a8))
                                (*puVar14,*puVar15,*puVar16,*puVar17,plVar11,
                                 *(undefined8 *)(*plVar11 + 0x2b0));
                      plVar11 = *(long **)(unaff_x19 + 0xd0);
                      if (plVar11 != (long *)0x0) {
                        (**(code **)(*plVar11 + 0x428))
                                  (*(undefined4 *)(lVar9 + 0x98),plVar11,
                                   *(undefined8 *)(*plVar11 + 0x430));
                        goto LAB_0696eec0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0696eee8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


