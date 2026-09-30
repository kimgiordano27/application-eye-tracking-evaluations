/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$OnInstanceCreate
ENTRY_POINT: 0701c140
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


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__OnInstanceCreate(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar4) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        return;
      }
      uVar1 = FUN_0701c0b0(param_1,uVar4 & 0xffffffff);
                    /* try { // try from 0701c170 to 0711c177 has its CatchHandler @ 0701c1e4 */
      if (((uVar1 & 1) == 0) && (uVar1 = FUN_0701c0f0(param_1,uVar4 & 0xffffffff), (uVar1 & 1) == 0)
         ) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 == 0) break;
                    /* try { // try from 0701c190 to 0711c19b has its CatchHandler @ 0701c1dc */
        if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
                    /* try { // try from 0701c19c to 0711c1d3 has its CatchHandler @ 0701c0ac */
        plVar2 = *(long **)(lVar3 + lVar5 + 0x20);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
        }
        *(undefined8 *)(lVar3 + lVar5 + 0x28) = 0xfffffffefffffffe;
      }
      lVar3 = *(long *)(param_1 + 0x10);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


