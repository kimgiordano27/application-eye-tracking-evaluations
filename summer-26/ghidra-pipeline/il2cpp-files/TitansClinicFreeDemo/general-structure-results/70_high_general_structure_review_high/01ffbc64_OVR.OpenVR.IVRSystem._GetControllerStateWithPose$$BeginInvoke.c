/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$BeginInvoke
ENTRY_POINT: 01ffbc64
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__BeginInvoke(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *plVar2;
  
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01ffbc48 with catch @ 01ffbc64
                        */
  plVar2 = (long *)(unaff_x26 + 0x38);
  *plVar2 = unaff_x25;
  thunk_FUN_01286abc(plVar2);
                    /* try { // try from 01ffbc7c to 020fbc7f has its CatchHandler @ 01ffbcac */
  *(long *)(unaff_x26 + 0x20) = unaff_x24 + (long)unaff_w23 * 2;
                    /* try { // try from 01ffbc80 to 020fbcaf has its CatchHandler @ 01ffbc30 */
  *(long *)(unaff_x26 + 0x10) = unaff_x24;
  *(long *)(unaff_x26 + 0x18) = unaff_x24;
  *(long *)(unaff_x26 + 0x40) = unaff_x22;
  *(long *)(unaff_x26 + 0x48) = unaff_x22 + unaff_w21;
  *(long *)(unaff_x26 + 0x50) = unaff_x22;
  if (*plVar2 == 0) {
    if ((unaff_x20 == 0) || (plVar2 = *(long **)(unaff_x20 + 0x30), plVar2 == (long *)0x0))
    goto LAB_01ffbcf4;
                    /* catch() { ... } // from try @ 01ffbc7c with catch @ 01ffbcac */
                    /* try { // try from 01ffbcb0 to 020fbcbb has its CatchHandler @ 01ffbcd0 */
    uVar1 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
  }
  else {
    uVar1 = FUN_01fe1348(*plVar2,0);
  }
                    /* try { // try from 01ffbcbc to 020fbcc7 has its CatchHandler @ 01ffbc30 */
  *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
  thunk_FUN_01286abc();
                    /* try { // try from 01ffbcc8 to 020fbccf has its CatchHandler @ 01ffbcd0 */
  if (*(long *)(unaff_x19 + 0x58) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01ffbcb0 with catch @ 01ffbcd0
                       catch(type#2 @ 00000000) { ... } // from try @ 01ffbcc8 with catch @ 01ffbcd0
                        */
    FUN_01fe1394(*(long *)(unaff_x19 + 0x58),*(undefined8 *)(unaff_x19 + 0x50),
                 *(undefined8 *)(unaff_x19 + 0x20),0);
    return;
  }
LAB_01ffbcf4:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


