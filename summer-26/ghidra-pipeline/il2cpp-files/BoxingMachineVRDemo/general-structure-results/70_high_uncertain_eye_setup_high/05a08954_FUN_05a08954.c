/*
FUNCTION_NAME: FUN_05a08954
ENTRY_POINT: 05a08954
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05a08954(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  puVar3 = PTR_DAT_06762410;
  if ((DAT_06b810a9 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06762410);
    FUN_02d6084c(OVRPlugin_OVRP_1_45_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(
                Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARPlane>_get_removed__
                );
    DAT_06b810a9 = 1;
  }
  puVar2 = PTR_DAT_0675e1b8;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_0636b6dc(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar2);
  }
  uVar5 = FUN_0606a004(uVar4,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar6 = FUN_0636b6dc(0);
    if (lVar6 == 0) goto LAB_05a08aa8;
    plVar7 = *(long **)(lVar6 + 0x28);
    if (plVar7 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_45_0_TypeInfo + 0x130);
      if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)OVRPlugin_OVRP_1_45_0_TypeInfo)) {
        lVar6 = thunk_FUN_02d709fc(plVar7,0);
        if (lVar6 == 0) {
LAB_05a08aa8:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar6 = FUN_05021174(lVar6,*(undefined8 *)
                                    Method_UnityEngine_XR_ARFoundation_ARTrackablesChangedEventArgs<ARPlane>_get_removed__
                             ,0);
        uVar5 = FUN_04f3cc90(lVar6,0,0);
        if ((uVar5 & 1) != 0) {
          if (lVar6 == 0) goto LAB_05a08aa8;
          FUN_04f3a9a8(lVar6,plVar7,0,0);
        }
      }
    }
  }
  FUN_05a08828();
  return;
}


