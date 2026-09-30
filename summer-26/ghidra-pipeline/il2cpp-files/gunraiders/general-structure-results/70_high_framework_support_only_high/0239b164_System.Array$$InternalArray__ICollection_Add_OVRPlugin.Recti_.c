/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Recti>
ENTRY_POINT: 0239b164
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_Recti>
               (long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_01c5d288(PTR_DAT_0422fdb8);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01c723f0(param_4);
    }
  }
  if (param_1 != 0) {
    if (*(int *)(*(long *)PTR_DAT_0422fdb8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_0239d604(param_1,param_2,param_3,*(undefined8 *)(*(long *)(param_4 + 0x38) + 8));
    return;
  }
  thunk_FUN_01c273e8(PTR_DAT_0422fa20);
  uVar1 = thunk_FUN_01c496e0();
  uVar2 = thunk_FUN_01c273e8(PTR_DAT_04231c48);
  FUN_0323fc78(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar1,param_4);
}


