/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$get_pose
ENTRY_POINT: 073b2d1c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 123
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__get_pose(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
                    /* try { // try from 073b2d1c to 074b2d23 has its CatchHandler @ 073b34d0 */
  FUN_0373b518(PTR_DAT_07d86518);
  FUN_0373b518(Unity_VisualScripting_Antlr3_Runtime_MissingTokenException_TypeInfo);
  FUN_0373b518(Unity_VisualScripting_MissingValuePortInputException_TypeInfo);
  FUN_0373b518(MissionStatus_TypeInfo);
  FUN_0373b518(Microsoft_MixedReality_OpenXR_MixedRealityFeaturePluginManagement_TypeInfo);
  FUN_0373b518(Mono_Net_Security_MobileAuthenticatedStream_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x5ca) = 1;
  lVar5 = RootMotion_FinalIK_Finger___ctor(*unaff_x20,3);
  lVar9 = *unaff_x21;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar9);
    lVar9 = *unaff_x21;
  }
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 != 0) {
      lVar9 = *(long *)(lVar9 + 0xb8);
      *(undefined2 *)(lVar5 + 0x20) = *(undefined2 *)(lVar9 + 10);
      if (uVar1 != 1) {
        *(undefined2 *)(lVar5 + 0x22) = *(undefined2 *)(lVar9 + 8);
        puVar3 = PTR_DAT_07d99ed0;
        if (2 < uVar1) {
          *(undefined2 *)(lVar5 + 0x24) = 0x20;
          **(long **)(*(long *)puVar3 + 0xb8) = lVar5;
          puVar4 = Unity_VisualScripting_Antlr3_Runtime_MissingTokenException_TypeInfo;
          puVar2 = PTR_DAT_07d86518;
          thunk_FUN_037aeb94(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar5);
          uVar6 = RootMotion_FinalIK_Finger___ctor(*unaff_x20,8);
          FUN_061683b8(uVar6,*(undefined8 *)puVar4,0);
          puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
          *puVar7 = uVar6;
          thunk_FUN_037aeb94(puVar7,uVar6);
          lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar2,4);
          if (lVar5 == 0) goto LAB_073b2f00;
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(undefined8 *)(lVar5 + 0x20) =
                 *(undefined8 *)Unity_VisualScripting_MissingValuePortInputException_TypeInfo;
            thunk_FUN_037aeb94((undefined8 *)(lVar5 + 0x20));
            if (1 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)MissionStatus_TypeInfo;
              thunk_FUN_037aeb94((undefined8 *)(lVar5 + 0x28));
              if (2 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x30) =
                     *(undefined8 *)
                      Microsoft_MixedReality_OpenXR_MixedRealityFeaturePluginManagement_TypeInfo;
                thunk_FUN_037aeb94((undefined8 *)(lVar5 + 0x30));
                if (3 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x38) =
                       *(undefined8 *)Mono_Net_Security_MobileAuthenticatedStream_TypeInfo;
                  thunk_FUN_037aeb94();
                  plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
                  *plVar8 = lVar5;
                  thunk_FUN_037aeb94(plVar8,lVar5);
                  return;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
LAB_073b2f00:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


