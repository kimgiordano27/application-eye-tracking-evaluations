/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$get_Enabled
ENTRY_POINT: 052c4110
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__get_Enabled(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long lVar9;
  long unaff_x27;
  undefined1 unaff_w28;
  
  while( true ) {
    uVar6 = FUN_066ca6a0(param_1,unaff_x24,0);
    if (((uVar6 & 1) != 0) || (iVar2 = FUN_066d6148(unaff_x24,0), iVar2 < 1)) {
      return;
    }
    unaff_x24 = FUN_066d6570(unaff_x24,0,0);
    if ((*(byte *)(unaff_x27 + 0x71) & 1) == 0) {
      FUN_02f07e70();
      FUN_02f07e70();
      FUN_02f07e70();
      *(undefined1 *)(unaff_x27 + 0x71) = unaff_w28;
    }
    if (unaff_x19 == 0) break;
    lVar9 = *(long *)(unaff_x19 + 0x20);
    lVar3 = thunk_FUN_02ef1808(*unaff_x21);
    FUN_052c67bc(lVar3,0);
    if ((unaff_x24 == 0) || (uVar4 = FUN_066c67b0(unaff_x24,0), lVar3 == 0)) break;
    *(undefined8 *)(lVar3 + 0x10) = uVar4;
    thunk_FUN_02f411dc();
    if (lVar9 == 0) break;
    lVar7 = *(long *)(lVar9 + 0x10);
    lVar8 = *unaff_x22;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *plVar5 = lVar3;
      thunk_FUN_02f411dc(plVar5,lVar3);
    }
    else {
      FUN_03fd0c9c(lVar9,lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    if (unaff_x20 == 0) break;
    param_1 = FUN_066d47b8();
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x23);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


