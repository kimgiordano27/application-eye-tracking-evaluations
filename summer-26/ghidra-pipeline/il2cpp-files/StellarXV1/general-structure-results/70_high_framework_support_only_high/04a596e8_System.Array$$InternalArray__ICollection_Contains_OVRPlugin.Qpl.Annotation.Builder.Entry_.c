/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 04a596e8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (long param_1,undefined8 param_2,int param_3,int param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
                    /* catch() { ... } // from try @ 04a5964c with catch @ 04a596e8
                       catch() { ... } // from try @ 04a596d8 with catch @ 04a596e8 */
                    /* try { // try from 04a596ec to 04b596ef has its CatchHandler @ 04a596f8 */
                    /* try { // try from 04a596f0 to 04b596fb has its CatchHandler @ 04a592ac */
                    /* catch() { ... } // from try @ 04a596ec with catch @ 04a596f8 */
  if (*(long *)(param_5 + 0x38) == 0) {
    FUN_040b1b28(param_5);
  }
  if (param_1 == 0) {
    thunk_FUN_040dedf8(&DAT_094ae080);
    uVar1 = thunk_FUN_040b4efc();
    uVar2 = thunk_FUN_040dedf8(&DAT_0955d688);
    FUN_075ce0d0(uVar1,uVar2,0);
    goto LAB_04a59820;
  }
  if (param_3 < 0) {
LAB_04a59778:
    thunk_FUN_040dedf8(&DAT_094ae088);
    uVar1 = thunk_FUN_040b4efc();
    uVar2 = thunk_FUN_040dedf8(&DAT_0956a2f8);
    puVar4 = &DAT_09544eb8;
  }
  else {
    if (*(int *)(param_1 + 0x18) < param_3) goto LAB_04a59778;
    if ((-1 < param_4) && (param_4 <= *(int *)(param_1 + 0x18) - param_3)) {
      FUN_04a70740(param_1);
      return;
    }
    thunk_FUN_040dedf8(&DAT_094ae088);
    uVar1 = thunk_FUN_040b4efc();
    uVar2 = thunk_FUN_040dedf8(&DAT_0955fb40);
    puVar4 = &DAT_0953e2b8;
  }
  uVar3 = thunk_FUN_040dedf8(puVar4);
  FUN_075d19bc(uVar1,uVar2,uVar3,0);
LAB_04a59820:
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar1,param_5);
}


