/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Quatf>
ENTRY_POINT: 0562e8f4
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Quatf>
               (long param_1,long param_2,void *param_3,int param_4,int param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (param_1 == 0) {
    FUN_04980b90(param_6);
  }
  if (param_2 == 0) {
    thunk_FUN_049ae08c(&DAT_0ae8ed78);
    uVar1 = thunk_FUN_04983f60();
    uVar2 = thunk_FUN_049ae08c(&DAT_0af56288);
    System_RuntimeType__get_Assembly(uVar1,uVar2,0);
    goto LAB_0562ea20;
  }
  if (param_4 < 0) {
LAB_0562e978:
    thunk_FUN_049ae08c(&DAT_0ae8ed80);
    uVar1 = thunk_FUN_04983f60();
    uVar2 = thunk_FUN_049ae08c(&DAT_0af62928);
    puVar4 = &DAT_0af3c008;
  }
  else {
    if (*(int *)(param_2 + 0x18) < param_4) goto LAB_0562e978;
    if ((-1 < param_5) && (param_5 <= *(int *)(param_2 + 0x18) - param_4)) {
      memcpy(&stack0x00000000,param_3,0x60);
      FUN_0564e430(param_2);
      return;
    }
    thunk_FUN_049ae08c(&DAT_0ae8ed80);
    uVar1 = thunk_FUN_04983f60();
    uVar2 = thunk_FUN_049ae08c(&DAT_0af58a10);
    puVar4 = &DAT_0af34090;
  }
  uVar3 = thunk_FUN_049ae08c(puVar4);
  FUN_08cc1128(uVar1,uVar2,uVar3,0);
LAB_0562ea20:
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar1,param_6);
}


