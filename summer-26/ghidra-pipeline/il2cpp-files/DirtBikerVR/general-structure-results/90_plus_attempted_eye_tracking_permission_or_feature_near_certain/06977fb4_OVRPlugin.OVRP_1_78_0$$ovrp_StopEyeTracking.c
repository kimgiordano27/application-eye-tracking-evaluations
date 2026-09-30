/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopEyeTracking
ENTRY_POINT: 06977fb4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_14;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopEyeTracking(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *unaff_x22;
  
  FUN_07cac71c(param_2,param_3,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  lVar4 = *(long *)(unaff_x19 + 0x30);
  uVar1 = FUN_045614d0();
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x40);
    *puVar5 = uVar1;
                    /* try { // try from 06977fe4 to 06a77feb has its CatchHandler @ 0697846c */
    thunk_FUN_03afed3c(puVar5,uVar1);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
                    /* try { // try from 06977ff4 to 06a7802b has its CatchHandler @ 06978468 */
      uVar1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x40);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar2 = FUN_07c9e200(uVar1,0,0);
      if ((uVar2 & 1) != 0) {
        puVar5 = (undefined8 *)PTR_DAT_084b7518;
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar5 = (undefined8 *)PTR_DAT_084b7518;
        }
LAB_06978244:
        FUN_07c4fb40(*puVar5,0);
        return;
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
                        uVar1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x40);
                        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                          thunk_FUN_03ae8be4();
                        }
                        uVar2 = FUN_07c9c218(uVar1,0,0);
                        if ((uVar2 & 1) == 0) {
                          puVar5 = (undefined8 *)PTR_DAT_084b7528;
                          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
                            thunk_FUN_03ae8be4();
                            puVar5 = (undefined8 *)PTR_DAT_084b7528;
                          }
                          goto LAB_06978244;
                        }
                        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                           (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar4 != 0)) {
                          uVar1 = FUN_07d2ddfc(lVar4,0);
                          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                            thunk_FUN_03ae8be4(*unaff_x22);
                          }
                          FUN_07ca310c(uVar1,0);
                          lVar4 = *(long *)(unaff_x19 + 0x30);
                          if (lVar4 != 0) {
                            lVar3 = *(long *)(lVar4 + 0x40);
                            uVar1 = FUN_06978e60(*(float *)(lVar4 + 100) * DAT_015c5d4c,
                                                 *(float *)(lVar4 + 0x58) * DAT_015c592c,0xc);
                            if (lVar3 != 0) {
                              FUN_07d2decc(lVar3,uVar1,0);
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


