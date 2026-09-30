/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 02fc7358
PROGRAM: vrfs-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_5;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x02fc73c4) */

undefined8 OVRManager__get_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined4 unaff_w19;
  long unaff_x20;
  uint unaff_w22;
  long lVar6;
  int unaff_w27;
  undefined8 in_stack_00000008;
  
  (**(code **)(*(long *)(param_1 + 0x168) + 8))();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x20 + 0x20) = unaff_w22 + 1;
  if (lVar5 != 0) {
    uVar2 = *(uint *)(lVar5 + 0x18);
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar4 = unaff_w27 / (int)uVar2;
    }
    uVar3 = unaff_w27 - iVar4 * uVar2;
    if (uVar3 < uVar2) {
      lVar6 = *(long *)(unaff_x20 + 0x18);
      piVar1 = (int *)(lVar5 + (ulong)uVar3 * 4 + 0x20);
      if (lVar6 == 0) goto LAB_02fc74b8;
      if (unaff_w22 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)unaff_w22 * 0x10;
        *(int *)(lVar6 + 0x20) = unaff_w27;
        *(int *)(lVar6 + 0x24) = *piVar1 + -1;
        *(undefined4 *)(lVar6 + 0x28) = in_stack_00000008._4_4_;
        *(undefined4 *)(lVar6 + 0x2c) = unaff_w19;
        *piVar1 = unaff_w22 + 1;
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
LAB_02fc74b8:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


