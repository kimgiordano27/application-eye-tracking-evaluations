/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$.ctor
ENTRY_POINT: 05ffce3c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate___ctor
               (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x25;
  long *plVar5;
  undefined4 uVar6;
  undefined8 uStack0000000000000040;
  undefined4 uStack000000000000004c;
  long *in_stack_00000060;
  
  plVar1 = in_stack_00000060;
  plVar5 = *(long **)(unaff_x25 + 0xfa8);
  lVar2 = *plVar5;
                    /* catch() { ... } // from try @ 05ffce38 with catch @ 05ffce50 */
  uStack0000000000000040 = param_1;
  uStack000000000000004c = param_2;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar2 = *plVar5;
  }
  if ((*(long *)(unaff_x20 + 0x20) == 0) || (plVar1 == (long *)0x0)) goto LAB_05ffd184;
  (**(code **)(*plVar1 + 0x1a8))(**(undefined4 **)(lVar2 + 0xb8),plVar1,&stack0x00000040);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((lVar2 == 0) || (lVar3 = *(long *)(lVar2 + 0x10), lVar3 == 0)) goto LAB_05ffd184;
  lVar2 = *(long *)(lVar2 + 0x18);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    if (lVar2 == 0) goto LAB_05ffd184;
    if (*(char *)(lVar2 + 0x10) != '\0') {
      lVar3 = *unaff_x19;
      if (lVar3 == 0) goto LAB_05ffd184;
      *(undefined1 *)(lVar3 + 0x10) = 1;
      if (*(long *)(lVar3 + 0x18) == 0) goto LAB_05ffd184;
      FUN_05ffd42c(*(long *)(lVar3 + 0x18),*(undefined8 *)(lVar2 + 0x18),0);
      lVar2 = *unaff_x19;
      if ((lVar2 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_05ffd184;
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18);
      goto joined_r0x05ffd0c0;
    }
  }
  else {
    if (lVar2 == 0) goto LAB_05ffd184;
    lVar4 = *unaff_x19;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      if (lVar4 == 0) goto LAB_05ffd184;
      *(undefined1 *)(lVar4 + 0x10) = 1;
      if (*(long *)(lVar4 + 0x18) == 0) goto LAB_05ffd184;
      FUN_05ffd42c(*(long *)(lVar4 + 0x18),*(undefined8 *)(lVar3 + 0x18),0);
      lVar2 = *unaff_x19;
      if ((lVar2 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_05ffd184;
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
joined_r0x05ffd0c0:
      if (lVar3 == 0) goto LAB_05ffd184;
      FUN_05faebbc(lVar2 + 0x20,lVar3 + 0x20,0);
    }
    else {
      if (lVar4 == 0) goto LAB_05ffd184;
      *(undefined1 *)(lVar4 + 0x10) = 1;
      if (*(long *)(lVar4 + 0x18) == 0) goto LAB_05ffd184;
      FUN_05ffd42c(*(long *)(lVar4 + 0x18),*(undefined8 *)(lVar3 + 0x18),0);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) || (*(long *)(lVar2 + 0x18) == 0)) ||
         (*unaff_x19 == 0)) goto LAB_05ffd184;
      FUN_05ffd50c(*(long *)(lVar2 + 0x10) + 0x18,*(long *)(lVar2 + 0x18) + 0x18,*unaff_x19 + 0x18);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if (((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) ||
         ((*(long *)(lVar2 + 0x18) == 0 || (*unaff_x19 == 0)))) goto LAB_05ffd184;
      FUN_05faeaec(*(long *)(lVar2 + 0x10) + 0x20,*(long *)(lVar2 + 0x18) + 0x20,*unaff_x19 + 0x20,0
                  );
    }
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (((lVar2 != 0) && (lVar3 = *(long *)(lVar2 + 0x10), lVar3 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
    lVar4 = *unaff_x19;
    if (*(int *)(*(long *)PTR_DAT_075f4af0 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar6 = FUN_05ffd6e4(lVar3 + 0x3c,lVar2 + 0x3c);
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x3c) = uVar6;
      *(undefined4 *)(lVar4 + 0x40) = param_2;
      *(undefined4 *)(lVar4 + 0x44) = param_3;
      return;
    }
  }
LAB_05ffd184:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


