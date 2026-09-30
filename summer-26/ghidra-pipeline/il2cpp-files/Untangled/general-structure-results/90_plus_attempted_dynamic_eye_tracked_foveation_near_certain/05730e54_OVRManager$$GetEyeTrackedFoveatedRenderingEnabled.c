/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05730e54
PROGRAM: Untangled-libil2cpp.so
SCORE: 155
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_10;validity_or_gating_hits_3;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


long OVRManager__GetEyeTrackedFoveatedRenderingEnabled(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long lVar8;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_02f07e70();
  FUN_02f07e70(PTR_DAT_06d58970);
  *(undefined1 *)(unaff_x21 + 0x8c7) = 1;
  uVar2 = (**(code **)(*unaff_x19 + 0x278))();
  plVar3 = (long *)thunk_FUN_02ef170c(uVar2,*unaff_x20);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x20) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto OVRManager__set_eyeTrackedFoveatedRenderingEnabled;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*unaff_x20,9);
OVRManager__set_eyeTrackedFoveatedRenderingEnabled:
    lVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (lVar5 != 0) {
      return lVar5;
    }
  }
  lVar8 = *(long *)PTR_DAT_06d58968;
  lVar5 = *(long *)(lVar8 + 0x38);
  if (lVar5 == 0) {
    FUN_02eea7c4(lVar8);
    lVar5 = *(long *)(lVar8 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02eea768();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar1 = PTR_DAT_06d58970;
  lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02eea768();
  }
  uVar2 = **(undefined8 **)(lVar5 + 0xb8);
  lVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_05fd9338(lVar5,uVar2,0);
  return lVar5;
}


