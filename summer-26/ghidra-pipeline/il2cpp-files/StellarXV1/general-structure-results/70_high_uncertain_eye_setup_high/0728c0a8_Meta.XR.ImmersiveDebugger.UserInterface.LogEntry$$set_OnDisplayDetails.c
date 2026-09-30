/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.LogEntry$$set_OnDisplayDetails
ENTRY_POINT: 0728c0a8
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


void Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__set_OnDisplayDetails(undefined8 param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  long unaff_x22;
  long unaff_x24;
  undefined1 unaff_w25;
  
  do {
    uVar4 = FUN_0728a634(param_1,*(undefined8 *)(unaff_x20 + 0x10),unaff_x24);
    lVar5 = unaff_x21;
    do {
      unaff_x24 = unaff_x22;
      unaff_x21 = FUN_0728b8fc(uVar4,lVar5);
      if ((((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) ||
          (unaff_x22 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x28), unaff_x22 == 0)) ||
         (unaff_x24 == 0)) goto LAB_0728c0c4;
      if (*(long *)(unaff_x22 + 0x40) != *(long *)(unaff_x24 + 0x40)) {
        if (lVar5 != 0) {
          *(undefined1 *)(lVar5 + 0x26) = 1;
          if ((unaff_x19 & 1) == 0) {
            return;
          }
          FUN_0728c2c4();
          return;
        }
        goto LAB_0728c0c4;
      }
      if (*(long *)(unaff_x22 + 0x30) != unaff_x24) {
        if ((*(long *)(unaff_x22 + 0x28) == 0) || (*(long *)(unaff_x20 + 0x18) == 0))
        goto LAB_0728c0c4;
        uVar3 = FUN_0728a2f0(unaff_x21,*(undefined8 *)(unaff_x20 + 0x10),
                             *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x38),unaff_x22);
        if ((*(long *)(unaff_x24 + 0x28) == 0) || (*(long *)(unaff_x20 + 0x18) == 0))
        goto LAB_0728c0c4;
        FUN_0728a2f0(uVar3,*(undefined8 *)(unaff_x20 + 0x10),
                     *(undefined8 *)(*(long *)(unaff_x24 + 0x28) + 0x38),unaff_x22);
      }
      if (lVar5 == 0) goto LAB_0728c0c4;
      uVar1 = *(undefined4 *)(unaff_x20 + 0x54);
      *(int *)(unaff_x21 + 0x20) = *(int *)(lVar5 + 0x20) - *(int *)(unaff_x22 + 0x58);
      bVar2 = FUN_07288f9c(uVar1);
      *(undefined1 *)(lVar5 + 0x26) = unaff_w25;
      *(byte *)(unaff_x21 + 0x24) = bVar2 & 1;
      uVar4 = Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__get_Callstack();
      lVar5 = unaff_x21;
    } while ((uVar4 & 1) == 0);
    FUN_072893fc(unaff_x22,unaff_x24);
    param_1 = FUN_0728ba5c();
    if (*(long *)(unaff_x20 + 0x18) == 0) {
LAB_0728c0c4:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  } while( true );
}


