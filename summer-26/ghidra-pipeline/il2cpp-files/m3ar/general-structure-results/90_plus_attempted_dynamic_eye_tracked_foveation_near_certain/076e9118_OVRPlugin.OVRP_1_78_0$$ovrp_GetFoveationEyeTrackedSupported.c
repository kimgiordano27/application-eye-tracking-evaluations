/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTrackedSupported
ENTRY_POINT: 076e9118
PROGRAM: m3ar-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTrackedSupported(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_095482f7 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f8e6c0);
    FUN_0403162c(PTR_DAT_08f66370);
    FUN_0403162c(PTR_DAT_08fae540);
    FUN_0403162c(PTR_DAT_08fae548);
    FUN_0403162c(PTR_DAT_08fae530);
    FUN_0403162c(PTR_DAT_08fae538);
    DAT_095482f7 = 1;
  }
  puVar1 = PTR_DAT_08fae538;
  if (*(char *)(param_1 + 0xdc) != '\0') {
    lVar4 = *(long *)(param_1 + 0x20);
    uVar3 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f8e6c0);
    FUN_05329de0(uVar3,param_1,*(undefined8 *)puVar1,0);
    puVar2 = PTR_DAT_08fae530;
    puVar1 = PTR_DAT_08f66370;
    if (lVar4 != 0) {
      FUN_054b4948(lVar4,uVar3,*(undefined8 *)PTR_DAT_08fae548);
      lVar4 = *(long *)(param_1 + 0x20);
      uVar3 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
      FUN_07449f28(uVar3,param_1,*(undefined8 *)puVar2,0);
      if (lVar4 != 0) {
        FUN_054b4a94(lVar4,uVar3,*(undefined8 *)PTR_DAT_08fae540);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  return;
}


