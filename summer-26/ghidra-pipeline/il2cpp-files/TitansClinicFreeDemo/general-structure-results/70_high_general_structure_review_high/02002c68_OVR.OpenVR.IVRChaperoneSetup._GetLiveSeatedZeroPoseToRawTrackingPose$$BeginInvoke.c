/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 02002c68
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x02002da4) */

long * OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__BeginInvoke
                 (long param_1)

{
  byte bVar1;
  bool in_ZR;
  long *plVar2;
  long lVar3;
  uint in_w9;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  if (in_ZR) {
    plVar2 = (long *)thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4208);
    FUN_01ea54d8(plVar2,0);
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_027c41f0 + 0x130);
    if ((in_w9 < bVar1) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_027c41f0))
    goto LAB_02002d9c;
    plVar2 = (long *)thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4210);
    FUN_01ea5704(plVar2,0);
                    /* try { // try from 02002cb4 to 02102cbb has its CatchHandler @ 02002dec */
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x198))(plVar2);
    lVar3 = *unaff_x24;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01220628();
      lVar3 = *unaff_x24;
    }
    if ((long *)**(long **)(lVar3 + 0xb8) != (long *)0x0) {
      (**(code **)(*(long *)**(long **)(lVar3 + 0xb8) + 0x2b8))();
      if (in_stack_00000008._4_1_ != '\0') {
        thunk_FUN_0125a7c4();
      }
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
LAB_02002d9c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


