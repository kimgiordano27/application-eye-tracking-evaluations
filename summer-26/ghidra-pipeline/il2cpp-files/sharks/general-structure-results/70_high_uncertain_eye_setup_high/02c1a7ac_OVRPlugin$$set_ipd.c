/*
FUNCTION_NAME: OVRPlugin$$set_ipd
ENTRY_POINT: 02c1a7ac
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__set_ipd(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  
  FUN_017fc350();
  FUN_017fc350(PTR_DAT_038022f8);
  FUN_017fc350(PTR_DAT_03804428);
  *(undefined1 *)(unaff_x22 + 0xec5) = 1;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar1 = FUN_02c1a118();
  if ((uVar1 & 1) == 0) {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar5 = FUN_017ea090();
  }
  else {
    if (unaff_x20 == (long *)0x0) goto LAB_02c1a914;
    lVar5 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_038022f8) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02c1a868;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0185dba8();
LAB_02c1a868:
    lVar5 = (*(code *)*puVar2)();
  }
  lVar4 = lVar5;
  if ((unaff_x21 & 1) == 0) {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar3 = FUN_02c1a2fc();
    if (lVar3 != 0) {
      if (lVar5 == 0) {
LAB_02c1a914:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar4 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380ab10,
                           *(int *)(lVar3 + 0x18) + *(int *)(lVar5 + 0x18));
      FUN_02bf259c(lVar5,lVar4,*(undefined4 *)(lVar5 + 0x18),0);
      FUN_02bf1608(lVar3,0,lVar4,*(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar3 + 0x18),0);
    }
  }
  return lVar4;
}


