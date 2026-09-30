/*
FUNCTION_NAME: FUN_068aab48
ENTRY_POINT: 068aab48
PROGRAM: waitwhat-libil2cpp.so
SCORE: 102
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 FUN_068aab48(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_075590eb & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_11_0_TypeInfo);
    DAT_075590eb = 1;
  }
  if (*(char *)(param_1 + 0xc0) == '\0') {
    uVar3 = 0;
  }
  else {
    plVar1 = (long *)FUN_068a9d4c(param_1);
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


