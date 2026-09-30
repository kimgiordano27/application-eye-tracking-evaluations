/*
FUNCTION_NAME: OVRPlugin$$CalculateLayerDesc
ENTRY_POINT: 0909affc
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CalculateLayerDesc(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long in_x9;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  undefined4 uVar4;
  long *in_stack_00000060;
  
  (**(code **)(in_x9 + 0x1a8))();
  if ((*(long *)(unaff_x20 + 0x20) == 0) || (in_stack_00000060 == (long *)0x0)) goto LAB_0909b1f8;
  (**(code **)(*in_stack_00000060 + 0x1a8))();
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((lVar2 == 0) || (lVar1 = *(long *)(lVar2 + 0x10), lVar1 == 0)) goto LAB_0909b1f8;
  lVar2 = *(long *)(lVar2 + 0x18);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    if (lVar2 == 0) goto LAB_0909b1f8;
    if (*(char *)(lVar2 + 0x10) != '\0') {
      lVar1 = *unaff_x19;
      if (lVar1 == 0) goto LAB_0909b1f8;
      *(undefined1 *)(lVar1 + 0x10) = 1;
      if (*(long *)(lVar1 + 0x18) == 0) goto LAB_0909b1f8;
      FUN_0909b49c(*(long *)(lVar1 + 0x18),*(undefined8 *)(lVar2 + 0x18),0);
      lVar2 = *unaff_x19;
      if ((lVar2 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_0909b1f8;
      lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18);
      goto joined_r0x0909b13c;
    }
  }
  else {
    if (lVar2 == 0) goto LAB_0909b1f8;
    lVar3 = *unaff_x19;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      if (lVar3 == 0) goto LAB_0909b1f8;
      *(undefined1 *)(lVar3 + 0x10) = 1;
      if (*(long *)(lVar3 + 0x18) == 0) goto LAB_0909b1f8;
      FUN_0909b49c(*(long *)(lVar3 + 0x18),*(undefined8 *)(lVar1 + 0x18),0);
      lVar2 = *unaff_x19;
      if ((lVar2 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_0909b1f8;
      lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
joined_r0x0909b13c:
      if (lVar1 == 0) goto LAB_0909b1f8;
      FUN_0904d38c(lVar2 + 0x20,lVar1 + 0x20,0);
    }
    else {
      if (lVar3 == 0) goto LAB_0909b1f8;
      *(undefined1 *)(lVar3 + 0x10) = 1;
      if (*(long *)(lVar3 + 0x18) == 0) goto LAB_0909b1f8;
      FUN_0909b49c(*(long *)(lVar3 + 0x18),*(undefined8 *)(lVar1 + 0x18),0);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) || (*(long *)(lVar2 + 0x18) == 0)) ||
         (*unaff_x19 == 0)) goto LAB_0909b1f8;
      FUN_0909b57c(*(long *)(lVar2 + 0x10) + 0x18,*(long *)(lVar2 + 0x18) + 0x18,*unaff_x19 + 0x18);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if (((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) ||
         ((*(long *)(lVar2 + 0x18) == 0 || (*unaff_x19 == 0)))) goto LAB_0909b1f8;
      FUN_0904d2bc(*(long *)(lVar2 + 0x10) + 0x20,*(long *)(lVar2 + 0x18) + 0x20,*unaff_x19 + 0x20,0
                  );
    }
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (((lVar2 != 0) && (lVar1 = *(long *)(lVar2 + 0x10), lVar1 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
    lVar3 = *unaff_x19;
    if (*(int *)(*(long *)PTR_DAT_0ac767c8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar4 = FUN_0909b754(lVar1 + 0x3c,lVar2 + 0x3c);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x3c) = uVar4;
      *(undefined4 *)(lVar3 + 0x40) = param_2;
      *(undefined4 *)(lVar3 + 0x44) = param_3;
      return;
    }
  }
LAB_0909b1f8:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


