/*
FUNCTION_NAME: OVRPlugin$$GetLayerAndroidSurfaceObject
ENTRY_POINT: 0566b968
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


void OVRPlugin__GetLayerAndroidSurfaceObject(ushort *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long *unaff_x21;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_02dcfd18();
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    uVar3 = FUN_05683cec(lVar2,0);
    if ((uVar3 & 1) == 0) {
      lVar2 = *(long *)(*unaff_x21 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar2 == 0) goto LAB_0566ba18;
                    /* try { // try from 0566b9e8 to 0576ba4b has its CatchHandler @ 0566b9e8
                       catch() { ... } // from try @ 0566b9e8 with catch @ 0566b9e8
                       catch() { ... } // from try @ 0566ba94 with catch @ 0566b9e8
                       catch() { ... } // from try @ 0566bae0 with catch @ 0566b9e8
                       catch() { ... } // from try @ 0566bb24 with catch @ 0566b9e8 */
      uVar3 = FUN_05683d0c(lVar2,0);
      if ((uVar3 & 1) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 5;
      }
    }
    else {
      uVar1 = 4;
    }
    *(undefined4 *)(unaff_x19 + 0x2b8) = uVar1;
    *(undefined4 *)(unaff_x19 + 700) = uVar1;
    return;
  }
LAB_0566ba18:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


