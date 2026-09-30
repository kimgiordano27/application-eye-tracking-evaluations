/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTracked
ENTRY_POINT: 05d4edd8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 142
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTracked(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_07398b9f & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f73f20);
    FUN_02fe925c(PTR_DAT_06fb9390);
    FUN_02fe925c(PTR_DAT_06fb4e90);
    DAT_07398b9f = 1;
  }
  puVar1 = PTR_DAT_06fb9390;
                    /* try { // try from 05d4ee14 to 05e4eebb has its CatchHandler @ 05d4ee14
                       catch() { ... } // from try @ 05d4ee14 with catch @ 05d4ee14
                       catch() { ... } // from try @ 05d4ef2c with catch @ 05d4ee14
                       catch() { ... } // from try @ 05d4ef64 with catch @ 05d4ee14
                       catch() { ... } // from try @ 05d4ef90 with catch @ 05d4ee14
                       catch() { ... } // from try @ 05d4efc0 with catch @ 05d4ee14 */
  if (*(char *)(param_1 + 0x39) == '\0') {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x28);
  uVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f73f20);
  FUN_05a645d0(uVar2,param_1,*(undefined8 *)puVar1,0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06fb4e90) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
        goto LAB_05d4eeb4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02feb5b8(plVar7,*(long *)PTR_DAT_06fb4e90,9);
LAB_05d4eeb4:
                    /* WARNING: Could not recover jumptable at 0x05d4eec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
  return;
}


