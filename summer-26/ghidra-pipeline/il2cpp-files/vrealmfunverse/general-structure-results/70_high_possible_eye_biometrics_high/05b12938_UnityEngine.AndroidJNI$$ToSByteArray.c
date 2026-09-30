/*
FUNCTION_NAME: UnityEngine.AndroidJNI$$ToSByteArray
ENTRY_POINT: 05b12938
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_AndroidJNI__ToSByteArray(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  long lVar4;
  
  FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponentInParent<OVRFaceExpressions>__);
  FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponentInParent<Rigidbody>__);
  FUN_02b3c81c(Method_DG_Tweening_Core_Easing_EaseCurve_Evaluate__);
  *(undefined1 *)(unaff_x21 + 0x6b7) = 1;
  FUN_05b10530();
  if (unaff_x19 != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x10);
    uVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_System_Reflection_Emit_DynamicMethod_get_ReflectedType__);
    FUN_03fbf2e8();
    puVar1 = 
    Method_System_Runtime_Remoting_Contexts_DynamicPropertyCollection_RegisterDynamicProperty__;
    if (lVar4 != 0) {
      FUN_05aa7e04(lVar4,uVar2,0);
      lVar4 = *(long *)(unaff_x19 + 0x10);
      uVar2 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
      FUN_03fbf2e8();
      if (lVar4 != 0) {
        FUN_05aa7f64(lVar4,uVar2,0);
        if (*(long *)(unaff_x20 + 0x288) != 0) {
          *(undefined8 *)(*(long *)(unaff_x20 + 0x288) + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
          thunk_FUN_02bb0e9c();
          if (*(char *)(unaff_x20 + 0x298) != '\0') {
            return;
          }
          if (*(long *)(unaff_x20 + 0x288) != 0) {
            FUN_05acdcb8(*(long *)(unaff_x20 + 0x288),0);
            uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
            uVar3 = *(undefined8 *)(unaff_x20 + 0x278);
            if (*(int *)(*(long *)Method_DG_Tweening_Core_Easing_EaseCurve_Evaluate__ + 0xe4) == 0)
            {
              thunk_FUN_02b9ad44();
            }
            FUN_05aae58c(uVar2,uVar3,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


