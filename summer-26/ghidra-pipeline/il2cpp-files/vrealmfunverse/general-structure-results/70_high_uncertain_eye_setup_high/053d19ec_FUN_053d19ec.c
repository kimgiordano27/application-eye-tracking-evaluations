/*
FUNCTION_NAME: FUN_053d19ec
ENTRY_POINT: 053d19ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_053d19ec(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_066d09cd & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_OVRP_1_17_0_TypeInfo);
    DAT_066d09cd = 1;
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    lVar4 = *(long *)OVRPlugin_OVRP_1_17_0_TypeInfo;
    bVar1 = *(byte *)(lVar4 + 0x130);
    if (*(byte *)(*plVar3 + 0x130) < bVar1) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = plVar3;
      if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar4) {
        plVar5 = (long *)0x0;
      }
    }
    *(long **)(param_1 + 0x40) = plVar5;
    if (*(byte *)(*plVar3 + 0x130) < bVar1) {
      plVar3 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar4) {
      plVar3 = (long *)0x0;
    }
  }
  thunk_FUN_02bb0e9c((long *)(param_1 + 0x40),plVar3);
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar4 + 0xb0);
    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x28));
    lVar4 = *(long *)(param_1 + 0x40);
    if (lVar4 != 0) {
      if (*(byte *)(lVar4 + 0x51) - 1 < 2) {
        uVar2 = FUN_053d6f00(lVar4,0);
        *(undefined8 *)(param_1 + 0x38) = uVar2;
        thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x38),uVar2);
        lVar4 = *(long *)(param_1 + 0x40);
        if (lVar4 == 0) goto LAB_053d1b14;
      }
      *(undefined8 *)(lVar4 + 0x88) = param_2;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x88),param_2);
      return;
    }
  }
LAB_053d1b14:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


