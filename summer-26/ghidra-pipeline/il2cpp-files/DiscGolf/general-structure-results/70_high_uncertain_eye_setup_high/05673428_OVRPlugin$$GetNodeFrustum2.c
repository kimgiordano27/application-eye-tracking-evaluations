/*
FUNCTION_NAME: OVRPlugin$$GetNodeFrustum2
ENTRY_POINT: 05673428
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetNodeFrustum2(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined4 unaff_w23;
  
  iVar1 = FUN_0564d1f4(unaff_w23);
  if (iVar1 == 0x11) {
    if (*(int *)(unaff_x19 + 0x1a0) == -1) {
      *(undefined4 *)(unaff_x19 + 0x1a0) = 1;
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_06a0e888 + 0x20);
    *(undefined1 *)(unaff_x19 + 0x23) = 1;
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_05686fc4();
                    /* try { // try from 056734c0 to 057735bf has its CatchHandler @ 056734c0
                       catch() { ... } // from try @ 056734c0 with catch @ 056734c0
                       catch() { ... } // from try @ 056735f8 with catch @ 056734c0
                       catch() { ... } // from try @ 05673870 with catch @ 056734c0
                       catch() { ... } // from try @ 05673920 with catch @ 056734c0 */
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    *(undefined1 *)(unaff_x19 + 0x23) = 0;
    *(undefined4 *)(unaff_x19 + 0x1a0) = 0xffffffff;
  }
  return uVar3;
}


