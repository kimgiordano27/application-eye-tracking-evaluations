/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$Invoke
ENTRY_POINT: 01ffb59c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


long * OVR_OpenVR_IVRSystem__PollNextEventWithPose__Invoke(long param_1)

{
  short *psVar1;
  byte bVar2;
  long *plVar3;
  long unaff_x19;
  long *unaff_x20;
  
  thunk_FUN_01279b34(*(undefined8 *)(param_1 + 0x8e0));
  *(undefined1 *)(unaff_x19 + 0x2e6) = 1;
  if ((char)unaff_x20[5] == '\0') {
    plVar3 = (long *)unaff_x20[4];
    if (plVar3 == (long *)0x0) {
LAB_01ffb644:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x318))(plVar3,*(undefined8 *)(*plVar3 + 800));
    if (unaff_x20[2] != 0) {
      if (plVar3 == (long *)0x0) goto LAB_01ffb644;
      plVar3[2] = unaff_x20[2];
      thunk_FUN_01286abc();
    }
    psVar1 = (short *)((long)unaff_x20 + 0x2a);
    unaff_x20 = plVar3;
    if ((*psVar1 != 0) && (plVar3 != (long *)0x0)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_027c38e0 + 0x130);
      if ((bVar2 <= *(byte *)(*plVar3 + 0x130)) &&
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_027c38e0))
      {
        *(short *)(plVar3 + 4) = *psVar1;
      }
    }
  }
  return unaff_x20;
}


