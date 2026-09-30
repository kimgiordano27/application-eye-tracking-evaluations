/*
FUNCTION_NAME: OVRPlugin$$.cctor
ENTRY_POINT: 06ad1f6c
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin___cctor(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 *in_x9;
  long lVar2;
  long lVar3;
  long in_x10;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined4 uVar5;
  
  (**(code **)(in_x10 + 0x198))(*in_x9);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((lVar2 == 0) || (lVar1 = *(long *)(lVar2 + 0x10), lVar1 == 0)) goto LAB_06ad21c8;
  lVar2 = *(long *)(lVar2 + 0x18);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    if (lVar2 == 0) goto LAB_06ad21c8;
    if (*(char *)(lVar2 + 0x10) != '\0') {
      lVar1 = *unaff_x19;
      if (lVar1 == 0) goto LAB_06ad21c8;
      *(undefined1 *)(lVar1 + 0x10) = 1;
      if (*(long *)(lVar1 + 0x18) == 0) goto LAB_06ad21c8;
      FUN_06ad265c(*(long *)(lVar1 + 0x18),*(undefined8 *)(lVar2 + 0x18),0);
      lVar2 = *unaff_x19;
      if ((lVar2 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_06ad21c8;
      lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18);
      goto joined_r0x06ad20f8;
    }
  }
  else {
    if (lVar2 == 0) goto LAB_06ad21c8;
    lVar3 = *unaff_x19;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      if (lVar3 == 0) goto LAB_06ad21c8;
      *(undefined1 *)(lVar3 + 0x10) = 1;
      if (*(long *)(lVar3 + 0x18) == 0) goto LAB_06ad21c8;
      FUN_06ad265c(*(long *)(lVar3 + 0x18),*(undefined8 *)(lVar1 + 0x18),0);
      lVar2 = *unaff_x19;
      if ((lVar2 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_06ad21c8;
      lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
joined_r0x06ad20f8:
      if (lVar1 == 0) goto LAB_06ad21c8;
      uVar4 = *(undefined8 *)(lVar1 + 0x20);
      *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = uVar4;
      uVar4 = *(undefined8 *)(lVar1 + 0x2c);
      *(undefined8 *)(lVar2 + 0x34) = *(undefined8 *)(lVar1 + 0x34);
      *(undefined8 *)(lVar2 + 0x2c) = uVar4;
    }
    else {
      if (lVar3 == 0) goto LAB_06ad21c8;
      *(undefined1 *)(lVar3 + 0x10) = 1;
      if (*(long *)(lVar3 + 0x18) == 0) goto LAB_06ad21c8;
      FUN_06ad265c(*(long *)(lVar3 + 0x18),*(undefined8 *)(lVar1 + 0x18),0);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) || (*(long *)(lVar2 + 0x18) == 0)) ||
         (*unaff_x19 == 0)) goto LAB_06ad21c8;
      FUN_06ad2740(*(long *)(lVar2 + 0x10) + 0x18,*(long *)(lVar2 + 0x18) + 0x18,*unaff_x19 + 0x18);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if (((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) ||
         ((*(long *)(lVar2 + 0x18) == 0 || (*unaff_x19 == 0)))) goto LAB_06ad21c8;
      FUN_06a70350(*(long *)(lVar2 + 0x10) + 0x20,*(long *)(lVar2 + 0x18) + 0x20,*unaff_x19 + 0x20,0
                  );
    }
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (((lVar2 != 0) && (lVar1 = *(long *)(lVar2 + 0x10), lVar1 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
    lVar3 = *unaff_x19;
    if (*(int *)(DAT_083cbd28 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_06add384(lVar1 + 0x3c,lVar2 + 0x3c,0);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x3c) = uVar5;
      *(undefined4 *)(lVar3 + 0x40) = param_2;
      *(undefined4 *)(lVar3 + 0x44) = param_3;
      return;
    }
  }
LAB_06ad21c8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


