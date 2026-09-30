/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.EyeGazeState>
ENTRY_POINT: 02f78d04
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_EyeGazeState>(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x21;
  ulong uVar4;
  undefined8 uVar5;
  long *unaff_x25;
  
  puVar1 = PTR_DAT_06762db0;
  uVar4 = 0;
  do {
    if ((long)(int)*(uint *)(param_1 + 0x18) <= (long)uVar4) {
      return;
    }
    if (*(uint *)(param_1 + 0x18) <= uVar4) {
LAB_02f78e10:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    uVar5 = *(undefined8 *)(param_1 + uVar4 * 8 + 0x20);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar2 = UnityEngine_Font__add_textureRebuilt(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = *unaff_x21;
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_02f78e10;
      lVar3 = *(long *)(lVar3 + uVar4 * 8 + 0x20);
      uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
      FUN_02f8a3e4();
      if (lVar3 == 0) break;
      FUN_02f8a0a4(lVar3,uVar5,0);
    }
    else if ((long)uVar4 < (long)*(int *)(unaff_x20 + 0x18)) {
      FUN_02f790e8();
    }
    param_1 = *unaff_x21;
    uVar4 = uVar4 + 1;
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


