/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$.cctor
ENTRY_POINT: 090d6750
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_92_0___cctor(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint unaff_w19;
  long *unaff_x20;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_0ac09788;
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= unaff_w19) {
LAB_090d6820:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar2 = *(long *)(param_1 + (long)(int)unaff_w19 * 8 + 0x20);
    if (lVar2 != 0) {
      uVar3 = thunk_FUN_0a18aba0(lVar2,0);
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c(lVar2);
      }
      uVar4 = FUN_0a17cd28(uVar3,0,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = (ulong)unaff_w19;
        do {
          uVar4 = uVar4 - 1;
          unaff_w19 = unaff_w19 - 1;
          if ((int)unaff_w19 < 0) goto LAB_090d67a8;
          lVar2 = *unaff_x20;
          if (lVar2 == 0) goto LAB_090d681c;
          if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_090d6820;
          uVar6 = *(undefined8 *)(lVar2 + (uVar4 & 0xffffffff) * 8 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar5 = FUN_0a17cd28(uVar6,uVar3,0);
        } while ((uVar5 & 1) == 0);
      }
      else {
LAB_090d67a8:
        unaff_w19 = 0xffffffff;
      }
      return unaff_w19;
    }
  }
LAB_090d681c:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


