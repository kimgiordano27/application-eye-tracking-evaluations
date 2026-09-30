/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.GrabAndLocate$$GetRaycastRay
ENTRY_POINT: 06e0f61c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 151
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


long Meta_XR_MRUtilityKit_BuildingBlocks_GrabAndLocate__GetRaycastRay(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long unaff_x24;
  long *plVar6;
  long *unaff_x27;
  undefined1 uStack000000000000000c;
  
                    /* try { // try from 06e0f620 to 06f0f62b has its CatchHandler @ 06e0fa0c */
  uStack000000000000000c = 0;
  lVar1 = thunk_FUN_03cf4e64(*unaff_x27,&stack0x0000000c);
                    /* try { // try from 06e0f63c to 06f0f65b has its CatchHandler @ 06e0fa28 */
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_03cf5138(lVar1,*(undefined8 *)(*unaff_x23 + 0x40)), lVar2 == 0)) {
LAB_06e0f758:
    uVar5 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar5,0);
  }
  if (1 < *(uint *)(unaff_x23 + 3)) {
    unaff_x23[5] = lVar1;
    thunk_FUN_03d233cc(unaff_x23 + 5,lVar1);
                    /* try { // try from 06e0f66c to 06f0f67b has its CatchHandler @ 06e0fa1c */
    lVar1 = FUN_0712c438();
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_03cf5138(lVar1,*(undefined8 *)(*unaff_x23 + 0x40)), lVar2 == 0))
    goto LAB_06e0f758;
    if (2 < *(uint *)(unaff_x23 + 3)) {
      plVar6 = unaff_x23 + 6;
      *plVar6 = lVar1;
                    /* try { // try from 06e0f6a4 to 06f0f6f3 has its CatchHandler @ 06e0f9f8 */
      thunk_FUN_03d233cc(plVar6,lVar1);
      if ((unaff_x24 != 0) && (plVar3 = (long *)FUN_0702dc3c(), plVar3 != (long *)0x0)) {
        if (*(long *)(*plVar3 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc();
        }
        pcVar4 = (char *)thunk_FUN_03cf5388();
        if (*pcVar4 == '\0') {
                    /* try { // try from 06e0f708 to 06f0f70b has its CatchHandler @ 06e0f9f4 */
          FUN_06f75240(*(undefined8 *)PTR_DAT_08e92cb8);
          if (unaff_x20 == 0) goto LAB_06e0f750;
                    /* try { // try from 06e0f728 to 06f0f733 has its CatchHandler @ 06e0f9c4 */
          FUN_06f84868();
        }
        else {
          if (*(uint *)(unaff_x23 + 3) < 3) goto LAB_06e0f754;
          unaff_x19 = *plVar6;
        }
        return unaff_x19;
      }
LAB_06e0f750:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 06e0f750 to 06f0f753 has its CatchHandler @ 06e0f9e0 */
      FUN_03c8fb30();
    }
  }
LAB_06e0f754:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


