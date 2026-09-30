/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$.cctor
ENTRY_POINT: 01db1c6c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_2_0___cctor(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  long unaff_x21;
  long unaff_x22;
  long lVar5;
  long *unaff_x23;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  
  thunk_FUN_01022c14();
  if (((**(long **)(*unaff_x23 + 0xb8) == 0) ||
      (lVar2 = FUN_01a36cc4(**(long **)(*unaff_x23 + 0xb8),*(undefined8 *)PTR_DAT_0235a468),
      lVar2 == 0)) || (plVar3 = *(long **)(unaff_x22 + 0x20), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  iVar1 = (**(code **)(*plVar3 + 0x1a8))
                    (plVar3,*(undefined4 *)(lVar2 + 0x18),*(undefined8 *)(*plVar3 + 0x1b0));
  uVar8 = *(ulong *)(lVar2 + 0x18);
  uVar6 = (uint)uVar8;
  if ((int)uVar6 < 1) {
    return;
  }
  iVar7 = 0;
  if (uVar6 != 0) {
    iVar7 = iVar1 / (int)uVar6;
  }
  uVar4 = iVar1 - iVar7 * uVar6;
  if (uVar4 < uVar6) {
    do {
      iVar1 = iVar1 + 1;
      lVar5 = *(long *)(lVar2 + (long)(int)uVar4 * 8 + 0x20);
      thunk_FUN_00ffe618();
      iVar7 = (int)uVar8;
      if ((lVar5 == 0) || (lVar5 == unaff_x21)) {
        if (iVar7 < 2) {
          return;
        }
      }
      else {
        uVar8 = FUN_01db26f0(lVar5);
        if (iVar7 < 2) {
          return;
        }
        if ((uVar8 & 1) != 0) {
          return;
        }
      }
      uVar6 = *(uint *)(lVar2 + 0x18);
      uVar8 = (ulong)(iVar7 - 1);
      iVar7 = 0;
      if (uVar6 != 0) {
        iVar7 = iVar1 / (int)uVar6;
      }
      uVar4 = iVar1 - iVar7 * uVar6;
    } while (uVar4 < uVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


