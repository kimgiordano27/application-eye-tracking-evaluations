/*
FUNCTION_NAME: OVRPlugin.Sizei$$.cctor
ENTRY_POINT: 0749d690
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_Sizei___cctor(uint param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09845b7b & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a0c40);
    DAT_09845b7b = 1;
  }
  puVar1 = PTR_DAT_091a0c40;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= param_1) {
LAB_0749d780:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)param_1 * 8 + 0x20);
    if (lVar4 != 0) {
      uVar2 = FUN_08a5d2e4(lVar4,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_03db619c(lVar4);
      }
      uVar3 = FUN_08a52164(uVar2,0,0);
      if ((uVar3 & 1) == 0) {
        do {
          param_1 = param_1 - 1;
          if ((int)param_1 < 0) goto LAB_0749d718;
          lVar4 = *param_2;
          if (lVar4 == 0) goto LAB_0749d77c;
          if (*(uint *)(lVar4 + 0x18) <= param_1) goto LAB_0749d780;
          uVar5 = *(undefined8 *)(lVar4 + (ulong)param_1 * 8 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          uVar3 = FUN_08a52164(uVar5,uVar2,0);
        } while ((uVar3 & 1) == 0);
      }
      else {
LAB_0749d718:
        param_1 = 0xffffffff;
      }
      return param_1;
    }
  }
LAB_0749d77c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


