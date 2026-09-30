/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$GetInteractionProfileType
ENTRY_POINT: 073b260c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  short sVar5;
  ushort uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long unaff_x19;
  
                    /* try { // try from 073b260c to 074b264b has its CatchHandler @ 073b3540 */
  uVar7 = FUN_060bf9c0();
  if (((uVar7 & 1) == 0) || (unaff_x19 = FUN_060c316c(), unaff_x19 != 0)) {
    puVar2 = PTR_DAT_07d8c7d8;
    sVar5 = FUN_060bb390(unaff_x19,0,0);
                    /* try { // try from 073b2664 to 074b269f has its CatchHandler @ 073b34ac */
    if (sVar5 == 0x6b) {
      uVar6 = FUN_060bb390(unaff_x19,1,0);
      if ((0x40 < uVar6) && (uVar6 = FUN_060bb390(unaff_x19,1,0), uVar6 < 0x5b)) {
        unaff_x19 = FUN_060c316c(unaff_x19,1,*(int *)(unaff_x19 + 0x10) + -1,0);
      }
    }
    puVar4 = System_Resources_MissingManifestResourceException_TypeInfo;
    puVar3 = PTR_DAT_07dbe838;
    puVar1 = PTR_DAT_07d88078;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar8 = FUN_06aa54c8(unaff_x19,*(undefined8 *)puVar4,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar1);
    }
    plVar9 = (long *)FUN_061d5328(0);
    if (plVar9 != (long *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
      if (lVar10 != 0) {
        FUN_061c6b20(lVar10,uVar8,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


