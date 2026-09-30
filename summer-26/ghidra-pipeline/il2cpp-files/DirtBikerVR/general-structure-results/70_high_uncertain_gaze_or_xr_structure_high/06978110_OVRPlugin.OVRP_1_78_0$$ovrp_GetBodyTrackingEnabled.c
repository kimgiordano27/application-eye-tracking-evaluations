/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingEnabled
ENTRY_POINT: 06978110
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_9;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingEnabled(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  if (param_1 != 0) {
    FUN_07d2e76c(0,param_1,0);
    if (((*(long *)(unaff_x19 + 0x30) != 0) &&
        (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar1 != 0)) &&
       (lVar1 = FUN_07d24e80(lVar1,0), lVar1 != 0)) {
      FUN_07d2e5e4(0,lVar1,0);
                    /* try { // try from 06978154 to 06a78167 has its CatchHandler @ 069784b4 */
      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
         (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar1 != 0)) {
        FUN_07d24cc4(lVar1,1,0);
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x40);
                    /* try { // try from 06978178 to 06a7817b has its CatchHandler @ 069784b0 */
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
                    /* try { // try from 06978180 to 06a7818b has its CatchHandler @ 0697848c */
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
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


