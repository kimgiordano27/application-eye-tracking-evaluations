/*
FUNCTION_NAME: OVRPlugin$$SetDynamicObjectTrackedClassesAsync
ENTRY_POINT: 056828b4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetDynamicObjectTrackedClassesAsync(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uStack0000000000000010;
  long lStack0000000000000018;
  
  lStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  uVar2 = FUN_0442a9f0();
  puVar1 = PTR_DAT_06a0e888;
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(*(long *)PTR_DAT_06a0e888 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    if (*(long *)(*(long *)(lVar3 + 0xb8) + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0563cbf0();
    if (lStack0000000000000018 != 0) {
      lVar3 = *(long *)(*(long *)puVar1 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05686cd0(lVar3,lStack0000000000000018);
    }
  }
  return;
}


