/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraIntrinsics
ENTRY_POINT: 0697112c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraIntrinsics
               (ulong param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08489258);
    FUN_03a8a718(PTR_DAT_0848d0a0);
    FUN_03a8a718(PTR_DAT_08487320);
    FUN_03a8a718(PTR_DAT_084b72c0);
    FUN_03a8a718(PTR_DAT_084b72c8);
    *(undefined1 *)(unaff_x20 + 0xfb) = 1;
  }
  lVar3 = thunk_FUN_03ac74bc(*unaff_x23);
  FUN_07c9d4dc(lVar3,0);
  puVar2 = PTR_DAT_08489258;
  if (lVar3 != 0) {
                    /* try { // try from 069711a4 to 06a711cb has its CatchHandler @ 06971270 */
    thunk_FUN_07ca23d0(lVar3,param_3,0);
    plVar4 = (long *)FUN_045614d0(lVar3,*(undefined8 *)puVar2);
    if (plVar4 != (long *)0x0) {
      FUN_07fa749c(plVar4,*(undefined8 *)(param_2 + 0x30),0);
      (**(code **)(*plVar4 + 0x5e8))(plVar4,param_3,*(undefined8 *)(*plVar4 + 0x5f0));
      FUN_07fa7948(plVar4,0xf,0);
      FUN_07fa7884(plVar4,3,0);
      if ((unaff_x21 & 1) == 0) {
        FUN_07fa7af8(plVar4,1,0);
      }
      lVar5 = FUN_07c9c69c(lVar3,0);
      lVar6 = FUN_07c99058(param_2,0);
      if ((lVar6 != 0) && (uVar7 = FUN_07c9c69c(lVar6,0), puVar2 = PTR_DAT_0848d0a0, lVar5 != 0)) {
        FUN_07cace00(lVar5,uVar7,0,0);
        lVar5 = FUN_04561560(lVar3,*(undefined8 *)puVar2);
        puVar2 = PTR_DAT_084b72c8;
        if (lVar5 != 0) {
          FUN_07cab4d8(0x43820000,0x41c80000,lVar5,0);
          FUN_07cab034(0,0x3f800000,lVar5,0);
          FUN_07cab1c0(0,0x3f800000,lVar5,0);
          lVar6 = *(long *)(param_2 + 0x20);
          lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
          FUN_0679343c(lVar5,0);
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x40) = lVar3;
            thunk_FUN_03afed3c((long *)(lVar5 + 0x40),lVar3);
            if (lVar6 != 0) {
              lVar3 = *(long *)(lVar6 + 0x10);
              lVar8 = *(long *)PTR_DAT_084b72c0;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar3 != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar4 = lVar5;
                  thunk_FUN_03afed3c(plVar4,lVar5);
                  return;
                }
                FUN_04de85b0(lVar6,lVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
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


