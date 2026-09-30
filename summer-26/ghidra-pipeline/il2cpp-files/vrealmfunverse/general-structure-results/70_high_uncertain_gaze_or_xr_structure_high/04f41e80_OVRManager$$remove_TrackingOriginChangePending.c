/*
FUNCTION_NAME: OVRManager$$remove_TrackingOriginChangePending
ENTRY_POINT: 04f41e80
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRManager__remove_TrackingOriginChangePending(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  undefined8 uVar4;
  
  lVar2 = FUN_04dc11c8(param_1,param_2,0);
  puVar1 = UnityEngine_VFX_VFXSpawnerState_var;
  if (lVar2 != 0) {
                    /* try { // try from 04f41e90 to 05041e97 has its CatchHandler @ 04f41fe4 */
    uVar4 = *(undefined8 *)UnityEngine_VFX_VFXSpawnerState_var;
                    /* try { // try from 04f41ea0 to 05041ed7 has its CatchHandler @ 04f41fe8 */
    lVar3 = thunk_FUN_02b79548(lVar2,uVar4);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)puVar1;
      *unaff_x19 = lVar3;
      lVar3 = thunk_FUN_02b79548(lVar2,uVar4);
      if (lVar3 != 0) goto LAB_04f41ed8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(lVar2,uVar4);
  }
  *unaff_x19 = 0;
LAB_04f41ed8:
                    /* try { // try from 04f41ed8 to 05041f4b has its CatchHandler @ 04f41d94 */
  thunk_FUN_02bb0e9c();
  return;
}


