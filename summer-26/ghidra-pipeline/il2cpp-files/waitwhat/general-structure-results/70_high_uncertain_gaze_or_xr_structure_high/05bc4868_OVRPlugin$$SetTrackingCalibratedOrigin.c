/*
FUNCTION_NAME: OVRPlugin$$SetTrackingCalibratedOrigin
ENTRY_POINT: 05bc4868
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__SetTrackingCalibratedOrigin(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  if ((*(long *)(unaff_x19 + 0xd0) == 0) ||
     (plVar5 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
                    /* try { // try from 05bc4884 to 05cc4893 has its CatchHandler @ 05bc4898 */
  lVar2 = *plVar5;
                    /* try { // try from 05bc4894 to 05cc489b has its CatchHandler @ 05bc4710 */
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* catch() { ... } // from try @ 05bc47f0 with catch @ 05bc4898
                       catch() { ... } // from try @ 05bc4884 with catch @ 05bc4898 */
                    /* try { // try from 05bc489c to 05cc489f has its CatchHandler @ 05bc48a8 */
  if (uVar3 != 0) {
                    /* try { // try from 05bc48a0 to 05cc48ab has its CatchHandler @ 05bc4710 */
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05bc489c with catch @ 05bc48a8
                        */
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_070f4570) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_05bc48dc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)PTR_DAT_070f4570,0);
LAB_05bc48dc:
  in_stack_000000e8 = in_stack_00000088;
  in_stack_000000e0 = in_stack_00000080;
  in_stack_000000f8 = in_stack_00000098;
  in_stack_000000f0 = in_stack_00000090;
  in_stack_00000108 = in_stack_000000a8;
  in_stack_00000100 = in_stack_000000a0;
  in_stack_00000118 = in_stack_000000b8;
  in_stack_00000110 = in_stack_000000b0;
  (*(code *)*puVar1)(plVar5,&stack0x000000e0,puVar1[1]);
  return;
}


