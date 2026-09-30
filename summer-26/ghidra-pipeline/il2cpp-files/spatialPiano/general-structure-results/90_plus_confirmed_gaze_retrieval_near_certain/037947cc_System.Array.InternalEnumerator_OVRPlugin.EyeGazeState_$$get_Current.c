/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$get_Current
ENTRY_POINT: 037947cc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__get_Current
               (undefined4 param_1,undefined4 param_2,long *param_3,long *param_4,long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  *param_3 = (long)param_4;
  *(undefined4 *)(param_3 + 2) = param_1;
  *(undefined4 *)((long)param_3 + 0x14) = param_2;
  if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar1 = *(long *)(param_5 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  lVar1 = **(long **)(lVar1 + 0xc0);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c(lVar1);
  }
  lVar3 = *param_4;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar1) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_03794868;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0(param_4,lVar1,2);
LAB_03794868:
  lVar1 = (*(code *)*puVar2)(param_4,puVar2[1]);
  param_3[1] = lVar1;
  *(undefined4 *)(param_3 + 3) = 0xffffffff;
  return;
}


