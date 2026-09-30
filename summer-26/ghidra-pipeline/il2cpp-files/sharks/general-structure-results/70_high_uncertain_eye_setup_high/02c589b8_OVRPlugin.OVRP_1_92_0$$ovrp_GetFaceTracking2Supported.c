/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetFaceTracking2Supported
ENTRY_POINT: 02c589b8
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_92_0__ovrp_GetFaceTracking2Supported(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  int iVar6;
  undefined8 *unaff_x22;
  long *unaff_x24;
  
  FUN_017fc350();
  FUN_017fc350(PTR_DAT_037f3bf0);
  FUN_017fc350(PTR_DAT_037f3ba8);
  FUN_017fc350(PTR_DAT_037f3be8);
  *(undefined1 *)(unaff_x21 + 0x18e) = 1;
  lVar3 = thunk_FUN_01861bbc(*unaff_x22);
  FUN_021ffd68(lVar3,*unaff_x20);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar4 = FUN_02c58aa0();
  iVar2 = FUN_02c28220(uVar4,0);
  puVar1 = PTR_DAT_037f3ba8;
  if (0 < iVar2) {
    iVar6 = 0;
    do {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar4 = FUN_02c58b1c();
      uVar5 = FUN_02c58b84();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      FUN_02200624(lVar3,uVar4,uVar5,*(undefined8 *)puVar1);
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
  }
  return lVar3;
}


