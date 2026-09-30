/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 06977f50
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_14;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 in_w8;
  undefined4 *puVar3;
  long unaff_x19;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *unaff_x22;
  long unaff_x23;
  
  *(undefined1 *)(unaff_x23 + 0xd8f) = in_w8;
  puVar3 = *(undefined4 **)(*(long *)PTR_DAT_084868a0 + 0xb8);
  FUN_07cab7ec(*puVar3,puVar3[1],puVar3[2]);
  if (DAT_08974d8a == '\0') {
    FUN_03a8a718(PTR_DAT_08486860);
    DAT_08974d8a = '\x01';
  }
  puVar3 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
  FUN_07cac71c(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
  lVar5 = *(long *)(unaff_x19 + 0x30);
  uVar1 = FUN_045614d0();
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(lVar5 + 0x40);
    *puVar6 = uVar1;
    thunk_FUN_03afed3c(puVar6,uVar1);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x40);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar2 = FUN_07c9e200(uVar1,0,0);
      if ((uVar2 & 1) != 0) {
        puVar6 = (undefined8 *)PTR_DAT_084b7518;
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar6 = (undefined8 *)PTR_DAT_084b7518;
        }
LAB_06978244:
        FUN_07c4fb40(*puVar6,0);
        return;
      }
      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
         (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar5 != 0)) {
        FUN_07d2e078(lVar5,1,0);
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           ((lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar5 != 0 &&
            (lVar5 = FUN_07c99058(lVar5,0), lVar5 != 0)))) {
          FUN_07c9c820(lVar5,*(undefined4 *)(unaff_x19 + 0xc0),0);
          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
             ((lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar5 != 0 &&
              (lVar5 = FUN_07d24e80(lVar5,0), lVar5 != 0)))) {
            FUN_07d2e904(lVar5,2,0);
            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
               ((lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar5 != 0 &&
                (lVar5 = FUN_07d24e80(lVar5,0), lVar5 != 0)))) {
              FUN_07d2e840(lVar5,2,0);
              if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                 ((lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar5 != 0 &&
                  (lVar5 = FUN_07d24e80(lVar5,0), lVar5 != 0)))) {
                FUN_07d2e45c(0,lVar5,0);
                if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                   ((lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar5 != 0 &&
                    (lVar5 = FUN_07d24e80(lVar5,0), lVar5 != 0)))) {
                  FUN_07d2e76c(0,lVar5,0);
                  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                     ((lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar5 != 0 &&
                      (lVar5 = FUN_07d24e80(lVar5,0), lVar5 != 0)))) {
                    FUN_07d2e5e4(0,lVar5,0);
                    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar5 != 0)) {
                      FUN_07d24cc4(lVar5,1,0);
                      if (*(long *)(unaff_x19 + 0x30) != 0) {
                        uVar1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x40);
                        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                          thunk_FUN_03ae8be4();
                        }
                        uVar2 = FUN_07c9c218(uVar1,0,0);
                        if ((uVar2 & 1) == 0) {
                          puVar6 = (undefined8 *)PTR_DAT_084b7528;
                          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
                            thunk_FUN_03ae8be4();
                            puVar6 = (undefined8 *)PTR_DAT_084b7528;
                          }
                          goto LAB_06978244;
                        }
                        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                           (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar5 != 0)) {
                          uVar1 = FUN_07d2ddfc(lVar5,0);
                          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                            thunk_FUN_03ae8be4(*unaff_x22);
                          }
                          FUN_07ca310c(uVar1,0);
                          lVar5 = *(long *)(unaff_x19 + 0x30);
                          if (lVar5 != 0) {
                            lVar4 = *(long *)(lVar5 + 0x40);
                            uVar1 = FUN_06978e60(*(float *)(lVar5 + 100) * DAT_015c5d4c,
                                                 *(float *)(lVar5 + 0x58) * DAT_015c592c,0xc);
                            if (lVar4 != 0) {
                              FUN_07d2decc(lVar4,uVar1,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


