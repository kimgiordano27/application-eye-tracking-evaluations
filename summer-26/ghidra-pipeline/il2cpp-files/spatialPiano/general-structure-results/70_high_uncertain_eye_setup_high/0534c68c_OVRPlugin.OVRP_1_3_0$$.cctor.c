/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$.cctor
ENTRY_POINT: 0534c68c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_3_0___cctor(uint param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if ((DAT_06bbb539 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f20);
    DAT_06bbb539 = 1;
  }
  puVar1 = PTR_DAT_067c8f20;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= param_1) {
LAB_0534c78c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)param_1 * 8 + 0x20);
    if (lVar4 != 0) {
      uVar2 = thunk_FUN_0610061c(lVar4,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar4);
      }
      uVar3 = FUN_060f245c(uVar2,0,0);
      uVar5 = param_1;
      if ((uVar3 & 1) == 0) {
        do {
          param_1 = param_1 - 1;
          uVar5 = uVar5 - 1;
          if ((int)uVar5 < 0) goto LAB_0534c714;
          lVar4 = *param_2;
          if (lVar4 == 0) goto LAB_0534c788;
          if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_0534c78c;
          uVar6 = *(undefined8 *)(lVar4 + (ulong)param_1 * 8 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar3 = FUN_060f245c(uVar6,uVar2,0);
        } while ((uVar3 & 1) == 0);
      }
      else {
LAB_0534c714:
        uVar5 = 0xffffffff;
      }
      return uVar5;
    }
  }
LAB_0534c788:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


