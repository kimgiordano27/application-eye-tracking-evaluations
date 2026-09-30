/*
FUNCTION_NAME: UnityEngine.Mesh$$InternalSetIndexBufferDataFromArray_Injected
ENTRY_POINT: 068aab68
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


undefined4 UnityEngine_Mesh__InternalSetIndexBufferDataFromArray_Injected(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  
  FUN_03188a78();
  *(undefined1 *)(unaff_x20 + 0xeb) = 1;
  if (*(char *)(unaff_x19 + 0xc0) == '\0') {
    uVar3 = 0;
  }
  else {
    plVar1 = (long *)FUN_068a9d4c();
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)OVRPlugin_OVRP_1_11_0_TypeInfo) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
          goto UnityEngine_Mesh__SetVertexBufferParamsFromArray;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar1,*(long *)OVRPlugin_OVRP_1_11_0_TypeInfo,5);
UnityEngine_Mesh__SetVertexBufferParamsFromArray:
    uVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    uVar3 = 1;
    if ((uVar5 & 1) != 0) {
      uVar3 = 2;
    }
  }
  return uVar3;
}


