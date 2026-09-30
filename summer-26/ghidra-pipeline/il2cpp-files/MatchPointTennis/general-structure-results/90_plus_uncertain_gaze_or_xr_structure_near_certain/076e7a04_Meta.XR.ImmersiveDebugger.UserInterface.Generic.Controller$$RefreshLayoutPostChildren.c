/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$RefreshLayoutPostChildren
ENTRY_POINT: 076e7a04
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__RefreshLayoutPostChildren
               (float param_1,float param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 in_w8;
  long unaff_x19;
  undefined8 uVar10;
  long *unaff_x25;
  float fVar11;
  float fVar12;
  
  if (param_1 < param_2) {
    *(undefined4 *)(unaff_x19 + 0x24) = in_w8;
  }
  if (*(char *)(unaff_x19 + 0x29) == '\0') {
    if (((*(long *)(unaff_x19 + 0x180) == 0) ||
        (lVar5 = FUN_04c6c620(*(long *)(unaff_x19 + 0x180),*(undefined8 *)PTR_DAT_09f2f208),
        lVar5 == 0)) || (plVar6 = (long *)FUN_095258d0(lVar5,0), plVar6 == (long *)0x0))
    goto LAB_076e80e4;
    if (*plVar6 != *unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(plVar6);
    }
    FUN_09538a84(plVar6,0);
    FUN_09538b4c(0,plVar6,0);
    FUN_09538c10(plVar6,0);
    FUN_09538cd8(0,plVar6,0);
    FUN_095390b4(plVar6,0);
    FUN_0953917c(0,plVar6,0);
    if ((*(long *)(unaff_x19 + 0x118) == 0) ||
       (plVar7 = (long *)FUN_095258d0(*(long *)(unaff_x19 + 0x118),0), plVar7 == (long *)0x0))
    goto LAB_076e80e4;
    if (*plVar7 != *unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(plVar7);
    }
    fVar11 = (float)FUN_09538d9c(plVar7,0);
    fVar12 = (float)FUN_09538f28(plVar6,0);
    FUN_09538e64(fVar11 + fVar12,param_2 + 0.0,plVar7,0);
  }
  puVar1 = PTR_DAT_09f2f350;
  puVar2 = PTR_DAT_09f2f348;
  if (*(char *)(unaff_x19 + 0x38) == '\0') {
    *(undefined8 *)(unaff_x19 + 0x168) = 0;
    thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x168),0);
    if ((*(long *)(unaff_x19 + 0x170) == 0) ||
       (lVar5 = FUN_095259a0(*(long *)(unaff_x19 + 0x170),0), lVar5 == 0)) goto LAB_076e80e4;
    FUN_0952a454(lVar5,0,0);
    if ((*(long *)(unaff_x19 + 0x178) == 0) ||
       (lVar5 = FUN_095259a0(*(long *)(unaff_x19 + 0x178),0), lVar5 == 0)) goto LAB_076e80e4;
    FUN_0952a454(lVar5,0,0);
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 0x168);
    if ((lVar5 == 0) || (lVar5 = FUN_04c6bfdc(lVar5,*(undefined8 *)PTR_DAT_09f2f210), lVar5 == 0))
    goto LAB_076e80e4;
    lVar5 = *(long *)(lVar5 + 0x148);
    uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
    FUN_06a389f0();
    if (lVar5 == 0) goto LAB_076e80e4;
    FUN_06a40fa0(lVar5,uVar8,*(undefined8 *)puVar1);
  }
  if ((*(long *)(unaff_x19 + 0x138) != 0) &&
     (lVar5 = FUN_095259a0(*(long *)(unaff_x19 + 0x138),0), lVar5 != 0)) {
    FUN_0952a454(lVar5,*(undefined1 *)(unaff_x19 + 0x41),0);
    if ((*(long *)(unaff_x19 + 0x140) != 0) &&
       (lVar5 = FUN_095259a0(*(long *)(unaff_x19 + 0x140),0), lVar5 != 0)) {
      FUN_0952a454(lVar5,*(undefined1 *)(unaff_x19 + 0x42),0);
      if (*(long *)(unaff_x19 + 0x148) != 0) {
        lVar5 = FUN_095259a0(*(long *)(unaff_x19 + 0x148),0);
        if (*(char *)(unaff_x19 + 0x43) == '\0') {
          bVar4 = *(char *)(unaff_x19 + 0x44) != '\0';
        }
        else {
          bVar4 = true;
        }
        if (lVar5 != 0) {
          FUN_0952a454(lVar5,bVar4,0);
          if ((*(long *)(unaff_x19 + 0x110) != 0) &&
             (lVar5 = FUN_095259a0(*(long *)(unaff_x19 + 0x110),0), lVar5 != 0)) {
            uVar9 = FUN_0952a518(lVar5,0);
            if ((uVar9 & 1) != 0) {
              if ((*(long *)(unaff_x19 + 0x110) == 0) ||
                 (lVar5 = FUN_095259a0(*(long *)(unaff_x19 + 0x110),0), lVar5 == 0))
              goto LAB_076e80e4;
              FUN_0952a454(lVar5,0,0);
            }
            puVar3 = PTR_DAT_09f2f338;
            lVar5 = *(long *)(unaff_x19 + 0x118);
            if (lVar5 != 0) {
              uVar10 = *(undefined8 *)(lVar5 + 0x150);
              uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f338);
              FUN_0980b100();
              plVar6 = (long *)FUN_07a84204(uVar10,uVar8,0);
              if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
                FUN_044481e4(plVar6);
              }
              FUN_0980bd10(lVar5,plVar6,0);
              if (*(long *)(unaff_x19 + 0x118) != 0) {
                lVar5 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x148);
                uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                FUN_06a389f0();
                if (lVar5 != 0) {
                  FUN_06a40fa0(lVar5,uVar8,*(undefined8 *)puVar1);
                  if (*(long *)(unaff_x19 + 0x118) != 0) {
                    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x140);
                    uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                    FUN_06a389f0();
                    if (lVar5 != 0) {
                      FUN_06a40fa0(lVar5,uVar8,*(undefined8 *)puVar1);
                      puVar2 = PTR_DAT_09f1e5e8;
                      if (*(long *)(unaff_x19 + 0x120) != 0) {
                        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x100);
                        uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1e5e8);
                        FUN_09542000();
                        if (lVar5 != 0) {
                          FUN_095420d0(lVar5,uVar8,0);
                          if (*(long *)(unaff_x19 + 0x128) != 0) {
                            lVar5 = *(long *)(*(long *)(unaff_x19 + 0x128) + 0x100);
                            uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                            FUN_09542000();
                            if (lVar5 != 0) {
                              FUN_095420d0(lVar5,uVar8,0);
                              puVar1 = PTR_DAT_09f1e5d8;
                              if ((*(long *)(unaff_x19 + 0x130) != 0) &&
                                 (lVar5 = FUN_04c6bfdc(*(long *)(unaff_x19 + 0x130),
                                                       *(undefined8 *)PTR_DAT_09f1e5d8), lVar5 != 0)
                                 ) {
                                lVar5 = *(long *)(lVar5 + 0x100);
                                uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                FUN_09542000();
                                if (lVar5 != 0) {
                                  FUN_095420d0(lVar5,uVar8,0);
                                  if ((*(long *)(unaff_x19 + 0x138) != 0) &&
                                     (lVar5 = FUN_04c6bfdc(*(long *)(unaff_x19 + 0x138),
                                                           *(undefined8 *)puVar1), lVar5 != 0)) {
                                    lVar5 = *(long *)(lVar5 + 0x100);
                                    uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                    FUN_09542000();
                                    if (lVar5 != 0) {
                                      FUN_095420d0(lVar5,uVar8,0);
                                      if ((*(long *)(unaff_x19 + 0x140) != 0) &&
                                         (lVar5 = FUN_04c6bfdc(*(long *)(unaff_x19 + 0x140),
                                                               *(undefined8 *)puVar1), lVar5 != 0))
                                      {
                                        lVar5 = *(long *)(lVar5 + 0x100);
                                        uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                        FUN_09542000();
                                        if (lVar5 != 0) {
                                          FUN_095420d0(lVar5,uVar8,0);
                                          if ((*(long *)(unaff_x19 + 0x148) != 0) &&
                                             (lVar5 = FUN_04c6bfdc(*(long *)(unaff_x19 + 0x148),
                                                                   *(undefined8 *)puVar1),
                                             lVar5 != 0)) {
                                            lVar5 = *(long *)(lVar5 + 0x100);
                                            uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                            FUN_09542000();
                                            if (lVar5 != 0) {
                                              FUN_095420d0(lVar5,uVar8,0);
                                              if ((*(long *)(unaff_x19 + 0x188) != 0) &&
                                                 (lVar5 = FUN_04d7a1ac(*(long *)(unaff_x19 + 0x188),
                                                                       *(undefined8 *)
                                                                        PTR_DAT_09f2f2e8),
                                                 lVar5 != 0)) {
                                                lVar5 = *(long *)(lVar5 + 0x100);
                                                uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                                FUN_09542000();
                                                puVar1 = PTR_DAT_09f21ad0;
                                                puVar2 = PTR_DAT_09f20070;
                                                if (lVar5 != 0) {
                                                  FUN_095420d0(lVar5,uVar8,0);
                                                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                    thunk_FUN_044a54b4();
                                                  }
                                                  uVar8 = FUN_07a1e8c0(0);
                                                  uVar10 = FUN_07a1e9e8(0);
                                                  uVar8 = FUN_07a2064c(uVar8,uVar10,0);
                                                  *(undefined8 *)(unaff_x19 + 0x2e0) = uVar8;
                                                  *(undefined8 *)(unaff_x19 + 0x2f8) = 0;
                                                  *(undefined8 *)(unaff_x19 + 0x2f0) = 0;
                                                  uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                                  FUN_09834e40(uVar8,0,0);
                                                  *(undefined8 *)(unaff_x19 + 0x300) = uVar8;
                                                  thunk_FUN_044bb4b4(unaff_x19 + 0x300,uVar8);
                                                  puVar2 = PTR_DAT_09f2f330;
                                                  if (*(char *)(unaff_x19 + 0x40) != '\0') {
                                                    uVar8 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                PTR_DAT_09f2f330);
                                                    FUN_094bed1c();
                                                    if (*(int *)(*(long *)PTR_DAT_09f1e6b8 + 0xe4)
                                                        == 0) {
                                                      thunk_FUN_044a54b4();
                                                    }
                                                    UnityEngine_Rigidbody__AddExplosionForce
                                                              (uVar8,0);
                                                    uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_094bed1c();
                                                    FUN_094bd318(uVar8,0);
                                                    return;
                                                  }
                                                  return;
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
          }
        }
      }
    }
  }
LAB_076e80e4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


