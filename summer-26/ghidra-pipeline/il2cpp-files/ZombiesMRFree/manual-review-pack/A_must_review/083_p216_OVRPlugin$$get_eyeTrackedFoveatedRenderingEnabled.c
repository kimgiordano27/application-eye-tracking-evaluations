/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05d1af90
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 150
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  long lVar1;
  uint uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  while( true ) {
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    uVar5 = *(undefined4 *)(param_1 + 0x28);
    uVar6 = *(undefined4 *)(param_1 + 0x2c);
    uVar3 = FUN_068eca84(*(undefined4 *)(param_1 + 0x20),0);
    if (unaff_x19 == 0) break;
    if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x24) {
LAB_05d1aff8:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar1 = unaff_x19 + unaff_x24 * 0x10;
    *(undefined4 *)(lVar1 + 0x20) = uVar3;
    *(undefined4 *)(lVar1 + 0x24) = uVar4;
    *(undefined4 *)(lVar1 + 0x28) = uVar5;
    *(undefined4 *)(lVar1 + 0x2c) = uVar6;
    unaff_w23 = unaff_w23 + 1;
    if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w23) {
      return;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w23) goto LAB_05d1aff8;
    if (unaff_x21 == 0) break;
    uVar2 = *(uint *)(unaff_x22 + (long)(int)unaff_w23 * 4 + 0x20);
    unaff_x24 = (long)(int)uVar2;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar2) goto LAB_05d1aff8;
    if (unaff_x20 == 0) break;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar2) goto LAB_05d1aff8;
    param_1 = unaff_x21 + unaff_x24 * 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


