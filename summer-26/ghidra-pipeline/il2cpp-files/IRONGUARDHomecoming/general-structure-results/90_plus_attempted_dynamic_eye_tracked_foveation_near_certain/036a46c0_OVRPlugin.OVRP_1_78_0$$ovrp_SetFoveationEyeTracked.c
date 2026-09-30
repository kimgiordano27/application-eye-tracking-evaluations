/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetFoveationEyeTracked
ENTRY_POINT: 036a46c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 163
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetFoveationEyeTracked
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  long in_x10;
  int *piVar2;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w23;
  
  piVar2 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar2 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
      goto LAB_036a46f8;
    }
    in_x9 = in_x9 + -1;
    piVar2 = piVar2 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_036a46f8:
  (*(code *)*puVar1)();
  FUN_036a4648();
  if ((*(long *)(unaff_x21 + 0x10) != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
    if ((unaff_w20 < *(uint *)(*(long *)(unaff_x21 + 0x10) + 0x18)) &&
       (unaff_w20 < *(uint *)(*(long *)(unaff_x21 + 0x18) + 0x18))) {
      FUN_03667194();
      *(uint *)(unaff_x21 + 0x44) = *(uint *)(unaff_x21 + 0x44) & (unaff_w23 ^ 0xffffffff);
      if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_036a47ac;
      if (unaff_w20 < *(uint *)(*(long *)(unaff_x21 + 0x18) + 0x18)) {
        FUN_036673a4();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_036a47ac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


