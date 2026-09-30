/*
FUNCTION_NAME: FUN_068ac7e0
ENTRY_POINT: 068ac7e0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_068ac7e0(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined8 local_38;
  
  if ((DAT_075590fc & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_32_0_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRDriverManager__GetDriverHandle_TypeInfo);
    DAT_075590fc = 1;
  }
  puVar1 = OVR_OpenVR_IVRDriverManager__GetDriverHandle_TypeInfo;
  local_38 = 0;
  uVar3 = FUN_069d3398(param_3,0);
  if (((((uVar3 & 1) == 0) || (*(char *)(param_3 + 0x29d) == '\0')) ||
      (*(char *)(param_3 + 0x2b4) == '\0')) ||
     ((((lVar4 = UnityEngine_SkinnedMeshRenderer__set_sharedMesh_Injected(param_3), lVar4 == 0 ||
        (*(int *)(param_3 + 0x2e0) == 1)) ||
       ((*(char *)(param_3 + 0x2b5) != '\0' && (*(char *)(param_3 + 0xc0) != '\0')))) ||
      (uVar3 = FUN_068a9b28(param_3), (uVar3 & 1) != 0)))) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_06887cc8(param_4,0,0);
    return;
  }
  plVar5 = (long *)UnityEngine_SkinnedMeshRenderer__set_sharedMesh_Injected(param_3);
  if (*(long *)(param_3 + 0x2c8) != 0) {
    uVar2 = FUN_06910ca8(*(long *)(param_3 + 0x2c8),0);
    uVar8 = FUN_068aa474(param_3);
    local_38 = CONCAT44(param_2,uVar8);
    if (plVar5 != (long *)0x0) {
      lVar4 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)OVRPlugin_OVRP_1_32_0_TypeInfo) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_068ac93c;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo,0);
LAB_068ac93c:
      uVar3 = (*(code *)*puVar6)(plVar5,param_4,uVar2 & 1,&local_38,puVar6[1]);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_06887cc8(param_4,0,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


