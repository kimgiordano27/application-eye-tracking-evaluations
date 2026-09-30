/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.LogEntry$$get_OnDisplayDetails
ENTRY_POINT: 0728c060
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__get_OnDisplayDetails
               (ulong param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  long unaff_x22;
  long lVar4;
  long unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  ulong unaff_x26;
  
  while( true ) {
    lVar4 = unaff_x22;
    lVar3 = unaff_x21;
    *(int *)(lVar3 + 0x20) = param_2;
    uVar1 = FUN_07288f9c(param_1);
    *(undefined1 *)(unaff_x23 + 0x26) = unaff_w25;
    *(byte *)(lVar3 + 0x24) = (byte)uVar1 & 1;
    if (((unaff_x26 & 1) == 0) &&
       (uVar1 = Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__get_Callstack(), (uVar1 & 1) != 0)
       ) {
      FUN_072893fc(lVar4,unaff_x24);
      uVar2 = FUN_0728ba5c();
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0728c0c4;
      uVar1 = FUN_0728a634(uVar2,*(undefined8 *)(unaff_x20 + 0x10),unaff_x24);
    }
    unaff_x21 = FUN_0728b8fc(uVar1,lVar3);
    unaff_x26 = 0;
    if ((((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) ||
        (unaff_x22 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x28), unaff_x22 == 0)) || (lVar4 == 0)
       ) goto LAB_0728c0c4;
    if (*(long *)(unaff_x22 + 0x40) != *(long *)(lVar4 + 0x40)) break;
    if (*(long *)(unaff_x22 + 0x30) != lVar4) {
      if ((*(long *)(unaff_x22 + 0x28) == 0) || (*(long *)(unaff_x20 + 0x18) == 0))
      goto LAB_0728c0c4;
      uVar2 = FUN_0728a2f0(unaff_x21,*(undefined8 *)(unaff_x20 + 0x10),
                           *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x38),unaff_x22);
      if ((*(long *)(lVar4 + 0x28) == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) goto LAB_0728c0c4;
      FUN_0728a2f0(uVar2,*(undefined8 *)(unaff_x20 + 0x10),
                   *(undefined8 *)(*(long *)(lVar4 + 0x28) + 0x38),unaff_x22);
    }
    if (lVar3 == 0) goto LAB_0728c0c4;
    param_1 = (ulong)*(uint *)(unaff_x20 + 0x54);
    param_2 = *(int *)(lVar3 + 0x20) - *(int *)(unaff_x22 + 0x58);
    unaff_x23 = lVar3;
    unaff_x24 = lVar4;
  }
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x26) = 1;
    if ((unaff_x19 & 1) != 0) {
      FUN_0728c2c4();
      return;
    }
    return;
  }
LAB_0728c0c4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


