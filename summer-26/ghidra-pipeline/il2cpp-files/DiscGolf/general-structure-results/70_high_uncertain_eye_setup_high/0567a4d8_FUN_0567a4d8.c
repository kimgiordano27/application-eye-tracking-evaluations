/*
FUNCTION_NAME: FUN_0567a4d8
ENTRY_POINT: 0567a4d8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0567a4d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  char local_88 [72];
  
  if ((DAT_06dbc6dc & 1) == 0) {
    FUN_02d965b8(System_Collections_Generic_List<RectTransform>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<RegexFC>_TypeInfo);
    DAT_06dbc6dc = 1;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) goto LAB_0567a640;
  if (*(char *)(lVar4 + 0x2d1) == '\0') {
    FUN_056791b4(local_88,lVar4,0);
    if (local_88[0] == '\0') {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_0567a640;
      goto LAB_0567a534;
    }
    uVar2 = 1;
    uVar3 = 1;
  }
  else {
LAB_0567a534:
    uVar2 = FUN_0566edb0(lVar4,0x90,0);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_0567a640;
    uVar3 = FUN_0566edb0(*(long *)(param_1 + 0x10),0x110,0);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) goto LAB_0567a640;
  if (((*(char *)(lVar4 + 0x160) != '\0') && (((uVar2 | uVar3) & 1) != 0)) &&
     (uVar5 = FUN_0566d48c(lVar4,0), (uVar5 & 1) != 0)) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) goto LAB_0567a640;
    iVar1 = *(int *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0550afb4(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
    }
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_0567a640;
    FUN_0566fc80(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_0567a640;
    FUN_0567008c(*(long *)(param_1 + 0x10),uVar2 & 1,uVar3 & 1,param_2,param_3,
                 (long *)(param_1 + 0x18),0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    OVRPlugin__get_tiledMultiResLevel(*(long *)(param_1 + 0x10),param_2,0);
    return;
  }
LAB_0567a640:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


