/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$set_BackgroundStyle
ENTRY_POINT: 063654d4
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__set_BackgroundStyle
               (ulong param_1,long param_2,int param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong unaff_x19;
  int unaff_w21;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083eaf88,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eaf90,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebc78,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebc98,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebca8,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x23 + 0x900) = 1;
  }
  if (*(long *)(param_2 + 0x58) != 0) {
    uVar3 = FUN_043903b4(*(long *)(param_2 + 0x58),param_3,DAT_083ebc78);
    if ((uVar3 & 1) == 0) {
      return false;
    }
    if (*(long *)(param_2 + 0x58) != 0) {
      lVar4 = *(long *)(*(long *)(param_2 + 0x58) + 0x10) + (long)param_3 * 0x44;
      *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
      if (*(long *)(param_2 + 0x68) != 0) {
        lVar5 = *(long *)(*(long *)(param_2 + 0x68) + 0x10);
        iVar2 = *(int *)(lVar4 + 0x14) + unaff_w21;
        cVar1 = *(char *)(lVar5 + iVar2) + '\x01';
        *(char *)(lVar5 + iVar2) = cVar1;
        if ((unaff_x19 & 1) != 0) {
          if (*(long *)(param_2 + 0x70) == 0) goto LAB_063655f0;
          lVar4 = *(long *)(*(long *)(param_2 + 0x70) + 0x10);
          *(char *)(lVar4 + iVar2) = *(char *)(lVar4 + iVar2) + '\x01';
        }
        return cVar1 == '\x01';
      }
    }
  }
LAB_063655f0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


