/*
FUNCTION_NAME: FUN_075bf950
ENTRY_POINT: 075bf950
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_075bf950(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((DAT_0826e714 & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_19_0_TypeInfo);
    DAT_0826e714 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    lVar5 = *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = param_2;
        thunk_FUN_037aeb94(puVar4,param_2);
      }
      else {
        FUN_049ceef4(lVar2,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                    );
      }
      *(undefined1 *)(param_1 + 0x28) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


