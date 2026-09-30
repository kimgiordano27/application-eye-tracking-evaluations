/*
FUNCTION_NAME: FUN_02f26cd0
ENTRY_POINT: 02f26cd0
PROGRAM: simulator-libil2cpp.so
SCORE: 70
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: validity_gate;ray_interaction;frame_behavior;keyword_support;attempted_use
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable
*/


void FUN_02f26cd0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x33) != '\0') {
    if ((param_2 == 0) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_02f26d60;
    iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x1ac);
    if (iVar2 <= *(int *)(param_2 + 0x10)) {
      param_2 = FUN_028023f0(param_2,0,iVar2,0);
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_02e81d44(*(long *)(param_1 + 0x20),param_2,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      iVar2 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36__System_Collections_IEnumerator_get_Current
                        (*(long *)(param_1 + 0x20),0);
      if (*(long *)(param_1 + 0x58) != 0) {
        iVar1 = *(int *)(*(long *)(param_1 + 0x58) + 0x90);
        if (iVar2 == iVar1) {
          return;
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__get_gazeAssistanceColliderFixedSize
                    (*(long *)(param_1 + 0x20),iVar1,0);
          return;
        }
      }
    }
  }
LAB_02f26d60:
                    /* WARNING: Subroutine does not return */
  FUN_018c4afc();
}


