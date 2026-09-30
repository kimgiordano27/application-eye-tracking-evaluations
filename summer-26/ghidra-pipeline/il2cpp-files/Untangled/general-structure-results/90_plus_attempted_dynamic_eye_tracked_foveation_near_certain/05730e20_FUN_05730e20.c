/*
FUNCTION_NAME: FUN_05730e20
ENTRY_POINT: 05730e20
PROGRAM: Untangled-libil2cpp.so
SCORE: 150
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


long FUN_05730e20(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  puVar1 = PTR_DAT_06d58960;
  if ((DAT_071c38c7 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d58968);
    FUN_02f07e70(PTR_DAT_06d58960);
    FUN_02f07e70(PTR_DAT_06d58970);
    DAT_071c38c7 = 1;
  }
  uVar2 = (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(*param_1 + 0x280));
  plVar3 = (long *)thunk_FUN_02ef170c(uVar2,*(undefined8 *)puVar1);
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    lVar5 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto OVRManager__set_eyeTrackedFoveatedRenderingEnabled;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar3,lVar5,9);
OVRManager__set_eyeTrackedFoveatedRenderingEnabled:
    lVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (lVar5 != 0) {
      return lVar5;
    }
  }
  lVar6 = *(long *)PTR_DAT_06d58968;
  lVar5 = *(long *)(lVar6 + 0x38);
  if (lVar5 == 0) {
    FUN_02eea7c4(lVar6);
    lVar5 = *(long *)(lVar6 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02eea768();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar1 = PTR_DAT_06d58970;
  lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02eea768();
  }
  uVar2 = **(undefined8 **)(lVar5 + 0xb8);
  lVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_05fd9338(lVar5,uVar2,0);
  return lVar5;
}


