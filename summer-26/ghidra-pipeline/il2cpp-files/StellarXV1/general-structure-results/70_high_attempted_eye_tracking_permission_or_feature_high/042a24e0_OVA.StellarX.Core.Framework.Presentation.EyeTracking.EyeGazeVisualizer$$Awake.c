/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Presentation.EyeTracking.EyeGazeVisualizer$$Awake
ENTRY_POINT: 042a24e0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVA_StellarX_Core_Framework_Presentation_EyeTracking_EyeGazeVisualizer__Awake(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  
  lVar3 = *(long *)(unaff_x19 + 0x30);
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x78);
    lVar5 = *unaff_x20;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        thunk_FUN_040ec700();
        return;
      }
      FUN_05c26d88(lVar3,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


