/*
FUNCTION_NAME: NativeWebSocket.WebSocket$$remove_OnClose
ENTRY_POINT: 0369f10c
PROGRAM: Waifu-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2
*/


void NativeWebSocket_WebSocket__remove_OnClose(code *param_1)

{
  long unaff_x19;
  long lVar1;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
  (*param_1)();
  if (*unaff_x23 == 0) goto LAB_0369f1d4;
  FUN_079b2acc(0xff800000,*unaff_x23,DAT_0843e500,0xffffffff);
  if (*(char *)(unaff_x19 + 0x4a) != '\0') {
    if (*(char *)(unaff_x19 + 0x49) != '\0') {
      if (*(char *)(unaff_x19 + 0x48) != '\0') {
        return;
      }
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if (lVar1 == 0) goto LAB_0369f1d4;
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar1,1);
      if (*unaff_x23 == 0) goto LAB_0369f1d4;
      FUN_079b2acc(0xff800000,*unaff_x23,DAT_0843e500,0xffffffff);
      if (*(char *)(unaff_x19 + 0x4a) == '\0') goto LAB_0369f0c0;
      if (*(char *)(unaff_x19 + 0x49) != '\0') {
        return;
      }
    }
    if (*(char *)(unaff_x19 + 0x48) != '\0') {
      return;
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (lVar1 == 0) goto LAB_0369f1d4;
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar1,1);
    if (*unaff_x23 == 0) goto LAB_0369f1d4;
    FUN_079b2acc(0xff800000,*unaff_x23,DAT_0843e500,0xffffffff);
    if (*unaff_x21 == 0) goto LAB_0369f1d4;
    FUN_079b2acc(0xff800000,*unaff_x21,DAT_0843fcd0,0xffffffff);
    if (*(char *)(unaff_x19 + 0x4a) != '\0') {
      return;
    }
  }
LAB_0369f0c0:
  if ((*(char *)(unaff_x19 + 0x49) != '\0') || (*(char *)(unaff_x19 + 0x48) != '\0')) {
    return;
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if (lVar1 != 0) {
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar1,1);
    if (*unaff_x23 != 0) {
      FUN_079b2acc(0xff800000,*unaff_x23,DAT_0843e500,0xffffffff);
      if ((*unaff_x21 != 0) &&
         (FUN_079b2acc(0xff800000,*unaff_x21,DAT_0843fba0,0xffffffff), *unaff_x22 != 0)) {
        FUN_03697458();
        return;
      }
    }
  }
LAB_0369f1d4:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


