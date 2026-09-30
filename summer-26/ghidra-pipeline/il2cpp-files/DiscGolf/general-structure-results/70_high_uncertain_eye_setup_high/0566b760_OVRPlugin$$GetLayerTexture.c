/*
FUNCTION_NAME: OVRPlugin$$GetLayerTexture
ENTRY_POINT: 0566b760
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetLayerTexture(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar4;
  
  plVar4 = *(long **)(unaff_x21 + 0x888);
  uVar2 = FUN_063542dc(param_1,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(*plVar4 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) goto LAB_0566ba18;
    iVar1 = FUN_0568cfdc(lVar3,0);
  }
  else {
    if (unaff_x20 == 0) goto LAB_0566ba18;
    iVar1 = *(int *)(unaff_x20 + 0x20);
  }
  *(int *)(unaff_x19 + 0x2b8) = iVar1;
  if (iVar1 == 4) {
    lVar3 = *(long *)(*plVar4 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) goto LAB_0566ba18;
    uVar2 = FUN_05683cec(lVar3,0);
    if ((uVar2 & 1) != 0) {
      iVar1 = *(int *)(unaff_x19 + 0x2b8);
      goto LAB_0566b818;
    }
    lVar3 = *(long *)(*plVar4 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) goto LAB_0566ba18;
    FUN_0568cef8(lVar3,0);
LAB_0566b904:
    *(undefined4 *)(unaff_x19 + 0x2b8) = 2;
  }
  else {
LAB_0566b818:
    if (iVar1 == 5) {
      lVar3 = *(long *)(*plVar4 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_0566ba18;
      uVar2 = FUN_05683d0c(lVar3,0);
      if ((uVar2 & 1) == 0) {
        lVar3 = *(long *)(*plVar4 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02dcfd18();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02dcfd18();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
        if (lVar3 == 0) goto LAB_0566ba18;
        FUN_0568cf08(lVar3,0);
        goto LAB_0566b904;
      }
      iVar1 = *(int *)(unaff_x19 + 0x2b8);
    }
    if (iVar1 != 2) goto LAB_0566ba04;
  }
  lVar3 = *(long *)(*plVar4 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 == 0) {
LAB_0566ba18:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar2 = FUN_0568cee4(lVar3,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(*plVar4 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) goto LAB_0566ba18;
    uVar2 = FUN_05683cec(lVar3,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(*plVar4 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_0566ba18;
      uVar2 = FUN_05683d0c(lVar3,0);
      if ((uVar2 & 1) == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = 5;
      }
    }
    else {
      iVar1 = 4;
    }
    *(int *)(unaff_x19 + 0x2b8) = iVar1;
  }
  else {
    iVar1 = *(int *)(unaff_x19 + 0x2b8);
  }
LAB_0566ba04:
  *(int *)(unaff_x19 + 700) = iVar1;
  return;
}


