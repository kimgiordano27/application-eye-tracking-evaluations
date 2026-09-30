/*
FUNCTION_NAME: OVRPlugin$$GetPredictedDisplayTime
ENTRY_POINT: 0567dcac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetPredictedDisplayTime(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *unaff_x19;
  long *unaff_x23;
  
  FUN_02dcfd74();
  iVar1 = FUN_03885dec();
  if (iVar1 < 0) {
    return;
  }
  lVar2 = *(long *)(*unaff_x23 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
                    /* try { // try from 0567dcf0 to 0577dcff has its CatchHandler @ 0567dd18 */
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
                    /* catch() { ... } // from try @ 0567dab4 with catch @ 0567dd00
                       catch() { ... } // from try @ 0567db34 with catch @ 0567dd00 */
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
                    /* try { // try from 0567dd04 to 0577dd2b has its CatchHandler @ 0567dd48 */
  if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 0567d954 with catch @ 0567dd0c
                       catch() { ... } // from try @ 0567d9d4 with catch @ 0567dd0c */
                    /* catch() { ... } // from try @ 0567dc44 with catch @ 0567dd18
                       catch() { ... } // from try @ 0567dcf0 with catch @ 0567dd18 */
    if ((*(int *)(lVar2 + 0x24) == 1) && (uVar3 = FUN_056a09f4(0), (uVar3 & 1) == 0)) {
      return;
    }
                    /* catch() { ... } // from try @ 0567db68 with catch @ 0567dd24
                       catch() { ... } // from try @ 0567dc08 with catch @ 0567dd24 */
    lVar2 = *(long *)(*unaff_x23 + 0x20);
                    /* try { // try from 0567dd2c to 0577dd4b has its CatchHandler @ 0567ccdc */
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
                    /* catch() { ... } // from try @ 0567dc20 with catch @ 0567dd48
                       catch() { ... } // from try @ 0567dd04 with catch @ 0567dd48 */
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) != 0) {
      FUN_0567de10();
      lVar2 = *(long *)(*unaff_x23 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x1a8) == 0) {
          return;
        }
        lVar2 = *(long *)(*unaff_x23 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02dcfd18();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02dcfd18();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
        if (lVar2 != 0) {
          *unaff_x19 = *(undefined8 *)(lVar2 + 0x1a8);
          LeanTween__value();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


