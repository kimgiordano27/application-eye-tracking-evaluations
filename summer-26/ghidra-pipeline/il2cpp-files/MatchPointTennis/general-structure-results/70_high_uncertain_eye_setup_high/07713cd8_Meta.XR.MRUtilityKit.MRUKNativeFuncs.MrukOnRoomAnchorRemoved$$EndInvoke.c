/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnRoomAnchorRemoved$$EndInvoke
ENTRY_POINT: 07713cd8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorRemoved__EndInvoke(long param_1)

{
  uint uVar1;
  char in_NG;
  undefined1 in_CY;
  char in_OV;
  long lVar2;
  long unaff_x19;
  int iVar3;
  uint unaff_w21;
  undefined8 *unaff_x22;
  long lVar4;
  
  while( true ) {
    if (in_NG == in_OV) {
      return 0;
    }
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar4 = *(long *)(param_1 + (long)(int)unaff_w21 * 8 + 0x20);
    if ((lVar4 == 0) || (lVar2 = *(long *)(lVar4 + 0x18), lVar2 == 0)) break;
    iVar3 = 0;
    while (iVar3 < *(int *)(lVar2 + 0x18)) {
      lVar2 = FUN_05badb74(lVar2,iVar3,*unaff_x22);
      if (lVar2 == 0) goto LAB_07713d38;
      if (*(char *)(lVar2 + 0x10) != '\0') {
        return 1;
      }
      lVar2 = *(long *)(lVar4 + 0x18);
      iVar3 = iVar3 + 1;
      if (lVar2 == 0) goto LAB_07713d38;
    }
    param_1 = *(long *)(unaff_x19 + 0x30);
    unaff_w21 = unaff_w21 + 1;
    if (param_1 == 0) break;
    uVar1 = *(uint *)(param_1 + 0x18);
    in_CY = uVar1 <= unaff_w21;
    in_OV = SBORROW4(unaff_w21,uVar1);
    in_NG = (int)(unaff_w21 - uVar1) < 0;
  }
LAB_07713d38:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


