/*
FUNCTION_NAME: FUN_068b39e8
ENTRY_POINT: 068b39e8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_068b39e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  
  puVar1 = PTR_DAT_070c2278;
  if ((DAT_0755914c & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2278);
    FUN_03188a78(OVRPlugin_OVRP_1_19_0_TypeInfo);
    DAT_0755914c = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar2 = FUN_06986514(0);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x90) = param_2;
  }
  else {
    plVar3 = (long *)FUN_068b3948(param_1);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_068b3abc;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,2);
LAB_068b3abc:
      (*(code *)*puVar4)(plVar3,param_1,puVar4[1]);
    }
    *(undefined8 *)(param_1 + 0x90) = param_2;
    plVar3 = (long *)FUN_068b3948(param_1);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_068b3b48;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,1);
LAB_068b3b48:
                    /* WARNING: Could not recover jumptable at 0x068b3b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar3,param_1,puVar4[1]);
      return;
    }
  }
  return;
}


