/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTrackedSupported
ENTRY_POINT: 056a3c3c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


long OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTrackedSupported(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x20;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = *(long **)(unaff_x20 + 0x68);
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0d468);
    FUN_02d965b8(PTR_DAT_06a0f068);
    *(undefined1 *)(unaff_x19 + 0x8c0) = 1;
  }
  puVar1 = PTR_DAT_06a0d468;
  lVar2 = *plVar4;
  lVar3 = **(long **)(lVar2 + 0xb8);
  if (lVar3 == 0) {
    if (*(int *)(*(long *)PTR_DAT_06a0d468 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)PTR_DAT_06a0d468);
      lVar2 = *plVar4;
    }
    lVar3 = thunk_FUN_02dd3144(lVar2);
    lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
    FUN_0552aca4(lVar3,0);
    uVar6 = *(undefined8 *)(lVar5 + 8);
    lVar2 = *plVar4;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar5 + 0x10);
    *(undefined8 *)(lVar3 + 0x10) = uVar6;
    **(long **)(lVar2 + 0xb8) = lVar3;
    LeanTween__value(*(undefined8 *)(*plVar4 + 0xb8),lVar3);
  }
  return lVar3;
}


