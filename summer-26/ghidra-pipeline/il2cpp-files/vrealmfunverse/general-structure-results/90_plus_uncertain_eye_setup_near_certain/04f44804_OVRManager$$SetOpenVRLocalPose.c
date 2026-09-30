/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 04f44804
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetOpenVRLocalPose(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  undefined8 uVar4;
  
                    /* catch() { ... } // from try @ 04f445ac with catch @ 04f44804 */
                    /* catch() { ... } // from try @ 04f44520 with catch @ 04f44808 */
  lVar2 = FUN_04dc11c8(param_1,param_2,0);
  puVar1 = UnityEngine_VFX_VFXSpawnerState_var;
                    /* catch() { ... } // from try @ 04f447a8 with catch @ 04f4480c */
  if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 04f447a0 with catch @ 04f44810 */
    uVar4 = *(undefined8 *)UnityEngine_VFX_VFXSpawnerState_var;
    lVar3 = thunk_FUN_02b79548(lVar2,uVar4);
                    /* try { // try from 04f44828 to 0504483f has its CatchHandler @ 04f44900 */
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)puVar1;
      *unaff_x19 = lVar3;
      lVar3 = thunk_FUN_02b79548(lVar2,uVar4);
                    /* try { // try from 04f44840 to 050448ef has its CatchHandler @ 04f44370 */
      if (lVar3 != 0) goto LAB_04f4485c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(lVar2,uVar4);
  }
  *unaff_x19 = 0;
LAB_04f4485c:
  thunk_FUN_02bb0e9c();
  return;
}


