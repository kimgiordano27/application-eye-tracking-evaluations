/*
FUNCTION_NAME: Meta.XR.MetaXRSpaceWarp$$SetAppSpacePosition
ENTRY_POINT: 05d4db80
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MetaXRSpaceWarp__SetAppSpacePosition
               (undefined8 param_1,undefined1 param_2 [16],undefined4 param_3)

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
  undefined1 in_stack_00000008 [16];
  undefined8 uStack0000000000000020;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  long *in_stack_00000068;
  
  plVar1 = in_stack_00000068;
  plVar5 = *(long **)(unaff_x25 + 0xb28);
  uStack0000000000000030 = in_stack_00000008._8_4_;
  lVar2 = *plVar5;
  uStack0000000000000020 = param_1;
  uStack000000000000002c = in_stack_00000008._4_4_;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *plVar5;
  }
  if ((*(long *)(unaff_x20 + 0x20) == 0) || (plVar1 == (long *)0x0)) goto thunk_FUN_032d5ee8;
  (**(code **)(*plVar1 + 0x1a8))(**(undefined4 **)(lVar2 + 0xb8),plVar1,&stack0x00000020);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((lVar2 == 0) || (lVar3 = *(long *)(lVar2 + 0x10), lVar3 == 0)) goto thunk_FUN_032d5ee8;
  lVar2 = *(long *)(lVar2 + 0x18);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    if (lVar2 == 0) goto thunk_FUN_032d5ee8;
    if (*(char *)(lVar2 + 0x10) != '\0') {
      lVar3 = *unaff_x19;
      if (lVar3 == 0) goto thunk_FUN_032d5ee8;
      *(undefined1 *)(lVar3 + 0x10) = 1;
      if (*(long *)(lVar3 + 0x18) == 0) goto thunk_FUN_032d5ee8;
      FUN_05d4e0bc(*(long *)(lVar3 + 0x18),*(undefined8 *)(lVar2 + 0x18),0);
      lVar2 = *unaff_x19;
      if ((lVar2 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto thunk_FUN_032d5ee8;
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18);
      goto joined_r0x05d4dd50;
    }
  }
  else {
    if (lVar2 == 0) goto thunk_FUN_032d5ee8;
    lVar4 = *unaff_x19;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      if (lVar4 == 0) goto thunk_FUN_032d5ee8;
      *(undefined1 *)(lVar4 + 0x10) = 1;
      if (*(long *)(lVar4 + 0x18) == 0) goto thunk_FUN_032d5ee8;
      FUN_05d4e0bc(*(long *)(lVar4 + 0x18),*(undefined8 *)(lVar3 + 0x18),0);
      lVar2 = *unaff_x19;
      if ((lVar2 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto thunk_FUN_032d5ee8;
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
joined_r0x05d4dd50:
      if (lVar3 == 0) goto thunk_FUN_032d5ee8;
      FUN_05d054f4(lVar2 + 0x20,lVar3 + 0x20,0);
    }
    else {
      if (lVar4 == 0) goto thunk_FUN_032d5ee8;
      *(undefined1 *)(lVar4 + 0x10) = 1;
      if (*(long *)(lVar4 + 0x18) == 0) goto thunk_FUN_032d5ee8;
      FUN_05d4e0bc(*(long *)(lVar4 + 0x18),*(undefined8 *)(lVar3 + 0x18),0);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) || (*(long *)(lVar2 + 0x18) == 0)) ||
         (*unaff_x19 == 0)) goto thunk_FUN_032d5ee8;
      FUN_05d4e19c(*(long *)(lVar2 + 0x10) + 0x18,*(long *)(lVar2 + 0x18) + 0x18,*unaff_x19 + 0x18);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if (((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) ||
         ((*(long *)(lVar2 + 0x18) == 0 || (*unaff_x19 == 0)))) goto thunk_FUN_032d5ee8;
      FUN_05d05424(*(long *)(lVar2 + 0x10) + 0x20,*(long *)(lVar2 + 0x18) + 0x20,*unaff_x19 + 0x20,0
                  );
    }
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (((lVar2 != 0) && (lVar3 = *(long *)(lVar2 + 0x10), lVar3 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
    lVar4 = *unaff_x19;
    if (*(int *)(*(long *)PTR_DAT_072ae838 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar6 = FUN_05d4e374(lVar3 + 0x3c,lVar2 + 0x3c);
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x3c) = uVar6;
      *(undefined4 *)(lVar4 + 0x40) = in_stack_00000008._4_4_;
      *(undefined4 *)(lVar4 + 0x44) = param_3;
      return;
    }
  }
thunk_FUN_032d5ee8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


