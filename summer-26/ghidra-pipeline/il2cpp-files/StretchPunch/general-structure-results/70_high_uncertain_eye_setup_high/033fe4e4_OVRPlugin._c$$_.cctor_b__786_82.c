/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_82
ENTRY_POINT: 033fe4e4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_<>c__<_cctor>b__786_82(long *param_1)

{
  int iVar1;
  uint uVar2;
  long unaff_x21;
  long lVar3;
  long unaff_x23;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  iVar1 = (**(code **)(*param_1 + 0x1a8))
                    (param_1,*(undefined4 *)(unaff_x23 + 0x18),*(undefined8 *)(*param_1 + 0x1b0));
  uVar6 = *(ulong *)(unaff_x23 + 0x18);
  uVar4 = (uint)uVar6;
  if ((int)uVar4 < 1) {
    return;
  }
  iVar5 = 0;
  if (uVar4 != 0) {
    iVar5 = iVar1 / (int)uVar4;
  }
  uVar2 = iVar1 - iVar5 * uVar4;
  if (uVar2 < uVar4) {
    do {
      iVar1 = iVar1 + 1;
      lVar3 = *(long *)(unaff_x23 + (long)(int)uVar2 * 8 + 0x20);
      thunk_FUN_01da0934();
      iVar5 = (int)uVar6;
      if ((lVar3 == 0) || (lVar3 == unaff_x21)) {
        if (iVar5 < 2) {
          return;
        }
      }
      else {
        uVar6 = OVRPlugin_<>c__<_cctor>b__786_106(lVar3);
        if (iVar5 < 2) {
          return;
        }
        if ((uVar6 & 1) != 0) {
          return;
        }
      }
      uVar4 = *(uint *)(unaff_x23 + 0x18);
      uVar6 = (ulong)(iVar5 - 1);
      iVar5 = 0;
      if (uVar4 != 0) {
        iVar5 = iVar1 / (int)uVar4;
      }
      uVar2 = iVar1 - iVar5 * uVar4;
    } while (uVar2 < uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


