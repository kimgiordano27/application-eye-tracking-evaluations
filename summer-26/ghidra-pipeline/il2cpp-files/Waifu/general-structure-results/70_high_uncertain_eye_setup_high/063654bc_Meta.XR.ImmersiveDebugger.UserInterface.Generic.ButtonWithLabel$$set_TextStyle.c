/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$set_TextStyle
ENTRY_POINT: 063654bc
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


bool Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__set_TextStyle
               (long param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_086de900 & 1) == 0) {
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
    DAT_086de900 = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar2 = FUN_043903b4(*(long *)(param_1 + 0x58),param_2,DAT_083ebc78);
    if ((uVar2 & 1) == 0) {
      return false;
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + (long)param_2 * 0x44;
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      if (*(long *)(param_1 + 0x68) != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
        param_3 = *(int *)(lVar3 + 0x14) + param_3;
        cVar1 = *(char *)(lVar4 + param_3) + '\x01';
        *(char *)(lVar4 + param_3) = cVar1;
        if ((param_4 & 1) != 0) {
          if (*(long *)(param_1 + 0x70) == 0) goto LAB_063655f0;
          lVar3 = *(long *)(*(long *)(param_1 + 0x70) + 0x10);
          *(char *)(lVar3 + param_3) = *(char *)(lVar3 + param_3) + '\x01';
        }
        return cVar1 == '\x01';
      }
    }
  }
LAB_063655f0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


