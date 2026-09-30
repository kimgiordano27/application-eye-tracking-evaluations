/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 05d78944
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_position(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x21;
  undefined8 uVar5;
  long *unaff_x22;
  undefined8 *unaff_x23;
  
  uVar1 = FUN_06b9df48(param_1,0);
  *(undefined4 *)(unaff_x21 + 0x14) = uVar1;
  uVar1 = FUN_06b9df48(*unaff_x23,0);
  *(undefined4 *)(unaff_x21 + 0x18) = uVar1;
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
                    /* try { // try from 05d78994 to 05e78ad3 has its CatchHandler @ 05d78994
                       catch() { ... } // from try @ 05d78994 with catch @ 05d78994
                       catch() { ... } // from try @ 05d78d08 with catch @ 05d78994
                       catch() { ... } // from try @ 05d78e70 with catch @ 05d78994
                       catch() { ... } // from try @ 05d78efc with catch @ 05d78994
                       catch() { ... } // from try @ 05d78f80 with catch @ 05d78994 */
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
    FUN_055c676c(lVar4,uVar5,*(undefined8 *)PTR_DAT_072b1458,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar3 = lVar4;
    thunk_FUN_0333a630(plVar3,lVar4);
  }
  *(long *)(unaff_x19 + 0x88) = lVar4;
  thunk_FUN_0333a630((long *)(unaff_x19 + 0x88),lVar4);
  thunk_FUN_06be6094();
  return;
}


