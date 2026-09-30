/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$LoadAssembliesAsync
ENTRY_POINT: 028cd59c
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__LoadAssembliesAsync(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar5;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
    lVar3 = *unaff_x20;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    FUN_02171ca8(lVar5,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x288));
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
    if (lVar5 != 0) {
      lVar3 = *unaff_x20;
      uVar1 = *unaff_x19;
      uVar2 = unaff_x19[1];
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028cd574 with catch @ 028cd624
                       try { // try from 028cd624 to 029cd63b has its CatchHandler @ 028cd530 */
      uVar4 = FUN_021722c0(lVar5,uVar1,uVar2,&stack0x00000018,
                           *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x290));
      if ((uVar4 & 1) != 0) {
        lVar5 = *unaff_x20;
                    /* try { // try from 028cd63c to 029cd653 has its CatchHandler @ 028cd6c0 */
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0185daa4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 028cd654 to 029cd6af has its CatchHandler @ 028cd530 */
          lVar5 = FUN_0185daa4();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0185daa4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0185daa4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
        if (lVar5 == 0) goto LAB_028cd968;
        lVar3 = *unaff_x20;
        uVar1 = *unaff_x19;
        uVar2 = unaff_x19[1];
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
                    /* try { // try from 028cd6b0 to 029cd6bf has its CatchHandler @ 028cd6c0 */
        FUN_02171ca8(lVar5,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2a0));
        lVar5 = in_stack_00000018;
                    /* catch() { ... } // from try @ 028cd63c with catch @ 028cd6c0
                       catch() { ... } // from try @ 028cd6b0 with catch @ 028cd6c0 */
                    /* try { // try from 028cd6c4 to 029cd6c7 has its CatchHandler @ 028cd6d0 */
        if (in_stack_00000018 == 0) goto LAB_028cd968;
                    /* try { // try from 028cd6c8 to 029cd6d3 has its CatchHandler @ 028cd530 */
        uVar1 = *unaff_x19;
        uVar2 = unaff_x19[1];
                    /* catch(type#2 @ 00000000) { ... } // from try @ 028cd6c4 with catch @ 028cd6d0
                        */
        if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar5 + 0x28));
      }
      lVar5 = *unaff_x20;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar5 = *unaff_x20;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
      if (lVar5 != 0) {
        lVar3 = *unaff_x20;
        uVar1 = *unaff_x19;
        uVar2 = unaff_x19[1];
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        uVar4 = FUN_021722c0(lVar5,uVar1,uVar2,&stack0x00000010,
                             *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2b8));
        if ((uVar4 & 1) != 0) {
          lVar5 = *unaff_x20;
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0185daa4();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0185daa4();
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar5 = *unaff_x20;
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0185daa4();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0185daa4();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
          if (lVar5 == 0) goto LAB_028cd968;
          lVar3 = *unaff_x20;
          uVar1 = *unaff_x19;
          uVar2 = unaff_x19[1];
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          FUN_02171ca8(lVar5,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2c0));
          lVar5 = in_stack_00000010;
          if (in_stack_00000010 == 0) goto LAB_028cd968;
          uVar1 = *unaff_x19;
          uVar2 = unaff_x19[1];
          if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          (**(code **)(lVar5 + 0x18))
                    (*(undefined8 *)(lVar5 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar5 + 0x28));
        }
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0185daa4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0185daa4();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0185daa4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0185daa4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
        if (lVar5 != 0) {
          uVar4 = FUN_021722c0(lVar5,*unaff_x19,unaff_x19[1],&stack0x00000008,
                               *(undefined8 *)PTR_DAT_037fb6a8);
          if ((uVar4 & 1) == 0) {
            return;
          }
          lVar5 = *unaff_x20;
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0185daa4();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0185daa4();
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar5 = *unaff_x20;
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0185daa4();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0185daa4();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
          if ((lVar5 != 0) &&
             (FUN_02171ca8(lVar5,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb698),
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
LAB_028cd968:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


