/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01153884
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_EyeGazeState>
               (long param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (param_1 == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bd08);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_0103c2a0(param_4);
    }
  }
  uVar1 = FUN_01d60e34(param_2,0);
  if (param_3 < uVar1) {
    plVar2 = (long *)thunk_FUN_0103ffe0(param_2,*(undefined8 *)PTR_DAT_0234bd08);
    if (plVar2 == (long *)0x0) {
      FUN_00fdc340(param_2,param_3,&stack0x00000010);
    }
    else {
      lVar3 = thunk_FUN_0103fd0c(**(undefined8 **)(param_4 + 0x38));
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_0103ffe0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar2[(long)(int)param_3 + 4] = lVar3;
      thunk_FUN_0106e12c(plVar2 + (long)(int)param_3 + 4,lVar3);
    }
    return;
  }
  thunk_FUN_010303a8(PTR_DAT_0234be28);
  uVar6 = thunk_FUN_010400dc();
  uVar5 = thunk_FUN_010303a8(PTR_DAT_0234be20);
  FUN_01c66cb4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar6,param_4);
}


