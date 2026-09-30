/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingSupported
ENTRY_POINT: 06978094
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar1 = FUN_07d24e80();
  if (lVar1 != 0) {
                    /* try { // try from 069780a0 to 06a780a7 has its CatchHandler @ 069784a4 */
    FUN_07d2e904(lVar1,2,0);
                    /* try { // try from 069780bc to 06a780bf has its CatchHandler @ 0697849c */
    if (((*(long *)(unaff_x19 + 0x30) != 0) &&
        (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar1 != 0)) &&
       (lVar1 = FUN_07d24e80(lVar1,0), lVar1 != 0)) {
      FUN_07d2e840(lVar1,2,0);
                    /* try { // try from 069780dc to 06a780e3 has its CatchHandler @ 06978494 */
      if (((*(long *)(unaff_x19 + 0x30) != 0) &&
          (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar1 != 0)) &&
         (lVar1 = FUN_07d24e80(lVar1,0), lVar1 != 0)) {
                    /* try { // try from 069780f4 to 06a78137 has its CatchHandler @ 069784b8 */
        FUN_07d2e45c(0,lVar1,0);
        if (((*(long *)(unaff_x19 + 0x30) != 0) &&
            (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar1 != 0)) &&
           (lVar1 = FUN_07d24e80(lVar1,0), lVar1 != 0)) {
          FUN_07d2e76c(0,lVar1,0);
          if (((*(long *)(unaff_x19 + 0x30) != 0) &&
              (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar1 != 0)) &&
             (lVar1 = FUN_07d24e80(lVar1,0), lVar1 != 0)) {
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
                  if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4();
                  }
                  FUN_07c4fb40(*(undefined8 *)PTR_DAT_084b7528,0);
                  return;
                }
                if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                   (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar1 != 0)) {
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
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


