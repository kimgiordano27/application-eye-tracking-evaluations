/*
FUNCTION_NAME: UnityEngine.AndroidJNI$$ToShortArray
ENTRY_POINT: 05b12abc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_AndroidJNI__ToShortArray(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  
  FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponentInParent<OVRFaceExpressions>__);
  FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponentInParent<Rigidbody>__);
  *(undefined1 *)(unaff_x21 + 0x6b8) = 1;
  FUN_05b10668();
  if (unaff_x20 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x10);
    uVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_System_Reflection_Emit_DynamicMethod_get_ReflectedType__);
    FUN_03fbf2e8();
    puVar1 = 
    Method_System_Runtime_Remoting_Contexts_DynamicPropertyCollection_RegisterDynamicProperty__;
    if (lVar3 != 0) {
      FUN_05aa7eb4(lVar3,uVar2,0);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      uVar2 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
      FUN_03fbf2e8();
      if (lVar3 != 0) {
        FUN_05aa8014(lVar3,uVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


