/*
FUNCTION_NAME: OVRPlugin$$SetEyeBufferSharpenType
ENTRY_POINT: 06ad1dd4
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


void OVRPlugin__SetEyeBufferSharpenType
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
  float fVar8;
  undefined4 uVar9;
  float unaff_s8;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000058;
  long *in_stack_00000060;
  long *in_stack_00000068;
  
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  if (*unaff_x19 == 0) goto LAB_06ad21c8;
  *(undefined1 *)(*unaff_x19 + 0x10) = 0;
  if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_06ad21c8;
  fVar8 = (float)FUN_07a1bb0c(*(long *)(unaff_x20 + 0x18),0);
  FUN_06ad21cc(unaff_s8 / fVar8,*(undefined8 *)(unaff_x20 + 0x10),&stack0x00000068,&stack0x00000060,
               (long)&stack0x00000058 + 4);
  if (0.0 <= in_stack_00000058._4_4_) {
    if (1.0 < in_stack_00000058._4_4_) {
      if ((*(long *)(unaff_x20 + 0x20) == 0) || (in_stack_00000060 == (long *)0x0))
      goto LAB_06ad21c8;
      (**(code **)(*in_stack_00000060 + 0x198))();
      if ((*(long *)(unaff_x20 + 0x20) == 0) ||
         (lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18), lVar2 == 0)) goto LAB_06ad21c8;
      FUN_06a70abc(*(undefined8 *)(unaff_x20 + 0x18),lVar2 + 0x20,0);
      plVar7 = in_stack_00000068;
      in_stack_00000028 = uStack0000000000000008;
      in_stack_00000020 = in_stack_00000000;
      uStack0000000000000034 = uStack0000000000000010._4_4_;
      in_stack_00000038 = uStack0000000000000010._8_4_;
      uStack0000000000000030 = uStack0000000000000010;
      param_2 = uStack000000000000000c;
      if (*(int *)(DAT_083cffe0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if ((*(long *)(unaff_x20 + 0x20) == 0) || (plVar7 == (long *)0x0)) goto LAB_06ad21c8;
      puVar4 = *(undefined4 **)(DAT_083cffe0 + 0xb8);
      lVar2 = *plVar7;
      puVar1 = &stack0x00000020;
      goto LAB_06ad1f70;
    }
    if ((((*(long *)(unaff_x20 + 0x20) == 0) || (in_stack_00000068 == (long *)0x0)) ||
        ((**(code **)(*in_stack_00000068 + 0x198))(), *(long *)(unaff_x20 + 0x20) == 0)) ||
       (in_stack_00000060 == (long *)0x0)) goto LAB_06ad21c8;
    (**(code **)(*in_stack_00000060 + 0x198))();
  }
  else {
    if ((*(long *)(unaff_x20 + 0x20) == 0) || (in_stack_00000068 == (long *)0x0)) goto LAB_06ad21c8;
    (**(code **)(*in_stack_00000068 + 0x198))();
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10), lVar2 == 0)) goto LAB_06ad21c8;
    FUN_06a70abc(*(undefined8 *)(unaff_x20 + 0x18),lVar2 + 0x20,0);
    plVar7 = in_stack_00000060;
    in_stack_00000048 = uStack0000000000000008;
    in_stack_00000040 = in_stack_00000000;
    in_stack_00000050 = uStack0000000000000010;
    param_2 = uStack000000000000000c;
    if (*(int *)(DAT_083cffe0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if ((*(long *)(unaff_x20 + 0x20) == 0) || (plVar7 == (long *)0x0)) goto LAB_06ad21c8;
    puVar4 = *(undefined4 **)(DAT_083cffe0 + 0xb8);
    lVar2 = *plVar7;
    puVar1 = &stack0x00000040;
LAB_06ad1f70:
    (**(code **)(lVar2 + 0x198))(*puVar4,plVar7,puVar1);
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((lVar2 == 0) || (lVar3 = *(long *)(lVar2 + 0x10), lVar3 == 0)) goto LAB_06ad21c8;
  lVar2 = *(long *)(lVar2 + 0x18);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    if (lVar2 == 0) goto LAB_06ad21c8;
    if (*(char *)(lVar2 + 0x10) != '\0') {
      lVar3 = *unaff_x19;
      if (lVar3 == 0) goto LAB_06ad21c8;
      *(undefined1 *)(lVar3 + 0x10) = 1;
      if (*(long *)(lVar3 + 0x18) == 0) goto LAB_06ad21c8;
      FUN_06ad265c(*(long *)(lVar3 + 0x18),*(undefined8 *)(lVar2 + 0x18),0);
      lVar2 = *unaff_x19;
      if ((lVar2 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_06ad21c8;
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18);
      goto joined_r0x06ad20f8;
    }
  }
  else {
    if (lVar2 == 0) goto LAB_06ad21c8;
    lVar5 = *unaff_x19;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      if (lVar5 == 0) goto LAB_06ad21c8;
      *(undefined1 *)(lVar5 + 0x10) = 1;
      if (*(long *)(lVar5 + 0x18) == 0) goto LAB_06ad21c8;
      FUN_06ad265c(*(long *)(lVar5 + 0x18),*(undefined8 *)(lVar3 + 0x18),0);
      lVar2 = *unaff_x19;
      if ((lVar2 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_06ad21c8;
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
joined_r0x06ad20f8:
      if (lVar3 == 0) goto LAB_06ad21c8;
      uVar6 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = uVar6;
      uVar6 = *(undefined8 *)(lVar3 + 0x2c);
      *(undefined8 *)(lVar2 + 0x34) = *(undefined8 *)(lVar3 + 0x34);
      *(undefined8 *)(lVar2 + 0x2c) = uVar6;
    }
    else {
      if (lVar5 == 0) goto LAB_06ad21c8;
      *(undefined1 *)(lVar5 + 0x10) = 1;
      if (*(long *)(lVar5 + 0x18) == 0) goto LAB_06ad21c8;
      FUN_06ad265c(*(long *)(lVar5 + 0x18),*(undefined8 *)(lVar3 + 0x18),0);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) || (*(long *)(lVar2 + 0x18) == 0)) ||
         (*unaff_x19 == 0)) goto LAB_06ad21c8;
      FUN_06ad2740(in_stack_00000058._4_4_,*(long *)(lVar2 + 0x10) + 0x18,
                   *(long *)(lVar2 + 0x18) + 0x18,*unaff_x19 + 0x18);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if (((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) ||
         ((*(long *)(lVar2 + 0x18) == 0 || (*unaff_x19 == 0)))) goto LAB_06ad21c8;
      FUN_06a70350(in_stack_00000058._4_4_,*(long *)(lVar2 + 0x10) + 0x20,
                   *(long *)(lVar2 + 0x18) + 0x20,*unaff_x19 + 0x20,0);
    }
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (((lVar2 != 0) && (lVar3 = *(long *)(lVar2 + 0x10), lVar3 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
    lVar5 = *unaff_x19;
    if (*(int *)(DAT_083cbd28 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar9 = FUN_06add384(in_stack_00000058._4_4_,lVar3 + 0x3c,lVar2 + 0x3c,0);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x3c) = uVar9;
      *(undefined4 *)(lVar5 + 0x40) = param_2;
      *(undefined4 *)(lVar5 + 0x44) = param_3;
      return;
    }
  }
LAB_06ad21c8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


