/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateHandTrackingContextNative
ENTRY_POINT: 0728da10
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


void Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateHandTrackingContextNative(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 in_w8;
  long *unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xb1a) = in_w8;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar2 = FUN_05007888();
  if (lVar2 != 0) {
    lVar3 = *unaff_x20;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar3 = *unaff_x20;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar3 = FUN_063bcca8(lVar3,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)PTR_DAT_09218918);
    if ((lVar3 != 0) &&
       (plVar4 = (long *)(**(code **)(lVar3 + 0x18))
                                   (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar2 + 0x18),
                                    *(undefined8 *)(lVar3 + 0x28)), plVar4 != (long *)0x0)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_09218908 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09218908))
      {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4();
      }
    }
  }
  return;
}


