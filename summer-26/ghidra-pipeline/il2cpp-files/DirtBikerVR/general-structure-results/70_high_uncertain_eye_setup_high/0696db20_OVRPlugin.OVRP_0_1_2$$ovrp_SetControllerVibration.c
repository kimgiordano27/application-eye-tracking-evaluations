/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_SetControllerVibration
ENTRY_POINT: 0696db20
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


void OVRPlugin_OVRP_0_1_2__ovrp_SetControllerVibration(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long *plVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack000000000000000c;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_084b6a50);
  FUN_03a8a718(PTR_DAT_084b6a48);
  FUN_03a8a718(PTR_DAT_084b5a00);
  FUN_03a8a718(PTR_DAT_084b5a10);
  FUN_03a8a718(PTR_DAT_084922d8);
  FUN_03a8a718(PTR_DAT_08486738);
  FUN_03a8a718(PTR_DAT_084b6948);
  FUN_03a8a718(PTR_DAT_084b6920);
  FUN_03a8a718(PTR_DAT_084b71b8);
  FUN_03a8a718(PTR_DAT_084b71c0);
  FUN_03a8a718(PTR_DAT_084b6da0);
  FUN_03a8a718(PTR_DAT_084b58d8);
  FUN_03a8a718(PTR_DAT_084b71c8);
  FUN_03a8a718(PTR_DAT_084b71d0);
  FUN_03a8a718(PTR_DAT_084b71d8);
  FUN_03a8a718(PTR_DAT_084b71e0);
  FUN_03a8a718(PTR_DAT_084b71e8);
  FUN_03a8a718(PTR_DAT_084b71f0);
  FUN_03a8a718(PTR_DAT_08486bc0);
  FUN_03a8a718(PTR_DAT_084b71f8);
  *(undefined1 *)(unaff_x21 + 0xe7) = 1;
  fStack000000000000000c = 0.0;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  plVar8 = (long *)FUN_06926324(0);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x0;
    *(undefined8 *)(unaff_x19 + 0xe8) = 0;
  }
  else {
    lVar11 = *(long *)PTR_DAT_084b6da0;
    bVar6 = *(byte *)(lVar11 + 0x130);
    if (*(byte *)(*plVar8 + 0x130) < bVar6) {
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = plVar8;
      if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
        plVar16 = (long *)0x0;
      }
    }
    *(long **)(unaff_x19 + 0xe8) = plVar16;
    if (*(byte *)(*plVar8 + 0x130) < bVar6) {
      plVar8 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
      plVar8 = (long *)0x0;
    }
  }
  plVar16 = (long *)(unaff_x19 + 0xe8);
  thunk_FUN_03afed3c(plVar16,plVar8);
  puVar2 = PTR_DAT_084b71c0;
  puVar3 = PTR_DAT_08486bc0;
  plVar8 = *(long **)(unaff_x19 + 0x20);
  if (plVar8 == (long *)0x0) goto LAB_0696eee8;
  (**(code **)(*plVar8 + 0x5e8))
            (plVar8,*(undefined8 *)PTR_DAT_08486bc0,*(undefined8 *)(*plVar8 + 0x5f0));
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar11 = *(long *)puVar2;
  }
  puVar4 = PTR_DAT_084922d8;
  puVar12 = *(undefined8 **)(lVar11 + 0xb8);
  lVar19 = puVar12[1];
  if (lVar19 == 0) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar20 = *puVar12;
    lVar19 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b5a00);
    FUN_04962b78(lVar19,uVar20,*(undefined8 *)PTR_DAT_084b71b8,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar8 = lVar19;
    thunk_FUN_03afed3c(plVar8,lVar19);
  }
  puVar2 = PTR_DAT_084b5a10;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  bVar6 = FUN_045b08cc(lVar19,*(undefined8 *)puVar2);
  *(byte *)(unaff_x19 + 0x198) = bVar6 & 1;
  if ((bVar6 & 1) != 0) {
    lVar11 = *(long *)(unaff_x19 + 400);
    if (lVar11 == 0) goto LAB_0696eee8;
    uVar7 = FUN_07c986c8(lVar11,0);
    FUN_07c9877c(lVar11,(uVar7 ^ 0xffffffff) & 1,0);
  }
  puVar2 = PTR_DAT_08486738;
  if (DAT_0897cf36 == '\0') {
    FUN_03a8a718(PTR_DAT_084b59e8);
    DAT_0897cf36 = '\x01';
  }
  puVar4 = PTR_DAT_084b59e8;
  uVar20 = **(undefined8 **)(*(long *)PTR_DAT_084b59e8 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar9 = FUN_07c9c218(uVar20,0,0);
  if ((uVar9 & 1) != 0) {
    if (DAT_0897cf36 == '\0') {
      FUN_03a8a718(PTR_DAT_084b59e8);
      DAT_0897cf36 = '\x01';
    }
    lVar11 = **(long **)(*(long *)puVar4 + 0xb8);
    if (lVar11 == 0) goto LAB_0696eee8;
    iVar1 = *(int *)(lVar11 + 0x54);
    if (iVar1 == 2) {
      if (*plVar16 == 0) goto LAB_0696eee8;
      fVar21 = (float)FUN_06926524(*plVar16,0);
      if (DAT_0897cf36 == '\0') {
        FUN_03a8a718(PTR_DAT_084b59e8);
        DAT_0897cf36 = '\x01';
      }
      lVar11 = **(long **)(*(long *)puVar4 + 0xb8);
      if (lVar11 == 0) goto LAB_0696eee8;
      if (fVar21 < *(float *)(lVar11 + 0x50)) {
        plVar8 = *(long **)(unaff_x19 + 0x20);
        if (plVar8 == (long *)0x0) goto LAB_0696eee8;
        uVar20 = (**(code **)(*plVar8 + 0x5d8))(plVar8,*(undefined8 *)(*plVar8 + 0x5e0));
        puVar12 = (undefined8 *)PTR_DAT_084b71d8;
        goto LAB_0696df00;
      }
    }
    else if (iVar1 == 1) {
      plVar8 = *(long **)(unaff_x19 + 0x20);
      if (plVar8 == (long *)0x0) goto LAB_0696eee8;
      uVar20 = (**(code **)(*plVar8 + 0x5d8))(plVar8,*(undefined8 *)(*plVar8 + 0x5e0));
      puVar12 = (undefined8 *)PTR_DAT_084b71e8;
LAB_0696df00:
      uVar20 = FUN_065c0764(uVar20,*puVar12,0);
      (**(code **)(*plVar8 + 0x5e8))(plVar8,uVar20,*(undefined8 *)(*plVar8 + 0x5f0));
    }
  }
  lVar11 = *plVar16;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar9 = FUN_07c9e200(lVar11,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  plVar8 = (long *)(unaff_x19 + 0xf0);
  lVar11 = *plVar8;
  uVar20 = *(undefined8 *)(unaff_x19 + 0xe8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar9 = FUN_07c9c218(uVar20,lVar11,0);
  if ((uVar9 & 1) != 0) {
    if (*plVar16 == 0) goto LAB_0696eee8;
    plVar10 = (long *)FUN_0447aad0(*plVar16,*(undefined8 *)PTR_DAT_084b71a8);
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180))
       , plVar10 == (long *)0x0)) {
      plVar10 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0xf8) = 0;
    }
    else {
      lVar11 = *(long *)PTR_DAT_084b6920;
      bVar6 = *(byte *)(lVar11 + 0x130);
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0xf8) = plVar13;
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar10 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
        plVar10 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0xf8,plVar10);
    if (*plVar16 == 0) goto LAB_0696eee8;
    plVar10 = (long *)FUN_0447aad0(*plVar16,*(undefined8 *)PTR_DAT_084b71a0);
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180))
       , plVar10 == (long *)0x0)) {
      plVar10 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x100) = 0;
    }
    else {
      lVar11 = *(long *)PTR_DAT_084b6a48;
      bVar6 = *(byte *)(lVar11 + 0x130);
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x100) = plVar13;
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar10 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
        plVar10 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x100,plVar10);
    if (*plVar16 == 0) goto LAB_0696eee8;
    plVar10 = (long *)FUN_0447aad0(*plVar16,*(undefined8 *)PTR_DAT_084b6d90);
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180))
       , plVar10 == (long *)0x0)) {
      plVar10 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x108) = 0;
    }
    else {
      lVar11 = *(long *)PTR_DAT_084b6ad0;
      bVar6 = *(byte *)(lVar11 + 0x130);
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x108) = plVar13;
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar10 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
        plVar10 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x108,plVar10);
    puVar4 = PTR_DAT_084b6d98;
    if (*plVar16 == 0) goto LAB_0696eee8;
    plVar10 = (long *)FUN_0447aad0(*plVar16,*(undefined8 *)PTR_DAT_084b6d98);
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180))
       , plVar10 == (long *)0x0)) {
      plVar10 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x110) = 0;
    }
    else {
      lVar11 = *(long *)PTR_DAT_084b6948;
      bVar6 = *(byte *)(lVar11 + 0x130);
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x110) = plVar13;
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar10 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
        plVar10 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x110,plVar10);
    puVar5 = PTR_DAT_084b7198;
    if (*plVar16 == 0) goto LAB_0696eee8;
    plVar10 = (long *)FUN_0447aad0(*plVar16,*(undefined8 *)PTR_DAT_084b7198);
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180))
       , plVar10 == (long *)0x0)) {
      plVar10 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x118) = 0;
    }
    else {
      lVar11 = *(long *)PTR_DAT_084b6a50;
      bVar6 = *(byte *)(lVar11 + 0x130);
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x118) = plVar13;
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar10 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
        plVar10 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x118,plVar10);
    if (*plVar16 == 0) goto LAB_0696eee8;
    plVar10 = (long *)FUN_0447aad0(*plVar16,*(undefined8 *)PTR_DAT_084b7178);
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180))
       , plVar10 == (long *)0x0)) {
      plVar10 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x120) = 0;
    }
    else {
      lVar11 = *(long *)PTR_DAT_084b6aa8;
      bVar6 = *(byte *)(lVar11 + 0x130);
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x120) = plVar13;
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar10 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
        plVar10 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x120,plVar10);
    if (*plVar16 == 0) goto LAB_0696eee8;
    plVar10 = (long *)FUN_0447aad0(*plVar16,*(undefined8 *)puVar4);
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180))
       , plVar10 == (long *)0x0)) {
      plVar10 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x110) = 0;
    }
    else {
      lVar11 = *(long *)PTR_DAT_084b6948;
      bVar6 = *(byte *)(lVar11 + 0x130);
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x110) = plVar13;
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar10 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
        plVar10 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x110,plVar10);
    if (*plVar16 == 0) goto LAB_0696eee8;
    plVar10 = (long *)FUN_0447aad0(*plVar16,*(undefined8 *)puVar5);
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180))
       , plVar10 == (long *)0x0)) {
      plVar10 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x118) = 0;
    }
    else {
      lVar11 = *(long *)PTR_DAT_084b6a50;
      bVar6 = *(byte *)(lVar11 + 0x130);
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x118) = plVar13;
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar10 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
        plVar10 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x118,plVar10);
    if (*plVar16 == 0) goto LAB_0696eee8;
    plVar10 = (long *)FUN_0447aad0(*plVar16,*(undefined8 *)PTR_DAT_084b7188);
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180))
       , plVar10 == (long *)0x0)) {
      plVar10 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x130) = 0;
    }
    else {
      lVar11 = *(long *)PTR_DAT_084b6a68;
      bVar6 = *(byte *)(lVar11 + 0x130);
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x130) = plVar13;
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar10 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
        plVar10 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x130,plVar10);
    if (*plVar16 == 0) goto LAB_0696eee8;
    plVar10 = (long *)FUN_0447aad0(*plVar16,*(undefined8 *)PTR_DAT_084b7180);
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180))
       , plVar10 == (long *)0x0)) {
      plVar10 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x128) = 0;
    }
    else {
      lVar11 = *(long *)PTR_DAT_084b6a70;
      bVar6 = *(byte *)(lVar11 + 0x130);
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x128) = plVar13;
      if (*(byte *)(*plVar10 + 0x130) < bVar6) {
        plVar10 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) != lVar11) {
        plVar10 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x128,plVar10);
  }
  lVar11 = *plVar16;
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x168) == '\0') {
      return;
    }
    if ((*(long *)(lVar11 + 0xd8) != 0) &&
       (plVar10 = *(long **)(unaff_x19 + 0xa0), plVar10 != (long *)0x0)) {
      fVar23 = *(float *)(*(long *)(lVar11 + 0xd8) + 0x34);
      fVar21 = 1.0;
      if (fVar23 <= 1.0) {
        fVar21 = fVar23;
      }
      fVar22 = 0.0;
      if (0.0 <= fVar23) {
        fVar22 = fVar21;
      }
      (**(code **)(*plVar10 + 0x428))(fVar22,plVar10,*(undefined8 *)(*plVar10 + 0x430));
      if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
          (lVar11 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar11 != 0)) &&
         (plVar10 = *(long **)(unaff_x19 + 0xa8), plVar10 != (long *)0x0)) {
        fVar23 = *(float *)(lVar11 + 0x44);
        fVar21 = 1.0;
        if (fVar23 <= 1.0) {
          fVar21 = fVar23;
        }
        fVar22 = 0.0;
        if (0.0 <= fVar23) {
          fVar22 = fVar21;
        }
        (**(code **)(*plVar10 + 0x428))(fVar22,plVar10,*(undefined8 *)(*plVar10 + 0x430));
        if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
            (lVar11 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar11 != 0)) &&
           ((lVar11 = *(long *)(lVar11 + 0x30), lVar11 != 0 &&
            (plVar10 = *(long **)(unaff_x19 + 0xb0), plVar10 != (long *)0x0)))) {
          fVar23 = *(float *)(lVar11 + 0x78);
          fVar21 = 1.0;
          if (fVar23 <= 1.0) {
            fVar21 = fVar23;
          }
          fVar22 = 0.0;
          if (0.0 <= fVar23) {
            fVar22 = fVar21;
          }
          (**(code **)(*plVar10 + 0x428))(fVar22,plVar10,*(undefined8 *)(*plVar10 + 0x430));
          if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
              (lVar11 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar11 != 0)) &&
             (plVar10 = *(long **)(unaff_x19 + 0xb8), plVar10 != (long *)0x0)) {
            fVar23 = *(float *)(lVar11 + 0x54);
            fVar21 = 1.0;
            if (fVar23 <= 1.0) {
              fVar21 = fVar23;
            }
            fVar22 = 0.0;
            if (0.0 <= fVar23) {
              fVar22 = fVar21;
            }
            (**(code **)(*plVar10 + 0x428))(fVar22,plVar10,*(undefined8 *)(*plVar10 + 0x430));
            if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                (lVar11 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar11 != 0)) &&
               (plVar10 = *(long **)(unaff_x19 + 0xc0), plVar10 != (long *)0x0)) {
              fVar23 = *(float *)(lVar11 + 0x24);
              fVar21 = 1.0;
              if (-1.0 <= fVar23) {
                fVar21 = -fVar23;
              }
              fVar22 = 0.0;
              if (fVar23 <= 0.0) {
                fVar22 = fVar21;
              }
              (**(code **)(*plVar10 + 0x428))(fVar22,plVar10,*(undefined8 *)(*plVar10 + 0x430));
              if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                  (lVar11 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar11 != 0)) &&
                 (plVar10 = *(long **)(unaff_x19 + 200), plVar10 != (long *)0x0)) {
                fVar23 = *(float *)(lVar11 + 0x24);
                fVar21 = 1.0;
                if (fVar23 <= 1.0) {
                  fVar21 = fVar23;
                }
                fVar22 = 0.0;
                if (0.0 <= fVar23) {
                  fVar22 = fVar21;
                }
                (**(code **)(*plVar10 + 0x428))(fVar22,plVar10,*(undefined8 *)(*plVar10 + 0x430));
                lVar11 = *(long *)(unaff_x19 + 0xf8);
                if (((lVar11 != 0) && (*(char *)(lVar11 + 0x58) != '\0')) &&
                   (*(char *)(lVar11 + 0x21) == '\0')) {
                  plVar10 = *(long **)(unaff_x19 + 0x20);
                  if (plVar10 == (long *)0x0) goto LAB_0696eee8;
                  uVar20 = (**(code **)(*plVar10 + 0x5d8))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x5e0));
                  uVar20 = FUN_065c0764(uVar20,*(undefined8 *)PTR_DAT_084b71d0,0);
                  (**(code **)(*plVar10 + 0x5e8))(plVar10,uVar20,*(undefined8 *)(*plVar10 + 0x5f0));
                }
                lVar11 = *(long *)(unaff_x19 + 0x100);
                if (((lVar11 != 0) && (*(int *)(lVar11 + 0x28) == 0)) &&
                   (*(char *)(lVar11 + 0x34) != '\0')) {
                  plVar10 = *(long **)(unaff_x19 + 0x20);
                  if (plVar10 == (long *)0x0) goto LAB_0696eee8;
                  uVar20 = (**(code **)(*plVar10 + 0x5d8))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x5e0));
                  uVar20 = FUN_065c0764(uVar20,*(undefined8 *)PTR_DAT_084b71f0,0);
                  (**(code **)(*plVar10 + 0x5e8))(plVar10,uVar20,*(undefined8 *)(*plVar10 + 0x5f0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x108) != 0) {
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x18), lVar11 == 0))
                  goto LAB_0696eee8;
                  plVar10 = *(long **)(*(long *)(unaff_x19 + 0x40) + 0xe0);
                  lVar19 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar11 + 0x18) == '\0') {
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar19 = *(long *)puVar4;
                    }
                    puVar14 = *(undefined4 **)(lVar19 + 0xb8);
                    puVar15 = puVar14 + 1;
                    puVar17 = puVar14 + 2;
                    puVar18 = puVar14 + 3;
                  }
                  else {
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar19 = *(long *)puVar4;
                    }
                    lVar11 = *(long *)(lVar19 + 0xb8);
                    puVar14 = (undefined4 *)(lVar11 + 0x10);
                    puVar15 = (undefined4 *)(lVar11 + 0x14);
                    puVar17 = (undefined4 *)(lVar11 + 0x18);
                    puVar18 = (undefined4 *)(lVar11 + 0x1c);
                  }
                  if (plVar10 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar10 + 0x2a8))
                            (*puVar14,*puVar15,*puVar17,*puVar18,plVar10,
                             *(undefined8 *)(*plVar10 + 0x2b0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x110) != 0) {
                  if ((*(long *)(unaff_x19 + 0x48) == 0) ||
                     (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x110) + 0x18), lVar11 == 0))
                  goto LAB_0696eee8;
                  plVar10 = *(long **)(*(long *)(unaff_x19 + 0x48) + 0xe0);
                  lVar19 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar11 + 0x18) == '\0') {
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar19 = *(long *)puVar4;
                    }
                    puVar14 = *(undefined4 **)(lVar19 + 0xb8);
                    puVar15 = puVar14 + 1;
                    puVar17 = puVar14 + 2;
                    puVar18 = puVar14 + 3;
                  }
                  else {
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar19 = *(long *)puVar4;
                    }
                    lVar11 = *(long *)(lVar19 + 0xb8);
                    puVar14 = (undefined4 *)(lVar11 + 0x10);
                    puVar15 = (undefined4 *)(lVar11 + 0x14);
                    puVar17 = (undefined4 *)(lVar11 + 0x18);
                    puVar18 = (undefined4 *)(lVar11 + 0x1c);
                  }
                  if (plVar10 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar10 + 0x2a8))
                            (*puVar14,*puVar15,*puVar17,*puVar18,plVar10,
                             *(undefined8 *)(*plVar10 + 0x2b0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x118) != 0) {
                  if ((*(long *)(unaff_x19 + 0x50) == 0) ||
                     (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x18), lVar11 == 0))
                  goto LAB_0696eee8;
                  plVar10 = *(long **)(*(long *)(unaff_x19 + 0x50) + 0xe0);
                  lVar19 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar11 + 0x18) == '\0') {
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar19 = *(long *)puVar4;
                    }
                    puVar14 = *(undefined4 **)(lVar19 + 0xb8);
                    puVar15 = puVar14 + 1;
                    puVar17 = puVar14 + 2;
                    puVar18 = puVar14 + 3;
                  }
                  else {
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar19 = *(long *)puVar4;
                    }
                    lVar11 = *(long *)(lVar19 + 0xb8);
                    puVar14 = (undefined4 *)(lVar11 + 0x10);
                    puVar15 = (undefined4 *)(lVar11 + 0x14);
                    puVar17 = (undefined4 *)(lVar11 + 0x18);
                    puVar18 = (undefined4 *)(lVar11 + 0x1c);
                  }
                  if (plVar10 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar10 + 0x2a8))
                            (*puVar14,*puVar15,*puVar17,*puVar18,plVar10,
                             *(undefined8 *)(*plVar10 + 0x2b0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x120) != 0) {
                  if ((*(long *)(unaff_x19 + 0x58) == 0) ||
                     (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x18), lVar11 == 0))
                  goto LAB_0696eee8;
                  plVar10 = *(long **)(*(long *)(unaff_x19 + 0x58) + 0xe0);
                  lVar19 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar11 + 0x18) == '\0') {
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar19 = *(long *)puVar4;
                    }
                    puVar14 = *(undefined4 **)(lVar19 + 0xb8);
                    puVar15 = puVar14 + 1;
                    puVar17 = puVar14 + 2;
                    puVar18 = puVar14 + 3;
                  }
                  else {
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar19 = *(long *)puVar4;
                    }
                    lVar11 = *(long *)(lVar19 + 0xb8);
                    puVar14 = (undefined4 *)(lVar11 + 0x10);
                    puVar15 = (undefined4 *)(lVar11 + 0x14);
                    puVar17 = (undefined4 *)(lVar11 + 0x18);
                    puVar18 = (undefined4 *)(lVar11 + 0x1c);
                  }
                  if (plVar10 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar10 + 0x2a8))
                            (*puVar14,*puVar15,*puVar17,*puVar18,plVar10,
                             *(undefined8 *)(*plVar10 + 0x2b0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x128) != 0) {
                  if ((*(long *)(unaff_x19 + 0x78) == 0) ||
                     (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x128) + 0x18), lVar11 == 0))
                  goto LAB_0696eee8;
                  plVar10 = *(long **)(*(long *)(unaff_x19 + 0x78) + 0xe0);
                  lVar19 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar11 + 0x18) == '\0') {
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar19 = *(long *)puVar4;
                    }
                    puVar14 = *(undefined4 **)(lVar19 + 0xb8);
                    puVar15 = puVar14 + 1;
                    puVar17 = puVar14 + 2;
                    puVar18 = puVar14 + 3;
                  }
                  else {
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar19 = *(long *)puVar4;
                    }
                    lVar11 = *(long *)(lVar19 + 0xb8);
                    puVar14 = (undefined4 *)(lVar11 + 0x10);
                    puVar15 = (undefined4 *)(lVar11 + 0x14);
                    puVar17 = (undefined4 *)(lVar11 + 0x18);
                    puVar18 = (undefined4 *)(lVar11 + 0x1c);
                  }
                  if (plVar10 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar10 + 0x2a8))
                            (*puVar14,*puVar15,*puVar17,*puVar18,plVar10,
                             *(undefined8 *)(*plVar10 + 0x2b0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x130) != 0) {
                  if ((*(long *)(unaff_x19 + 0x70) == 0) ||
                     (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x130) + 0x18), lVar11 == 0))
                  goto LAB_0696eee8;
                  plVar10 = *(long **)(*(long *)(unaff_x19 + 0x70) + 0xe0);
                  lVar19 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar11 + 0x18) == '\0') {
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar19 = *(long *)puVar4;
                    }
                    puVar14 = *(undefined4 **)(lVar19 + 0xb8);
                    puVar15 = puVar14 + 1;
                    puVar17 = puVar14 + 2;
                    puVar18 = puVar14 + 3;
                  }
                  else {
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar19 = *(long *)puVar4;
                    }
                    lVar11 = *(long *)(lVar19 + 0xb8);
                    puVar14 = (undefined4 *)(lVar11 + 0x10);
                    puVar15 = (undefined4 *)(lVar11 + 0x14);
                    puVar17 = (undefined4 *)(lVar11 + 0x18);
                    puVar18 = (undefined4 *)(lVar11 + 0x1c);
                  }
                  if (plVar10 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar10 + 0x2a8))
                            (*puVar14,*puVar15,*puVar17,*puVar18,plVar10,
                             *(undefined8 *)(*plVar10 + 0x2b0));
                }
                uVar20 = *(undefined8 *)(unaff_x19 + 0xd8);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar9 = FUN_07c9c218(uVar20,0,0);
                if ((uVar9 & 1) != 0) {
                  if ((((*plVar16 == 0) || (lVar11 = *(long *)(*plVar16 + 0xe8), lVar11 == 0)) ||
                      (lVar11 = *(long *)(lVar11 + 0x40), lVar11 == 0)) ||
                     (lVar11 = *(long *)(lVar11 + 0x88), lVar11 == 0)) goto LAB_0696eee8;
                  plVar10 = *(long **)(unaff_x19 + 0xd8);
                  if (*(char *)(lVar11 + 0x10) == '\0') {
                    if (plVar10 == (long *)0x0) goto LAB_0696eee8;
                    (**(code **)(*plVar10 + 0x5e8))
                              (plVar10,*(undefined8 *)puVar3,*(undefined8 *)(*plVar10 + 0x5f0));
                    plVar10 = *(long **)(unaff_x19 + 0xe0);
                    if (plVar10 == (long *)0x0) goto LAB_0696eee8;
                    lVar11 = *plVar10;
                    uVar20 = *(undefined8 *)puVar3;
                  }
                  else {
                    if (plVar10 == (long *)0x0) goto LAB_0696eee8;
                    (**(code **)(*plVar10 + 0x5e8))
                              (plVar10,*(undefined8 *)PTR_DAT_084b71e0,
                               *(undefined8 *)(*plVar10 + 0x5f0));
                    if (((*(long *)(unaff_x19 + 0xe8) == 0) ||
                        (lVar11 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar11 == 0)) ||
                       ((lVar11 = *(long *)(lVar11 + 0x40), lVar11 == 0 ||
                        (lVar11 = *(long *)(lVar11 + 0x88), lVar11 == 0)))) goto LAB_0696eee8;
                    plVar10 = *(long **)(unaff_x19 + 0xe0);
                    fStack000000000000000c = *(float *)(lVar11 + 0x14) * 100.0;
                    uVar20 = FUN_067638d0(&stack0x0000000c,*(undefined8 *)PTR_DAT_084b71c8,0);
                    uVar20 = FUN_065c0764(uVar20,*(undefined8 *)PTR_DAT_084b71f8,0);
                    if (plVar10 == (long *)0x0) goto LAB_0696eee8;
                    lVar11 = *plVar10;
                  }
                  (**(code **)(lVar11 + 0x5e8))(plVar10,uVar20,*(undefined8 *)(lVar11 + 0x5f0));
                }
                if (*plVar16 != 0) {
                  lVar11 = FUN_0447aad0(*plVar16,*(undefined8 *)PTR_DAT_084b7190);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4(*(long *)puVar2);
                  }
                  uVar9 = FUN_07c9c218(lVar11,0,0);
                  if ((uVar9 & 1) == 0) {
LAB_0696eec0:
                    *plVar8 = *plVar16;
                    thunk_FUN_03afed3c(plVar8);
                    return;
                  }
                  if ((*(long *)(unaff_x19 + 0x60) != 0) && (lVar11 != 0)) {
                    plVar10 = *(long **)(*(long *)(unaff_x19 + 0x60) + 0xe0);
                    uVar9 = FUN_07c986c8(lVar11,0);
                    puVar3 = PTR_DAT_084b71b0;
                    lVar19 = *(long *)PTR_DAT_084b71b0;
                    if ((uVar9 & 1) == 0) {
                      if (*(int *)(lVar19 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                        lVar19 = *(long *)puVar3;
                      }
                      puVar14 = *(undefined4 **)(lVar19 + 0xb8);
                      puVar15 = puVar14 + 1;
                      puVar17 = puVar14 + 2;
                      puVar18 = puVar14 + 3;
                    }
                    else {
                      if (*(int *)(lVar19 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                        lVar19 = *(long *)puVar3;
                      }
                      lVar19 = *(long *)(lVar19 + 0xb8);
                      puVar14 = (undefined4 *)(lVar19 + 0x10);
                      puVar15 = (undefined4 *)(lVar19 + 0x14);
                      puVar17 = (undefined4 *)(lVar19 + 0x18);
                      puVar18 = (undefined4 *)(lVar19 + 0x1c);
                    }
                    if (plVar10 != (long *)0x0) {
                      (**(code **)(*plVar10 + 0x2a8))
                                (*puVar14,*puVar15,*puVar17,*puVar18,plVar10,
                                 *(undefined8 *)(*plVar10 + 0x2b0));
                      plVar10 = *(long **)(unaff_x19 + 0xd0);
                      if (plVar10 != (long *)0x0) {
                        (**(code **)(*plVar10 + 0x428))
                                  (*(undefined4 *)(lVar11 + 0x98),plVar10,
                                   *(undefined8 *)(*plVar10 + 0x430));
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


