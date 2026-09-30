/*
FUNCTION_NAME: OVRPlugin.OVRP_1_32_0$$ovrp_AddCustomMetadata
ENTRY_POINT: 0339b564
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_32_0__ovrp_AddCustomMetadata(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  undefined1 *unaff_x20;
  long lVar3;
  long unaff_x23;
  
  lVar3 = *(long *)PTR_DAT_0422f958;
  lVar1 = *(long *)(lVar3 + 0x38);
  if (lVar1 == 0) {
    FUN_01c723f0(lVar3);
    lVar1 = *(long *)(lVar3 + 0x38);
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01c72394();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar1 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01c72394();
  }
  lVar1 = (**(code **)(unaff_x23 + 0x18))
                    (*(undefined8 *)(unaff_x23 + 0x40),**(undefined8 **)(lVar1 + 0xb8),
                     *(undefined8 *)(unaff_x23 + 0x28));
  if (*(char *)(unaff_x19 + 0xf1) != '\0') {
    lVar1 = FUN_0338eda8();
  }
  *unaff_x20 = 0;
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)PTR_DAT_04237778;
    lVar3 = thunk_FUN_01c495e4(lVar1,uVar2);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar1,uVar2);
    }
  }
  return lVar3;
}


