/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$Shuffle<Vector3>
ENTRY_POINT: 032ab7a8
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__Shuffle<Vector3>(uint param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint unaff_w19;
  long unaff_x20;
  
  if (param_1 <= unaff_w19) {
    thunk_FUN_02c7737c(PTR_DAT_065cb038);
    uVar5 = thunk_FUN_02cea894();
    uVar4 = thunk_FUN_02c7737c(PTR_DAT_065dacd0);
    FUN_04e9ff98(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar5);
  }
  plVar1 = (long *)thunk_FUN_02cea798();
  if (plVar1 == (long *)0x0) {
    FUN_02ce7ab0();
  }
  else {
    lVar2 = thunk_FUN_02cea4e8(**(undefined8 **)(unaff_x20 + 0x38));
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
      uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar5,0);
    }
    if (*(uint *)(plVar1 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    plVar1[(long)(int)unaff_w19 + 4] = lVar2;
  }
  return;
}


