/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingCalibratedOrigin
ENTRY_POINT: 0696df34
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingCalibratedOrigin(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long unaff_x19;
  long *unaff_x20;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *unaff_x24;
  long *unaff_x25;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_00000008;
  
  thunk_FUN_03ae8be4();
  uVar4 = FUN_07c9e200();
  if ((uVar4 & 1) != 0) {
    return;
  }
  plVar12 = (long *)(unaff_x19 + 0xf0);
  lVar13 = *plVar12;
  uVar14 = *(undefined8 *)(unaff_x19 + 0xe8);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar4 = FUN_07c9c218(uVar14,lVar13,0);
  if ((uVar4 & 1) != 0) {
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar5 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b71a8);
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
       plVar5 == (long *)0x0)) {
      plVar5 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0xf8) = 0;
    }
    else {
      lVar13 = *(long *)PTR_DAT_084b6920;
      bVar1 = *(byte *)(lVar13 + 0x130);
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar5;
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
          plVar7 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0xf8) = plVar7;
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
        plVar5 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0xf8,plVar5);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar5 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b71a0);
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
       plVar5 == (long *)0x0)) {
      plVar5 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x100) = 0;
    }
    else {
      lVar13 = *(long *)PTR_DAT_084b6a48;
      bVar1 = *(byte *)(lVar13 + 0x130);
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar5;
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
          plVar7 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x100) = plVar7;
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
        plVar5 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x100,plVar5);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar5 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b6d90);
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
       plVar5 == (long *)0x0)) {
      plVar5 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x108) = 0;
    }
    else {
      lVar13 = *(long *)PTR_DAT_084b6ad0;
      bVar1 = *(byte *)(lVar13 + 0x130);
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar5;
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
          plVar7 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x108) = plVar7;
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
        plVar5 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x108,plVar5);
    puVar2 = PTR_DAT_084b6d98;
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar5 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b6d98);
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
       plVar5 == (long *)0x0)) {
      plVar5 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x110) = 0;
    }
    else {
      lVar13 = *(long *)PTR_DAT_084b6948;
      bVar1 = *(byte *)(lVar13 + 0x130);
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar5;
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
          plVar7 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x110) = plVar7;
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
        plVar5 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x110,plVar5);
    puVar3 = PTR_DAT_084b7198;
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar5 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7198);
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
       plVar5 == (long *)0x0)) {
      plVar5 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x118) = 0;
    }
    else {
      lVar13 = *(long *)PTR_DAT_084b6a50;
      bVar1 = *(byte *)(lVar13 + 0x130);
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar5;
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
          plVar7 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x118) = plVar7;
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
        plVar5 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x118,plVar5);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar5 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7178);
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
       plVar5 == (long *)0x0)) {
      plVar5 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x120) = 0;
    }
    else {
      lVar13 = *(long *)PTR_DAT_084b6aa8;
      bVar1 = *(byte *)(lVar13 + 0x130);
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar5;
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
          plVar7 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x120) = plVar7;
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
        plVar5 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x120,plVar5);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar5 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)puVar2);
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
       plVar5 == (long *)0x0)) {
      plVar5 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x110) = 0;
    }
    else {
      lVar13 = *(long *)PTR_DAT_084b6948;
      bVar1 = *(byte *)(lVar13 + 0x130);
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar5;
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
          plVar7 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x110) = plVar7;
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
        plVar5 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x110,plVar5);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar5 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)puVar3);
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
       plVar5 == (long *)0x0)) {
      plVar5 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x118) = 0;
    }
    else {
      lVar13 = *(long *)PTR_DAT_084b6a50;
      bVar1 = *(byte *)(lVar13 + 0x130);
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar5;
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
          plVar7 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x118) = plVar7;
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
        plVar5 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x118,plVar5);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar5 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7188);
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
       plVar5 == (long *)0x0)) {
      plVar5 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x130) = 0;
    }
    else {
      lVar13 = *(long *)PTR_DAT_084b6a68;
      bVar1 = *(byte *)(lVar13 + 0x130);
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar5;
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
          plVar7 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x130) = plVar7;
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
        plVar5 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x130,plVar5);
    if (*unaff_x20 == 0) goto LAB_0696eee8;
    plVar5 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7180);
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
       plVar5 == (long *)0x0)) {
      plVar5 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x128) = 0;
    }
    else {
      lVar13 = *(long *)PTR_DAT_084b6a70;
      bVar1 = *(byte *)(lVar13 + 0x130);
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar5;
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
          plVar7 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x128) = plVar7;
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
        plVar5 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x128,plVar5);
  }
  lVar13 = *unaff_x20;
  if (lVar13 != 0) {
    if (*(char *)(lVar13 + 0x168) == '\0') {
      return;
    }
    if ((*(long *)(lVar13 + 0xd8) != 0) &&
       (plVar5 = *(long **)(unaff_x19 + 0xa0), plVar5 != (long *)0x0)) {
      fVar17 = *(float *)(*(long *)(lVar13 + 0xd8) + 0x34);
      fVar15 = 1.0;
      if (fVar17 <= 1.0) {
        fVar15 = fVar17;
      }
      fVar16 = 0.0;
      if (0.0 <= fVar17) {
        fVar16 = fVar15;
      }
      (**(code **)(*plVar5 + 0x428))(fVar16,plVar5,*(undefined8 *)(*plVar5 + 0x430));
      if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
          (lVar13 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar13 != 0)) &&
         (plVar5 = *(long **)(unaff_x19 + 0xa8), plVar5 != (long *)0x0)) {
        fVar17 = *(float *)(lVar13 + 0x44);
        fVar15 = 1.0;
        if (fVar17 <= 1.0) {
          fVar15 = fVar17;
        }
        fVar16 = 0.0;
        if (0.0 <= fVar17) {
          fVar16 = fVar15;
        }
        (**(code **)(*plVar5 + 0x428))(fVar16,plVar5,*(undefined8 *)(*plVar5 + 0x430));
        if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
            (lVar13 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar13 != 0)) &&
           ((lVar13 = *(long *)(lVar13 + 0x30), lVar13 != 0 &&
            (plVar5 = *(long **)(unaff_x19 + 0xb0), plVar5 != (long *)0x0)))) {
          fVar17 = *(float *)(lVar13 + 0x78);
          fVar15 = 1.0;
          if (fVar17 <= 1.0) {
            fVar15 = fVar17;
          }
          fVar16 = 0.0;
          if (0.0 <= fVar17) {
            fVar16 = fVar15;
          }
          (**(code **)(*plVar5 + 0x428))(fVar16,plVar5,*(undefined8 *)(*plVar5 + 0x430));
          if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
              (lVar13 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar13 != 0)) &&
             (plVar5 = *(long **)(unaff_x19 + 0xb8), plVar5 != (long *)0x0)) {
            fVar17 = *(float *)(lVar13 + 0x54);
            fVar15 = 1.0;
            if (fVar17 <= 1.0) {
              fVar15 = fVar17;
            }
            fVar16 = 0.0;
            if (0.0 <= fVar17) {
              fVar16 = fVar15;
            }
            (**(code **)(*plVar5 + 0x428))(fVar16,plVar5,*(undefined8 *)(*plVar5 + 0x430));
            if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                (lVar13 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar13 != 0)) &&
               (plVar5 = *(long **)(unaff_x19 + 0xc0), plVar5 != (long *)0x0)) {
              fVar17 = *(float *)(lVar13 + 0x24);
              fVar15 = 1.0;
              if (-1.0 <= fVar17) {
                fVar15 = -fVar17;
              }
              fVar16 = 0.0;
              if (fVar17 <= 0.0) {
                fVar16 = fVar15;
              }
              (**(code **)(*plVar5 + 0x428))(fVar16,plVar5,*(undefined8 *)(*plVar5 + 0x430));
              if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                  (lVar13 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar13 != 0)) &&
                 (plVar5 = *(long **)(unaff_x19 + 200), plVar5 != (long *)0x0)) {
                fVar17 = *(float *)(lVar13 + 0x24);
                fVar15 = 1.0;
                if (fVar17 <= 1.0) {
                  fVar15 = fVar17;
                }
                fVar16 = 0.0;
                if (0.0 <= fVar17) {
                  fVar16 = fVar15;
                }
                (**(code **)(*plVar5 + 0x428))(fVar16,plVar5,*(undefined8 *)(*plVar5 + 0x430));
                lVar13 = *(long *)(unaff_x19 + 0xf8);
                if (((lVar13 != 0) && (*(char *)(lVar13 + 0x58) != '\0')) &&
                   (*(char *)(lVar13 + 0x21) == '\0')) {
                  plVar5 = *(long **)(unaff_x19 + 0x20);
                  if (plVar5 == (long *)0x0) goto LAB_0696eee8;
                  uVar14 = (**(code **)(*plVar5 + 0x5d8))(plVar5,*(undefined8 *)(*plVar5 + 0x5e0));
                  uVar14 = FUN_065c0764(uVar14,*(undefined8 *)PTR_DAT_084b71d0,0);
                  (**(code **)(*plVar5 + 0x5e8))(plVar5,uVar14,*(undefined8 *)(*plVar5 + 0x5f0));
                }
                lVar13 = *(long *)(unaff_x19 + 0x100);
                if (((lVar13 != 0) && (*(int *)(lVar13 + 0x28) == 0)) &&
                   (*(char *)(lVar13 + 0x34) != '\0')) {
                  plVar5 = *(long **)(unaff_x19 + 0x20);
                  if (plVar5 == (long *)0x0) goto LAB_0696eee8;
                  uVar14 = (**(code **)(*plVar5 + 0x5d8))(plVar5,*(undefined8 *)(*plVar5 + 0x5e0));
                  uVar14 = FUN_065c0764(uVar14,*(undefined8 *)PTR_DAT_084b71f0,0);
                  (**(code **)(*plVar5 + 0x5e8))(plVar5,uVar14,*(undefined8 *)(*plVar5 + 0x5f0));
                }
                puVar2 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x108) != 0) {
                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                     (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x18), lVar13 == 0))
                  goto LAB_0696eee8;
                  plVar5 = *(long **)(*(long *)(unaff_x19 + 0x40) + 0xe0);
                  lVar6 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar13 + 0x18) == '\0') {
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar6 = *(long *)puVar2;
                    }
                    puVar8 = *(undefined4 **)(lVar6 + 0xb8);
                    puVar9 = puVar8 + 1;
                    puVar10 = puVar8 + 2;
                    puVar11 = puVar8 + 3;
                  }
                  else {
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar6 = *(long *)puVar2;
                    }
                    lVar13 = *(long *)(lVar6 + 0xb8);
                    puVar8 = (undefined4 *)(lVar13 + 0x10);
                    puVar9 = (undefined4 *)(lVar13 + 0x14);
                    puVar10 = (undefined4 *)(lVar13 + 0x18);
                    puVar11 = (undefined4 *)(lVar13 + 0x1c);
                  }
                  if (plVar5 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar5 + 0x2a8))
                            (*puVar8,*puVar9,*puVar10,*puVar11,plVar5,
                             *(undefined8 *)(*plVar5 + 0x2b0));
                }
                puVar2 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x110) != 0) {
                  if ((*(long *)(unaff_x19 + 0x48) == 0) ||
                     (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x110) + 0x18), lVar13 == 0))
                  goto LAB_0696eee8;
                  plVar5 = *(long **)(*(long *)(unaff_x19 + 0x48) + 0xe0);
                  lVar6 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar13 + 0x18) == '\0') {
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar6 = *(long *)puVar2;
                    }
                    puVar8 = *(undefined4 **)(lVar6 + 0xb8);
                    puVar9 = puVar8 + 1;
                    puVar10 = puVar8 + 2;
                    puVar11 = puVar8 + 3;
                  }
                  else {
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar6 = *(long *)puVar2;
                    }
                    lVar13 = *(long *)(lVar6 + 0xb8);
                    puVar8 = (undefined4 *)(lVar13 + 0x10);
                    puVar9 = (undefined4 *)(lVar13 + 0x14);
                    puVar10 = (undefined4 *)(lVar13 + 0x18);
                    puVar11 = (undefined4 *)(lVar13 + 0x1c);
                  }
                  if (plVar5 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar5 + 0x2a8))
                            (*puVar8,*puVar9,*puVar10,*puVar11,plVar5,
                             *(undefined8 *)(*plVar5 + 0x2b0));
                }
                puVar2 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x118) != 0) {
                  if ((*(long *)(unaff_x19 + 0x50) == 0) ||
                     (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x18), lVar13 == 0))
                  goto LAB_0696eee8;
                  plVar5 = *(long **)(*(long *)(unaff_x19 + 0x50) + 0xe0);
                  lVar6 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar13 + 0x18) == '\0') {
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar6 = *(long *)puVar2;
                    }
                    puVar8 = *(undefined4 **)(lVar6 + 0xb8);
                    puVar9 = puVar8 + 1;
                    puVar10 = puVar8 + 2;
                    puVar11 = puVar8 + 3;
                  }
                  else {
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar6 = *(long *)puVar2;
                    }
                    lVar13 = *(long *)(lVar6 + 0xb8);
                    puVar8 = (undefined4 *)(lVar13 + 0x10);
                    puVar9 = (undefined4 *)(lVar13 + 0x14);
                    puVar10 = (undefined4 *)(lVar13 + 0x18);
                    puVar11 = (undefined4 *)(lVar13 + 0x1c);
                  }
                  if (plVar5 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar5 + 0x2a8))
                            (*puVar8,*puVar9,*puVar10,*puVar11,plVar5,
                             *(undefined8 *)(*plVar5 + 0x2b0));
                }
                puVar2 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x120) != 0) {
                  if ((*(long *)(unaff_x19 + 0x58) == 0) ||
                     (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x18), lVar13 == 0))
                  goto LAB_0696eee8;
                  plVar5 = *(long **)(*(long *)(unaff_x19 + 0x58) + 0xe0);
                  lVar6 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar13 + 0x18) == '\0') {
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar6 = *(long *)puVar2;
                    }
                    puVar8 = *(undefined4 **)(lVar6 + 0xb8);
                    puVar9 = puVar8 + 1;
                    puVar10 = puVar8 + 2;
                    puVar11 = puVar8 + 3;
                  }
                  else {
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar6 = *(long *)puVar2;
                    }
                    lVar13 = *(long *)(lVar6 + 0xb8);
                    puVar8 = (undefined4 *)(lVar13 + 0x10);
                    puVar9 = (undefined4 *)(lVar13 + 0x14);
                    puVar10 = (undefined4 *)(lVar13 + 0x18);
                    puVar11 = (undefined4 *)(lVar13 + 0x1c);
                  }
                  if (plVar5 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar5 + 0x2a8))
                            (*puVar8,*puVar9,*puVar10,*puVar11,plVar5,
                             *(undefined8 *)(*plVar5 + 0x2b0));
                }
                puVar2 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x128) != 0) {
                  if ((*(long *)(unaff_x19 + 0x78) == 0) ||
                     (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x128) + 0x18), lVar13 == 0))
                  goto LAB_0696eee8;
                  plVar5 = *(long **)(*(long *)(unaff_x19 + 0x78) + 0xe0);
                  lVar6 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar13 + 0x18) == '\0') {
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar6 = *(long *)puVar2;
                    }
                    puVar8 = *(undefined4 **)(lVar6 + 0xb8);
                    puVar9 = puVar8 + 1;
                    puVar10 = puVar8 + 2;
                    puVar11 = puVar8 + 3;
                  }
                  else {
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar6 = *(long *)puVar2;
                    }
                    lVar13 = *(long *)(lVar6 + 0xb8);
                    puVar8 = (undefined4 *)(lVar13 + 0x10);
                    puVar9 = (undefined4 *)(lVar13 + 0x14);
                    puVar10 = (undefined4 *)(lVar13 + 0x18);
                    puVar11 = (undefined4 *)(lVar13 + 0x1c);
                  }
                  if (plVar5 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar5 + 0x2a8))
                            (*puVar8,*puVar9,*puVar10,*puVar11,plVar5,
                             *(undefined8 *)(*plVar5 + 0x2b0));
                }
                puVar2 = PTR_DAT_084b71b0;
                if (*(long *)(unaff_x19 + 0x130) != 0) {
                  if ((*(long *)(unaff_x19 + 0x70) == 0) ||
                     (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x130) + 0x18), lVar13 == 0))
                  goto LAB_0696eee8;
                  plVar5 = *(long **)(*(long *)(unaff_x19 + 0x70) + 0xe0);
                  lVar6 = *(long *)PTR_DAT_084b71b0;
                  if (*(char *)(lVar13 + 0x18) == '\0') {
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar6 = *(long *)puVar2;
                    }
                    puVar8 = *(undefined4 **)(lVar6 + 0xb8);
                    puVar9 = puVar8 + 1;
                    puVar10 = puVar8 + 2;
                    puVar11 = puVar8 + 3;
                  }
                  else {
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar6 = *(long *)puVar2;
                    }
                    lVar13 = *(long *)(lVar6 + 0xb8);
                    puVar8 = (undefined4 *)(lVar13 + 0x10);
                    puVar9 = (undefined4 *)(lVar13 + 0x14);
                    puVar10 = (undefined4 *)(lVar13 + 0x18);
                    puVar11 = (undefined4 *)(lVar13 + 0x1c);
                  }
                  if (plVar5 == (long *)0x0) goto LAB_0696eee8;
                  (**(code **)(*plVar5 + 0x2a8))
                            (*puVar8,*puVar9,*puVar10,*puVar11,plVar5,
                             *(undefined8 *)(*plVar5 + 0x2b0));
                }
                uVar14 = *(undefined8 *)(unaff_x19 + 0xd8);
                if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar4 = FUN_07c9c218(uVar14,0,0);
                if ((uVar4 & 1) != 0) {
                  if ((((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0xe8), lVar13 == 0))
                      || (lVar13 = *(long *)(lVar13 + 0x40), lVar13 == 0)) ||
                     (lVar13 = *(long *)(lVar13 + 0x88), lVar13 == 0)) goto LAB_0696eee8;
                  plVar5 = *(long **)(unaff_x19 + 0xd8);
                  if (*(char *)(lVar13 + 0x10) == '\0') {
                    if (plVar5 == (long *)0x0) goto LAB_0696eee8;
                    (**(code **)(*plVar5 + 0x5e8))
                              (plVar5,*unaff_x24,*(undefined8 *)(*plVar5 + 0x5f0));
                    plVar5 = *(long **)(unaff_x19 + 0xe0);
                    if (plVar5 == (long *)0x0) goto LAB_0696eee8;
                    lVar13 = *plVar5;
                    uVar14 = *unaff_x24;
                  }
                  else {
                    if (plVar5 == (long *)0x0) goto LAB_0696eee8;
                    (**(code **)(*plVar5 + 0x5e8))
                              (plVar5,*(undefined8 *)PTR_DAT_084b71e0,
                               *(undefined8 *)(*plVar5 + 0x5f0));
                    if (((*(long *)(unaff_x19 + 0xe8) == 0) ||
                        (lVar13 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar13 == 0)) ||
                       ((lVar13 = *(long *)(lVar13 + 0x40), lVar13 == 0 ||
                        (lVar13 = *(long *)(lVar13 + 0x88), lVar13 == 0)))) goto LAB_0696eee8;
                    plVar5 = *(long **)(unaff_x19 + 0xe0);
                    in_stack_00000008._4_4_ = *(float *)(lVar13 + 0x14) * 100.0;
                    uVar14 = FUN_067638d0((long)&stack0x00000008 + 4,*(undefined8 *)PTR_DAT_084b71c8
                                          ,0);
                    uVar14 = FUN_065c0764(uVar14,*(undefined8 *)PTR_DAT_084b71f8,0);
                    if (plVar5 == (long *)0x0) goto LAB_0696eee8;
                    lVar13 = *plVar5;
                  }
                  (**(code **)(lVar13 + 0x5e8))(plVar5,uVar14,*(undefined8 *)(lVar13 + 0x5f0));
                }
                if (*unaff_x20 != 0) {
                  lVar13 = FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7190);
                  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4(*unaff_x25);
                  }
                  uVar4 = FUN_07c9c218(lVar13,0,0);
                  if ((uVar4 & 1) == 0) {
LAB_0696eec0:
                    *plVar12 = *unaff_x20;
                    thunk_FUN_03afed3c(plVar12);
                    return;
                  }
                  if ((*(long *)(unaff_x19 + 0x60) != 0) && (lVar13 != 0)) {
                    plVar5 = *(long **)(*(long *)(unaff_x19 + 0x60) + 0xe0);
                    uVar4 = FUN_07c986c8(lVar13,0);
                    puVar2 = PTR_DAT_084b71b0;
                    lVar6 = *(long *)PTR_DAT_084b71b0;
                    if ((uVar4 & 1) == 0) {
                      if (*(int *)(lVar6 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                        lVar6 = *(long *)puVar2;
                      }
                      puVar8 = *(undefined4 **)(lVar6 + 0xb8);
                      puVar9 = puVar8 + 1;
                      puVar10 = puVar8 + 2;
                      puVar11 = puVar8 + 3;
                    }
                    else {
                      if (*(int *)(lVar6 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                        lVar6 = *(long *)puVar2;
                      }
                      lVar6 = *(long *)(lVar6 + 0xb8);
                      puVar8 = (undefined4 *)(lVar6 + 0x10);
                      puVar9 = (undefined4 *)(lVar6 + 0x14);
                      puVar10 = (undefined4 *)(lVar6 + 0x18);
                      puVar11 = (undefined4 *)(lVar6 + 0x1c);
                    }
                    if (plVar5 != (long *)0x0) {
                      (**(code **)(*plVar5 + 0x2a8))
                                (*puVar8,*puVar9,*puVar10,*puVar11,plVar5,
                                 *(undefined8 *)(*plVar5 + 0x2b0));
                      plVar5 = *(long **)(unaff_x19 + 0xd0);
                      if (plVar5 != (long *)0x0) {
                        (**(code **)(*plVar5 + 0x428))
                                  (*(undefined4 *)(lVar13 + 0x98),plVar5,
                                   *(undefined8 *)(*plVar5 + 0x430));
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


