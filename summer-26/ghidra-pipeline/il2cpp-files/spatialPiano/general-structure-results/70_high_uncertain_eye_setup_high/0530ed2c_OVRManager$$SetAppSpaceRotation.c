/*
FUNCTION_NAME: OVRManager$$SetAppSpaceRotation
ENTRY_POINT: 0530ed2c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpaceRotation(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined1 auVar3 [16];
  undefined8 in_stack_00000008;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_02f421d0();
LAB_0530ed4c:
      auVar3 = (*(code *)*puVar1)();
      uVar2 = auVar3._8_8_;
      if (unaff_x22 != 0) {
        uVar2 = *(undefined8 *)(unaff_x19 + 0x170);
        *(int *)(unaff_x22 + 0x20) = auVar3._0_4_;
        *(undefined4 *)(unaff_x22 + 0x24) = in_stack_00000008._4_4_;
        *(undefined8 *)(unaff_x22 + 0x10) = unaff_x21;
        if (*(long *)(unaff_x22 + 0x18) != 0) {
          FUN_05315554(*(long *)(unaff_x22 + 0x18));
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8(auVar3._0_8_,uVar2);
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0530ed4c;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


