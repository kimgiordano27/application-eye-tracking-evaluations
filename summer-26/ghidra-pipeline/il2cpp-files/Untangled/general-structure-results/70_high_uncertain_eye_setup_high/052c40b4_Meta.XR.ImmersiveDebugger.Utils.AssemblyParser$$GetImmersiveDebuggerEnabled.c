/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$GetImmersiveDebuggerEnabled
ENTRY_POINT: 052c40b4
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


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  int in_w9;
  long lVar6;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined1 unaff_w28;
  
code_r0x052c40b4:
  *(int *)(unaff_x25 + 0x18) = in_w9;
  plVar3 = (long *)(param_1 + in_x10 * 8 + 0x20);
  *plVar3 = unaff_x26;
  thunk_FUN_02f411dc(plVar3,unaff_x26);
  do {
    if (unaff_x20 == 0) {
LAB_052c4168:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar4 = FUN_066d47b8();
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x23);
    }
    uVar5 = FUN_066ca6a0(uVar4,unaff_x24,0);
    if (((uVar5 & 1) != 0) || (iVar2 = FUN_066d6148(unaff_x24,0), iVar2 < 1)) {
      return;
    }
    unaff_x24 = FUN_066d6570(unaff_x24,0,0);
    if ((*(byte *)(unaff_x27 + 0x71) & 1) == 0) {
      FUN_02f07e70();
      FUN_02f07e70();
      FUN_02f07e70();
      *(undefined1 *)(unaff_x27 + 0x71) = unaff_w28;
    }
    if (unaff_x19 == 0) goto LAB_052c4168;
    unaff_x25 = *(long *)(unaff_x19 + 0x20);
    unaff_x26 = thunk_FUN_02ef1808(*unaff_x21);
    FUN_052c67bc(unaff_x26,0);
    if ((unaff_x24 == 0) || (uVar4 = FUN_066c67b0(unaff_x24,0), unaff_x26 == 0)) goto LAB_052c4168;
    *(undefined8 *)(unaff_x26 + 0x10) = uVar4;
    thunk_FUN_02f411dc();
    if (unaff_x25 == 0) goto LAB_052c4168;
    param_1 = *(long *)(unaff_x25 + 0x10);
    lVar6 = *unaff_x22;
    *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_052c4168;
    uVar1 = *(uint *)(unaff_x25 + 0x18);
    in_x10 = (long)(int)uVar1;
    if (uVar1 < *(uint *)(param_1 + 0x18)) break;
    FUN_03fd0c9c(unaff_x25,unaff_x26,
                 *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
  } while( true );
  in_w9 = uVar1 + 1;
  goto code_r0x052c40b4;
}


