/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginInputTrackingProvider$$GetInputTrackingState
ENTRY_POINT: 05598508
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
Oculus_Avatar2_OvrPluginTracking_OvrPluginInputTrackingProvider__GetInputTrackingState(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  code *in_x9;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *plVar6;
  uint uVar7;
  
  (*in_x9)();
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
  }
  uVar2 = FUN_055006dc();
  if ((uVar2 & 1) == 0) {
    lVar3 = (**(code **)(*unaff_x21 + 0x938))();
    puVar1 = PTR_DAT_069fb9c0;
    if (lVar3 == 0) {
LAB_05598640:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar5) {
      uVar7 = 0;
      do {
        if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar6 = *(long **)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05598640;
        uVar2 = (**(code **)(*plVar6 + 0x448))(plVar6,*(undefined8 *)(*plVar6 + 0x450));
        if ((uVar2 & 1) != 0) {
          (**(code **)(*plVar6 + 0x4c8))(plVar6,*(undefined8 *)(*plVar6 + 0x4d0));
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)(puVar1 + 0xe0));
          }
          uVar2 = FUN_055006dc();
          if ((uVar2 & 1) != 0) {
            *unaff_x20 = plVar6;
            goto LAB_05598624;
          }
        }
        uVar5 = *(uint *)(lVar3 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar5);
    }
    *unaff_x20 = 0;
    LeanTween__value();
    uVar4 = 0;
  }
  else {
    *unaff_x20 = unaff_x21;
LAB_05598624:
    LeanTween__value();
    uVar4 = 1;
  }
  return uVar4;
}


