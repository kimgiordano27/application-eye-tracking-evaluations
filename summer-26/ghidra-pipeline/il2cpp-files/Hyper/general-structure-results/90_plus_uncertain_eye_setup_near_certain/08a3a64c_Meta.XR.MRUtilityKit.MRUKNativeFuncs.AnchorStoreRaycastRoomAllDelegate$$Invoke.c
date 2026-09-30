/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomAllDelegate$$Invoke
ENTRY_POINT: 08a3a64c
PROGRAM: Hyper-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate__Invoke(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 in_stack_00000018;
  
  FUN_04947ee4(PTR_DAT_0ac52e30);
  FUN_04947ee4(PTR_DAT_0ac52e38);
  FUN_04947ee4(PTR_DAT_0ac52e40);
  FUN_04947ee4(PTR_DAT_0ac1f3c0);
  FUN_04947ee4(PTR_DAT_0ac52e48);
  *(undefined1 *)(unaff_x20 + 0x3c6) = 1;
  puVar3 = PTR_DAT_0ac52d60;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xe);
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 8);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_08a3a490(lVar9);
    plVar4 = (long *)FUN_08bf7044(0);
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar5 = (**(code **)(*plVar4 + 0x268))
                      (plVar4,*(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x18),
                       *(undefined8 *)(*plVar4 + 0x270));
    lVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12928);
    FUN_097a96c4(lVar6,uVar5,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = FUN_097a6ca0(lVar6,0);
    uVar5 = FUN_097bbb08(*(undefined8 *)PTR_DAT_0ac52e48,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c(uVar5,uVar5);
    }
    FUN_097af73c(lVar7,uVar5,0);
    lVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac52e20);
    FUN_097b1178(lVar7,0);
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_097b12b8(lVar7,lVar6,*(undefined8 *)PTR_DAT_0ac1f3c0,
                 *(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x10),0);
    puVar2 = PTR_DAT_0ac09a50;
    if (*(int *)(*(long *)PTR_DAT_0ac09a50 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b31f23c == '\0') {
      FUN_04947ee4(PTR_DAT_0ac09a50);
      DAT_0b31f23c = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar6 = *(long *)puVar2;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x28);
    lVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac10a28);
    FUN_097a9f64(lVar6,uVar5,*(undefined8 *)PTR_DAT_0ac52e40,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(long *)(lVar6 + 0x38) = lVar7;
    thunk_FUN_049ee3d8((long *)(lVar6 + 0x38),lVar7);
    puVar2 = PTR_DAT_0ac46f10;
    uVar5 = *(undefined8 *)(unaff_x19 + 0xc);
    lVar7 = *(long *)PTR_DAT_0ac46f10;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar7 = *(long *)puVar2;
    }
    lVar9 = FUN_05a94418(lVar9,lVar6,uVar5,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),
                         *(undefined8 *)PTR_DAT_0ac52e18);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000018 = FUN_07764808(lVar9,*(undefined8 *)PTR_DAT_0ac52e38);
    uVar8 = FUN_076844c8(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac52e30);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
      thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05496ce8(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar5 = FUN_07684508(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac52e28);
  puVar2 = PTR_DAT_0ac52e10;
  iVar1 = *(int *)(*(long *)puVar3 + 0xe4);
  *unaff_x19 = -2;
  if (iVar1 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_07b6c5d8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
  return;
}


