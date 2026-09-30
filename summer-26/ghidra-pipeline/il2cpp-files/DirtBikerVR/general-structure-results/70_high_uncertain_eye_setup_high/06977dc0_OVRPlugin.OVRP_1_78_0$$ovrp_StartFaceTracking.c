/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartFaceTracking
ENTRY_POINT: 06977dc0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartFaceTracking(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar9;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_08487320);
  FUN_03a8a718(PTR_DAT_08486738);
  FUN_03a8a718(PTR_DAT_084b7510);
  FUN_03a8a718(PTR_DAT_084b7518);
  FUN_03a8a718(PTR_DAT_084b7520);
  FUN_03a8a718(PTR_DAT_084b7528);
  *(undefined1 *)(unaff_x20 + 0x12a) = 1;
  lVar4 = FUN_07c98f88();
  puVar3 = PTR_DAT_084b7510;
  puVar1 = PTR_DAT_08486738;
  if (lVar4 != 0) {
    lVar4 = FUN_07cae590(lVar4,*(undefined8 *)PTR_DAT_084b7510,0);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_07c99058(lVar4,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    puVar2 = PTR_DAT_08487320;
    uVar6 = FUN_07c9c218(uVar5,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07ca310c(uVar5,0);
    }
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    FUN_07c9d2fc(lVar4,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar6 = FUN_07c9e200(lVar4,0,0);
    if ((uVar6 & 1) != 0) {
      puVar9 = (undefined8 *)PTR_DAT_084b7520;
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar9 = (undefined8 *)PTR_DAT_084b7520;
      }
LAB_06978244:
      FUN_07c4fb40(*puVar9,0);
      return;
    }
    if (lVar4 != 0) {
      lVar7 = FUN_07c9c69c(lVar4,0);
      uVar5 = FUN_07c98f88();
      if (lVar7 != 0) {
        FUN_07cacdbc(lVar7,uVar5,0);
        if (DAT_08974d8f == '\0') {
          FUN_03a8a718(PTR_DAT_084868a0);
          DAT_08974d8f = '\x01';
        }
        puVar8 = *(undefined4 **)(*(long *)PTR_DAT_084868a0 + 0xb8);
        FUN_07cab7ec(*puVar8,puVar8[1],puVar8[2],lVar7,0);
        if (DAT_08974d8a == '\0') {
          FUN_03a8a718(PTR_DAT_08486860);
          DAT_08974d8a = '\x01';
        }
        puVar8 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
        FUN_07cac71c(*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar7,0);
        lVar7 = *(long *)(unaff_x19 + 0x30);
        uVar5 = FUN_045614d0(lVar4,*(undefined8 *)PTR_DAT_0848e878);
        if (lVar7 != 0) {
          puVar9 = (undefined8 *)(lVar7 + 0x40);
          *puVar9 = uVar5;
          thunk_FUN_03afed3c(puVar9,uVar5);
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x40);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar6 = FUN_07c9e200(uVar5,0,0);
            if ((uVar6 & 1) != 0) {
              puVar9 = (undefined8 *)PTR_DAT_084b7518;
              if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
                puVar9 = (undefined8 *)PTR_DAT_084b7518;
              }
              goto LAB_06978244;
            }
            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
               (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar4 != 0)) {
              FUN_07d2e078(lVar4,1,0);
              if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                 ((lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar4 != 0 &&
                  (lVar4 = FUN_07c99058(lVar4,0), lVar4 != 0)))) {
                FUN_07c9c820(lVar4,*(undefined4 *)(unaff_x19 + 0xc0),0);
                if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                   ((lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar4 != 0 &&
                    (lVar4 = FUN_07d24e80(lVar4,0), lVar4 != 0)))) {
                  FUN_07d2e904(lVar4,2,0);
                  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                     ((lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar4 != 0 &&
                      (lVar4 = FUN_07d24e80(lVar4,0), lVar4 != 0)))) {
                    FUN_07d2e840(lVar4,2,0);
                    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                       ((lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar4 != 0 &&
                        (lVar4 = FUN_07d24e80(lVar4,0), lVar4 != 0)))) {
                      FUN_07d2e45c(0,lVar4,0);
                      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                         ((lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar4 != 0 &&
                          (lVar4 = FUN_07d24e80(lVar4,0), lVar4 != 0)))) {
                        FUN_07d2e76c(0,lVar4,0);
                        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                           ((lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar4 != 0 &&
                            (lVar4 = FUN_07d24e80(lVar4,0), lVar4 != 0)))) {
                          FUN_07d2e5e4(0,lVar4,0);
                          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                             (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar4 != 0)) {
                            FUN_07d24cc4(lVar4,1,0);
                            if (*(long *)(unaff_x19 + 0x30) != 0) {
                              uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x40);
                              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                thunk_FUN_03ae8be4();
                              }
                              uVar6 = FUN_07c9c218(uVar5,0,0);
                              if ((uVar6 & 1) == 0) {
                                puVar9 = (undefined8 *)PTR_DAT_084b7528;
                                if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4();
                                  puVar9 = (undefined8 *)PTR_DAT_084b7528;
                                }
                                goto LAB_06978244;
                              }
                              if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                 (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar4 != 0)
                                 ) {
                                uVar5 = FUN_07d2ddfc(lVar4,0);
                                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4(*(long *)puVar1);
                                }
                                FUN_07ca310c(uVar5,0);
                                lVar4 = *(long *)(unaff_x19 + 0x30);
                                if (lVar4 != 0) {
                                  lVar7 = *(long *)(lVar4 + 0x40);
                                  uVar5 = FUN_06978e60(*(float *)(lVar4 + 100) * DAT_015c5d4c,
                                                       *(float *)(lVar4 + 0x58) * DAT_015c592c,0xc);
                                  if (lVar7 != 0) {
                                    FUN_07d2decc(lVar7,uVar5,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


