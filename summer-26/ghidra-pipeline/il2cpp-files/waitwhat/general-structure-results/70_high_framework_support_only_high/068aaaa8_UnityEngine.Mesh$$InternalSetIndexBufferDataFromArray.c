/*
FUNCTION_NAME: UnityEngine.Mesh$$InternalSetIndexBufferDataFromArray
ENTRY_POINT: 068aaaa8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Mesh__InternalSetIndexBufferDataFromArray(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  undefined4 uVar6;
  
  FUN_03188a78();
  *(undefined1 *)(unaff_x20 + 0xea) = 1;
  plVar1 = (long *)FUN_068a9d4c();
  uVar6 = FUN_069e32bc(0);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)OVRPlugin_OVRP_1_11_0_TypeInfo) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 10) * 0x10 + 0x138);
        goto LAB_068aab28;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_031c0d08(plVar1,*(long *)OVRPlugin_OVRP_1_11_0_TypeInfo,10);
LAB_068aab28:
                    /* WARNING: Could not recover jumptable at 0x068aab40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(uVar6,plVar1,puVar2[1]);
  return;
}


