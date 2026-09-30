/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ComponentItem$$BuildHandle
ENTRY_POINT: 028f2730
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_ComponentItem__BuildHandle(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
  if (lVar3 != 0) {
    lVar4 = *unaff_x20;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
                    /* try { // try from 028f2758 to 029f275b has its CatchHandler @ 028f2788 */
                    /* try { // try from 028f275c to 029f275f has its CatchHandler @ 028f277c */
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 028f2760 to 029f2763 has its CatchHandler @ 028f2788 */
      lVar4 = FUN_0185daa4();
    }
                    /* try { // try from 028f2764 to 029f2767 has its CatchHandler @ 028f245c */
                    /* try { // try from 028f2768 to 029f276b has its CatchHandler @ 028f2774 */
                    /* try { // try from 028f276c to 029f27a3 has its CatchHandler @ 028f245c */
                    /* catch() { ... } // from try @ 028f2768 with catch @ 028f2774 */
    FUN_02171ca8(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2a0));
    lVar3 = in_stack_00000018;
    if (in_stack_00000018 != 0) {
      uVar1 = *unaff_x19;
      uVar2 = unaff_x19[1];
      if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar3 + 0x28));
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
      if (lVar3 != 0) {
        lVar4 = *unaff_x20;
        uVar1 = *unaff_x19;
        uVar2 = unaff_x19[1];
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0185daa4();
        }
        uVar5 = FUN_021722c0(lVar3,uVar1,uVar2,&stack0x00000010,
                             *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2b8));
        if ((uVar5 & 1) != 0) {
          lVar3 = *unaff_x20;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar3 = *unaff_x20;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
          if (lVar3 == 0) goto LAB_028f2a24;
          lVar4 = *unaff_x20;
          uVar1 = *unaff_x19;
          uVar2 = unaff_x19[1];
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          FUN_02171ca8(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2c0));
          lVar3 = in_stack_00000010;
          if (in_stack_00000010 == 0) goto LAB_028f2a24;
          uVar1 = *unaff_x19;
          uVar2 = unaff_x19[1];
          if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          (**(code **)(lVar3 + 0x18))
                    (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar3 + 0x28));
        }
        lVar3 = *unaff_x20;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar3 = *unaff_x20;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
        if (lVar3 != 0) {
          uVar5 = FUN_021722c0(lVar3,*unaff_x19,unaff_x19[1],&stack0x00000008,
                               *(undefined8 *)PTR_DAT_037fb6a8);
          if ((uVar5 & 1) == 0) {
            return;
          }
          lVar3 = *unaff_x20;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar3 = *unaff_x20;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
          if ((lVar3 != 0) &&
             (FUN_02171ca8(lVar3,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb698),
             in_stack_00000008 != 0)) {
            (**(code **)(in_stack_00000008 + 0x18))
                      (*(undefined8 *)(in_stack_00000008 + 0x40),*unaff_x19,unaff_x19[1],
                       *(undefined8 *)(in_stack_00000008 + 0x28));
            return;
          }
        }
      }
    }
  }
LAB_028f2a24:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


