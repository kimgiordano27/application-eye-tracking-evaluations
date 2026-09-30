/*
FUNCTION_NAME: OVRPlugin.OVRP_0_5_0$$.cctor
ENTRY_POINT: 0696ddcc
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


void OVRPlugin_OVRP_0_5_0___cctor(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar16;
  long *plVar17;
  long unaff_x22;
  undefined8 *unaff_x24;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 in_stack_00000008;
  
  puVar3 = PTR_DAT_08486738;
  if (*(char *)(unaff_x22 + 0xf36) == '\0') {
    FUN_03a8a718(PTR_DAT_084b59e8);
    *(undefined1 *)(unaff_x22 + 0xf36) = 1;
  }
  puVar4 = PTR_DAT_084b59e8;
  uVar16 = **(undefined8 **)(*(long *)PTR_DAT_084b59e8 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
                    /* try { // try from 0696de20 to 06a6de4b has its CatchHandler @ 0696e070 */
  uVar6 = FUN_07c9c218(uVar16,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(char *)(unaff_x22 + 0xf36) == '\0') {
      FUN_03a8a718(PTR_DAT_084b59e8);
      *(undefined1 *)(unaff_x22 + 0xf36) = 1;
    }
                    /* try { // try from 0696de4c to 06a6debb has its CatchHandler @ 0696e078 */
    lVar9 = **(long **)(*(long *)puVar4 + 0xb8);
    if (lVar9 == 0) goto LAB_0696eee8;
    iVar1 = *(int *)(lVar9 + 0x54);
    if (iVar1 == 2) {
      if (*unaff_x20 == 0) goto LAB_0696eee8;
      fVar18 = (float)FUN_06926524(*unaff_x20,0);
      if (*(char *)(unaff_x22 + 0xf36) == '\0') {
        FUN_03a8a718(PTR_DAT_084b59e8);
        *(undefined1 *)(unaff_x22 + 0xf36) = 1;
      }
      lVar9 = **(long **)(*(long *)puVar4 + 0xb8);
      if (lVar9 == 0) goto LAB_0696eee8;
      if (fVar18 < *(float *)(lVar9 + 0x50)) {
        plVar17 = *(long **)(unaff_x19 + 0x20);
        if (plVar17 == (long *)0x0) goto LAB_0696eee8;
        uVar16 = (**(code **)(*plVar17 + 0x5d8))(plVar17,*(undefined8 *)(*plVar17 + 0x5e0));
        puVar10 = (undefined8 *)PTR_DAT_084b71d8;
        goto LAB_0696df00;
      }
    }
    else if (iVar1 == 1) {
      plVar17 = *(long **)(unaff_x19 + 0x20);
      if (plVar17 == (long *)0x0) goto LAB_0696eee8;
      uVar16 = (**(code **)(*plVar17 + 0x5d8))(plVar17,*(undefined8 *)(*plVar17 + 0x5e0));
      puVar10 = (undefined8 *)PTR_DAT_084b71e8;
LAB_0696df00:
      uVar16 = FUN_065c0764(uVar16,*puVar10,0);
      (**(code **)(*plVar17 + 0x5e8))(plVar17,uVar16,*(undefined8 *)(*plVar17 + 0x5f0));
    }
  }
  lVar9 = *unaff_x20;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar6 = FUN_07c9e200(lVar9,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  plVar17 = (long *)(unaff_x19 + 0xf0);
  lVar9 = *plVar17;
  uVar16 = *(undefined8 *)(unaff_x19 + 0xe8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar6 = FUN_07c9c218(uVar16,lVar9,0);
  if ((uVar6 & 1) != 0) {
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar7 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b71a8);
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180)),
       plVar7 == (long *)0x0)) {
      plVar7 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0xf8) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6920;
      bVar2 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar7;
        if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0xf8) = plVar11;
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar7 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
        plVar7 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0xf8,plVar7);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar7 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b71a0);
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180)),
       plVar7 == (long *)0x0)) {
      plVar7 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x100) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6a48;
      bVar2 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar7;
        if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x100) = plVar11;
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar7 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
        plVar7 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x100,plVar7);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar7 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b6d90);
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180)),
       plVar7 == (long *)0x0)) {
      plVar7 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x108) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6ad0;
      bVar2 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar7;
        if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x108) = plVar11;
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar7 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
        plVar7 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x108,plVar7);
    puVar4 = PTR_DAT_084b6d98;
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar7 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b6d98);
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180)),
       plVar7 == (long *)0x0)) {
      plVar7 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x110) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6948;
      bVar2 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar7;
        if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x110) = plVar11;
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar7 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
        plVar7 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x110,plVar7);
    puVar5 = PTR_DAT_084b7198;
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar7 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7198);
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180)),
       plVar7 == (long *)0x0)) {
      plVar7 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x118) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6a50;
      bVar2 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar7;
        if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x118) = plVar11;
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar7 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
        plVar7 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x118,plVar7);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar7 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7178);
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180)),
       plVar7 == (long *)0x0)) {
      plVar7 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x120) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6aa8;
      bVar2 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar7;
        if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x120) = plVar11;
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar7 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
        plVar7 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x120,plVar7);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar7 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)puVar4);
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180)),
       plVar7 == (long *)0x0)) {
      plVar7 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x110) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6948;
      bVar2 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar7;
        if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x110) = plVar11;
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar7 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
        plVar7 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x110,plVar7);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar7 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)puVar5);
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180)),
       plVar7 == (long *)0x0)) {
      plVar7 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x118) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6a50;
      bVar2 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar7;
        if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x118) = plVar11;
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar7 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
        plVar7 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x118,plVar7);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar7 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7188);
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180)),
       plVar7 == (long *)0x0)) {
      plVar7 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x130) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6a68;
      bVar2 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar7;
        if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x130) = plVar11;
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar7 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
        plVar7 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x130,plVar7);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar7 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7180);
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180)),
       plVar7 == (long *)0x0)) {
      plVar7 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x128) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6a70;
      bVar2 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar7;
        if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
          plVar11 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x128) = plVar11;
      if (*(byte *)(*plVar7 + 0x130) < bVar2) {
        plVar7 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar9) {
        plVar7 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x128,plVar7);
  }
  lVar9 = *unaff_x20;
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + 0x168) == '\0') {
      return;
    }
    if ((*(long *)(lVar9 + 0xd8) != 0) &&
       (plVar7 = *(long **)(unaff_x19 + 0xa0), plVar7 != (long *)0x0)) {
      fVar20 = *(float *)(*(long *)(lVar9 + 0xd8) + 0x34);
      fVar18 = 1.0;
      if (fVar20 <= 1.0) {
        fVar18 = fVar20;
      }
      fVar19 = 0.0;
      if (0.0 <= fVar20) {
        fVar19 = fVar18;
      }
      (**(code **)(*plVar7 + 0x428))(fVar19,plVar7,*(undefined8 *)(*plVar7 + 0x430));
      if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
          (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar9 != 0)) &&
         (plVar7 = *(long **)(unaff_x19 + 0xa8), plVar7 != (long *)0x0)) {
        fVar20 = *(float *)(lVar9 + 0x44);
        fVar18 = 1.0;
        if (fVar20 <= 1.0) {
          fVar18 = fVar20;
        }
        fVar19 = 0.0;
        if (0.0 <= fVar20) {
          fVar19 = fVar18;
        }
        (**(code **)(*plVar7 + 0x428))(fVar19,plVar7,*(undefined8 *)(*plVar7 + 0x430));
        if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
            (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar9 != 0)) &&
           ((lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0 &&
            (plVar7 = *(long **)(unaff_x19 + 0xb0), plVar7 != (long *)0x0)))) {
          fVar20 = *(float *)(lVar9 + 0x78);
          fVar18 = 1.0;
          if (fVar20 <= 1.0) {
            fVar18 = fVar20;
          }
          fVar19 = 0.0;
          if (0.0 <= fVar20) {
            fVar19 = fVar18;
          }
          (**(code **)(*plVar7 + 0x428))(fVar19,plVar7,*(undefined8 *)(*plVar7 + 0x430));
          if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
              (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar9 != 0)) &&
             (plVar7 = *(long **)(unaff_x19 + 0xb8), plVar7 != (long *)0x0)) {
            fVar20 = *(float *)(lVar9 + 0x54);
            fVar18 = 1.0;
            if (fVar20 <= 1.0) {
              fVar18 = fVar20;
            }
            fVar19 = 0.0;
            if (0.0 <= fVar20) {
              fVar19 = fVar18;
            }
            (**(code **)(*plVar7 + 0x428))(fVar19,plVar7,*(undefined8 *)(*plVar7 + 0x430));
            if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar9 != 0)) &&
               (plVar7 = *(long **)(unaff_x19 + 0xc0), plVar7 != (long *)0x0)) {
              fVar20 = *(float *)(lVar9 + 0x24);
              fVar18 = 1.0;
              if (-1.0 <= fVar20) {
                fVar18 = -fVar20;
              }
              fVar19 = 0.0;
              if (fVar20 <= 0.0) {
                fVar19 = fVar18;
              }
              (**(code **)(*plVar7 + 0x428))(fVar19,plVar7,*(undefined8 *)(*plVar7 + 0x430));
              if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                  (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar9 != 0)) &&
                 (plVar7 = *(long **)(unaff_x19 + 200), plVar7 != (long *)0x0)) {
                fVar20 = *(float *)(lVar9 + 0x24);
                fVar18 = 1.0;
                if (fVar20 <= 1.0) {
                  fVar18 = fVar20;
                }
                fVar19 = 0.0;
                if (0.0 <= fVar20) {
                  fVar19 = fVar18;
                }
                (**(code **)(*plVar7 + 0x428))(fVar19,plVar7,*(undefined8 *)(*plVar7 + 0x430));
                lVar9 = *(long *)(unaff_x19 + 0xf8);
                if (((lVar9 != 0) && (*(char *)(lVar9 + 0x58) != '\0')) &&
                   (*(char *)(lVar9 + 0x21) == '\0')) {
                  plVar7 = *(long **)(unaff_x19 + 0x20);
                  if (plVar7 == (long *)0x0) goto LAB_0696eee8;
                  uVar16 = (**(code **)(*plVar7 + 0x5d8))(plVar7,*(undefined8 *)(*plVar7 + 0x5e0));
                  uVar16 = FUN_065c0764(uVar16,*(undefined8 *)PTR_DAT_084b71d0,0);
                  (**(code **)(*plVar7 + 0x5e8))(plVar7,uVar16,*(undefined8 *)(*plVar7 + 0x5f0));
                }
                lVar9 = *(long *)(unaff_x19 + 0x100);
                if (((lVar9 != 0) && (*(int *)(lVar9 + 0x28) == 0)) &&
                   (*(char *)(lVar9 + 0x34) != '\0')) {
                  plVar7 = *(long **)(unaff_x19 + 0x20);
                  if (plVar7 == (long *)0x0) goto LAB_0696eee8;
                  uVar16 = (**(code **)(*plVar7 + 0x5d8))(plVar7,*(undefined8 *)(*plVar7 + 0x5e0));
                  uVar16 = FUN_065c0764(uVar16,*(undefined8 *)PTR_DAT_084b71f0,0);
                  (**(code **)(*plVar7 + 0x5e8))(plVar7,uVar16,*(undefined8 *)(*plVar7 + 0x5f0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x108) != 0) {
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x18), lVar9 == 0))
                  goto LAB_0696eee8;
                  plVar7 = *(long **)(*(long *)(unaff_x19 + 0x40) + 0xe0);
                  lVar8 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar9 + 0x18) == '\0') {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar8 = *(long *)puVar4;
                    }
                    puVar12 = *(undefined4 **)(lVar8 + 0xb8);
                    puVar13 = puVar12 + 1;
                    puVar14 = puVar12 + 2;
                    puVar15 = puVar12 + 3;
                  }
                  else {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar8 = *(long *)puVar4;
                    }
                    lVar9 = *(long *)(lVar8 + 0xb8);
                    puVar12 = (undefined4 *)(lVar9 + 0x10);
                    puVar13 = (undefined4 *)(lVar9 + 0x14);
                    puVar14 = (undefined4 *)(lVar9 + 0x18);
                    puVar15 = (undefined4 *)(lVar9 + 0x1c);
                  }
                  if (plVar7 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar7 + 0x2a8))
                            (*puVar12,*puVar13,*puVar14,*puVar15,plVar7,
                             *(undefined8 *)(*plVar7 + 0x2b0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x110) != 0) {
                  if ((*(long *)(unaff_x19 + 0x48) == 0) ||
                     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x110) + 0x18), lVar9 == 0))
                  goto LAB_0696eee8;
                  plVar7 = *(long **)(*(long *)(unaff_x19 + 0x48) + 0xe0);
                  lVar8 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar9 + 0x18) == '\0') {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar8 = *(long *)puVar4;
                    }
                    puVar12 = *(undefined4 **)(lVar8 + 0xb8);
                    puVar13 = puVar12 + 1;
                    puVar14 = puVar12 + 2;
                    puVar15 = puVar12 + 3;
                  }
                  else {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar8 = *(long *)puVar4;
                    }
                    lVar9 = *(long *)(lVar8 + 0xb8);
                    puVar12 = (undefined4 *)(lVar9 + 0x10);
                    puVar13 = (undefined4 *)(lVar9 + 0x14);
                    puVar14 = (undefined4 *)(lVar9 + 0x18);
                    puVar15 = (undefined4 *)(lVar9 + 0x1c);
                  }
                  if (plVar7 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar7 + 0x2a8))
                            (*puVar12,*puVar13,*puVar14,*puVar15,plVar7,
                             *(undefined8 *)(*plVar7 + 0x2b0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x118) != 0) {
                  if ((*(long *)(unaff_x19 + 0x50) == 0) ||
                     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x18), lVar9 == 0))
                  goto LAB_0696eee8;
                  plVar7 = *(long **)(*(long *)(unaff_x19 + 0x50) + 0xe0);
                  lVar8 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar9 + 0x18) == '\0') {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar8 = *(long *)puVar4;
                    }
                    puVar12 = *(undefined4 **)(lVar8 + 0xb8);
                    puVar13 = puVar12 + 1;
                    puVar14 = puVar12 + 2;
                    puVar15 = puVar12 + 3;
                  }
                  else {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar8 = *(long *)puVar4;
                    }
                    lVar9 = *(long *)(lVar8 + 0xb8);
                    puVar12 = (undefined4 *)(lVar9 + 0x10);
                    puVar13 = (undefined4 *)(lVar9 + 0x14);
                    puVar14 = (undefined4 *)(lVar9 + 0x18);
                    puVar15 = (undefined4 *)(lVar9 + 0x1c);
                  }
                  if (plVar7 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar7 + 0x2a8))
                            (*puVar12,*puVar13,*puVar14,*puVar15,plVar7,
                             *(undefined8 *)(*plVar7 + 0x2b0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x120) != 0) {
                  if ((*(long *)(unaff_x19 + 0x58) == 0) ||
                     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x18), lVar9 == 0))
                  goto LAB_0696eee8;
                  plVar7 = *(long **)(*(long *)(unaff_x19 + 0x58) + 0xe0);
                  lVar8 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar9 + 0x18) == '\0') {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar8 = *(long *)puVar4;
                    }
                    puVar12 = *(undefined4 **)(lVar8 + 0xb8);
                    puVar13 = puVar12 + 1;
                    puVar14 = puVar12 + 2;
                    puVar15 = puVar12 + 3;
                  }
                  else {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar8 = *(long *)puVar4;
                    }
                    lVar9 = *(long *)(lVar8 + 0xb8);
                    puVar12 = (undefined4 *)(lVar9 + 0x10);
                    puVar13 = (undefined4 *)(lVar9 + 0x14);
                    puVar14 = (undefined4 *)(lVar9 + 0x18);
                    puVar15 = (undefined4 *)(lVar9 + 0x1c);
                  }
                  if (plVar7 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar7 + 0x2a8))
                            (*puVar12,*puVar13,*puVar14,*puVar15,plVar7,
                             *(undefined8 *)(*plVar7 + 0x2b0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x128) != 0) {
                  if ((*(long *)(unaff_x19 + 0x78) == 0) ||
                     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x128) + 0x18), lVar9 == 0))
                  goto LAB_0696eee8;
                  plVar7 = *(long **)(*(long *)(unaff_x19 + 0x78) + 0xe0);
                  lVar8 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar9 + 0x18) == '\0') {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar8 = *(long *)puVar4;
                    }
                    puVar12 = *(undefined4 **)(lVar8 + 0xb8);
                    puVar13 = puVar12 + 1;
                    puVar14 = puVar12 + 2;
                    puVar15 = puVar12 + 3;
                  }
                  else {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar8 = *(long *)puVar4;
                    }
                    lVar9 = *(long *)(lVar8 + 0xb8);
                    puVar12 = (undefined4 *)(lVar9 + 0x10);
                    puVar13 = (undefined4 *)(lVar9 + 0x14);
                    puVar14 = (undefined4 *)(lVar9 + 0x18);
                    puVar15 = (undefined4 *)(lVar9 + 0x1c);
                  }
                  if (plVar7 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar7 + 0x2a8))
                            (*puVar12,*puVar13,*puVar14,*puVar15,plVar7,
                             *(undefined8 *)(*plVar7 + 0x2b0));
                }
                puVar4 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x130) != 0) {
                  if ((*(long *)(unaff_x19 + 0x70) == 0) ||
                     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x130) + 0x18), lVar9 == 0))
                  goto LAB_0696eee8;
                  plVar7 = *(long **)(*(long *)(unaff_x19 + 0x70) + 0xe0);
                  lVar8 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar9 + 0x18) == '\0') {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar8 = *(long *)puVar4;
                    }
                    puVar12 = *(undefined4 **)(lVar8 + 0xb8);
                    puVar13 = puVar12 + 1;
                    puVar14 = puVar12 + 2;
                    puVar15 = puVar12 + 3;
                  }
                  else {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar8 = *(long *)puVar4;
                    }
                    lVar9 = *(long *)(lVar8 + 0xb8);
                    puVar12 = (undefined4 *)(lVar9 + 0x10);
                    puVar13 = (undefined4 *)(lVar9 + 0x14);
                    puVar14 = (undefined4 *)(lVar9 + 0x18);
                    puVar15 = (undefined4 *)(lVar9 + 0x1c);
                  }
                  if (plVar7 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar7 + 0x2a8))
                            (*puVar12,*puVar13,*puVar14,*puVar15,plVar7,
                             *(undefined8 *)(*plVar7 + 0x2b0));
                }
                uVar16 = *(undefined8 *)(unaff_x19 + 0xd8);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar6 = FUN_07c9c218(uVar16,0,0);
                if ((uVar6 & 1) != 0) {
                  if ((((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0xe8), lVar9 == 0)) ||
                      (lVar9 = *(long *)(lVar9 + 0x40), lVar9 == 0)) ||
                     (lVar9 = *(long *)(lVar9 + 0x88), lVar9 == 0)) goto LAB_0696eee8;
                  plVar7 = *(long **)(unaff_x19 + 0xd8);
                  if (*(char *)(lVar9 + 0x10) == '\0') {
                    if (plVar7 == (long *)0x0) goto LAB_0696eee8;
                    (**(code **)(*plVar7 + 0x5e8))
                              (plVar7,*unaff_x24,*(undefined8 *)(*plVar7 + 0x5f0));
                    plVar7 = *(long **)(unaff_x19 + 0xe0);
                    if (plVar7 == (long *)0x0) goto LAB_0696eee8;
                    lVar9 = *plVar7;
                    uVar16 = *unaff_x24;
                  }
                  else {
                    if (plVar7 == (long *)0x0) goto LAB_0696eee8;
                    (**(code **)(*plVar7 + 0x5e8))
                              (plVar7,*(undefined8 *)PTR_DAT_084b71e0,
                               *(undefined8 *)(*plVar7 + 0x5f0));
                    if (((*(long *)(unaff_x19 + 0xe8) == 0) ||
                        (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar9 == 0)) ||
                       ((lVar9 = *(long *)(lVar9 + 0x40), lVar9 == 0 ||
                        (lVar9 = *(long *)(lVar9 + 0x88), lVar9 == 0)))) goto LAB_0696eee8;
                    plVar7 = *(long **)(unaff_x19 + 0xe0);
                    in_stack_00000008._4_4_ = *(float *)(lVar9 + 0x14) * 100.0;
                    uVar16 = FUN_067638d0((long)&stack0x00000008 + 4,*(undefined8 *)PTR_DAT_084b71c8
                                          ,0);
                    uVar16 = FUN_065c0764(uVar16,*(undefined8 *)PTR_DAT_084b71f8,0);
                    if (plVar7 == (long *)0x0) goto LAB_0696eee8;
                    lVar9 = *plVar7;
                  }
                  (**(code **)(lVar9 + 0x5e8))(plVar7,uVar16,*(undefined8 *)(lVar9 + 0x5f0));
                }
                if (*unaff_x20 != 0) {
                  lVar9 = FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7190);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4(*(long *)puVar3);
                  }
                  uVar6 = FUN_07c9c218(lVar9,0,0);
                  if ((uVar6 & 1) == 0) {
LAB_0696eec0:
                    *plVar17 = *unaff_x20;
                    thunk_FUN_03afed3c(plVar17);
                    return;
                  }
                  if ((*(long *)(unaff_x19 + 0x60) != 0) && (lVar9 != 0)) {
                    plVar7 = *(long **)(*(long *)(unaff_x19 + 0x60) + 0xe0);
                    uVar6 = FUN_07c986c8(lVar9,0);
                    puVar3 = PTR_DAT_084b71b0;
                    lVar8 = *(long *)PTR_DAT_084b71b0;
                    if ((uVar6 & 1) == 0) {
                      if (*(int *)(lVar8 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                        lVar8 = *(long *)puVar3;
                      }
                      puVar12 = *(undefined4 **)(lVar8 + 0xb8);
                      puVar13 = puVar12 + 1;
                      puVar14 = puVar12 + 2;
                      puVar15 = puVar12 + 3;
                    }
                    else {
                      if (*(int *)(lVar8 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                        lVar8 = *(long *)puVar3;
                      }
                      lVar8 = *(long *)(lVar8 + 0xb8);
                      puVar12 = (undefined4 *)(lVar8 + 0x10);
                      puVar13 = (undefined4 *)(lVar8 + 0x14);
                      puVar14 = (undefined4 *)(lVar8 + 0x18);
                      puVar15 = (undefined4 *)(lVar8 + 0x1c);
                    }
                    if (plVar7 != (long *)0x0) {
                      (**(code **)(*plVar7 + 0x2a8))
                                (*puVar12,*puVar13,*puVar14,*puVar15,plVar7,
                                 *(undefined8 *)(*plVar7 + 0x2b0));
                      plVar7 = *(long **)(unaff_x19 + 0xd0);
                      if (plVar7 != (long *)0x0) {
                        (**(code **)(*plVar7 + 0x428))
                                  (*(undefined4 *)(lVar9 + 0x98),plVar7,
                                   *(undefined8 *)(*plVar7 + 0x430));
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


