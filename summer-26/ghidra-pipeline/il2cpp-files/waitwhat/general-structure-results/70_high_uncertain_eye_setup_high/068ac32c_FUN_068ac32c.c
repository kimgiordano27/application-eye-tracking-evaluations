/*
FUNCTION_NAME: FUN_068ac32c
ENTRY_POINT: 068ac32c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_068ac32c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_075590f6 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_30_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_11_0_TypeInfo);
    DAT_075590f6 = 1;
  }
  FUN_068b09f0(param_1,param_2,0);
  if (*(char *)(param_1 + 0xc0) != '\0') {
    return;
  }
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  plVar3 = (long *)FUN_068a9d4c(param_1);
  puVar1 = OVRPlugin_OVRP_1_11_0_TypeInfo;
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)OVRPlugin_OVRP_1_11_0_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_068ac3fc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)OVRPlugin_OVRP_1_11_0_TypeInfo,5);
LAB_068ac3fc:
    bVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    *(byte *)(param_1 + 0x318) = (bVar2 ^ 0xff) & 1;
    plVar3 = (long *)FUN_068a9d4c(param_1);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
            goto UnityEngine_Mesh__SetBoneWeightsImpl;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar1,9);
UnityEngine_Mesh__SetBoneWeightsImpl:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (*(long *)(param_1 + 0x2d8) != 0) {
        FUN_04b00be8(*(long *)(param_1 + 0x2d8),0,*(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


