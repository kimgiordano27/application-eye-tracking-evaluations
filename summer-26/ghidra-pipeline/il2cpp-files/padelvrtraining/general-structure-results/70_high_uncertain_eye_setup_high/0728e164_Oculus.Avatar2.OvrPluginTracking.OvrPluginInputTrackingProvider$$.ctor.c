/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginInputTrackingProvider$$.ctor
ENTRY_POINT: 0728e164
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Oculus_Avatar2_OvrPluginTracking_OvrPluginInputTrackingProvider___ctor
               (long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *unaff_x22;
  
  if (param_1 == 0) {
    lVar2 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091a2770,1);
    if (lVar2 == 0) goto LAB_0728e260;
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_09218950;
    thunk_FUN_03d1023c();
    uVar3 = FUN_07261c90();
    lVar2 = *unaff_x22;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c(lVar2);
      lVar2 = *unaff_x22;
    }
    puVar4 = (undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18);
    *puVar4 = uVar3;
    thunk_FUN_03d1023c(puVar4,uVar3);
    param_2 = *unaff_x22;
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    param_2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(param_2 + 0xb8) + 0x18) != 0) {
    plVar5 = (long *)FUN_07261a2c();
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_091a1be8 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_091a1be8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4();
      }
    }
    return;
  }
LAB_0728e260:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


