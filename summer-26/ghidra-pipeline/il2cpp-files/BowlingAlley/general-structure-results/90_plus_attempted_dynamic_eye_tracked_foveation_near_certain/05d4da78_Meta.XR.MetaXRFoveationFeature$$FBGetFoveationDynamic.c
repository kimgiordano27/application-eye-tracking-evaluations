/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationDynamic
ENTRY_POINT: 05d4da78
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 141
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined4 uVar6;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  long *in_stack_00000060;
  
  (**(code **)(*param_4 + 0x1a8))();
  if ((*(long *)(unaff_x20 + 0x20) == 0) ||
     (lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10), lVar3 == 0)) goto thunk_FUN_032d5ee8;
  FUN_05d05b20(*(undefined8 *)(unaff_x20 + 0x18),lVar3 + 0x20,0);
  plVar2 = in_stack_00000060;
  puVar1 = PTR_DAT_072b0b28;
  in_stack_00000048 = uStack0000000000000008;
  in_stack_00000040 = in_stack_00000000;
  in_stack_00000050 = in_stack_00000010;
  lVar3 = *(long *)PTR_DAT_072b0b28;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *(long *)puVar1;
  }
  if ((*(long *)(unaff_x20 + 0x20) == 0) || (plVar2 == (long *)0x0)) goto thunk_FUN_032d5ee8;
  (**(code **)(*plVar2 + 0x1a8))(**(undefined4 **)(lVar3 + 0xb8),plVar2,&stack0x00000040);
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
    lVar5 = *unaff_x19;
    if (*(char *)(lVar3 + 0x10) == '\0') {
      if (lVar5 == 0) goto thunk_FUN_032d5ee8;
      *(undefined1 *)(lVar5 + 0x10) = 1;
      if (*(long *)(lVar5 + 0x18) == 0) goto thunk_FUN_032d5ee8;
      FUN_05d4e0bc(*(long *)(lVar5 + 0x18),*(undefined8 *)(lVar4 + 0x18),0);
      lVar3 = *unaff_x19;
      if ((lVar3 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto thunk_FUN_032d5ee8;
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
joined_r0x05d4dd50:
      if (lVar4 == 0) goto thunk_FUN_032d5ee8;
      FUN_05d054f4(lVar3 + 0x20,lVar4 + 0x20,0);
    }
    else {
      if (lVar5 == 0) goto thunk_FUN_032d5ee8;
      *(undefined1 *)(lVar5 + 0x10) = 1;
      if (*(long *)(lVar5 + 0x18) == 0) goto thunk_FUN_032d5ee8;
      FUN_05d4e0bc(*(long *)(lVar5 + 0x18),*(undefined8 *)(lVar4 + 0x18),0);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) || (*(long *)(lVar3 + 0x18) == 0)) ||
         (*unaff_x19 == 0)) goto thunk_FUN_032d5ee8;
      FUN_05d4e19c(*(long *)(lVar3 + 0x10) + 0x18,*(long *)(lVar3 + 0x18) + 0x18,*unaff_x19 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if (((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) ||
         ((*(long *)(lVar3 + 0x18) == 0 || (*unaff_x19 == 0)))) goto thunk_FUN_032d5ee8;
      FUN_05d05424(*(long *)(lVar3 + 0x10) + 0x20,*(long *)(lVar3 + 0x18) + 0x20,*unaff_x19 + 0x20,0
                  );
    }
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (((lVar3 != 0) && (lVar4 = *(long *)(lVar3 + 0x10), lVar4 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0)) {
    lVar5 = *unaff_x19;
    if (*(int *)(*(long *)PTR_DAT_072ae838 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar6 = FUN_05d4e374(lVar4 + 0x3c,lVar3 + 0x3c);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x3c) = uVar6;
      *(undefined4 *)(lVar5 + 0x40) = uStack000000000000000c;
      *(undefined4 *)(lVar5 + 0x44) = param_3;
      return;
    }
  }
thunk_FUN_032d5ee8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


