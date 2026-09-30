/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 03384810
PROGRAM: gunraiders-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  uint uVar6;
  ulong unaff_x23;
  long *unaff_x24;
  
  while (uVar3 = FUN_03152760(), (uVar3 & 1) == 0) {
    unaff_x22 = (long *)(**(code **)(*unaff_x22 + 0x858))
                                  (unaff_x22,*(undefined8 *)(*unaff_x22 + 0x860));
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar3 = FUN_032ea0d4(unaff_x22,0,0);
    if ((uVar3 & 1) == 0) {
      if ((unaff_x23 & 1) != 0) {
        if ((unaff_x20 == (long *)0x0) || (lVar4 = (**(code **)(*unaff_x20 + 0x878))(), lVar4 == 0))
        goto LAB_03384914;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar1) {
          uVar6 = 0;
          goto LAB_03384894;
        }
      }
      uVar2 = 0;
      unaff_x20 = (long *)0x0;
      goto LAB_033848f0;
    }
    if (unaff_x22 == (long *)0x0) goto LAB_03384914;
    (**(code **)(*unaff_x22 + 0x2d8))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x2e0));
  }
  uVar2 = 1;
  unaff_x20 = unaff_x22;
  goto LAB_033848f0;
  while( true ) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    uVar6 = uVar6 + 1;
    if ((int)uVar1 <= (int)uVar6) break;
LAB_03384894:
    if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    plVar5 = *(long **)(lVar4 + (long)(int)uVar6 * 8 + 0x20);
    if (plVar5 == (long *)0x0) {
LAB_03384914:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    uVar2 = FUN_03152760();
    if ((uVar2 & 1) != 0) goto LAB_033848f0;
  }
  unaff_x20 = (long *)0x0;
LAB_033848f0:
  *unaff_x19 = (long)unaff_x20;
  return uVar2 & 1;
}


