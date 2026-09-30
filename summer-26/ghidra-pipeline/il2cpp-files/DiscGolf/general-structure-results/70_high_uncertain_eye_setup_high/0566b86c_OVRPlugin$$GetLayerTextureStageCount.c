/*
FUNCTION_NAME: OVRPlugin$$GetLayerTextureStageCount
ENTRY_POINT: 0566b86c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetLayerTextureStageCount(int param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long *unaff_x21;
  
  if (param_1 == 2) {
    lVar1 = *(long *)(*unaff_x21 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
    if (lVar1 == 0) {
LAB_0566ba18:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar2 = FUN_0568cee4(lVar1,0);
    if ((uVar2 & 1) == 0) {
      lVar1 = *(long *)(*unaff_x21 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02dcfd18();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02dcfd18();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
      if (lVar1 == 0) goto LAB_0566ba18;
      uVar2 = FUN_05683cec(lVar1,0);
      if ((uVar2 & 1) == 0) {
        lVar1 = *(long *)(*unaff_x21 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02dcfd18();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02dcfd18();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
        if (lVar1 == 0) goto LAB_0566ba18;
        uVar2 = FUN_05683d0c(lVar1,0);
        if ((uVar2 & 1) == 0) {
          param_1 = 1;
        }
        else {
          param_1 = 5;
        }
      }
      else {
        param_1 = 4;
      }
      *(int *)(unaff_x19 + 0x2b8) = param_1;
    }
    else {
      param_1 = *(int *)(unaff_x19 + 0x2b8);
    }
  }
  *(int *)(unaff_x19 + 700) = param_1;
  return;
}


