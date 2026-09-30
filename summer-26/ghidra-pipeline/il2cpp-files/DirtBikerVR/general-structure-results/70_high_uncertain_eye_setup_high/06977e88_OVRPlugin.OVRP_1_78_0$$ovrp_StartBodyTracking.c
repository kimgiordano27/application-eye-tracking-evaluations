/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartBodyTracking
ENTRY_POINT: 06977e88
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *puVar6;
  long *unaff_x22;
  undefined8 *unaff_x23;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07ca310c();
  lVar1 = thunk_FUN_03ac74bc(*unaff_x23);
  FUN_07c9d2fc(lVar1,*unaff_x21,0);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
                    /* try { // try from 06977ed0 to 06a77fe3 has its CatchHandler @ 06977ed0
                       catch() { ... } // from try @ 06977ed0 with catch @ 06977ed0
                       catch() { ... } // from try @ 069781ac with catch @ 06977ed0
                       catch() { ... } // from try @ 06978428 with catch @ 06977ed0
                       catch() { ... } // from try @ 069784e8 with catch @ 06977ed0
                       catch() { ... } // from try @ 06978584 with catch @ 06977ed0 */
  uVar2 = FUN_07c9e200(lVar1,0,0);
  if ((uVar2 & 1) == 0) {
    if (lVar1 != 0) {
      lVar3 = FUN_07c9c69c(lVar1,0);
      uVar4 = FUN_07c98f88();
      if (lVar3 != 0) {
        FUN_07cacdbc(lVar3,uVar4,0);
        if (DAT_08974d8f == '\0') {
          FUN_03a8a718(PTR_DAT_084868a0);
          DAT_08974d8f = '\x01';
        }
        puVar5 = *(undefined4 **)(*(long *)PTR_DAT_084868a0 + 0xb8);
        FUN_07cab7ec(*puVar5,puVar5[1],puVar5[2],lVar3,0);
        if (DAT_08974d8a == '\0') {
          FUN_03a8a718(PTR_DAT_08486860);
          DAT_08974d8a = '\x01';
        }
        puVar5 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
        FUN_07cac71c(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar3,0);
        lVar3 = *(long *)(unaff_x19 + 0x30);
        uVar4 = FUN_045614d0(lVar1,*(undefined8 *)PTR_DAT_0848e878);
        if (lVar3 != 0) {
          puVar6 = (undefined8 *)(lVar3 + 0x40);
          *puVar6 = uVar4;
          thunk_FUN_03afed3c(puVar6,uVar4);
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x40);
            if (*(int *)(*unaff_x22 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar2 = FUN_07c9e200(uVar4,0,0);
            if ((uVar2 & 1) != 0) {
              puVar6 = (undefined8 *)PTR_DAT_084b7518;
              if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
                puVar6 = (undefined8 *)PTR_DAT_084b7518;
              }
              goto LAB_06978244;
            }
            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
               (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar1 != 0)) {
              FUN_07d2e078(lVar1,1,0);
              if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                 ((lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar1 != 0 &&
                  (lVar1 = FUN_07c99058(lVar1,0), lVar1 != 0)))) {
                FUN_07c9c820(lVar1,*(undefined4 *)(unaff_x19 + 0xc0),0);
                if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                   ((lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar1 != 0 &&
                    (lVar1 = FUN_07d24e80(lVar1,0), lVar1 != 0)))) {
                  FUN_07d2e904(lVar1,2,0);
                  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                     ((lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar1 != 0 &&
                      (lVar1 = FUN_07d24e80(lVar1,0), lVar1 != 0)))) {
                    FUN_07d2e840(lVar1,2,0);
                    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                       ((lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar1 != 0 &&
                        (lVar1 = FUN_07d24e80(lVar1,0), lVar1 != 0)))) {
                      FUN_07d2e45c(0,lVar1,0);
                      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                         ((lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar1 != 0 &&
                          (lVar1 = FUN_07d24e80(lVar1,0), lVar1 != 0)))) {
                        FUN_07d2e76c(0,lVar1,0);
                        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                           ((lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar1 != 0 &&
                            (lVar1 = FUN_07d24e80(lVar1,0), lVar1 != 0)))) {
                          FUN_07d2e5e4(0,lVar1,0);
                          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                             (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar1 != 0)) {
                            FUN_07d24cc4(lVar1,1,0);
                            if (*(long *)(unaff_x19 + 0x30) != 0) {
                              uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x40);
                              if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                                thunk_FUN_03ae8be4();
                              }
                              uVar2 = FUN_07c9c218(uVar4,0,0);
                              if ((uVar2 & 1) == 0) {
                                puVar6 = (undefined8 *)PTR_DAT_084b7528;
                                if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4();
                                  puVar6 = (undefined8 *)PTR_DAT_084b7528;
                                }
                                goto LAB_06978244;
                              }
                              if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                 (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar1 != 0)
                                 ) {
                                uVar4 = FUN_07d2ddfc(lVar1,0);
                                if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4(*unaff_x22);
                                }
                                FUN_07ca310c(uVar4,0);
                                lVar1 = *(long *)(unaff_x19 + 0x30);
                                if (lVar1 != 0) {
                                  lVar3 = *(long *)(lVar1 + 0x40);
                                  uVar4 = FUN_06978e60(*(float *)(lVar1 + 100) * DAT_015c5d4c,
                                                       *(float *)(lVar1 + 0x58) * DAT_015c592c,0xc);
                                  if (lVar3 != 0) {
                                    FUN_07d2decc(lVar3,uVar4,0);
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
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  puVar6 = (undefined8 *)PTR_DAT_084b7520;
  if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    puVar6 = (undefined8 *)PTR_DAT_084b7520;
  }
LAB_06978244:
  FUN_07c4fb40(*puVar6,0);
  return;
}


