/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 05d788a0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_rotation(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long unaff_x19;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x22;
  long unaff_x25;
  undefined8 *puVar8;
  
  puVar2 = PTR_DAT_072ae1c8;
  puVar1 = PTR_DAT_072ae1c0;
  lVar5 = *(long *)(param_1 + 8);
  puVar8 = *(undefined8 **)(unaff_x25 + 0x540);
  if (lVar5 == 0) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      param_2 = *unaff_x22;
    }
    uVar7 = **(undefined8 **)(param_2 + 0xb8);
    lVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
                    /* try { // try from 05d788f4 to 05e78903 has its CatchHandler @ 05d78904 */
    FUN_055c676c(lVar5,uVar7,*(undefined8 *)PTR_DAT_072b1450,0);
                    /* catch() { ... } // from try @ 05d78870 with catch @ 05d78904
                       catch() { ... } // from try @ 05d788f4 with catch @ 05d78904 */
                    /* try { // try from 05d78908 to 05e7890b has its CatchHandler @ 05d78914 */
                    /* try { // try from 05d7890c to 05e78917 has its CatchHandler @ 05d78438 */
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar4 = lVar5;
    thunk_FUN_0333a630(plVar4,lVar5);
  }
                    /* catch() { ... } // from try @ 05d78908 with catch @ 05d78914 */
  *(long *)(unaff_x19 + 0x48) = lVar5;
  thunk_FUN_0333a630((long *)(unaff_x19 + 0x48),lVar5);
  *(undefined8 *)(unaff_x19 + 0x50) = 0xffffffffffffffff;
  uVar3 = FUN_06b9df48(*puVar8,0);
  *(undefined4 *)(unaff_x19 + 0x58) = uVar3;
  uVar3 = FUN_06b9df48(*(undefined8 *)puVar2,0);
  *(undefined4 *)(unaff_x19 + 0x5c) = uVar3;
  uVar3 = FUN_06b9df48(*(undefined8 *)puVar1,0);
  *(undefined4 *)(unaff_x19 + 0x60) = uVar3;
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar5 = *unaff_x22;
  }
  lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar6 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *unaff_x22;
    }
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
    lVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
    FUN_055c676c(lVar6,uVar7,*(undefined8 *)PTR_DAT_072b1458,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar4 = lVar6;
    thunk_FUN_0333a630(plVar4,lVar6);
  }
  *(long *)(unaff_x19 + 0x88) = lVar6;
  thunk_FUN_0333a630((long *)(unaff_x19 + 0x88),lVar6);
  thunk_FUN_06be6094();
  return;
}


