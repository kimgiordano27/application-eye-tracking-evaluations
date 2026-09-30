/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginFaceTrackingProvider$$.ctor
ENTRY_POINT: 0728e700
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


void Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider___ctor(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 unaff_x21;
  undefined8 uVar6;
  long *unaff_x23;
  
  FUN_054bec28();
  *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8) = unaff_x21;
  thunk_FUN_03d1023c();
  uVar1 = FUN_04f133b8();
  uVar1 = FUN_04f1f358(uVar1,*(undefined8 *)PTR_DAT_091affc0);
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548(0,uVar1);
  }
  uVar1 = FUN_0719293c(*(long *)(unaff_x19 + 0x10),uVar1,0);
  if (*(int *)(*(long *)PTR_DAT_091fa330 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar2 = FUN_0709bd60(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_091f9ad0 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    plVar3 = (long *)FUN_0728df1c();
    if (plVar3 != (long *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x188))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 400));
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = thunk_FUN_03d1e194(PTR_DAT_091a2ae0);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar1 = FUN_071392b4(0);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar5 = thunk_FUN_03d1e194(PTR_DAT_092189c8);
  uVar1 = FUN_072675bc(uVar5,uVar1,uVar6,0);
  thunk_FUN_03d1e194(PTR_DAT_09215b78);
  uVar5 = thunk_FUN_03d2ef40();
  FUN_07209098(uVar5,uVar1,0);
  uVar1 = thunk_FUN_03d1e194(PTR_DAT_09218938);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar5,uVar1);
}


