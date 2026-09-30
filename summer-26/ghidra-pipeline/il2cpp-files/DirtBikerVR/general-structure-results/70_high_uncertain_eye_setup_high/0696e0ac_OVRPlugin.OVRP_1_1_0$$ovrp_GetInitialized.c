/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetInitialized
ENTRY_POINT: 0696e0ac
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


void OVRPlugin_OVRP_1_1_0__ovrp_GetInitialized(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 *puVar9;
  long in_x9;
  long lVar10;
  undefined4 *puVar11;
  long in_x10;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x24;
  long *unaff_x25;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 0696e0b0 to 06a6e0bb has its CatchHandler @ 0696dc34 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0696e0a8 with catch @ 0696e0b8
                        */
  if ((uint)*(byte *)(*param_1 + 0x130) < (uint)in_x10) {
    param_1 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*param_1 + 200) + in_x10 * 8 + -8) != in_x9) {
    param_1 = (long *)0x0;
  }
  thunk_FUN_03afed3c(unaff_x19 + 0x100,param_1);
  if (*unaff_x20 != 0) {
    plVar4 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b6d90);
    if ((plVar4 == (long *)0x0) ||
       (plVar4 = (long *)(**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180)),
       plVar4 == (long *)0x0)) {
      plVar4 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x108) = 0;
    }
    else {
      lVar10 = *(long *)PTR_DAT_084b6ad0;
      bVar1 = *(byte *)(lVar10 + 0x130);
      if (*(byte *)(*plVar4 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = plVar4;
        if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x108) = plVar8;
      if (*(byte *)(*plVar4 + 0x130) < bVar1) {
        plVar4 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
        plVar4 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x108,plVar4);
    puVar2 = PTR_DAT_084b6d98;
    if (*unaff_x20 != 0) {
      plVar4 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b6d98);
      if ((plVar4 == (long *)0x0) ||
         (plVar4 = (long *)(**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180)),
         plVar4 == (long *)0x0)) {
        plVar4 = (long *)0x0;
        *(undefined8 *)(unaff_x19 + 0x110) = 0;
      }
      else {
        lVar10 = *(long *)PTR_DAT_084b6948;
        bVar1 = *(byte *)(lVar10 + 0x130);
        if (*(byte *)(*plVar4 + 0x130) < bVar1) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = plVar4;
          if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
            plVar8 = (long *)0x0;
          }
        }
        *(long **)(unaff_x19 + 0x110) = plVar8;
        if (*(byte *)(*plVar4 + 0x130) < bVar1) {
          plVar4 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
          plVar4 = (long *)0x0;
        }
      }
      thunk_FUN_03afed3c(unaff_x19 + 0x110,plVar4);
      puVar3 = PTR_DAT_084b7198;
      if (*unaff_x20 != 0) {
        plVar4 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7198);
        if ((plVar4 == (long *)0x0) ||
           (plVar4 = (long *)(**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180))
           , plVar4 == (long *)0x0)) {
          plVar4 = (long *)0x0;
          *(undefined8 *)(unaff_x19 + 0x118) = 0;
        }
        else {
          lVar10 = *(long *)PTR_DAT_084b6a50;
          bVar1 = *(byte *)(lVar10 + 0x130);
          if (*(byte *)(*plVar4 + 0x130) < bVar1) {
            plVar8 = (long *)0x0;
          }
          else {
            plVar8 = plVar4;
            if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
              plVar8 = (long *)0x0;
            }
          }
          *(long **)(unaff_x19 + 0x118) = plVar8;
          if (*(byte *)(*plVar4 + 0x130) < bVar1) {
            plVar4 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
            plVar4 = (long *)0x0;
          }
        }
        thunk_FUN_03afed3c(unaff_x19 + 0x118,plVar4);
        if (*unaff_x20 != 0) {
          plVar4 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7178);
          if ((plVar4 == (long *)0x0) ||
             (plVar4 = (long *)(**(code **)(*plVar4 + 0x178))
                                         (plVar4,*(undefined8 *)(*plVar4 + 0x180)),
             plVar4 == (long *)0x0)) {
            plVar4 = (long *)0x0;
            *(undefined8 *)(unaff_x19 + 0x120) = 0;
          }
          else {
            lVar10 = *(long *)PTR_DAT_084b6aa8;
            bVar1 = *(byte *)(lVar10 + 0x130);
            if (*(byte *)(*plVar4 + 0x130) < bVar1) {
              plVar8 = (long *)0x0;
            }
            else {
              plVar8 = plVar4;
              if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
                plVar8 = (long *)0x0;
              }
            }
            *(long **)(unaff_x19 + 0x120) = plVar8;
            if (*(byte *)(*plVar4 + 0x130) < bVar1) {
              plVar4 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
              plVar4 = (long *)0x0;
            }
          }
          thunk_FUN_03afed3c(unaff_x19 + 0x120,plVar4);
          if (*unaff_x20 != 0) {
            plVar4 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)puVar2);
            if ((plVar4 == (long *)0x0) ||
               (plVar4 = (long *)(**(code **)(*plVar4 + 0x178))
                                           (plVar4,*(undefined8 *)(*plVar4 + 0x180)),
               plVar4 == (long *)0x0)) {
              plVar4 = (long *)0x0;
              *(undefined8 *)(unaff_x19 + 0x110) = 0;
            }
            else {
              lVar10 = *(long *)PTR_DAT_084b6948;
              bVar1 = *(byte *)(lVar10 + 0x130);
              if (*(byte *)(*plVar4 + 0x130) < bVar1) {
                plVar8 = (long *)0x0;
              }
              else {
                plVar8 = plVar4;
                if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
                  plVar8 = (long *)0x0;
                }
              }
              *(long **)(unaff_x19 + 0x110) = plVar8;
              if (*(byte *)(*plVar4 + 0x130) < bVar1) {
                plVar4 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
                plVar4 = (long *)0x0;
              }
            }
            thunk_FUN_03afed3c(unaff_x19 + 0x110,plVar4);
            if (*unaff_x20 != 0) {
              plVar4 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)puVar3);
              if ((plVar4 == (long *)0x0) ||
                 (plVar4 = (long *)(**(code **)(*plVar4 + 0x178))
                                             (plVar4,*(undefined8 *)(*plVar4 + 0x180)),
                 plVar4 == (long *)0x0)) {
                plVar4 = (long *)0x0;
                *(undefined8 *)(unaff_x19 + 0x118) = 0;
              }
              else {
                lVar10 = *(long *)PTR_DAT_084b6a50;
                bVar1 = *(byte *)(lVar10 + 0x130);
                if (*(byte *)(*plVar4 + 0x130) < bVar1) {
                  plVar8 = (long *)0x0;
                }
                else {
                  plVar8 = plVar4;
                  if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
                    plVar8 = (long *)0x0;
                  }
                }
                *(long **)(unaff_x19 + 0x118) = plVar8;
                if (*(byte *)(*plVar4 + 0x130) < bVar1) {
                  plVar4 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
                  plVar4 = (long *)0x0;
                }
              }
              thunk_FUN_03afed3c(unaff_x19 + 0x118,plVar4);
              if (*unaff_x20 != 0) {
                plVar4 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7188);
                if ((plVar4 == (long *)0x0) ||
                   (plVar4 = (long *)(**(code **)(*plVar4 + 0x178))
                                               (plVar4,*(undefined8 *)(*plVar4 + 0x180)),
                   plVar4 == (long *)0x0)) {
                  plVar4 = (long *)0x0;
                  *(undefined8 *)(unaff_x19 + 0x130) = 0;
                }
                else {
                  lVar10 = *(long *)PTR_DAT_084b6a68;
                  bVar1 = *(byte *)(lVar10 + 0x130);
                  if (*(byte *)(*plVar4 + 0x130) < bVar1) {
                    plVar8 = (long *)0x0;
                  }
                  else {
                    plVar8 = plVar4;
                    if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
                      plVar8 = (long *)0x0;
                    }
                  }
                  *(long **)(unaff_x19 + 0x130) = plVar8;
                  if (*(byte *)(*plVar4 + 0x130) < bVar1) {
                    plVar4 = (long *)0x0;
                  }
                  else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
                    plVar4 = (long *)0x0;
                  }
                }
                thunk_FUN_03afed3c(unaff_x19 + 0x130,plVar4);
                if (*unaff_x20 != 0) {
                  plVar4 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7180);
                  if ((plVar4 == (long *)0x0) ||
                     (plVar4 = (long *)(**(code **)(*plVar4 + 0x178))
                                                 (plVar4,*(undefined8 *)(*plVar4 + 0x180)),
                     plVar4 == (long *)0x0)) {
                    plVar4 = (long *)0x0;
                    *(undefined8 *)(unaff_x19 + 0x128) = 0;
                  }
                  else {
                    lVar10 = *(long *)PTR_DAT_084b6a70;
                    bVar1 = *(byte *)(lVar10 + 0x130);
                    if (*(byte *)(*plVar4 + 0x130) < bVar1) {
                      plVar8 = (long *)0x0;
                    }
                    else {
                      plVar8 = plVar4;
                      if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
                        plVar8 = (long *)0x0;
                      }
                    }
                    *(long **)(unaff_x19 + 0x128) = plVar8;
                    if (*(byte *)(*plVar4 + 0x130) < bVar1) {
                      plVar4 = (long *)0x0;
                    }
                    else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar10)
                    {
                      plVar4 = (long *)0x0;
                    }
                  }
                  thunk_FUN_03afed3c(unaff_x19 + 0x128,plVar4);
                  lVar10 = *unaff_x20;
                  if (lVar10 != 0) {
                    if (*(char *)(lVar10 + 0x168) == '\0') {
                      return;
                    }
                    if ((*(long *)(lVar10 + 0xd8) != 0) &&
                       (plVar4 = *(long **)(unaff_x19 + 0xa0), plVar4 != (long *)0x0)) {
                      fVar16 = *(float *)(*(long *)(lVar10 + 0xd8) + 0x34);
                      fVar14 = 1.0;
                      if (fVar16 <= 1.0) {
                        fVar14 = fVar16;
                      }
                      fVar15 = 0.0;
                      if (0.0 <= fVar16) {
                        fVar15 = fVar14;
                      }
                      (**(code **)(*plVar4 + 0x428))(fVar15,plVar4,*(undefined8 *)(*plVar4 + 0x430))
                      ;
                      if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                          (lVar10 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar10 != 0)) &&
                         (plVar4 = *(long **)(unaff_x19 + 0xa8), plVar4 != (long *)0x0)) {
                        fVar16 = *(float *)(lVar10 + 0x44);
                        fVar14 = 1.0;
                        if (fVar16 <= 1.0) {
                          fVar14 = fVar16;
                        }
                        fVar15 = 0.0;
                        if (0.0 <= fVar16) {
                          fVar15 = fVar14;
                        }
                        (**(code **)(*plVar4 + 0x428))
                                  (fVar15,plVar4,*(undefined8 *)(*plVar4 + 0x430));
                        if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                            (lVar10 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar10 != 0))
                           && ((lVar10 = *(long *)(lVar10 + 0x30), lVar10 != 0 &&
                               (plVar4 = *(long **)(unaff_x19 + 0xb0), plVar4 != (long *)0x0)))) {
                          fVar16 = *(float *)(lVar10 + 0x78);
                          fVar14 = 1.0;
                          if (fVar16 <= 1.0) {
                            fVar14 = fVar16;
                          }
                          fVar15 = 0.0;
                          if (0.0 <= fVar16) {
                            fVar15 = fVar14;
                          }
                          (**(code **)(*plVar4 + 0x428))
                                    (fVar15,plVar4,*(undefined8 *)(*plVar4 + 0x430));
                          if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                              (lVar10 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar10 != 0))
                             && (plVar4 = *(long **)(unaff_x19 + 0xb8), plVar4 != (long *)0x0)) {
                            fVar16 = *(float *)(lVar10 + 0x54);
                            fVar14 = 1.0;
                            if (fVar16 <= 1.0) {
                              fVar14 = fVar16;
                            }
                            fVar15 = 0.0;
                            if (0.0 <= fVar16) {
                              fVar15 = fVar14;
                            }
                            (**(code **)(*plVar4 + 0x428))
                                      (fVar15,plVar4,*(undefined8 *)(*plVar4 + 0x430));
                            if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                                (lVar10 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar10 != 0
                                )) && (plVar4 = *(long **)(unaff_x19 + 0xc0), plVar4 != (long *)0x0)
                               ) {
                              fVar16 = *(float *)(lVar10 + 0x24);
                              fVar14 = 1.0;
                              if (-1.0 <= fVar16) {
                                fVar14 = -fVar16;
                              }
                              fVar15 = 0.0;
                              if (fVar16 <= 0.0) {
                                fVar15 = fVar14;
                              }
                              (**(code **)(*plVar4 + 0x428))
                                        (fVar15,plVar4,*(undefined8 *)(*plVar4 + 0x430));
                              if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                                  (lVar10 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8),
                                  lVar10 != 0)) &&
                                 (plVar4 = *(long **)(unaff_x19 + 200), plVar4 != (long *)0x0)) {
                                fVar16 = *(float *)(lVar10 + 0x24);
                                fVar14 = 1.0;
                                if (fVar16 <= 1.0) {
                                  fVar14 = fVar16;
                                }
                                fVar15 = 0.0;
                                if (0.0 <= fVar16) {
                                  fVar15 = fVar14;
                                }
                                (**(code **)(*plVar4 + 0x428))
                                          (fVar15,plVar4,*(undefined8 *)(*plVar4 + 0x430));
                                lVar10 = *(long *)(unaff_x19 + 0xf8);
                                if (((lVar10 != 0) && (*(char *)(lVar10 + 0x58) != '\0')) &&
                                   (*(char *)(lVar10 + 0x21) == '\0')) {
                                  plVar4 = *(long **)(unaff_x19 + 0x20);
                                  if (plVar4 == (long *)0x0) goto LAB_0696eee8;
                                  uVar5 = (**(code **)(*plVar4 + 0x5d8))
                                                    (plVar4,*(undefined8 *)(*plVar4 + 0x5e0));
                                  uVar5 = FUN_065c0764(uVar5,*(undefined8 *)PTR_DAT_084b71d0,0);
                                  (**(code **)(*plVar4 + 0x5e8))
                                            (plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x5f0));
                                }
                                lVar10 = *(long *)(unaff_x19 + 0x100);
                                if (((lVar10 != 0) && (*(int *)(lVar10 + 0x28) == 0)) &&
                                   (*(char *)(lVar10 + 0x34) != '\0')) {
                                  plVar4 = *(long **)(unaff_x19 + 0x20);
                                  if (plVar4 == (long *)0x0) goto LAB_0696eee8;
                                  uVar5 = (**(code **)(*plVar4 + 0x5d8))
                                                    (plVar4,*(undefined8 *)(*plVar4 + 0x5e0));
                                  uVar5 = FUN_065c0764(uVar5,*(undefined8 *)PTR_DAT_084b71f0,0);
                                  (**(code **)(*plVar4 + 0x5e8))
                                            (plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x5f0));
                                }
                                puVar2 = PTR_DAT_084b71b0;
                                if (*(long *)(unaff_x19 + 0x108) != 0) {
                                  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                                     (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x18),
                                     lVar10 == 0)) goto LAB_0696eee8;
                                  plVar4 = *(long **)(*(long *)(unaff_x19 + 0x40) + 0xe0);
                                  lVar6 = *(long *)PTR_DAT_084b71b0;
                                  if (*(char *)(lVar10 + 0x18) == '\0') {
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_03ae8be4();
                                      lVar6 = *(long *)puVar2;
                                    }
                                    puVar9 = *(undefined4 **)(lVar6 + 0xb8);
                                    puVar11 = puVar9 + 1;
                                    puVar12 = puVar9 + 2;
                                    puVar13 = puVar9 + 3;
                                  }
                                  else {
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_03ae8be4();
                                      lVar6 = *(long *)puVar2;
                                    }
                                    lVar10 = *(long *)(lVar6 + 0xb8);
                                    puVar9 = (undefined4 *)(lVar10 + 0x10);
                                    puVar11 = (undefined4 *)(lVar10 + 0x14);
                                    puVar12 = (undefined4 *)(lVar10 + 0x18);
                                    puVar13 = (undefined4 *)(lVar10 + 0x1c);
                                  }
                                  if (plVar4 == (long *)0x0) goto LAB_0696eee8;
                                  (**(code **)(*plVar4 + 0x2a8))
                                            (*puVar9,*puVar11,*puVar12,*puVar13,plVar4,
                                             *(undefined8 *)(*plVar4 + 0x2b0));
                                }
                                puVar2 = PTR_DAT_084b71b0;
                                if (*(long *)(unaff_x19 + 0x110) != 0) {
                                  if ((*(long *)(unaff_x19 + 0x48) == 0) ||
                                     (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x110) + 0x18),
                                     lVar10 == 0)) goto LAB_0696eee8;
                                  plVar4 = *(long **)(*(long *)(unaff_x19 + 0x48) + 0xe0);
                                  lVar6 = *(long *)PTR_DAT_084b71b0;
                                  if (*(char *)(lVar10 + 0x18) == '\0') {
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_03ae8be4();
                                      lVar6 = *(long *)puVar2;
                                    }
                                    puVar9 = *(undefined4 **)(lVar6 + 0xb8);
                                    puVar11 = puVar9 + 1;
                                    puVar12 = puVar9 + 2;
                                    puVar13 = puVar9 + 3;
                                  }
                                  else {
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_03ae8be4();
                                      lVar6 = *(long *)puVar2;
                                    }
                                    lVar10 = *(long *)(lVar6 + 0xb8);
                                    puVar9 = (undefined4 *)(lVar10 + 0x10);
                                    puVar11 = (undefined4 *)(lVar10 + 0x14);
                                    puVar12 = (undefined4 *)(lVar10 + 0x18);
                                    puVar13 = (undefined4 *)(lVar10 + 0x1c);
                                  }
                                  if (plVar4 == (long *)0x0) goto LAB_0696eee8;
                                  (**(code **)(*plVar4 + 0x2a8))
                                            (*puVar9,*puVar11,*puVar12,*puVar13,plVar4,
                                             *(undefined8 *)(*plVar4 + 0x2b0));
                                }
                                puVar2 = PTR_DAT_084b71b0;
                                if (*(long *)(unaff_x19 + 0x118) != 0) {
                                  if ((*(long *)(unaff_x19 + 0x50) == 0) ||
                                     (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x18),
                                     lVar10 == 0)) goto LAB_0696eee8;
                                  plVar4 = *(long **)(*(long *)(unaff_x19 + 0x50) + 0xe0);
                                  lVar6 = *(long *)PTR_DAT_084b71b0;
                                  if (*(char *)(lVar10 + 0x18) == '\0') {
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_03ae8be4();
                                      lVar6 = *(long *)puVar2;
                                    }
                                    puVar9 = *(undefined4 **)(lVar6 + 0xb8);
                                    puVar11 = puVar9 + 1;
                                    puVar12 = puVar9 + 2;
                                    puVar13 = puVar9 + 3;
                                  }
                                  else {
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_03ae8be4();
                                      lVar6 = *(long *)puVar2;
                                    }
                                    lVar10 = *(long *)(lVar6 + 0xb8);
                                    puVar9 = (undefined4 *)(lVar10 + 0x10);
                                    puVar11 = (undefined4 *)(lVar10 + 0x14);
                                    puVar12 = (undefined4 *)(lVar10 + 0x18);
                                    puVar13 = (undefined4 *)(lVar10 + 0x1c);
                                  }
                                  if (plVar4 == (long *)0x0) goto LAB_0696eee8;
                                  (**(code **)(*plVar4 + 0x2a8))
                                            (*puVar9,*puVar11,*puVar12,*puVar13,plVar4,
                                             *(undefined8 *)(*plVar4 + 0x2b0));
                                }
                                puVar2 = PTR_DAT_084b71b0;
                                if (*(long *)(unaff_x19 + 0x120) != 0) {
                                  if ((*(long *)(unaff_x19 + 0x58) == 0) ||
                                     (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x18),
                                     lVar10 == 0)) goto LAB_0696eee8;
                                  plVar4 = *(long **)(*(long *)(unaff_x19 + 0x58) + 0xe0);
                                  lVar6 = *(long *)PTR_DAT_084b71b0;
                                  if (*(char *)(lVar10 + 0x18) == '\0') {
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_03ae8be4();
                                      lVar6 = *(long *)puVar2;
                                    }
                                    puVar9 = *(undefined4 **)(lVar6 + 0xb8);
                                    puVar11 = puVar9 + 1;
                                    puVar12 = puVar9 + 2;
                                    puVar13 = puVar9 + 3;
                                  }
                                  else {
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_03ae8be4();
                                      lVar6 = *(long *)puVar2;
                                    }
                                    lVar10 = *(long *)(lVar6 + 0xb8);
                                    puVar9 = (undefined4 *)(lVar10 + 0x10);
                                    puVar11 = (undefined4 *)(lVar10 + 0x14);
                                    puVar12 = (undefined4 *)(lVar10 + 0x18);
                                    puVar13 = (undefined4 *)(lVar10 + 0x1c);
                                  }
                                  if (plVar4 == (long *)0x0) goto LAB_0696eee8;
                                  (**(code **)(*plVar4 + 0x2a8))
                                            (*puVar9,*puVar11,*puVar12,*puVar13,plVar4,
                                             *(undefined8 *)(*plVar4 + 0x2b0));
                                }
                                puVar2 = PTR_DAT_084b71b0;
                                if (*(long *)(unaff_x19 + 0x128) != 0) {
                                  if ((*(long *)(unaff_x19 + 0x78) == 0) ||
                                     (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x128) + 0x18),
                                     lVar10 == 0)) goto LAB_0696eee8;
                                  plVar4 = *(long **)(*(long *)(unaff_x19 + 0x78) + 0xe0);
                                  lVar6 = *(long *)PTR_DAT_084b71b0;
                                  if (*(char *)(lVar10 + 0x18) == '\0') {
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_03ae8be4();
                                      lVar6 = *(long *)puVar2;
                                    }
                                    puVar9 = *(undefined4 **)(lVar6 + 0xb8);
                                    puVar11 = puVar9 + 1;
                                    puVar12 = puVar9 + 2;
                                    puVar13 = puVar9 + 3;
                                  }
                                  else {
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_03ae8be4();
                                      lVar6 = *(long *)puVar2;
                                    }
                                    lVar10 = *(long *)(lVar6 + 0xb8);
                                    puVar9 = (undefined4 *)(lVar10 + 0x10);
                                    puVar11 = (undefined4 *)(lVar10 + 0x14);
                                    puVar12 = (undefined4 *)(lVar10 + 0x18);
                                    puVar13 = (undefined4 *)(lVar10 + 0x1c);
                                  }
                                  if (plVar4 == (long *)0x0) goto LAB_0696eee8;
                                  (**(code **)(*plVar4 + 0x2a8))
                                            (*puVar9,*puVar11,*puVar12,*puVar13,plVar4,
                                             *(undefined8 *)(*plVar4 + 0x2b0));
                                }
                                puVar2 = PTR_DAT_084b71b0;
                                if (*(long *)(unaff_x19 + 0x130) != 0) {
                                  if ((*(long *)(unaff_x19 + 0x70) == 0) ||
                                     (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x130) + 0x18),
                                     lVar10 == 0)) goto LAB_0696eee8;
                                  plVar4 = *(long **)(*(long *)(unaff_x19 + 0x70) + 0xe0);
                                  lVar6 = *(long *)PTR_DAT_084b71b0;
                                  if (*(char *)(lVar10 + 0x18) == '\0') {
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_03ae8be4();
                                      lVar6 = *(long *)puVar2;
                                    }
                                    puVar9 = *(undefined4 **)(lVar6 + 0xb8);
                                    puVar11 = puVar9 + 1;
                                    puVar12 = puVar9 + 2;
                                    puVar13 = puVar9 + 3;
                                  }
                                  else {
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_03ae8be4();
                                      lVar6 = *(long *)puVar2;
                                    }
                                    lVar10 = *(long *)(lVar6 + 0xb8);
                                    puVar9 = (undefined4 *)(lVar10 + 0x10);
                                    puVar11 = (undefined4 *)(lVar10 + 0x14);
                                    puVar12 = (undefined4 *)(lVar10 + 0x18);
                                    puVar13 = (undefined4 *)(lVar10 + 0x1c);
                                  }
                                  if (plVar4 == (long *)0x0) goto LAB_0696eee8;
                                  (**(code **)(*plVar4 + 0x2a8))
                                            (*puVar9,*puVar11,*puVar12,*puVar13,plVar4,
                                             *(undefined8 *)(*plVar4 + 0x2b0));
                                }
                                uVar5 = *(undefined8 *)(unaff_x19 + 0xd8);
                                if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4();
                                }
                                uVar7 = FUN_07c9c218(uVar5,0,0);
                                if ((uVar7 & 1) != 0) {
                                  if ((((*unaff_x20 == 0) ||
                                       (lVar10 = *(long *)(*unaff_x20 + 0xe8), lVar10 == 0)) ||
                                      (lVar10 = *(long *)(lVar10 + 0x40), lVar10 == 0)) ||
                                     (lVar10 = *(long *)(lVar10 + 0x88), lVar10 == 0))
                                  goto LAB_0696eee8;
                                  plVar4 = *(long **)(unaff_x19 + 0xd8);
                                  if (*(char *)(lVar10 + 0x10) == '\0') {
                                    if (plVar4 == (long *)0x0) goto LAB_0696eee8;
                                    (**(code **)(*plVar4 + 0x5e8))
                                              (plVar4,*unaff_x24,*(undefined8 *)(*plVar4 + 0x5f0));
                                    plVar4 = *(long **)(unaff_x19 + 0xe0);
                                    if (plVar4 == (long *)0x0) goto LAB_0696eee8;
                                    lVar10 = *plVar4;
                                    uVar5 = *unaff_x24;
                                  }
                                  else {
                                    if (plVar4 == (long *)0x0) goto LAB_0696eee8;
                                    (**(code **)(*plVar4 + 0x5e8))
                                              (plVar4,*(undefined8 *)PTR_DAT_084b71e0,
                                               *(undefined8 *)(*plVar4 + 0x5f0));
                                    if (((*(long *)(unaff_x19 + 0xe8) == 0) ||
                                        (lVar10 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8),
                                        lVar10 == 0)) ||
                                       ((lVar10 = *(long *)(lVar10 + 0x40), lVar10 == 0 ||
                                        (lVar10 = *(long *)(lVar10 + 0x88), lVar10 == 0))))
                                    goto LAB_0696eee8;
                                    plVar4 = *(long **)(unaff_x19 + 0xe0);
                                    in_stack_00000008._4_4_ = *(float *)(lVar10 + 0x14) * 100.0;
                                    uVar5 = FUN_067638d0((long)&stack0x00000008 + 4,
                                                         *(undefined8 *)PTR_DAT_084b71c8,0);
                                    uVar5 = FUN_065c0764(uVar5,*(undefined8 *)PTR_DAT_084b71f8,0);
                                    if (plVar4 == (long *)0x0) goto LAB_0696eee8;
                                    lVar10 = *plVar4;
                                  }
                                  (**(code **)(lVar10 + 0x5e8))
                                            (plVar4,uVar5,*(undefined8 *)(lVar10 + 0x5f0));
                                }
                                if (*unaff_x20 != 0) {
                                  lVar10 = FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7190);
                                  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                                    thunk_FUN_03ae8be4(*unaff_x25);
                                  }
                                  uVar7 = FUN_07c9c218(lVar10,0,0);
                                  if ((uVar7 & 1) == 0) {
LAB_0696eec0:
                                    *unaff_x21 = *unaff_x20;
                                    thunk_FUN_03afed3c();
                                    return;
                                  }
                                  if ((*(long *)(unaff_x19 + 0x60) != 0) && (lVar10 != 0)) {
                                    plVar4 = *(long **)(*(long *)(unaff_x19 + 0x60) + 0xe0);
                                    uVar7 = FUN_07c986c8(lVar10,0);
                                    puVar2 = PTR_DAT_084b71b0;
                                    lVar6 = *(long *)PTR_DAT_084b71b0;
                                    if ((uVar7 & 1) == 0) {
                                      if (*(int *)(lVar6 + 0xe4) == 0) {
                                        thunk_FUN_03ae8be4();
                                        lVar6 = *(long *)puVar2;
                                      }
                                      puVar9 = *(undefined4 **)(lVar6 + 0xb8);
                                      puVar11 = puVar9 + 1;
                                      puVar12 = puVar9 + 2;
                                      puVar13 = puVar9 + 3;
                                    }
                                    else {
                                      if (*(int *)(lVar6 + 0xe4) == 0) {
                                        thunk_FUN_03ae8be4();
                                        lVar6 = *(long *)puVar2;
                                      }
                                      lVar6 = *(long *)(lVar6 + 0xb8);
                                      puVar9 = (undefined4 *)(lVar6 + 0x10);
                                      puVar11 = (undefined4 *)(lVar6 + 0x14);
                                      puVar12 = (undefined4 *)(lVar6 + 0x18);
                                      puVar13 = (undefined4 *)(lVar6 + 0x1c);
                                    }
                                    if (plVar4 != (long *)0x0) {
                                      (**(code **)(*plVar4 + 0x2a8))
                                                (*puVar9,*puVar11,*puVar12,*puVar13,plVar4,
                                                 *(undefined8 *)(*plVar4 + 0x2b0));
                                      plVar4 = *(long **)(unaff_x19 + 0xd0);
                                      if (plVar4 != (long *)0x0) {
                                        (**(code **)(*plVar4 + 0x428))
                                                  (*(undefined4 *)(lVar10 + 0x98),plVar4,
                                                   *(undefined8 *)(*plVar4 + 0x430));
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


