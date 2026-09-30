/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraExtrinsics
ENTRY_POINT: 069711b0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraExtrinsics(void)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  
  plVar3 = (long *)FUN_045614d0();
  if (plVar3 != (long *)0x0) {
    FUN_07fa749c(plVar3,*(undefined8 *)(unaff_x19 + 0x30),0);
    (**(code **)(*plVar3 + 0x5e8))(plVar3);
    FUN_07fa7948(plVar3,0xf,0);
    FUN_07fa7884(plVar3,3,0);
    if ((unaff_x21 & 1) == 0) {
                    /* try { // try from 06971208 to 06a7122f has its CatchHandler @ 0697126c */
      FUN_07fa7af8(plVar3,1,0);
    }
    lVar4 = FUN_07c9c69c();
                    /* try { // try from 06971230 to 06a71243 has its CatchHandler @ 06971260 */
    lVar5 = FUN_07c99058();
    if ((lVar5 != 0) && (uVar6 = FUN_07c9c69c(lVar5,0), lVar4 != 0)) {
      FUN_07cace00(lVar4,uVar6,0,0);
      lVar4 = FUN_04561560();
      puVar2 = PTR_DAT_084b72c8;
      if (lVar4 != 0) {
        FUN_07cab4d8(0x43820000,0x41c80000,lVar4,0);
        FUN_07cab034(0,0x3f800000,lVar4,0);
        FUN_07cab1c0(0,0x3f800000,lVar4,0);
        lVar5 = *(long *)(unaff_x19 + 0x20);
        lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
        FUN_0679343c(lVar4,0);
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x40) = unaff_x20;
          thunk_FUN_03afed3c();
          if (lVar5 != 0) {
            lVar7 = *(long *)(lVar5 + 0x10);
            lVar8 = *(long *)PTR_DAT_084b72c0;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                plVar3 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                *plVar3 = lVar4;
                thunk_FUN_03afed3c(plVar3,lVar4);
                return;
              }
              FUN_04de85b0(lVar5,lVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


