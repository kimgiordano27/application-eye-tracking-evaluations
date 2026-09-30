/*
FUNCTION_NAME: OVRManager$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05cfc534
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__SetEyeTrackedFoveatedRenderingEnabled(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb8270);
    FUN_02fe925c(PTR_DAT_06fb8268);
    FUN_02fe925c(PTR_DAT_06fb8278);
    *(undefined1 *)(unaff_x19 + 0x765) = 1;
  }
  puVar1 = PTR_DAT_06fb8270;
  if (*(char *)(unaff_x21 + 0x48) == '\0') {
    return;
  }
  *(undefined1 *)(unaff_x21 + 0x40) = 0;
  plVar7 = *(long **)(unaff_x21 + 0x28);
  uVar2 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
  FUN_051102dc();
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06fb8268) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_05cfc608;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02feb5b8(plVar7,*(long *)PTR_DAT_06fb8268,1);
LAB_05cfc608:
                    /* WARNING: Could not recover jumptable at 0x05cfc61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
  return;
}


