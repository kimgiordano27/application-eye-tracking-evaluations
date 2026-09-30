/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterDeviceLayout
ENTRY_POINT: 0701c1a8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterDeviceLayout
               (long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_d8;
  
  do {
    (**(code **)(param_1 + 0x178))(param_2,*(undefined8 *)(param_1 + 0x180));
    do {
      *(undefined8 *)(unaff_x22 + 0x28) = unaff_d8;
      do {
        unaff_x20 = unaff_x20 + 1;
        unaff_x21 = unaff_x21 + 0x10;
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0701c1c4;
        if ((long)*(int *)(*(long *)(unaff_x19 + 0x10) + 0x18) <= (long)unaff_x20) {
                    /* try { // try from 0701c1d4 to 0711c1d7 has its CatchHandler @ 0701c1e0 */
                    /* try { // try from 0701c1d8 to 0711c1ff has its CatchHandler @ 0701c0ac */
          *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 0701c190 with catch @ 0701c1dc
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 0701c1d4 with catch @ 0701c1e0
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 0701c170 with catch @ 0701c1e4
                        */
          return;
        }
        uVar1 = FUN_0701c0b0();
      } while (((uVar1 & 1) != 0) || (uVar1 = FUN_0701c0f0(), (uVar1 & 1) != 0));
      lVar2 = *(long *)(unaff_x19 + 0x10);
      if (lVar2 == 0) {
LAB_0701c1c4:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(uint *)(lVar2 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      unaff_x22 = lVar2 + unaff_x21;
      param_2 = *(long **)(unaff_x22 + 0x20);
    } while (param_2 == (long *)0x0);
    param_1 = *param_2;
  } while( true );
}


