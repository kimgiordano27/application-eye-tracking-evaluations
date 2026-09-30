/*
FUNCTION_NAME: OVRPlugin$$ResetBodyTrackingCalibration
ENTRY_POINT: 0567d318
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ResetBodyTrackingCalibration(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *unaff_x19;
  long lVar4;
  long *unaff_x23;
  
                    /* try { // try from 0567d318 to 0577d323 has its CatchHandler @ 0567db48 */
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
                    /* try { // try from 0567d324 to 0577d42b has its CatchHandler @ 0567ccdc */
    param_1 = FUN_02dcfd18(param_1);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) != 0) {
    lVar4 = *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
    lVar2 = *(long *)(lVar4 + 0x38);
    if (lVar2 == 0) {
      FUN_02dcfd74(lVar4);
      lVar2 = *(long *)(lVar4 + 0x38);
    }
    if (*(long *)(*(long *)(lVar2 + 0x10) + 0x38) == 0) {
      FUN_02dcfd74(*(long *)(lVar2 + 0x10));
    }
    iVar1 = FUN_03885dec();
    if (iVar1 < 0) {
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
      if ((*(int *)(lVar2 + 0x24) == 1) && (uVar3 = FUN_056a09f4(0), (uVar3 & 1) == 0)) {
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
      if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) != 0) {
        FUN_0567d4e8();
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
          if (*(long *)(lVar2 + 0x1b0) == 0) {
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
            *unaff_x19 = *(undefined8 *)(lVar2 + 0x1b0);
            LeanTween__value();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


