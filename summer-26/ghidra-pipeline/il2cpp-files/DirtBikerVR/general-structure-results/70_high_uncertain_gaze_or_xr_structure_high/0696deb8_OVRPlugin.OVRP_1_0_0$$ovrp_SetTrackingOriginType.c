/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_SetTrackingOriginType
ENTRY_POINT: 0696deb8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_SetTrackingOriginType(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long unaff_x19;
  long *unaff_x20;
  long *plVar13;
  long lVar14;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_s8;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 0696debc to 06a6e04b has its CatchHandler @ 0696dc34 */
  *(undefined1 *)(unaff_x22 + 0xf36) = 1;
  if (**(long **)(*unaff_x23 + 0xb8) == 0) goto LAB_0696eee8;
  if (unaff_s8 < *(float *)(**(long **)(*unaff_x23 + 0xb8) + 0x50)) {
    plVar13 = *(long **)(unaff_x19 + 0x20);
    if (plVar13 == (long *)0x0) goto LAB_0696eee8;
    uVar4 = (**(code **)(*plVar13 + 0x5d8))(plVar13,*(undefined8 *)(*plVar13 + 0x5e0));
    uVar4 = FUN_065c0764(uVar4,*(undefined8 *)PTR_DAT_084b71d8,0);
    (**(code **)(*plVar13 + 0x5e8))(plVar13,uVar4,*(undefined8 *)(*plVar13 + 0x5f0));
  }
  lVar14 = *unaff_x20;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_07c9e200(lVar14,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  plVar13 = (long *)(unaff_x19 + 0xf0);
  lVar14 = *plVar13;
  uVar4 = *(undefined8 *)(unaff_x19 + 0xe8);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_07c9c218(uVar4,lVar14,0);
  if ((uVar5 & 1) != 0) {
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar6 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b71a8);
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180)),
       plVar6 == (long *)0x0)) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0xf8) = 0;
    }
    else {
      lVar14 = *(long *)PTR_DAT_084b6920;
      bVar1 = *(byte *)(lVar14 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0xf8) = plVar8;
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0xf8,plVar6);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar6 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b71a0);
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180)),
       plVar6 == (long *)0x0)) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x100) = 0;
    }
    else {
      lVar14 = *(long *)PTR_DAT_084b6a48;
      bVar1 = *(byte *)(lVar14 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x100) = plVar8;
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x100,plVar6);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar6 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b6d90);
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180)),
       plVar6 == (long *)0x0)) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x108) = 0;
    }
    else {
      lVar14 = *(long *)PTR_DAT_084b6ad0;
      bVar1 = *(byte *)(lVar14 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x108) = plVar8;
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x108,plVar6);
    puVar2 = PTR_DAT_084b6d98;
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar6 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b6d98);
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180)),
       plVar6 == (long *)0x0)) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x110) = 0;
    }
    else {
      lVar14 = *(long *)PTR_DAT_084b6948;
      bVar1 = *(byte *)(lVar14 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x110) = plVar8;
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x110,plVar6);
    puVar3 = PTR_DAT_084b7198;
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar6 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7198);
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180)),
       plVar6 == (long *)0x0)) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x118) = 0;
    }
    else {
      lVar14 = *(long *)PTR_DAT_084b6a50;
      bVar1 = *(byte *)(lVar14 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x118) = plVar8;
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x118,plVar6);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar6 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7178);
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180)),
       plVar6 == (long *)0x0)) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x120) = 0;
    }
    else {
      lVar14 = *(long *)PTR_DAT_084b6aa8;
      bVar1 = *(byte *)(lVar14 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x120) = plVar8;
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x120,plVar6);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar6 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)puVar2);
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180)),
       plVar6 == (long *)0x0)) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x110) = 0;
    }
    else {
      lVar14 = *(long *)PTR_DAT_084b6948;
      bVar1 = *(byte *)(lVar14 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x110) = plVar8;
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x110,plVar6);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar6 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)puVar3);
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180)),
       plVar6 == (long *)0x0)) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x118) = 0;
    }
    else {
      lVar14 = *(long *)PTR_DAT_084b6a50;
      bVar1 = *(byte *)(lVar14 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x118) = plVar8;
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x118,plVar6);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar6 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7188);
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180)),
       plVar6 == (long *)0x0)) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x130) = 0;
    }
    else {
      lVar14 = *(long *)PTR_DAT_084b6a68;
      bVar1 = *(byte *)(lVar14 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x130) = plVar8;
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x130,plVar6);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar6 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7180);
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180)),
       plVar6 == (long *)0x0)) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x128) = 0;
    }
    else {
      lVar14 = *(long *)PTR_DAT_084b6a70;
      bVar1 = *(byte *)(lVar14 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x128) = plVar8;
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x128,plVar6);
  }
  lVar14 = *unaff_x20;
  if (lVar14 != 0) {
    if (*(char *)(lVar14 + 0x168) == '\0') {
      return;
    }
    if ((*(long *)(lVar14 + 0xd8) != 0) &&
       (plVar6 = *(long **)(unaff_x19 + 0xa0), plVar6 != (long *)0x0)) {
      fVar17 = *(float *)(*(long *)(lVar14 + 0xd8) + 0x34);
      fVar15 = 1.0;
      if (fVar17 <= 1.0) {
        fVar15 = fVar17;
      }
      fVar16 = 0.0;
      if (0.0 <= fVar17) {
        fVar16 = fVar15;
      }
      (**(code **)(*plVar6 + 0x428))(fVar16,plVar6,*(undefined8 *)(*plVar6 + 0x430));
      if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
          (lVar14 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar14 != 0)) &&
         (plVar6 = *(long **)(unaff_x19 + 0xa8), plVar6 != (long *)0x0)) {
        fVar17 = *(float *)(lVar14 + 0x44);
        fVar15 = 1.0;
        if (fVar17 <= 1.0) {
          fVar15 = fVar17;
        }
        fVar16 = 0.0;
        if (0.0 <= fVar17) {
          fVar16 = fVar15;
        }
        (**(code **)(*plVar6 + 0x428))(fVar16,plVar6,*(undefined8 *)(*plVar6 + 0x430));
        if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
            (lVar14 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar14 != 0)) &&
           ((lVar14 = *(long *)(lVar14 + 0x30), lVar14 != 0 &&
            (plVar6 = *(long **)(unaff_x19 + 0xb0), plVar6 != (long *)0x0)))) {
          fVar17 = *(float *)(lVar14 + 0x78);
          fVar15 = 1.0;
          if (fVar17 <= 1.0) {
            fVar15 = fVar17;
          }
          fVar16 = 0.0;
          if (0.0 <= fVar17) {
            fVar16 = fVar15;
          }
          (**(code **)(*plVar6 + 0x428))(fVar16,plVar6,*(undefined8 *)(*plVar6 + 0x430));
          if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
              (lVar14 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar14 != 0)) &&
             (plVar6 = *(long **)(unaff_x19 + 0xb8), plVar6 != (long *)0x0)) {
            fVar17 = *(float *)(lVar14 + 0x54);
            fVar15 = 1.0;
            if (fVar17 <= 1.0) {
              fVar15 = fVar17;
            }
            fVar16 = 0.0;
            if (0.0 <= fVar17) {
              fVar16 = fVar15;
            }
            (**(code **)(*plVar6 + 0x428))(fVar16,plVar6,*(undefined8 *)(*plVar6 + 0x430));
            if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                (lVar14 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar14 != 0)) &&
               (plVar6 = *(long **)(unaff_x19 + 0xc0), plVar6 != (long *)0x0)) {
              fVar17 = *(float *)(lVar14 + 0x24);
              fVar15 = 1.0;
              if (-1.0 <= fVar17) {
                fVar15 = -fVar17;
              }
              fVar16 = 0.0;
              if (fVar17 <= 0.0) {
                fVar16 = fVar15;
              }
              (**(code **)(*plVar6 + 0x428))(fVar16,plVar6,*(undefined8 *)(*plVar6 + 0x430));
              if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                  (lVar14 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar14 != 0)) &&
                 (plVar6 = *(long **)(unaff_x19 + 200), plVar6 != (long *)0x0)) {
                fVar17 = *(float *)(lVar14 + 0x24);
                fVar15 = 1.0;
                if (fVar17 <= 1.0) {
                  fVar15 = fVar17;
                }
                fVar16 = 0.0;
                if (0.0 <= fVar17) {
                  fVar16 = fVar15;
                }
                (**(code **)(*plVar6 + 0x428))(fVar16,plVar6,*(undefined8 *)(*plVar6 + 0x430));
                lVar14 = *(long *)(unaff_x19 + 0xf8);
                if (((lVar14 != 0) && (*(char *)(lVar14 + 0x58) != '\0')) &&
                   (*(char *)(lVar14 + 0x21) == '\0')) {
                  plVar6 = *(long **)(unaff_x19 + 0x20);
                  if (plVar6 == (long *)0x0) goto LAB_0696eee8;
                  uVar4 = (**(code **)(*plVar6 + 0x5d8))(plVar6,*(undefined8 *)(*plVar6 + 0x5e0));
                  uVar4 = FUN_065c0764(uVar4,*(undefined8 *)PTR_DAT_084b71d0,0);
                  (**(code **)(*plVar6 + 0x5e8))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x5f0));
                }
                lVar14 = *(long *)(unaff_x19 + 0x100);
                if (((lVar14 != 0) && (*(int *)(lVar14 + 0x28) == 0)) &&
                   (*(char *)(lVar14 + 0x34) != '\0')) {
                  plVar6 = *(long **)(unaff_x19 + 0x20);
                  if (plVar6 == (long *)0x0) goto LAB_0696eee8;
                  uVar4 = (**(code **)(*plVar6 + 0x5d8))(plVar6,*(undefined8 *)(*plVar6 + 0x5e0));
                  uVar4 = FUN_065c0764(uVar4,*(undefined8 *)PTR_DAT_084b71f0,0);
                  (**(code **)(*plVar6 + 0x5e8))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x5f0));
                }
                puVar2 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x108) != 0) {
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x18), lVar14 == 0))
                  goto LAB_0696eee8;
                  plVar6 = *(long **)(*(long *)(unaff_x19 + 0x40) + 0xe0);
                  lVar7 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar14 + 0x18) == '\0') {
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar7 = *(long *)puVar2;
                    }
                    puVar9 = *(undefined4 **)(lVar7 + 0xb8);
                    puVar10 = puVar9 + 1;
                    puVar11 = puVar9 + 2;
                    puVar12 = puVar9 + 3;
                  }
                  else {
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar7 = *(long *)puVar2;
                    }
                    lVar14 = *(long *)(lVar7 + 0xb8);
                    puVar9 = (undefined4 *)(lVar14 + 0x10);
                    puVar10 = (undefined4 *)(lVar14 + 0x14);
                    puVar11 = (undefined4 *)(lVar14 + 0x18);
                    puVar12 = (undefined4 *)(lVar14 + 0x1c);
                  }
                  if (plVar6 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar6 + 0x2a8))
                            (*puVar9,*puVar10,*puVar11,*puVar12,plVar6,
                             *(undefined8 *)(*plVar6 + 0x2b0));
                }
                puVar2 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x110) != 0) {
                  if ((*(long *)(unaff_x19 + 0x48) == 0) ||
                     (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x110) + 0x18), lVar14 == 0))
                  goto LAB_0696eee8;
                  plVar6 = *(long **)(*(long *)(unaff_x19 + 0x48) + 0xe0);
                  lVar7 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar14 + 0x18) == '\0') {
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar7 = *(long *)puVar2;
                    }
                    puVar9 = *(undefined4 **)(lVar7 + 0xb8);
                    puVar10 = puVar9 + 1;
                    puVar11 = puVar9 + 2;
                    puVar12 = puVar9 + 3;
                  }
                  else {
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar7 = *(long *)puVar2;
                    }
                    lVar14 = *(long *)(lVar7 + 0xb8);
                    puVar9 = (undefined4 *)(lVar14 + 0x10);
                    puVar10 = (undefined4 *)(lVar14 + 0x14);
                    puVar11 = (undefined4 *)(lVar14 + 0x18);
                    puVar12 = (undefined4 *)(lVar14 + 0x1c);
                  }
                  if (plVar6 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar6 + 0x2a8))
                            (*puVar9,*puVar10,*puVar11,*puVar12,plVar6,
                             *(undefined8 *)(*plVar6 + 0x2b0));
                }
                puVar2 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x118) != 0) {
                  if ((*(long *)(unaff_x19 + 0x50) == 0) ||
                     (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x18), lVar14 == 0))
                  goto LAB_0696eee8;
                  plVar6 = *(long **)(*(long *)(unaff_x19 + 0x50) + 0xe0);
                  lVar7 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar14 + 0x18) == '\0') {
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar7 = *(long *)puVar2;
                    }
                    puVar9 = *(undefined4 **)(lVar7 + 0xb8);
                    puVar10 = puVar9 + 1;
                    puVar11 = puVar9 + 2;
                    puVar12 = puVar9 + 3;
                  }
                  else {
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar7 = *(long *)puVar2;
                    }
                    lVar14 = *(long *)(lVar7 + 0xb8);
                    puVar9 = (undefined4 *)(lVar14 + 0x10);
                    puVar10 = (undefined4 *)(lVar14 + 0x14);
                    puVar11 = (undefined4 *)(lVar14 + 0x18);
                    puVar12 = (undefined4 *)(lVar14 + 0x1c);
                  }
                  if (plVar6 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar6 + 0x2a8))
                            (*puVar9,*puVar10,*puVar11,*puVar12,plVar6,
                             *(undefined8 *)(*plVar6 + 0x2b0));
                }
                puVar2 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x120) != 0) {
                  if ((*(long *)(unaff_x19 + 0x58) == 0) ||
                     (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x18), lVar14 == 0))
                  goto LAB_0696eee8;
                  plVar6 = *(long **)(*(long *)(unaff_x19 + 0x58) + 0xe0);
                  lVar7 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar14 + 0x18) == '\0') {
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar7 = *(long *)puVar2;
                    }
                    puVar9 = *(undefined4 **)(lVar7 + 0xb8);
                    puVar10 = puVar9 + 1;
                    puVar11 = puVar9 + 2;
                    puVar12 = puVar9 + 3;
                  }
                  else {
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar7 = *(long *)puVar2;
                    }
                    lVar14 = *(long *)(lVar7 + 0xb8);
                    puVar9 = (undefined4 *)(lVar14 + 0x10);
                    puVar10 = (undefined4 *)(lVar14 + 0x14);
                    puVar11 = (undefined4 *)(lVar14 + 0x18);
                    puVar12 = (undefined4 *)(lVar14 + 0x1c);
                  }
                  if (plVar6 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar6 + 0x2a8))
                            (*puVar9,*puVar10,*puVar11,*puVar12,plVar6,
                             *(undefined8 *)(*plVar6 + 0x2b0));
                }
                puVar2 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x128) != 0) {
                  if ((*(long *)(unaff_x19 + 0x78) == 0) ||
                     (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x128) + 0x18), lVar14 == 0))
                  goto LAB_0696eee8;
                  plVar6 = *(long **)(*(long *)(unaff_x19 + 0x78) + 0xe0);
                  lVar7 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar14 + 0x18) == '\0') {
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar7 = *(long *)puVar2;
                    }
                    puVar9 = *(undefined4 **)(lVar7 + 0xb8);
                    puVar10 = puVar9 + 1;
                    puVar11 = puVar9 + 2;
                    puVar12 = puVar9 + 3;
                  }
                  else {
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar7 = *(long *)puVar2;
                    }
                    lVar14 = *(long *)(lVar7 + 0xb8);
                    puVar9 = (undefined4 *)(lVar14 + 0x10);
                    puVar10 = (undefined4 *)(lVar14 + 0x14);
                    puVar11 = (undefined4 *)(lVar14 + 0x18);
                    puVar12 = (undefined4 *)(lVar14 + 0x1c);
                  }
                  if (plVar6 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar6 + 0x2a8))
                            (*puVar9,*puVar10,*puVar11,*puVar12,plVar6,
                             *(undefined8 *)(*plVar6 + 0x2b0));
                }
                puVar2 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x130) != 0) {
                  if ((*(long *)(unaff_x19 + 0x70) == 0) ||
                     (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x130) + 0x18), lVar14 == 0))
                  goto LAB_0696eee8;
                  plVar6 = *(long **)(*(long *)(unaff_x19 + 0x70) + 0xe0);
                  lVar7 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar14 + 0x18) == '\0') {
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar7 = *(long *)puVar2;
                    }
                    puVar9 = *(undefined4 **)(lVar7 + 0xb8);
                    puVar10 = puVar9 + 1;
                    puVar11 = puVar9 + 2;
                    puVar12 = puVar9 + 3;
                  }
                  else {
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar7 = *(long *)puVar2;
                    }
                    lVar14 = *(long *)(lVar7 + 0xb8);
                    puVar9 = (undefined4 *)(lVar14 + 0x10);
                    puVar10 = (undefined4 *)(lVar14 + 0x14);
                    puVar11 = (undefined4 *)(lVar14 + 0x18);
                    puVar12 = (undefined4 *)(lVar14 + 0x1c);
                  }
                  if (plVar6 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar6 + 0x2a8))
                            (*puVar9,*puVar10,*puVar11,*puVar12,plVar6,
                             *(undefined8 *)(*plVar6 + 0x2b0));
                }
                uVar4 = *(undefined8 *)(unaff_x19 + 0xd8);
                if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar5 = FUN_07c9c218(uVar4,0,0);
                if ((uVar5 & 1) != 0) {
                  if ((((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0xe8), lVar14 == 0))
                      || (lVar14 = *(long *)(lVar14 + 0x40), lVar14 == 0)) ||
                     (lVar14 = *(long *)(lVar14 + 0x88), lVar14 == 0)) goto LAB_0696eee8;
                  plVar6 = *(long **)(unaff_x19 + 0xd8);
                  if (*(char *)(lVar14 + 0x10) == '\0') {
                    if (plVar6 == (long *)0x0) goto LAB_0696eee8;
                    (**(code **)(*plVar6 + 0x5e8))
                              (plVar6,*unaff_x24,*(undefined8 *)(*plVar6 + 0x5f0));
                    plVar6 = *(long **)(unaff_x19 + 0xe0);
                    if (plVar6 == (long *)0x0) goto LAB_0696eee8;
                    lVar14 = *plVar6;
                    uVar4 = *unaff_x24;
                  }
                  else {
                    if (plVar6 == (long *)0x0) goto LAB_0696eee8;
                    (**(code **)(*plVar6 + 0x5e8))
                              (plVar6,*(undefined8 *)PTR_DAT_084b71e0,
                               *(undefined8 *)(*plVar6 + 0x5f0));
                    if (((*(long *)(unaff_x19 + 0xe8) == 0) ||
                        (lVar14 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar14 == 0)) ||
                       ((lVar14 = *(long *)(lVar14 + 0x40), lVar14 == 0 ||
                        (lVar14 = *(long *)(lVar14 + 0x88), lVar14 == 0)))) goto LAB_0696eee8;
                    plVar6 = *(long **)(unaff_x19 + 0xe0);
                    in_stack_00000008._4_4_ = *(float *)(lVar14 + 0x14) * 100.0;
                    uVar4 = FUN_067638d0((long)&stack0x00000008 + 4,*(undefined8 *)PTR_DAT_084b71c8,
                                         0);
                    uVar4 = FUN_065c0764(uVar4,*(undefined8 *)PTR_DAT_084b71f8,0);
                    if (plVar6 == (long *)0x0) goto LAB_0696eee8;
                    lVar14 = *plVar6;
                  }
                  (**(code **)(lVar14 + 0x5e8))(plVar6,uVar4,*(undefined8 *)(lVar14 + 0x5f0));
                }
                if (*unaff_x20 != 0) {
                  lVar14 = FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7190);
                  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4(*unaff_x25);
                  }
                  uVar5 = FUN_07c9c218(lVar14,0,0);
                  if ((uVar5 & 1) == 0) {
LAB_0696eec0:
                    *plVar13 = *unaff_x20;
                    thunk_FUN_03afed3c(plVar13);
                    return;
                  }
                  if ((*(long *)(unaff_x19 + 0x60) != 0) && (lVar14 != 0)) {
                    plVar6 = *(long **)(*(long *)(unaff_x19 + 0x60) + 0xe0);
                    uVar5 = FUN_07c986c8(lVar14,0);
                    puVar2 = PTR_DAT_084b71b0;
                    lVar7 = *(long *)PTR_DAT_084b71b0;
                    if ((uVar5 & 1) == 0) {
                      if (*(int *)(lVar7 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                        lVar7 = *(long *)puVar2;
                      }
                      puVar9 = *(undefined4 **)(lVar7 + 0xb8);
                      puVar10 = puVar9 + 1;
                      puVar11 = puVar9 + 2;
                      puVar12 = puVar9 + 3;
                    }
                    else {
                      if (*(int *)(lVar7 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                        lVar7 = *(long *)puVar2;
                      }
                      lVar7 = *(long *)(lVar7 + 0xb8);
                      puVar9 = (undefined4 *)(lVar7 + 0x10);
                      puVar10 = (undefined4 *)(lVar7 + 0x14);
                      puVar11 = (undefined4 *)(lVar7 + 0x18);
                      puVar12 = (undefined4 *)(lVar7 + 0x1c);
                    }
                    if (plVar6 != (long *)0x0) {
                      (**(code **)(*plVar6 + 0x2a8))
                                (*puVar9,*puVar10,*puVar11,*puVar12,plVar6,
                                 *(undefined8 *)(*plVar6 + 0x2b0));
                      plVar6 = *(long **)(unaff_x19 + 0xd0);
                      if (plVar6 != (long *)0x0) {
                        (**(code **)(*plVar6 + 0x428))
                                  (*(undefined4 *)(lVar14 + 0x98),plVar6,
                                   *(undefined8 *)(*plVar6 + 0x430));
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


