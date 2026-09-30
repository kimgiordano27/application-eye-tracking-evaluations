/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01f37340
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_EyeGazeState>(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 uVar6;
  
  FUN_01ae9ed0();
  puVar2 = Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__;
  uVar6 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar3 = FUN_0304eec0(uVar6,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar4 = FUN_03059c1c(lVar3,0);
  if ((uVar4 & 1) == 0) {
    return 1;
  }
  uVar6 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  plVar5 = (long *)FUN_0304eec0(uVar6,0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)StringLiteral_2235 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) {
      plVar5 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)StringLiteral_2235) {
      plVar5 = (long *)0x0;
    }
  }
  uVar6 = thunk_FUN_01aef934(plVar5,0);
  return uVar6;
}


