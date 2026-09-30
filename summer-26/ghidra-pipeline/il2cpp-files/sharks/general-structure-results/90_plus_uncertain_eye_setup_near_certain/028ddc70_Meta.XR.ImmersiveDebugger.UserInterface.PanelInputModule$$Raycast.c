/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$Raycast
ENTRY_POINT: 028ddc70
PROGRAM: sharks-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__Raycast(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long in_stack_00000008;
  long in_stack_00000010;
  
  uVar3 = FUN_021722c0();
  if ((uVar3 & 1) != 0) {
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x48);
    if (lVar4 == 0) goto LAB_028dde70;
    lVar5 = *unaff_x20;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    FUN_02171ca8(lVar4,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x2c0));
    lVar4 = in_stack_00000010;
    if (in_stack_00000010 == 0) goto LAB_028dde70;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    (**(code **)(lVar4 + 0x18))
              (*(undefined8 *)(lVar4 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar4 + 0x28));
  }
  lVar4 = *unaff_x20;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar4 = *unaff_x20;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
  if (lVar4 != 0) {
    uVar3 = FUN_021722c0(lVar4,*unaff_x19,unaff_x19[1],&stack0x00000008,
                         *(undefined8 *)PTR_DAT_037fb6a8);
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 028dde64 to 029dde7b has its CatchHandler @ 028ddeb4 */
      return;
    }
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 028dddec to 029dde2b has its CatchHandler @ 028dddec
                       catch() { ... } // from try @ 028dddec with catch @ 028dddec
                       catch() { ... } // from try @ 028dde40 with catch @ 028dddec
                       catch() { ... } // from try @ 028dde7c with catch @ 028dddec
                       catch() { ... } // from try @ 028ddebc with catch @ 028dddec */
      lVar4 = FUN_0185daa4();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
                    /* try { // try from 028dde2c to 029dde3f has its CatchHandler @ 028dde4c */
                    /* try { // try from 028dde40 to 029dde63 has its CatchHandler @ 028dddec */
    if ((lVar4 != 0) &&
       (FUN_02171ca8(lVar4,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb698),
       in_stack_00000008 != 0)) {
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028dde2c with catch @ 028dde4c
                        */
      (**(code **)(in_stack_00000008 + 0x18))
                (*(undefined8 *)(in_stack_00000008 + 0x40),*unaff_x19,unaff_x19[1],
                 *(undefined8 *)(in_stack_00000008 + 0x28));
      return;
    }
  }
LAB_028dde70:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


