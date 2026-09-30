/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_3$$.cctor
ENTRY_POINT: 0696dd44
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


void OVRPlugin_OVRP_0_1_3___cctor(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long unaff_x19;
  long *unaff_x20;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 in_stack_00000008;
  
  FUN_04962b78();
  puVar7 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  *puVar7 = param_1;
  thunk_FUN_03afed3c(puVar7,param_1);
  puVar2 = PTR_DAT_084b5a10;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  bVar5 = FUN_045b08cc(param_1,*(undefined8 *)puVar2);
  *(byte *)(unaff_x19 + 0x198) = bVar5 & 1;
  if ((bVar5 & 1) != 0) {
    lVar16 = *(long *)(unaff_x19 + 400);
    if (lVar16 == 0) goto LAB_0696eee8;
    uVar6 = FUN_07c986c8(lVar16,0);
                    /* try { // try from 0696ddbc to 06a6dde3 has its CatchHandler @ 0696e074 */
    FUN_07c9877c(lVar16,(uVar6 ^ 0xffffffff) & 1,0);
  }
  puVar2 = PTR_DAT_08486738;
  if (DAT_0897cf36 == '\0') {
    FUN_03a8a718(PTR_DAT_084b59e8);
    DAT_0897cf36 = '\x01';
  }
  puVar3 = PTR_DAT_084b59e8;
  uVar17 = **(undefined8 **)(*(long *)PTR_DAT_084b59e8 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar8 = FUN_07c9c218(uVar17,0,0);
  if ((uVar8 & 1) != 0) {
    if (DAT_0897cf36 == '\0') {
      FUN_03a8a718(PTR_DAT_084b59e8);
      DAT_0897cf36 = '\x01';
    }
    lVar16 = **(long **)(*(long *)puVar3 + 0xb8);
    if (lVar16 == 0) goto LAB_0696eee8;
    iVar1 = *(int *)(lVar16 + 0x54);
    if (iVar1 == 2) {
      if (*unaff_x20 == 0) goto LAB_0696eee8;
      fVar19 = (float)FUN_06926524(*unaff_x20,0);
      if (DAT_0897cf36 == '\0') {
        FUN_03a8a718(PTR_DAT_084b59e8);
        DAT_0897cf36 = '\x01';
      }
      lVar16 = **(long **)(*(long *)puVar3 + 0xb8);
      if (lVar16 == 0) goto LAB_0696eee8;
      if (fVar19 < *(float *)(lVar16 + 0x50)) {
        plVar18 = *(long **)(unaff_x19 + 0x20);
        if (plVar18 == (long *)0x0) goto LAB_0696eee8;
        uVar17 = (**(code **)(*plVar18 + 0x5d8))(plVar18,*(undefined8 *)(*plVar18 + 0x5e0));
        puVar7 = (undefined8 *)PTR_DAT_084b71d8;
        goto LAB_0696df00;
      }
    }
    else if (iVar1 == 1) {
      plVar18 = *(long **)(unaff_x19 + 0x20);
      if (plVar18 == (long *)0x0) goto LAB_0696eee8;
      uVar17 = (**(code **)(*plVar18 + 0x5d8))(plVar18,*(undefined8 *)(*plVar18 + 0x5e0));
      puVar7 = (undefined8 *)PTR_DAT_084b71e8;
LAB_0696df00:
      uVar17 = FUN_065c0764(uVar17,*puVar7,0);
      (**(code **)(*plVar18 + 0x5e8))(plVar18,uVar17,*(undefined8 *)(*plVar18 + 0x5f0));
    }
  }
  lVar16 = *unaff_x20;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar8 = FUN_07c9e200(lVar16,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  plVar18 = (long *)(unaff_x19 + 0xf0);
  lVar16 = *plVar18;
  uVar17 = *(undefined8 *)(unaff_x19 + 0xe8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar8 = FUN_07c9c218(uVar17,lVar16,0);
  if ((uVar8 & 1) != 0) {
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar9 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b71a8);
    if ((plVar9 == (long *)0x0) ||
       (plVar9 = (long *)(**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180)),
       plVar9 == (long *)0x0)) {
      plVar9 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0xf8) = 0;
    }
    else {
      lVar16 = *(long *)PTR_DAT_084b6920;
      bVar5 = *(byte *)(lVar16 + 0x130);
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar9;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0xf8) = plVar11;
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar9 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
        plVar9 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0xf8,plVar9);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar9 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b71a0);
    if ((plVar9 == (long *)0x0) ||
       (plVar9 = (long *)(**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180)),
       plVar9 == (long *)0x0)) {
      plVar9 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x100) = 0;
    }
    else {
      lVar16 = *(long *)PTR_DAT_084b6a48;
      bVar5 = *(byte *)(lVar16 + 0x130);
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar9;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x100) = plVar11;
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar9 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
        plVar9 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x100,plVar9);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar9 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b6d90);
    if ((plVar9 == (long *)0x0) ||
       (plVar9 = (long *)(**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180)),
       plVar9 == (long *)0x0)) {
      plVar9 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x108) = 0;
    }
    else {
      lVar16 = *(long *)PTR_DAT_084b6ad0;
      bVar5 = *(byte *)(lVar16 + 0x130);
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar9;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x108) = plVar11;
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar9 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
        plVar9 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x108,plVar9);
    puVar3 = PTR_DAT_084b6d98;
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar9 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b6d98);
    if ((plVar9 == (long *)0x0) ||
       (plVar9 = (long *)(**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180)),
       plVar9 == (long *)0x0)) {
      plVar9 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x110) = 0;
    }
    else {
      lVar16 = *(long *)PTR_DAT_084b6948;
      bVar5 = *(byte *)(lVar16 + 0x130);
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar9;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x110) = plVar11;
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar9 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
        plVar9 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x110,plVar9);
    puVar4 = PTR_DAT_084b7198;
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar9 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7198);
    if ((plVar9 == (long *)0x0) ||
       (plVar9 = (long *)(**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180)),
       plVar9 == (long *)0x0)) {
      plVar9 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x118) = 0;
    }
    else {
      lVar16 = *(long *)PTR_DAT_084b6a50;
      bVar5 = *(byte *)(lVar16 + 0x130);
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar9;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x118) = plVar11;
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar9 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
        plVar9 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x118,plVar9);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar9 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7178);
    if ((plVar9 == (long *)0x0) ||
       (plVar9 = (long *)(**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180)),
       plVar9 == (long *)0x0)) {
      plVar9 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x120) = 0;
    }
    else {
      lVar16 = *(long *)PTR_DAT_084b6aa8;
      bVar5 = *(byte *)(lVar16 + 0x130);
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar9;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x120) = plVar11;
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar9 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
        plVar9 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x120,plVar9);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar9 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)puVar3);
    if ((plVar9 == (long *)0x0) ||
       (plVar9 = (long *)(**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180)),
       plVar9 == (long *)0x0)) {
      plVar9 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x110) = 0;
    }
    else {
      lVar16 = *(long *)PTR_DAT_084b6948;
      bVar5 = *(byte *)(lVar16 + 0x130);
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar9;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x110) = plVar11;
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar9 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
        plVar9 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x110,plVar9);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar9 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)puVar4);
    if ((plVar9 == (long *)0x0) ||
       (plVar9 = (long *)(**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180)),
       plVar9 == (long *)0x0)) {
      plVar9 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x118) = 0;
    }
    else {
      lVar16 = *(long *)PTR_DAT_084b6a50;
      bVar5 = *(byte *)(lVar16 + 0x130);
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar9;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x118) = plVar11;
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar9 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
        plVar9 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x118,plVar9);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar9 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7188);
    if ((plVar9 == (long *)0x0) ||
       (plVar9 = (long *)(**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180)),
       plVar9 == (long *)0x0)) {
      plVar9 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x130) = 0;
    }
    else {
      lVar16 = *(long *)PTR_DAT_084b6a68;
      bVar5 = *(byte *)(lVar16 + 0x130);
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar9;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x130) = plVar11;
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar9 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
        plVar9 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x130,plVar9);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar9 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7180);
    if ((plVar9 == (long *)0x0) ||
       (plVar9 = (long *)(**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180)),
       plVar9 == (long *)0x0)) {
      plVar9 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x128) = 0;
    }
    else {
      lVar16 = *(long *)PTR_DAT_084b6a70;
      bVar5 = *(byte *)(lVar16 + 0x130);
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar9;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x128) = plVar11;
      if (*(byte *)(*plVar9 + 0x130) < bVar5) {
        plVar9 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != lVar16) {
        plVar9 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x128,plVar9);
  }
  lVar16 = *unaff_x20;
  if (lVar16 != 0) {
    if (*(char *)(lVar16 + 0x168) == '\0') {
      return;
    }
    if ((*(long *)(lVar16 + 0xd8) != 0) &&
       (plVar9 = *(long **)(unaff_x19 + 0xa0), plVar9 != (long *)0x0)) {
      fVar21 = *(float *)(*(long *)(lVar16 + 0xd8) + 0x34);
      fVar19 = 1.0;
      if (fVar21 <= 1.0) {
        fVar19 = fVar21;
      }
      fVar20 = 0.0;
      if (0.0 <= fVar21) {
        fVar20 = fVar19;
      }
      (**(code **)(*plVar9 + 0x428))(fVar20,plVar9,*(undefined8 *)(*plVar9 + 0x430));
      if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
          (lVar16 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar16 != 0)) &&
         (plVar9 = *(long **)(unaff_x19 + 0xa8), plVar9 != (long *)0x0)) {
        fVar21 = *(float *)(lVar16 + 0x44);
        fVar19 = 1.0;
        if (fVar21 <= 1.0) {
          fVar19 = fVar21;
        }
        fVar20 = 0.0;
        if (0.0 <= fVar21) {
          fVar20 = fVar19;
        }
        (**(code **)(*plVar9 + 0x428))(fVar20,plVar9,*(undefined8 *)(*plVar9 + 0x430));
        if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
            (lVar16 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar16 != 0)) &&
           ((lVar16 = *(long *)(lVar16 + 0x30), lVar16 != 0 &&
            (plVar9 = *(long **)(unaff_x19 + 0xb0), plVar9 != (long *)0x0)))) {
          fVar21 = *(float *)(lVar16 + 0x78);
          fVar19 = 1.0;
          if (fVar21 <= 1.0) {
            fVar19 = fVar21;
          }
          fVar20 = 0.0;
          if (0.0 <= fVar21) {
            fVar20 = fVar19;
          }
          (**(code **)(*plVar9 + 0x428))(fVar20,plVar9,*(undefined8 *)(*plVar9 + 0x430));
          if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
              (lVar16 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar16 != 0)) &&
             (plVar9 = *(long **)(unaff_x19 + 0xb8), plVar9 != (long *)0x0)) {
            fVar21 = *(float *)(lVar16 + 0x54);
            fVar19 = 1.0;
            if (fVar21 <= 1.0) {
              fVar19 = fVar21;
            }
            fVar20 = 0.0;
            if (0.0 <= fVar21) {
              fVar20 = fVar19;
            }
            (**(code **)(*plVar9 + 0x428))(fVar20,plVar9,*(undefined8 *)(*plVar9 + 0x430));
            if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                (lVar16 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar16 != 0)) &&
               (plVar9 = *(long **)(unaff_x19 + 0xc0), plVar9 != (long *)0x0)) {
              fVar21 = *(float *)(lVar16 + 0x24);
              fVar19 = 1.0;
              if (-1.0 <= fVar21) {
                fVar19 = -fVar21;
              }
              fVar20 = 0.0;
              if (fVar21 <= 0.0) {
                fVar20 = fVar19;
              }
              (**(code **)(*plVar9 + 0x428))(fVar20,plVar9,*(undefined8 *)(*plVar9 + 0x430));
              if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                  (lVar16 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar16 != 0)) &&
                 (plVar9 = *(long **)(unaff_x19 + 200), plVar9 != (long *)0x0)) {
                fVar21 = *(float *)(lVar16 + 0x24);
                fVar19 = 1.0;
                if (fVar21 <= 1.0) {
                  fVar19 = fVar21;
                }
                fVar20 = 0.0;
                if (0.0 <= fVar21) {
                  fVar20 = fVar19;
                }
                (**(code **)(*plVar9 + 0x428))(fVar20,plVar9,*(undefined8 *)(*plVar9 + 0x430));
                lVar16 = *(long *)(unaff_x19 + 0xf8);
                if (((lVar16 != 0) && (*(char *)(lVar16 + 0x58) != '\0')) &&
                   (*(char *)(lVar16 + 0x21) == '\0')) {
                  plVar9 = *(long **)(unaff_x19 + 0x20);
                  if (plVar9 == (long *)0x0) goto LAB_0696eee8;
                  uVar17 = (**(code **)(*plVar9 + 0x5d8))(plVar9,*(undefined8 *)(*plVar9 + 0x5e0));
                  uVar17 = FUN_065c0764(uVar17,*(undefined8 *)PTR_DAT_084b71d0,0);
                  (**(code **)(*plVar9 + 0x5e8))(plVar9,uVar17,*(undefined8 *)(*plVar9 + 0x5f0));
                }
                lVar16 = *(long *)(unaff_x19 + 0x100);
                if (((lVar16 != 0) && (*(int *)(lVar16 + 0x28) == 0)) &&
                   (*(char *)(lVar16 + 0x34) != '\0')) {
                  plVar9 = *(long **)(unaff_x19 + 0x20);
                  if (plVar9 == (long *)0x0) goto LAB_0696eee8;
                  uVar17 = (**(code **)(*plVar9 + 0x5d8))(plVar9,*(undefined8 *)(*plVar9 + 0x5e0));
                  uVar17 = FUN_065c0764(uVar17,*(undefined8 *)PTR_DAT_084b71f0,0);
                  (**(code **)(*plVar9 + 0x5e8))(plVar9,uVar17,*(undefined8 *)(*plVar9 + 0x5f0));
                }
                puVar3 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x108) != 0) {
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x18), lVar16 == 0))
                  goto LAB_0696eee8;
                  plVar9 = *(long **)(*(long *)(unaff_x19 + 0x40) + 0xe0);
                  lVar10 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar16 + 0x18) == '\0') {
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar10 = *(long *)puVar3;
                    }
                    puVar12 = *(undefined4 **)(lVar10 + 0xb8);
                    puVar13 = puVar12 + 1;
                    puVar14 = puVar12 + 2;
                    puVar15 = puVar12 + 3;
                  }
                  else {
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar10 = *(long *)puVar3;
                    }
                    lVar16 = *(long *)(lVar10 + 0xb8);
                    puVar12 = (undefined4 *)(lVar16 + 0x10);
                    puVar13 = (undefined4 *)(lVar16 + 0x14);
                    puVar14 = (undefined4 *)(lVar16 + 0x18);
                    puVar15 = (undefined4 *)(lVar16 + 0x1c);
                  }
                  if (plVar9 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar9 + 0x2a8))
                            (*puVar12,*puVar13,*puVar14,*puVar15,plVar9,
                             *(undefined8 *)(*plVar9 + 0x2b0));
                }
                puVar3 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x110) != 0) {
                  if ((*(long *)(unaff_x19 + 0x48) == 0) ||
                     (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x110) + 0x18), lVar16 == 0))
                  goto LAB_0696eee8;
                  plVar9 = *(long **)(*(long *)(unaff_x19 + 0x48) + 0xe0);
                  lVar10 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar16 + 0x18) == '\0') {
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar10 = *(long *)puVar3;
                    }
                    puVar12 = *(undefined4 **)(lVar10 + 0xb8);
                    puVar13 = puVar12 + 1;
                    puVar14 = puVar12 + 2;
                    puVar15 = puVar12 + 3;
                  }
                  else {
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar10 = *(long *)puVar3;
                    }
                    lVar16 = *(long *)(lVar10 + 0xb8);
                    puVar12 = (undefined4 *)(lVar16 + 0x10);
                    puVar13 = (undefined4 *)(lVar16 + 0x14);
                    puVar14 = (undefined4 *)(lVar16 + 0x18);
                    puVar15 = (undefined4 *)(lVar16 + 0x1c);
                  }
                  if (plVar9 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar9 + 0x2a8))
                            (*puVar12,*puVar13,*puVar14,*puVar15,plVar9,
                             *(undefined8 *)(*plVar9 + 0x2b0));
                }
                puVar3 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x118) != 0) {
                  if ((*(long *)(unaff_x19 + 0x50) == 0) ||
                     (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x18), lVar16 == 0))
                  goto LAB_0696eee8;
                  plVar9 = *(long **)(*(long *)(unaff_x19 + 0x50) + 0xe0);
                  lVar10 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar16 + 0x18) == '\0') {
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar10 = *(long *)puVar3;
                    }
                    puVar12 = *(undefined4 **)(lVar10 + 0xb8);
                    puVar13 = puVar12 + 1;
                    puVar14 = puVar12 + 2;
                    puVar15 = puVar12 + 3;
                  }
                  else {
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar10 = *(long *)puVar3;
                    }
                    lVar16 = *(long *)(lVar10 + 0xb8);
                    puVar12 = (undefined4 *)(lVar16 + 0x10);
                    puVar13 = (undefined4 *)(lVar16 + 0x14);
                    puVar14 = (undefined4 *)(lVar16 + 0x18);
                    puVar15 = (undefined4 *)(lVar16 + 0x1c);
                  }
                  if (plVar9 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar9 + 0x2a8))
                            (*puVar12,*puVar13,*puVar14,*puVar15,plVar9,
                             *(undefined8 *)(*plVar9 + 0x2b0));
                }
                puVar3 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x120) != 0) {
                  if ((*(long *)(unaff_x19 + 0x58) == 0) ||
                     (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x18), lVar16 == 0))
                  goto LAB_0696eee8;
                  plVar9 = *(long **)(*(long *)(unaff_x19 + 0x58) + 0xe0);
                  lVar10 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar16 + 0x18) == '\0') {
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar10 = *(long *)puVar3;
                    }
                    puVar12 = *(undefined4 **)(lVar10 + 0xb8);
                    puVar13 = puVar12 + 1;
                    puVar14 = puVar12 + 2;
                    puVar15 = puVar12 + 3;
                  }
                  else {
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar10 = *(long *)puVar3;
                    }
                    lVar16 = *(long *)(lVar10 + 0xb8);
                    puVar12 = (undefined4 *)(lVar16 + 0x10);
                    puVar13 = (undefined4 *)(lVar16 + 0x14);
                    puVar14 = (undefined4 *)(lVar16 + 0x18);
                    puVar15 = (undefined4 *)(lVar16 + 0x1c);
                  }
                  if (plVar9 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar9 + 0x2a8))
                            (*puVar12,*puVar13,*puVar14,*puVar15,plVar9,
                             *(undefined8 *)(*plVar9 + 0x2b0));
                }
                puVar3 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x128) != 0) {
                  if ((*(long *)(unaff_x19 + 0x78) == 0) ||
                     (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x128) + 0x18), lVar16 == 0))
                  goto LAB_0696eee8;
                  plVar9 = *(long **)(*(long *)(unaff_x19 + 0x78) + 0xe0);
                  lVar10 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar16 + 0x18) == '\0') {
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar10 = *(long *)puVar3;
                    }
                    puVar12 = *(undefined4 **)(lVar10 + 0xb8);
                    puVar13 = puVar12 + 1;
                    puVar14 = puVar12 + 2;
                    puVar15 = puVar12 + 3;
                  }
                  else {
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar10 = *(long *)puVar3;
                    }
                    lVar16 = *(long *)(lVar10 + 0xb8);
                    puVar12 = (undefined4 *)(lVar16 + 0x10);
                    puVar13 = (undefined4 *)(lVar16 + 0x14);
                    puVar14 = (undefined4 *)(lVar16 + 0x18);
                    puVar15 = (undefined4 *)(lVar16 + 0x1c);
                  }
                  if (plVar9 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar9 + 0x2a8))
                            (*puVar12,*puVar13,*puVar14,*puVar15,plVar9,
                             *(undefined8 *)(*plVar9 + 0x2b0));
                }
                puVar3 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x130) != 0) {
                  if ((*(long *)(unaff_x19 + 0x70) == 0) ||
                     (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x130) + 0x18), lVar16 == 0))
                  goto LAB_0696eee8;
                  plVar9 = *(long **)(*(long *)(unaff_x19 + 0x70) + 0xe0);
                  lVar10 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar16 + 0x18) == '\0') {
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar10 = *(long *)puVar3;
                    }
                    puVar12 = *(undefined4 **)(lVar10 + 0xb8);
                    puVar13 = puVar12 + 1;
                    puVar14 = puVar12 + 2;
                    puVar15 = puVar12 + 3;
                  }
                  else {
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar10 = *(long *)puVar3;
                    }
                    lVar16 = *(long *)(lVar10 + 0xb8);
                    puVar12 = (undefined4 *)(lVar16 + 0x10);
                    puVar13 = (undefined4 *)(lVar16 + 0x14);
                    puVar14 = (undefined4 *)(lVar16 + 0x18);
                    puVar15 = (undefined4 *)(lVar16 + 0x1c);
                  }
                  if (plVar9 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar9 + 0x2a8))
                            (*puVar12,*puVar13,*puVar14,*puVar15,plVar9,
                             *(undefined8 *)(*plVar9 + 0x2b0));
                }
                uVar17 = *(undefined8 *)(unaff_x19 + 0xd8);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar8 = FUN_07c9c218(uVar17,0,0);
                if ((uVar8 & 1) != 0) {
                  if ((((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0xe8), lVar16 == 0))
                      || (lVar16 = *(long *)(lVar16 + 0x40), lVar16 == 0)) ||
                     (lVar16 = *(long *)(lVar16 + 0x88), lVar16 == 0)) goto LAB_0696eee8;
                  plVar9 = *(long **)(unaff_x19 + 0xd8);
                  if (*(char *)(lVar16 + 0x10) == '\0') {
                    if (plVar9 == (long *)0x0) goto LAB_0696eee8;
                    (**(code **)(*plVar9 + 0x5e8))
                              (plVar9,*unaff_x24,*(undefined8 *)(*plVar9 + 0x5f0));
                    plVar9 = *(long **)(unaff_x19 + 0xe0);
                    if (plVar9 == (long *)0x0) goto LAB_0696eee8;
                    lVar16 = *plVar9;
                    uVar17 = *unaff_x24;
                  }
                  else {
                    if (plVar9 == (long *)0x0) goto LAB_0696eee8;
                    (**(code **)(*plVar9 + 0x5e8))
                              (plVar9,*(undefined8 *)PTR_DAT_084b71e0,
                               *(undefined8 *)(*plVar9 + 0x5f0));
                    if (((*(long *)(unaff_x19 + 0xe8) == 0) ||
                        (lVar16 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar16 == 0)) ||
                       ((lVar16 = *(long *)(lVar16 + 0x40), lVar16 == 0 ||
                        (lVar16 = *(long *)(lVar16 + 0x88), lVar16 == 0)))) goto LAB_0696eee8;
                    plVar9 = *(long **)(unaff_x19 + 0xe0);
                    in_stack_00000008._4_4_ = *(float *)(lVar16 + 0x14) * 100.0;
                    uVar17 = FUN_067638d0((long)&stack0x00000008 + 4,*(undefined8 *)PTR_DAT_084b71c8
                                          ,0);
                    uVar17 = FUN_065c0764(uVar17,*(undefined8 *)PTR_DAT_084b71f8,0);
                    if (plVar9 == (long *)0x0) goto LAB_0696eee8;
                    lVar16 = *plVar9;
                  }
                  (**(code **)(lVar16 + 0x5e8))(plVar9,uVar17,*(undefined8 *)(lVar16 + 0x5f0));
                }
                if (*unaff_x20 != 0) {
                  lVar16 = FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7190);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4(*(long *)puVar2);
                  }
                  uVar8 = FUN_07c9c218(lVar16,0,0);
                  if ((uVar8 & 1) == 0) {
LAB_0696eec0:
                    *plVar18 = *unaff_x20;
                    thunk_FUN_03afed3c(plVar18);
                    return;
                  }
                  if ((*(long *)(unaff_x19 + 0x60) != 0) && (lVar16 != 0)) {
                    plVar9 = *(long **)(*(long *)(unaff_x19 + 0x60) + 0xe0);
                    uVar8 = FUN_07c986c8(lVar16,0);
                    puVar2 = PTR_DAT_084b71b0;
                    lVar10 = *(long *)PTR_DAT_084b71b0;
                    if ((uVar8 & 1) == 0) {
                      if (*(int *)(lVar10 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                        lVar10 = *(long *)puVar2;
                      }
                      puVar12 = *(undefined4 **)(lVar10 + 0xb8);
                      puVar13 = puVar12 + 1;
                      puVar14 = puVar12 + 2;
                      puVar15 = puVar12 + 3;
                    }
                    else {
                      if (*(int *)(lVar10 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                        lVar10 = *(long *)puVar2;
                      }
                      lVar10 = *(long *)(lVar10 + 0xb8);
                      puVar12 = (undefined4 *)(lVar10 + 0x10);
                      puVar13 = (undefined4 *)(lVar10 + 0x14);
                      puVar14 = (undefined4 *)(lVar10 + 0x18);
                      puVar15 = (undefined4 *)(lVar10 + 0x1c);
                    }
                    if (plVar9 != (long *)0x0) {
                      (**(code **)(*plVar9 + 0x2a8))
                                (*puVar12,*puVar13,*puVar14,*puVar15,plVar9,
                                 *(undefined8 *)(*plVar9 + 0x2b0));
                      plVar9 = *(long **)(unaff_x19 + 0xd0);
                      if (plVar9 != (long *)0x0) {
                        (**(code **)(*plVar9 + 0x428))
                                  (*(undefined4 *)(lVar16 + 0x98),plVar9,
                                   *(undefined8 *)(*plVar9 + 0x430));
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


