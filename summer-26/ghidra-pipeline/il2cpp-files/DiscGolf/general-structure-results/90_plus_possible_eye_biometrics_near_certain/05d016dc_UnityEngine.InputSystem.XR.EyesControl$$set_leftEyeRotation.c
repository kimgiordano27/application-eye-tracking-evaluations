/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_leftEyeRotation
ENTRY_POINT: 05d016dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 134
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


long * UnityEngine_InputSystem_XR_EyesControl__set_leftEyeRotation(void)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0xe2b) & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fcb10);
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<string>_GetEnumerator__);
    *(undefined1 *)(unaff_x21 + 0xe2b) = 1;
  }
  if (unaff_x20 == (long *)0x0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar4 = thunk_FUN_02dd3144();
    uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a0f5b8);
    FUN_0544bf54(uVar4,uVar5,0);
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>__ctor__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>__ctor__)) {
      plVar2 = (long *)FUN_05ce0998();
      if (plVar2 != (long *)0x0) {
        lVar6 = *plVar2;
        bVar1 = *(byte *)(*(long *)PTR_DAT_069fcb10 + 0x130);
        if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_069fcb10))
        {
          uVar4 = thunk_FUN_02dfd288(PTR_DAT_069fcb10);
          uVar4 = FUN_02979eb8(plVar2,uVar4);
          uVar5 = thunk_FUN_02dfd288(Method_System_Collections_Generic_HashSet<string>_Remove__);
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar4,uVar5);
        }
        bVar1 = *(byte *)(*(long *)Method_System_Collections_Generic_HashSet<string>_GetEnumerator__
                         + 0x130);
        if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_System_Collections_Generic_HashSet<string>_GetEnumerator__)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar2);
        }
      }
      *(undefined1 *)(unaff_x19 + 0x80) = 0;
      return plVar2;
    }
    uVar4 = thunk_FUN_02dfd288(Method_System_Collections_Generic_HashSet<string>_Clear__);
    uVar5 = FUN_0534f2b4(uVar4,0);
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar4 = thunk_FUN_02dd3144();
    uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a0f5b8);
    FUN_0544bfcc(uVar4,uVar5,uVar3,0);
  }
  uVar5 = thunk_FUN_02dfd288(Method_System_Collections_Generic_HashSet<string>_Remove__);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar4,uVar5);
}


