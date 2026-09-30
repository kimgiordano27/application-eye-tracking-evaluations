/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateEyeTrackingContextNative
ENTRY_POINT: 055974a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


ulong Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateEyeTrackingContextNative(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  
  FUN_02d965b8();
  FUN_02d965b8(PTR_DAT_06a0a918);
  *(undefined1 *)(unaff_x21 + 0x596) = 1;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar2 = (**(code **)(*unaff_x19 + 0x1f8))();
  if (iVar2 == 0x10) {
    lVar6 = *unaff_x19;
    bVar1 = *(byte *)(*(long *)PTR_DAT_06a0a918 + 0x130);
    if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06a0a918)) {
LAB_055975bc:
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0();
    }
    uVar3 = (**(code **)(lVar6 + 0x2e8))();
    if (((uVar3 & 1) != 0) && ((unaff_x20 & 1) == 0)) {
      uVar4 = (**(code **)(*unaff_x19 + 0x328))();
      uVar5 = FUN_0541fba0(uVar4,0,0);
      return uVar5;
    }
  }
  else if (iVar2 == 4) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06a0aa78 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06a0aa78)
       ) goto LAB_055975bc;
    if ((unaff_x20 & 1) == 0) {
      uVar5 = FUN_0541ddec();
      return uVar5;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return (ulong)(uVar3 & 1);
}


