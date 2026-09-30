/*
FUNCTION_NAME: OVRPlugin$$SetFaceTrackingVisemesEnabled
ENTRY_POINT: 01d8f648
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__SetFaceTrackingVisemesEnabled(void)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint in_w9;
  undefined8 unaff_x19;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  uint uVar6;
  ulong unaff_x28;
  long lVar7;
  
  uVar5 = *(uint *)(unaff_x24 + 0x18);
  uVar6 = unaff_w26 & in_w9;
  if (0 < (int)uVar5) {
    lVar7 = 0;
    do {
      if (uVar5 <= (uint)lVar7) {
LAB_01d8f5dc:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar2 = *(long **)(unaff_x24 + 0x20 + lVar7 * 8);
      if (plVar2 == (long *)0x0) goto LAB_01d8f72c;
      uVar3 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
      uVar5 = (uint)lVar7 + 1;
      if (*(uint *)(unaff_x25 + 0x18) <= uVar5) goto LAB_01d8f5dc;
      plVar2 = *(long **)(unaff_x25 + (long)(int)uVar5 * 8 + 0x20);
      if (plVar2 == (long *)0x0) goto LAB_01d8f72c;
      uVar4 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
      uVar1 = FUN_01d8eaa8(uVar3,uVar4);
      uVar5 = *(uint *)(unaff_x24 + 0x18);
      lVar7 = lVar7 + 1;
      uVar6 = uVar1 & uVar6 & 1;
    } while ((int)lVar7 < (int)uVar5);
  }
  if (unaff_x23 != 0) {
    *(undefined1 *)(unaff_x23 + 0x20) = 1;
    if (uVar6 == 0) {
      if ((unaff_x28 & 1) != 0) {
                    /* try { // try from 01d8f7d4 to 01e8f7df has its CatchHandler @ 01d8f89c */
        thunk_FUN_010303a8(PTR_DAT_0234bcd0);
        uVar4 = thunk_FUN_010400dc();
        uVar3 = thunk_FUN_010303a8(PTR_DAT_023597e8);
        FUN_01c65ad0(uVar4,uVar3,0);
        uVar3 = thunk_FUN_010303a8(PTR_DAT_023597e0);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar4,uVar3);
      }
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_00fd82c8();
      if (lVar7 == 0) {
        if (unaff_x23 != 0) goto LAB_01d8f72c;
      }
      else {
        *(undefined8 *)(lVar7 + 0x60) = unaff_x19;
        thunk_FUN_0106e12c();
        if (unaff_x23 != 0) {
          *(long *)(lVar7 + 0x68) = unaff_x23;
          thunk_FUN_0106e12c();
        }
      }
    }
    return lVar7;
  }
LAB_01d8f72c:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


