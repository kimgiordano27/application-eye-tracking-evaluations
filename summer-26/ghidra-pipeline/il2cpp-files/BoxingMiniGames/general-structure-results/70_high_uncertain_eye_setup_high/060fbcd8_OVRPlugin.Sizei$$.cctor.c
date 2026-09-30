/*
FUNCTION_NAME: OVRPlugin.Sizei$$.cctor
ENTRY_POINT: 060fbcd8
PROGRAM: BoxingMiniGames-libil2cpp.so
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
  uint uVar5;
  undefined8 uVar6;
  
  if ((DAT_07ee0d41 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4e28);
    DAT_07ee0d41 = 1;
  }
  puVar1 = PTR_DAT_079f4e28;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= param_1) {
LAB_060fbdd8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)param_1 * 8 + 0x20);
    if (lVar4 != 0) {
      uVar2 = thunk_FUN_071d0da8(lVar4,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_036a1978(lVar4);
      }
      uVar3 = FUN_071c24dc(uVar2,0,0);
      uVar5 = param_1;
      if ((uVar3 & 1) == 0) {
        do {
          param_1 = param_1 - 1;
          uVar5 = uVar5 - 1;
          if ((int)uVar5 < 0) goto LAB_060fbd60;
          lVar4 = *param_2;
          if (lVar4 == 0) goto LAB_060fbdd4;
          if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_060fbdd8;
          uVar6 = *(undefined8 *)(lVar4 + (ulong)param_1 * 8 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar3 = FUN_071c24dc(uVar6,uVar2,0);
        } while ((uVar3 & 1) == 0);
      }
      else {
LAB_060fbd60:
        uVar5 = 0xffffffff;
      }
      return uVar5;
    }
  }
LAB_060fbdd4:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


