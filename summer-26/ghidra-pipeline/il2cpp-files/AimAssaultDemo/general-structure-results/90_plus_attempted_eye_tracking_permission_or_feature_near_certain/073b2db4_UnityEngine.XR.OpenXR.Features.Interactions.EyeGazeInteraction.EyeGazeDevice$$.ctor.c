/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$.ctor
ENTRY_POINT: 073b2db4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_3;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice___ctor
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  uint in_w9;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *(undefined2 *)(unaff_x19 + 0x22) = *(undefined2 *)(param_1 + 8);
  puVar2 = PTR_DAT_07d99ed0;
  if (2 < in_w9) {
    *(undefined2 *)(unaff_x19 + 0x24) = 0x20;
    **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
    puVar3 = Unity_VisualScripting_Antlr3_Runtime_MissingTokenException_TypeInfo;
    puVar1 = PTR_DAT_07d86518;
    thunk_FUN_037aeb94(*(undefined8 *)(*(long *)puVar2 + 0xb8));
    uVar4 = RootMotion_FinalIK_Finger___ctor(*unaff_x20,8);
    FUN_061683b8(uVar4,*(undefined8 *)puVar3,0);
    puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *puVar5 = uVar4;
    thunk_FUN_037aeb94(puVar5,uVar4);
    lVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,4);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined8 *)(lVar6 + 0x20) =
           *(undefined8 *)Unity_VisualScripting_MissingValuePortInputException_TypeInfo;
      thunk_FUN_037aeb94((undefined8 *)(lVar6 + 0x20));
      if (1 < *(uint *)(lVar6 + 0x18)) {
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)MissionStatus_TypeInfo;
        thunk_FUN_037aeb94((undefined8 *)(lVar6 + 0x28));
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x30) =
               *(undefined8 *)
                Microsoft_MixedReality_OpenXR_MixedRealityFeaturePluginManagement_TypeInfo;
          thunk_FUN_037aeb94((undefined8 *)(lVar6 + 0x30));
          if (3 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x38) =
                 *(undefined8 *)Mono_Net_Security_MobileAuthenticatedStream_TypeInfo;
            thunk_FUN_037aeb94();
            plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
            *plVar7 = lVar6;
            thunk_FUN_037aeb94(plVar7,lVar6);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


