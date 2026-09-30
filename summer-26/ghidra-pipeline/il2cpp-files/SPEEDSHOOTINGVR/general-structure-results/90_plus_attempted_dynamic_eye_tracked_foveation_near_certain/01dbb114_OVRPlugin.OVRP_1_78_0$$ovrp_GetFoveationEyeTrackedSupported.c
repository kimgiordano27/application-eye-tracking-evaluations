/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTrackedSupported
ENTRY_POINT: 01dbb114
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x01dbb1fc) */

uint OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTrackedSupported(void)

{
  bool in_ZR;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int unaff_w22;
  
  if (in_ZR) {
    iVar1 = 0;
  }
  else {
    iVar1 = thunk_FUN_01027034(0);
  }
  uVar4 = FUN_01dbb27c();
  if ((uVar4 & 1) == 0) {
    lVar5 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a7c0);
    FUN_01dbb350();
    FUN_01dbb3b8();
    if (unaff_w22 == -1) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      uVar3 = FUN_01da7858(lVar5,0xffffffff);
    }
    else {
      iVar2 = thunk_FUN_01027034(0);
      if ((long)(ulong)(uint)(iVar2 - iVar1) < (long)unaff_w22) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar3 = FUN_01da7858(lVar5,unaff_w22 - (iVar2 - iVar1));
      }
      else {
        uVar3 = 0;
      }
    }
    uVar4 = FUN_01db86c8();
    if ((uVar4 & 1) == 0) {
      FUN_01db751c();
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3 & 1;
}


