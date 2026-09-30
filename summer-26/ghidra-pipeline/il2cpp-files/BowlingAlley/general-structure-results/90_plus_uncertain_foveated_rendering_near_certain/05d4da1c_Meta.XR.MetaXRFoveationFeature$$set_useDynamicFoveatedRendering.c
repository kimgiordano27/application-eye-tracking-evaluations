/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_useDynamicFoveatedRendering
ENTRY_POINT: 05d4da1c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
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
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000058;
  long *in_stack_00000060;
  long *in_stack_00000068;
  
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  if (*unaff_x19 == 0) goto thunk_FUN_032d5ee8;
  *(undefined1 *)(*unaff_x19 + 0x10) = 0;
  if (*(long *)(unaff_x20 + 0x18) == 0) goto thunk_FUN_032d5ee8;
  fVar8 = (float)FUN_06bf6348(*(long *)(unaff_x20 + 0x18),0);
  FUN_05d4de18(unaff_s8 / fVar8,*(undefined8 *)(unaff_x20 + 0x10),&stack0x00000068,&stack0x00000060,
               (long)&stack0x00000058 + 4);
  if (0.0 <= in_stack_00000058._4_4_) {
    if (1.0 < in_stack_00000058._4_4_) {
      if ((*(long *)(unaff_x20 + 0x20) == 0) || (in_stack_00000060 == (long *)0x0))
      goto thunk_FUN_032d5ee8;
      (**(code **)(*in_stack_00000060 + 0x1a8))();
      if ((*(long *)(unaff_x20 + 0x20) == 0) ||
         (lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18), lVar3 == 0))
      goto thunk_FUN_032d5ee8;
      FUN_05d05b20(*(undefined8 *)(unaff_x20 + 0x18),lVar3 + 0x20,0);
      plVar7 = in_stack_00000068;
      puVar1 = PTR_DAT_072b0b28;
      uStack0000000000000028 = uStack0000000000000008;
      uStack0000000000000020 = in_stack_00000000;
      uStack0000000000000034 = uStack0000000000000010._4_4_;
      uStack0000000000000038 = uStack0000000000000010._8_4_;
      uStack000000000000002c = uStack000000000000000c;
      uStack0000000000000030 = uStack0000000000000010;
      lVar3 = *(long *)PTR_DAT_072b0b28;
      param_2 = uStack000000000000000c;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar3 = *(long *)puVar1;
      }
      if ((*(long *)(unaff_x20 + 0x20) == 0) || (plVar7 == (long *)0x0)) goto thunk_FUN_032d5ee8;
      puVar5 = *(undefined4 **)(lVar3 + 0xb8);
      lVar3 = *plVar7;
      puVar2 = &stack0x00000020;
      goto LAB_05d4dbc8;
    }
    if ((((*(long *)(unaff_x20 + 0x20) == 0) || (in_stack_00000068 == (long *)0x0)) ||
        ((**(code **)(*in_stack_00000068 + 0x1a8))(), *(long *)(unaff_x20 + 0x20) == 0)) ||
       (in_stack_00000060 == (long *)0x0)) goto thunk_FUN_032d5ee8;
    (**(code **)(*in_stack_00000060 + 0x1a8))();
  }
  else {
    if ((*(long *)(unaff_x20 + 0x20) == 0) || (in_stack_00000068 == (long *)0x0))
    goto thunk_FUN_032d5ee8;
    (**(code **)(*in_stack_00000068 + 0x1a8))();
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10), lVar3 == 0)) goto thunk_FUN_032d5ee8;
    FUN_05d05b20(*(undefined8 *)(unaff_x20 + 0x18),lVar3 + 0x20,0);
    plVar7 = in_stack_00000060;
    puVar1 = PTR_DAT_072b0b28;
    in_stack_00000048 = uStack0000000000000008;
    in_stack_00000040 = in_stack_00000000;
    in_stack_00000050 = uStack0000000000000010;
    lVar3 = *(long *)PTR_DAT_072b0b28;
    param_2 = uStack000000000000000c;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *(long *)puVar1;
    }
    if ((*(long *)(unaff_x20 + 0x20) == 0) || (plVar7 == (long *)0x0)) goto thunk_FUN_032d5ee8;
    puVar5 = *(undefined4 **)(lVar3 + 0xb8);
    lVar3 = *plVar7;
    puVar2 = &stack0x00000040;
LAB_05d4dbc8:
    (**(code **)(lVar3 + 0x1a8))(*puVar5,plVar7,puVar2);
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((lVar3 == 0) || (lVar4 = *(long *)(lVar3 + 0x10), lVar4 == 0)) goto thunk_FUN_032d5ee8;
  lVar3 = *(long *)(lVar3 + 0x18);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    if (lVar3 == 0) goto thunk_FUN_032d5ee8;
    if (*(char *)(lVar3 + 0x10) != '\0') {
      lVar4 = *unaff_x19;
      if (lVar4 == 0) goto thunk_FUN_032d5ee8;
      *(undefined1 *)(lVar4 + 0x10) = 1;
      if (*(long *)(lVar4 + 0x18) == 0) goto thunk_FUN_032d5ee8;
      FUN_05d4e0bc(*(long *)(lVar4 + 0x18),*(undefined8 *)(lVar3 + 0x18),0);
      lVar3 = *unaff_x19;
      if ((lVar3 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto thunk_FUN_032d5ee8;
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18);
      goto joined_r0x05d4dd50;
    }
  }
  else {
    if (lVar3 == 0) goto thunk_FUN_032d5ee8;
    lVar6 = *unaff_x19;
    if (*(char *)(lVar3 + 0x10) == '\0') {
      if (lVar6 == 0) goto thunk_FUN_032d5ee8;
      *(undefined1 *)(lVar6 + 0x10) = 1;
      if (*(long *)(lVar6 + 0x18) == 0) goto thunk_FUN_032d5ee8;
      FUN_05d4e0bc(*(long *)(lVar6 + 0x18),*(undefined8 *)(lVar4 + 0x18),0);
      lVar3 = *unaff_x19;
      if ((lVar3 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto thunk_FUN_032d5ee8;
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
joined_r0x05d4dd50:
      if (lVar4 == 0) goto thunk_FUN_032d5ee8;
      FUN_05d054f4(lVar3 + 0x20,lVar4 + 0x20,0);
    }
    else {
      if (lVar6 == 0) goto thunk_FUN_032d5ee8;
      *(undefined1 *)(lVar6 + 0x10) = 1;
      if (*(long *)(lVar6 + 0x18) == 0) goto thunk_FUN_032d5ee8;
      FUN_05d4e0bc(*(long *)(lVar6 + 0x18),*(undefined8 *)(lVar4 + 0x18),0);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) || (*(long *)(lVar3 + 0x18) == 0)) ||
         (*unaff_x19 == 0)) goto thunk_FUN_032d5ee8;
      FUN_05d4e19c(in_stack_00000058._4_4_,*(long *)(lVar3 + 0x10) + 0x18,
                   *(long *)(lVar3 + 0x18) + 0x18,*unaff_x19 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if (((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) ||
         ((*(long *)(lVar3 + 0x18) == 0 || (*unaff_x19 == 0)))) goto thunk_FUN_032d5ee8;
      FUN_05d05424(in_stack_00000058._4_4_,*(long *)(lVar3 + 0x10) + 0x20,
                   *(long *)(lVar3 + 0x18) + 0x20,*unaff_x19 + 0x20,0);
    }
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (((lVar3 != 0) && (lVar4 = *(long *)(lVar3 + 0x10), lVar4 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0)) {
    lVar6 = *unaff_x19;
    if (*(int *)(*(long *)PTR_DAT_072ae838 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar9 = FUN_05d4e374(in_stack_00000058._4_4_,lVar4 + 0x3c,lVar3 + 0x3c);
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 0x3c) = uVar9;
      *(undefined4 *)(lVar6 + 0x40) = param_2;
      *(undefined4 *)(lVar6 + 0x44) = param_3;
      return;
    }
  }
thunk_FUN_032d5ee8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


