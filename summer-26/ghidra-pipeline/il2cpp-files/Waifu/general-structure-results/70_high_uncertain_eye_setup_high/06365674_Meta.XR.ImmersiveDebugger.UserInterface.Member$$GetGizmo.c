/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$GetGizmo
ENTRY_POINT: 06365674
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_UserInterface_Member__GetGizmo(void)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined1 unaff_w24;
  
  FUN_0335b6c8(&DAT_083ebca8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x23 + 0x901) = unaff_w24;
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    uVar3 = FUN_043903b4(*(long *)(unaff_x20 + 0x58),unaff_w22,DAT_083ebc78);
    if ((uVar3 & 1) == 0) {
      return false;
    }
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x58) + 0x10) + (long)unaff_w22 * 0x44;
      *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + -1;
      if (*(long *)(unaff_x20 + 0x68) != 0) {
        lVar5 = *(long *)(*(long *)(unaff_x20 + 0x68) + 0x10);
        iVar1 = *(int *)(lVar4 + 0x14) + unaff_w21;
        cVar2 = *(char *)(lVar5 + iVar1) + -1;
        *(char *)(lVar5 + iVar1) = cVar2;
        if ((unaff_x19 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0636572c;
          lVar4 = *(long *)(*(long *)(unaff_x20 + 0x70) + 0x10);
          *(char *)(lVar4 + iVar1) = *(char *)(lVar4 + iVar1) + -1;
        }
        return cVar2 == '\0';
      }
    }
  }
LAB_0636572c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


