/*
FUNCTION_NAME: FUN_068aa780
ENTRY_POINT: 068aa780
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_17;weak_xr_or_state_hits_17;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_17
*/


void FUN_068aa780(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_075590e8 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_126_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_127_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_128_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_129_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_12_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_15_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_119_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_11_0_TypeInfo);
    DAT_075590e8 = 1;
  }
  local_38 = 0;
  local_48 = 0;
  lVar2 = FUN_068a9eec(param_1);
  if (lVar2 == 0) {
    uVar3 = FUN_03a2e25c(param_1,&local_38,*(undefined8 *)OVRPlugin_OVRP_1_127_0_TypeInfo);
    uVar7 = local_38;
    if ((uVar3 & 1) == 0) {
      lVar2 = FUN_069d3b50(param_1,0);
      if (lVar2 == 0) goto LAB_068aaa10;
      uVar7 = FUN_03ac2e98(lVar2,*(undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo);
    }
    UnityEngine_SkinnedMeshRenderer__set_quality(param_1,uVar7);
  }
  lVar2 = FUN_068a9e0c(param_1);
  if (lVar2 == 0) {
    lVar2 = FUN_03a2dc9c(param_1,*(undefined8 *)OVRPlugin_OVRP_1_126_0_TypeInfo);
    puVar1 = OVRPlugin_OVRP_1_119_0_TypeInfo;
    if (lVar2 == 0) goto LAB_068aaa10;
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar3 = 0;
      uVar8 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        lVar10 = *(long *)(lVar2 + 0x20 + uVar3 * 8);
        lVar4 = thunk_FUN_031c3cac(lVar10,*(undefined8 *)puVar1);
        if (lVar4 == 0) {
          if (lVar10 != 0) goto UnityEngine_Mesh__SetIndexBufferParams_Injected;
          break;
        }
        uVar8 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    lVar2 = FUN_069d3b50(param_1,0);
    if (lVar2 == 0) goto LAB_068aaa10;
    lVar10 = FUN_03ac2e98(lVar2,*(undefined8 *)OVRPlugin_OVRP_1_15_0_TypeInfo);
UnityEngine_Mesh__SetIndexBufferParams_Injected:
    if (param_1 == 0) goto LAB_068aaa10;
    FUN_068a9e60(param_1,lVar10);
  }
  lVar2 = FUN_068a9d4c(param_1);
  if (lVar2 == 0) {
    uVar3 = FUN_03a2e25c(param_1,&local_48,*(undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo);
    uVar7 = local_48;
    if ((uVar3 & 1) == 0) {
      lVar2 = FUN_069d3b50(param_1,0);
      if (lVar2 == 0) goto LAB_068aaa10;
      uVar7 = FUN_03ac2e98(lVar2,*(undefined8 *)OVRPlugin_OVRP_1_12_0_TypeInfo);
    }
    FUN_068a9da0(param_1,uVar7);
  }
  plVar5 = (long *)FUN_068a9d4c(param_1);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)OVRPlugin_OVRP_1_11_0_TypeInfo) {
          puVar6 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_068aa9e0;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)OVRPlugin_OVRP_1_11_0_TypeInfo,0);
LAB_068aa9e0:
    uVar7 = (*(code *)*puVar6)(plVar5,0,puVar6[1]);
    *(undefined8 *)(param_1 + 0x50) = uVar7;
    return;
  }
LAB_068aaa10:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


