/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay
ENTRY_POINT: 06d97be8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x06d97e8c) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorRay
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  int in_w10;
  undefined4 *unaff_x19;
  long *unaff_x24;
  int unaff_w25;
  undefined8 in_stack_00000018;
  
  *(int *)(param_2 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      param_1 = param_1 + (long)(int)uVar1 * 0x10;
      *(uint *)(param_2 + 0x18) = uVar1 + 1;
      puVar2 = (undefined8 *)(param_1 + 0x20);
      *puVar2 = param_3;
      *(undefined8 *)(param_1 + 0x28) = param_4;
      thunk_FUN_03d233cc(puVar2,0);
    }
    else {
      FUN_05088c98();
    }
    if ((unaff_w25 < 0) && (in_stack_00000018._4_1_ != '\0')) {
      thunk_FUN_03cdf404();
    }
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0701e078(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


