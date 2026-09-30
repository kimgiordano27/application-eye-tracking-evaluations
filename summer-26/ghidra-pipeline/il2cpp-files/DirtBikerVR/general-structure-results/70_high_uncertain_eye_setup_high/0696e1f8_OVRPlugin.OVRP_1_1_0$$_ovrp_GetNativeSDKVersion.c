/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetNativeSDKVersion
ENTRY_POINT: 0696e1f8
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


void OVRPlugin_OVRP_1_1_0___ovrp_GetNativeSDKVersion(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  long *unaff_x25;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_00000008;
  
  thunk_FUN_03afed3c(param_1);
  puVar2 = PTR_DAT_084b7198;
  if (*unaff_x20 != 0) {
    plVar3 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7198);
    if ((plVar3 == (long *)0x0) ||
       (plVar3 = (long *)(**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180)),
       plVar3 == (long *)0x0)) {
      plVar3 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x118) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6a50;
      bVar1 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar3 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar3;
        if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
          plVar7 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x118) = plVar7;
      if (*(byte *)(*plVar3 + 0x130) < bVar1) {
        plVar3 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
        plVar3 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(unaff_x19 + 0x118,plVar3);
    if (*unaff_x20 != 0) {
      plVar3 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7178);
      if ((plVar3 == (long *)0x0) ||
         (plVar3 = (long *)(**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180)),
         plVar3 == (long *)0x0)) {
        plVar3 = (long *)0x0;
        *(undefined8 *)(unaff_x19 + 0x120) = 0;
      }
      else {
        lVar9 = *(long *)PTR_DAT_084b6aa8;
        bVar1 = *(byte *)(lVar9 + 0x130);
        if (*(byte *)(*plVar3 + 0x130) < bVar1) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = plVar3;
          if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
            plVar7 = (long *)0x0;
          }
        }
        *(long **)(unaff_x19 + 0x120) = plVar7;
        if (*(byte *)(*plVar3 + 0x130) < bVar1) {
          plVar3 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
          plVar3 = (long *)0x0;
        }
      }
      thunk_FUN_03afed3c(unaff_x19 + 0x120,plVar3);
      if (*unaff_x20 != 0) {
        plVar3 = (long *)FUN_0447aad0(*unaff_x20,*unaff_x22);
        if ((plVar3 == (long *)0x0) ||
           (plVar3 = (long *)(**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180))
           , plVar3 == (long *)0x0)) {
          plVar3 = (long *)0x0;
          *(undefined8 *)(unaff_x19 + 0x110) = 0;
        }
        else {
          lVar9 = *(long *)PTR_DAT_084b6948;
          bVar1 = *(byte *)(lVar9 + 0x130);
          if (*(byte *)(*plVar3 + 0x130) < bVar1) {
            plVar7 = (long *)0x0;
          }
          else {
            plVar7 = plVar3;
            if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
              plVar7 = (long *)0x0;
            }
          }
          *(long **)(unaff_x19 + 0x110) = plVar7;
          if (*(byte *)(*plVar3 + 0x130) < bVar1) {
            plVar3 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
            plVar3 = (long *)0x0;
          }
        }
        thunk_FUN_03afed3c(unaff_x19 + 0x110,plVar3);
        if (*unaff_x20 != 0) {
          plVar3 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)puVar2);
          if ((plVar3 == (long *)0x0) ||
             (plVar3 = (long *)(**(code **)(*plVar3 + 0x178))
                                         (plVar3,*(undefined8 *)(*plVar3 + 0x180)),
             plVar3 == (long *)0x0)) {
            plVar3 = (long *)0x0;
            *(undefined8 *)(unaff_x19 + 0x118) = 0;
          }
          else {
            lVar9 = *(long *)PTR_DAT_084b6a50;
            bVar1 = *(byte *)(lVar9 + 0x130);
            if (*(byte *)(*plVar3 + 0x130) < bVar1) {
              plVar7 = (long *)0x0;
            }
            else {
              plVar7 = plVar3;
              if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
                plVar7 = (long *)0x0;
              }
            }
            *(long **)(unaff_x19 + 0x118) = plVar7;
            if (*(byte *)(*plVar3 + 0x130) < bVar1) {
              plVar3 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
              plVar3 = (long *)0x0;
            }
          }
          thunk_FUN_03afed3c(unaff_x19 + 0x118,plVar3);
          if (*unaff_x20 != 0) {
            plVar3 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7188);
            if ((plVar3 == (long *)0x0) ||
               (plVar3 = (long *)(**(code **)(*plVar3 + 0x178))
                                           (plVar3,*(undefined8 *)(*plVar3 + 0x180)),
               plVar3 == (long *)0x0)) {
              plVar3 = (long *)0x0;
              *(undefined8 *)(unaff_x19 + 0x130) = 0;
            }
            else {
              lVar9 = *(long *)PTR_DAT_084b6a68;
              bVar1 = *(byte *)(lVar9 + 0x130);
              if (*(byte *)(*plVar3 + 0x130) < bVar1) {
                plVar7 = (long *)0x0;
              }
              else {
                plVar7 = plVar3;
                if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
                  plVar7 = (long *)0x0;
                }
              }
              *(long **)(unaff_x19 + 0x130) = plVar7;
              if (*(byte *)(*plVar3 + 0x130) < bVar1) {
                plVar3 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
                plVar3 = (long *)0x0;
              }
            }
            thunk_FUN_03afed3c(unaff_x19 + 0x130,plVar3);
            if (*unaff_x20 != 0) {
              plVar3 = (long *)FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7180);
              if ((plVar3 == (long *)0x0) ||
                 (plVar3 = (long *)(**(code **)(*plVar3 + 0x178))
                                             (plVar3,*(undefined8 *)(*plVar3 + 0x180)),
                 plVar3 == (long *)0x0)) {
                plVar3 = (long *)0x0;
                *(undefined8 *)(unaff_x19 + 0x128) = 0;
              }
              else {
                lVar9 = *(long *)PTR_DAT_084b6a70;
                bVar1 = *(byte *)(lVar9 + 0x130);
                if (*(byte *)(*plVar3 + 0x130) < bVar1) {
                  plVar7 = (long *)0x0;
                }
                else {
                  plVar7 = plVar3;
                  if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
                    plVar7 = (long *)0x0;
                  }
                }
                *(long **)(unaff_x19 + 0x128) = plVar7;
                if (*(byte *)(*plVar3 + 0x130) < bVar1) {
                  plVar3 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
                  plVar3 = (long *)0x0;
                }
              }
              thunk_FUN_03afed3c(unaff_x19 + 0x128,plVar3);
              lVar9 = *unaff_x20;
              if (lVar9 != 0) {
                if (*(char *)(lVar9 + 0x168) == '\0') {
                  return;
                }
                if ((*(long *)(lVar9 + 0xd8) != 0) &&
                   (plVar3 = *(long **)(unaff_x19 + 0xa0), plVar3 != (long *)0x0)) {
                  fVar15 = *(float *)(*(long *)(lVar9 + 0xd8) + 0x34);
                  fVar13 = 1.0;
                  if (fVar15 <= 1.0) {
                    fVar13 = fVar15;
                  }
                  fVar14 = 0.0;
                  if (0.0 <= fVar15) {
                    fVar14 = fVar13;
                  }
                  (**(code **)(*plVar3 + 0x428))(fVar14,plVar3,*(undefined8 *)(*plVar3 + 0x430));
                  if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                      (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar9 != 0)) &&
                     (plVar3 = *(long **)(unaff_x19 + 0xa8), plVar3 != (long *)0x0)) {
                    fVar15 = *(float *)(lVar9 + 0x44);
                    fVar13 = 1.0;
                    if (fVar15 <= 1.0) {
                      fVar13 = fVar15;
                    }
                    fVar14 = 0.0;
                    if (0.0 <= fVar15) {
                      fVar14 = fVar13;
                    }
                    (**(code **)(*plVar3 + 0x428))(fVar14,plVar3,*(undefined8 *)(*plVar3 + 0x430));
                    if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                        (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8), lVar9 != 0)) &&
                       ((lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0 &&
                        (plVar3 = *(long **)(unaff_x19 + 0xb0), plVar3 != (long *)0x0)))) {
                      fVar15 = *(float *)(lVar9 + 0x78);
                      fVar13 = 1.0;
                      if (fVar15 <= 1.0) {
                        fVar13 = fVar15;
                      }
                      fVar14 = 0.0;
                      if (0.0 <= fVar15) {
                        fVar14 = fVar13;
                      }
                      (**(code **)(*plVar3 + 0x428))(fVar14,plVar3,*(undefined8 *)(*plVar3 + 0x430))
                      ;
                      if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                          (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar9 != 0)) &&
                         (plVar3 = *(long **)(unaff_x19 + 0xb8), plVar3 != (long *)0x0)) {
                        fVar15 = *(float *)(lVar9 + 0x54);
                        fVar13 = 1.0;
                        if (fVar15 <= 1.0) {
                          fVar13 = fVar15;
                        }
                        fVar14 = 0.0;
                        if (0.0 <= fVar15) {
                          fVar14 = fVar13;
                        }
                        (**(code **)(*plVar3 + 0x428))
                                  (fVar14,plVar3,*(undefined8 *)(*plVar3 + 0x430));
                        if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                            (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar9 != 0)) &&
                           (plVar3 = *(long **)(unaff_x19 + 0xc0), plVar3 != (long *)0x0)) {
                          fVar15 = *(float *)(lVar9 + 0x24);
                          fVar13 = 1.0;
                          if (-1.0 <= fVar15) {
                            fVar13 = -fVar15;
                          }
                          fVar14 = 0.0;
                          if (fVar15 <= 0.0) {
                            fVar14 = fVar13;
                          }
                          (**(code **)(*plVar3 + 0x428))
                                    (fVar14,plVar3,*(undefined8 *)(*plVar3 + 0x430));
                          if (((*(long *)(unaff_x19 + 0xe8) != 0) &&
                              (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xd8), lVar9 != 0))
                             && (plVar3 = *(long **)(unaff_x19 + 200), plVar3 != (long *)0x0)) {
                            fVar15 = *(float *)(lVar9 + 0x24);
                            fVar13 = 1.0;
                            if (fVar15 <= 1.0) {
                              fVar13 = fVar15;
                            }
                            fVar14 = 0.0;
                            if (0.0 <= fVar15) {
                              fVar14 = fVar13;
                            }
                            (**(code **)(*plVar3 + 0x428))
                                      (fVar14,plVar3,*(undefined8 *)(*plVar3 + 0x430));
                            lVar9 = *(long *)(unaff_x19 + 0xf8);
                            if (((lVar9 != 0) && (*(char *)(lVar9 + 0x58) != '\0')) &&
                               (*(char *)(lVar9 + 0x21) == '\0')) {
                              plVar3 = *(long **)(unaff_x19 + 0x20);
                              if (plVar3 == (long *)0x0) goto LAB_0696eee8;
                              uVar4 = (**(code **)(*plVar3 + 0x5d8))
                                                (plVar3,*(undefined8 *)(*plVar3 + 0x5e0));
                              uVar4 = FUN_065c0764(uVar4,*(undefined8 *)PTR_DAT_084b71d0,0);
                              (**(code **)(*plVar3 + 0x5e8))
                                        (plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x5f0));
                            }
                            lVar9 = *(long *)(unaff_x19 + 0x100);
                            if (((lVar9 != 0) && (*(int *)(lVar9 + 0x28) == 0)) &&
                               (*(char *)(lVar9 + 0x34) != '\0')) {
                              plVar3 = *(long **)(unaff_x19 + 0x20);
                              if (plVar3 == (long *)0x0) goto LAB_0696eee8;
                              uVar4 = (**(code **)(*plVar3 + 0x5d8))
                                                (plVar3,*(undefined8 *)(*plVar3 + 0x5e0));
                              uVar4 = FUN_065c0764(uVar4,*(undefined8 *)PTR_DAT_084b71f0,0);
                              (**(code **)(*plVar3 + 0x5e8))
                                        (plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x5f0));
                            }
                            puVar2 = PTR_DAT_084b71b0;
                            if (*(long *)(unaff_x19 + 0x108) != 0) {
                              if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                                 (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x18), lVar9 == 0
                                 )) goto LAB_0696eee8;
                              plVar3 = *(long **)(*(long *)(unaff_x19 + 0x40) + 0xe0);
                              lVar5 = *(long *)PTR_DAT_084b71b0;
                              if (*(char *)(lVar9 + 0x18) == '\0') {
                                if (*(int *)(lVar5 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4();
                                  lVar5 = *(long *)puVar2;
                                }
                                puVar8 = *(undefined4 **)(lVar5 + 0xb8);
                                puVar10 = puVar8 + 1;
                                puVar11 = puVar8 + 2;
                                puVar12 = puVar8 + 3;
                              }
                              else {
                                if (*(int *)(lVar5 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4();
                                  lVar5 = *(long *)puVar2;
                                }
                                lVar9 = *(long *)(lVar5 + 0xb8);
                                puVar8 = (undefined4 *)(lVar9 + 0x10);
                                puVar10 = (undefined4 *)(lVar9 + 0x14);
                                puVar11 = (undefined4 *)(lVar9 + 0x18);
                                puVar12 = (undefined4 *)(lVar9 + 0x1c);
                              }
                              if (plVar3 == (long *)0x0) goto LAB_0696eee8;
                              (**(code **)(*plVar3 + 0x2a8))
                                        (*puVar8,*puVar10,*puVar11,*puVar12,plVar3,
                                         *(undefined8 *)(*plVar3 + 0x2b0));
                            }
                            puVar2 = PTR_DAT_084b71b0;
                            if (*(long *)(unaff_x19 + 0x110) != 0) {
                              if ((*(long *)(unaff_x19 + 0x48) == 0) ||
                                 (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x110) + 0x18), lVar9 == 0
                                 )) goto LAB_0696eee8;
                              plVar3 = *(long **)(*(long *)(unaff_x19 + 0x48) + 0xe0);
                              lVar5 = *(long *)PTR_DAT_084b71b0;
                              if (*(char *)(lVar9 + 0x18) == '\0') {
                                if (*(int *)(lVar5 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4();
                                  lVar5 = *(long *)puVar2;
                                }
                                puVar8 = *(undefined4 **)(lVar5 + 0xb8);
                                puVar10 = puVar8 + 1;
                                puVar11 = puVar8 + 2;
                                puVar12 = puVar8 + 3;
                              }
                              else {
                                if (*(int *)(lVar5 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4();
                                  lVar5 = *(long *)puVar2;
                                }
                                lVar9 = *(long *)(lVar5 + 0xb8);
                                puVar8 = (undefined4 *)(lVar9 + 0x10);
                                puVar10 = (undefined4 *)(lVar9 + 0x14);
                                puVar11 = (undefined4 *)(lVar9 + 0x18);
                                puVar12 = (undefined4 *)(lVar9 + 0x1c);
                              }
                              if (plVar3 == (long *)0x0) goto LAB_0696eee8;
                              (**(code **)(*plVar3 + 0x2a8))
                                        (*puVar8,*puVar10,*puVar11,*puVar12,plVar3,
                                         *(undefined8 *)(*plVar3 + 0x2b0));
                            }
                            puVar2 = PTR_DAT_084b71b0;
                            if (*(long *)(unaff_x19 + 0x118) != 0) {
                              if ((*(long *)(unaff_x19 + 0x50) == 0) ||
                                 (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x18), lVar9 == 0
                                 )) goto LAB_0696eee8;
                              plVar3 = *(long **)(*(long *)(unaff_x19 + 0x50) + 0xe0);
                              lVar5 = *(long *)PTR_DAT_084b71b0;
                              if (*(char *)(lVar9 + 0x18) == '\0') {
                                if (*(int *)(lVar5 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4();
                                  lVar5 = *(long *)puVar2;
                                }
                                puVar8 = *(undefined4 **)(lVar5 + 0xb8);
                                puVar10 = puVar8 + 1;
                                puVar11 = puVar8 + 2;
                                puVar12 = puVar8 + 3;
                              }
                              else {
                                if (*(int *)(lVar5 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4();
                                  lVar5 = *(long *)puVar2;
                                }
                                lVar9 = *(long *)(lVar5 + 0xb8);
                                puVar8 = (undefined4 *)(lVar9 + 0x10);
                                puVar10 = (undefined4 *)(lVar9 + 0x14);
                                puVar11 = (undefined4 *)(lVar9 + 0x18);
                                puVar12 = (undefined4 *)(lVar9 + 0x1c);
                              }
                              if (plVar3 == (long *)0x0) goto LAB_0696eee8;
                              (**(code **)(*plVar3 + 0x2a8))
                                        (*puVar8,*puVar10,*puVar11,*puVar12,plVar3,
                                         *(undefined8 *)(*plVar3 + 0x2b0));
                            }
                            puVar2 = PTR_DAT_084b71b0;
                            if (*(long *)(unaff_x19 + 0x120) != 0) {
                              if ((*(long *)(unaff_x19 + 0x58) == 0) ||
                                 (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x18), lVar9 == 0
                                 )) goto LAB_0696eee8;
                              plVar3 = *(long **)(*(long *)(unaff_x19 + 0x58) + 0xe0);
                              lVar5 = *(long *)PTR_DAT_084b71b0;
                              if (*(char *)(lVar9 + 0x18) == '\0') {
                                if (*(int *)(lVar5 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4();
                                  lVar5 = *(long *)puVar2;
                                }
                                puVar8 = *(undefined4 **)(lVar5 + 0xb8);
                                puVar10 = puVar8 + 1;
                                puVar11 = puVar8 + 2;
                                puVar12 = puVar8 + 3;
                              }
                              else {
                                if (*(int *)(lVar5 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4();
                                  lVar5 = *(long *)puVar2;
                                }
                                lVar9 = *(long *)(lVar5 + 0xb8);
                                puVar8 = (undefined4 *)(lVar9 + 0x10);
                                puVar10 = (undefined4 *)(lVar9 + 0x14);
                                puVar11 = (undefined4 *)(lVar9 + 0x18);
                                puVar12 = (undefined4 *)(lVar9 + 0x1c);
                              }
                              if (plVar3 == (long *)0x0) goto LAB_0696eee8;
                              (**(code **)(*plVar3 + 0x2a8))
                                        (*puVar8,*puVar10,*puVar11,*puVar12,plVar3,
                                         *(undefined8 *)(*plVar3 + 0x2b0));
                            }
                            puVar2 = PTR_DAT_084b71b0;
                            if (*(long *)(unaff_x19 + 0x128) != 0) {
                              if ((*(long *)(unaff_x19 + 0x78) == 0) ||
                                 (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x128) + 0x18), lVar9 == 0
                                 )) goto LAB_0696eee8;
                              plVar3 = *(long **)(*(long *)(unaff_x19 + 0x78) + 0xe0);
                              lVar5 = *(long *)PTR_DAT_084b71b0;
                              if (*(char *)(lVar9 + 0x18) == '\0') {
                                if (*(int *)(lVar5 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4();
                                  lVar5 = *(long *)puVar2;
                                }
                                puVar8 = *(undefined4 **)(lVar5 + 0xb8);
                                puVar10 = puVar8 + 1;
                                puVar11 = puVar8 + 2;
                                puVar12 = puVar8 + 3;
                              }
                              else {
                                if (*(int *)(lVar5 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4();
                                  lVar5 = *(long *)puVar2;
                                }
                                lVar9 = *(long *)(lVar5 + 0xb8);
                                puVar8 = (undefined4 *)(lVar9 + 0x10);
                                puVar10 = (undefined4 *)(lVar9 + 0x14);
                                puVar11 = (undefined4 *)(lVar9 + 0x18);
                                puVar12 = (undefined4 *)(lVar9 + 0x1c);
                              }
                              if (plVar3 == (long *)0x0) goto LAB_0696eee8;
                              (**(code **)(*plVar3 + 0x2a8))
                                        (*puVar8,*puVar10,*puVar11,*puVar12,plVar3,
                                         *(undefined8 *)(*plVar3 + 0x2b0));
                            }
                            puVar2 = PTR_DAT_084b71b0;
                            if (*(long *)(unaff_x19 + 0x130) != 0) {
                              if ((*(long *)(unaff_x19 + 0x70) == 0) ||
                                 (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x130) + 0x18), lVar9 == 0
                                 )) goto LAB_0696eee8;
                              plVar3 = *(long **)(*(long *)(unaff_x19 + 0x70) + 0xe0);
                              lVar5 = *(long *)PTR_DAT_084b71b0;
                              if (*(char *)(lVar9 + 0x18) == '\0') {
                                if (*(int *)(lVar5 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4();
                                  lVar5 = *(long *)puVar2;
                                }
                                puVar8 = *(undefined4 **)(lVar5 + 0xb8);
                                puVar10 = puVar8 + 1;
                                puVar11 = puVar8 + 2;
                                puVar12 = puVar8 + 3;
                              }
                              else {
                                if (*(int *)(lVar5 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4();
                                  lVar5 = *(long *)puVar2;
                                }
                                lVar9 = *(long *)(lVar5 + 0xb8);
                                puVar8 = (undefined4 *)(lVar9 + 0x10);
                                puVar10 = (undefined4 *)(lVar9 + 0x14);
                                puVar11 = (undefined4 *)(lVar9 + 0x18);
                                puVar12 = (undefined4 *)(lVar9 + 0x1c);
                              }
                              if (plVar3 == (long *)0x0) goto LAB_0696eee8;
                              (**(code **)(*plVar3 + 0x2a8))
                                        (*puVar8,*puVar10,*puVar11,*puVar12,plVar3,
                                         *(undefined8 *)(*plVar3 + 0x2b0));
                            }
                            uVar4 = *(undefined8 *)(unaff_x19 + 0xd8);
                            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                              thunk_FUN_03ae8be4();
                            }
                            uVar6 = FUN_07c9c218(uVar4,0,0);
                            if ((uVar6 & 1) != 0) {
                              if ((((*unaff_x20 == 0) ||
                                   (lVar9 = *(long *)(*unaff_x20 + 0xe8), lVar9 == 0)) ||
                                  (lVar9 = *(long *)(lVar9 + 0x40), lVar9 == 0)) ||
                                 (lVar9 = *(long *)(lVar9 + 0x88), lVar9 == 0)) goto LAB_0696eee8;
                              plVar3 = *(long **)(unaff_x19 + 0xd8);
                              if (*(char *)(lVar9 + 0x10) == '\0') {
                                if (plVar3 == (long *)0x0) goto LAB_0696eee8;
                                (**(code **)(*plVar3 + 0x5e8))
                                          (plVar3,*unaff_x24,*(undefined8 *)(*plVar3 + 0x5f0));
                                plVar3 = *(long **)(unaff_x19 + 0xe0);
                                if (plVar3 == (long *)0x0) goto LAB_0696eee8;
                                lVar9 = *plVar3;
                                uVar4 = *unaff_x24;
                              }
                              else {
                                if (plVar3 == (long *)0x0) goto LAB_0696eee8;
                                (**(code **)(*plVar3 + 0x5e8))
                                          (plVar3,*(undefined8 *)PTR_DAT_084b71e0,
                                           *(undefined8 *)(*plVar3 + 0x5f0));
                                if (((*(long *)(unaff_x19 + 0xe8) == 0) ||
                                    (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0xe8),
                                    lVar9 == 0)) ||
                                   ((lVar9 = *(long *)(lVar9 + 0x40), lVar9 == 0 ||
                                    (lVar9 = *(long *)(lVar9 + 0x88), lVar9 == 0))))
                                goto LAB_0696eee8;
                                plVar3 = *(long **)(unaff_x19 + 0xe0);
                                in_stack_00000008._4_4_ = *(float *)(lVar9 + 0x14) * 100.0;
                                uVar4 = FUN_067638d0((long)&stack0x00000008 + 4,
                                                     *(undefined8 *)PTR_DAT_084b71c8,0);
                                uVar4 = FUN_065c0764(uVar4,*(undefined8 *)PTR_DAT_084b71f8,0);
                                if (plVar3 == (long *)0x0) goto LAB_0696eee8;
                                lVar9 = *plVar3;
                              }
                              (**(code **)(lVar9 + 0x5e8))
                                        (plVar3,uVar4,*(undefined8 *)(lVar9 + 0x5f0));
                            }
                            if (*unaff_x20 != 0) {
                              lVar9 = FUN_0447aad0(*unaff_x20,*(undefined8 *)PTR_DAT_084b7190);
                              if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                                thunk_FUN_03ae8be4(*unaff_x25);
                              }
                              uVar6 = FUN_07c9c218(lVar9,0,0);
                              if ((uVar6 & 1) == 0) {
LAB_0696eec0:
                                *unaff_x21 = *unaff_x20;
                                thunk_FUN_03afed3c();
                                return;
                              }
                              if ((*(long *)(unaff_x19 + 0x60) != 0) && (lVar9 != 0)) {
                                plVar3 = *(long **)(*(long *)(unaff_x19 + 0x60) + 0xe0);
                                uVar6 = FUN_07c986c8(lVar9,0);
                                puVar2 = PTR_DAT_084b71b0;
                                lVar5 = *(long *)PTR_DAT_084b71b0;
                                if ((uVar6 & 1) == 0) {
                                  if (*(int *)(lVar5 + 0xe4) == 0) {
                                    thunk_FUN_03ae8be4();
                                    lVar5 = *(long *)puVar2;
                                  }
                                  puVar8 = *(undefined4 **)(lVar5 + 0xb8);
                                  puVar10 = puVar8 + 1;
                                  puVar11 = puVar8 + 2;
                                  puVar12 = puVar8 + 3;
                                }
                                else {
                                  if (*(int *)(lVar5 + 0xe4) == 0) {
                                    thunk_FUN_03ae8be4();
                                    lVar5 = *(long *)puVar2;
                                  }
                                  lVar5 = *(long *)(lVar5 + 0xb8);
                                  puVar8 = (undefined4 *)(lVar5 + 0x10);
                                  puVar10 = (undefined4 *)(lVar5 + 0x14);
                                  puVar11 = (undefined4 *)(lVar5 + 0x18);
                                  puVar12 = (undefined4 *)(lVar5 + 0x1c);
                                }
                                if (plVar3 != (long *)0x0) {
                                  (**(code **)(*plVar3 + 0x2a8))
                                            (*puVar8,*puVar10,*puVar11,*puVar12,plVar3,
                                             *(undefined8 *)(*plVar3 + 0x2b0));
                                  plVar3 = *(long **)(unaff_x19 + 0xd0);
                                  if (plVar3 != (long *)0x0) {
                                    (**(code **)(*plVar3 + 0x428))
                                              (*(undefined4 *)(lVar9 + 0x98),plVar3,
                                               *(undefined8 *)(*plVar3 + 0x430));
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
LAB_0696eee8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


