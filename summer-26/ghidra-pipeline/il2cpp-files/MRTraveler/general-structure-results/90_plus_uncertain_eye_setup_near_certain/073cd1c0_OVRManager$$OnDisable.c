/*
FUNCTION_NAME: OVRManager$$OnDisable
ENTRY_POINT: 073cd1c0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__OnDisable(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *in_x10;
  long *unaff_x19;
  long unaff_x20;
  undefined4 uVar6;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  long *in_stack_00000068;
  
  (*in_x10)();
  if ((*(long *)(unaff_x20 + 0x20) == 0) ||
     (lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18), lVar3 == 0)) goto LAB_073cd490;
  FUN_0737f734(*(undefined8 *)(unaff_x20 + 0x18),lVar3 + 0x20,0);
  plVar2 = in_stack_00000068;
  puVar1 = PTR_DAT_08eb58a8;
  in_stack_00000028 = uStack0000000000000008;
  in_stack_00000020 = in_stack_00000000;
  in_stack_00000030 = in_stack_00000010;
  lVar3 = *(long *)PTR_DAT_08eb58a8;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar3 = *(long *)puVar1;
  }
  if ((*(long *)(unaff_x20 + 0x20) == 0) || (plVar2 == (long *)0x0)) goto LAB_073cd490;
  (**(code **)(*plVar2 + 0x1a8))(**(undefined4 **)(lVar3 + 0xb8),plVar2,&stack0x00000020);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((lVar3 == 0) || (lVar4 = *(long *)(lVar3 + 0x10), lVar4 == 0)) goto LAB_073cd490;
  lVar3 = *(long *)(lVar3 + 0x18);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    if (lVar3 == 0) goto LAB_073cd490;
    if (*(char *)(lVar3 + 0x10) != '\0') {
      lVar4 = *unaff_x19;
      if (lVar4 == 0) goto LAB_073cd490;
      *(undefined1 *)(lVar4 + 0x10) = 1;
      if (*(long *)(lVar4 + 0x18) == 0) goto LAB_073cd490;
      FUN_073cd738(*(long *)(lVar4 + 0x18),*(undefined8 *)(lVar3 + 0x18),0);
      lVar3 = *unaff_x19;
      if ((lVar3 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_073cd490;
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18);
      goto joined_r0x073cd3cc;
    }
  }
  else {
    if (lVar3 == 0) goto LAB_073cd490;
    lVar5 = *unaff_x19;
    if (*(char *)(lVar3 + 0x10) == '\0') {
      if (lVar5 == 0) goto LAB_073cd490;
      *(undefined1 *)(lVar5 + 0x10) = 1;
      if (*(long *)(lVar5 + 0x18) == 0) goto LAB_073cd490;
      FUN_073cd738(*(long *)(lVar5 + 0x18),*(undefined8 *)(lVar4 + 0x18),0);
      lVar3 = *unaff_x19;
      if ((lVar3 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_073cd490;
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
joined_r0x073cd3cc:
      if (lVar4 == 0) goto LAB_073cd490;
      FUN_0737f108(lVar3 + 0x20,lVar4 + 0x20,0);
    }
    else {
      if (lVar5 == 0) goto LAB_073cd490;
      *(undefined1 *)(lVar5 + 0x10) = 1;
      if (*(long *)(lVar5 + 0x18) == 0) goto LAB_073cd490;
      FUN_073cd738(*(long *)(lVar5 + 0x18),*(undefined8 *)(lVar4 + 0x18),0);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) || (*(long *)(lVar3 + 0x18) == 0)) ||
         (*unaff_x19 == 0)) goto LAB_073cd490;
      OVRManager__ReturnToLauncher
                (*(long *)(lVar3 + 0x10) + 0x18,*(long *)(lVar3 + 0x18) + 0x18,*unaff_x19 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if (((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) ||
         ((*(long *)(lVar3 + 0x18) == 0 || (*unaff_x19 == 0)))) goto LAB_073cd490;
      FUN_0737f038(*(long *)(lVar3 + 0x10) + 0x20,*(long *)(lVar3 + 0x18) + 0x20,*unaff_x19 + 0x20,0
                  );
    }
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (((lVar3 != 0) && (lVar4 = *(long *)(lVar3 + 0x10), lVar4 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0)) {
    lVar5 = *unaff_x19;
    if (*(int *)(*(long *)PTR_DAT_08eb3460 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar6 = FUN_073cd9f0(lVar4 + 0x3c,lVar3 + 0x3c);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x3c) = uVar6;
      *(undefined4 *)(lVar5 + 0x40) = uStack000000000000000c;
      *(undefined4 *)(lVar5 + 0x44) = param_3;
      return;
    }
  }
LAB_073cd490:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


