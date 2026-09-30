/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 02c22544
PROGRAM: sharks-libil2cpp.so
SCORE: 150
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined2 unaff_w21;
  
  uVar3 = FUN_017fc3f4();
  *(undefined8 *)(unaff_x19 + 0x110) = uVar3;
  thunk_FUN_0188fd20();
  uVar1 = *(uint *)(unaff_x19 + 0x118);
  lVar5 = *(long *)(unaff_x19 + 0x110);
  *(uint *)(unaff_x19 + 0x118) = uVar1 + 1;
  if (lVar5 != 0) {
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    *(undefined2 *)(lVar5 + (long)(int)uVar1 * 2 + 0x20) = unaff_w21;
    if ((uVar1 + 1 == uVar2) || (uVar4 = FUN_02c224ac(), (uVar4 & 1) == 0)) {
      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_02c225c4;
      FUN_02b6517c(*(long *)(unaff_x19 + 0x68),*unaff_x20,*(undefined4 *)(unaff_x19 + 0x118),0);
      *(undefined4 *)(unaff_x19 + 0x118) = 0;
    }
    return;
  }
LAB_02c225c4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


