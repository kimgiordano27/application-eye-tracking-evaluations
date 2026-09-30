/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollViewport$$Setup
ENTRY_POINT: 028e55dc
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollViewport__Setup(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  long in_stack_00000018;
  long in_stack_00000028;
  
  uVar1 = FUN_02171fa4();
  lVar2 = in_stack_00000028;
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
                    /* try { // try from 028e5654 to 029e56ab has its CatchHandler @ 028e56ac */
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
    if (lVar2 != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x20);
      uVar4 = *unaff_x21;
      uVar5 = unaff_x21[1];
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e5654 with catch @ 028e56ac
                       try { // try from 028e56ac to 029e56c3 has its CatchHandler @ 028e560c */
      uVar1 = FUN_02171fa4(lVar2,uVar4,uVar5,&stack0x00000018,
                           *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xd0));
      lVar2 = in_stack_00000018;
      if ((uVar1 & 1) == 0) {
        lVar2 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        uVar1 = FUN_028e590c();
        if ((uVar1 & 1) == 0) {
          thunk_FUN_01851c08(PTR_DAT_037f9268);
          thunk_FUN_018617ec();
          thunk_FUN_01851c08(PTR_DAT_037fb618);
          uVar4 = FUN_02a50b00();
          thunk_FUN_01851c08(PTR_DAT_037f8d50);
          uVar5 = thunk_FUN_01861bbc();
          FUN_02bcf6b4(uVar5,uVar4);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar5);
        }
        lVar2 = *(long *)(unaff_x20 + 0x20);
                    /* try { // try from 028e5740 to 029e574f has its CatchHandler @ 028e5750 */
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
                    /* catch() { ... } // from try @ 028e56c4 with catch @ 028e5750
                       catch() { ... } // from try @ 028e5740 with catch @ 028e5750 */
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
                    /* try { // try from 028e5754 to 029e5757 has its CatchHandler @ 028e5760 */
                    /* try { // try from 028e5758 to 029e5763 has its CatchHandler @ 028e560c */
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 028e5754 with catch @ 028e5760
                        */
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar2 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
        if (lVar2 != 0) {
          lVar3 = *(long *)(unaff_x20 + 0x20);
          uVar4 = *unaff_x21;
          uVar5 = unaff_x21[1];
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          uVar1 = FUN_02171fa4(lVar2,uVar4,uVar5,&stack0x00000010,
                               *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xf8));
          if ((uVar1 & 1) == 0) {
            lVar2 = *(long *)(unaff_x20 + 0x20);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_0185daa4();
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_0185daa4();
            }
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            lVar2 = *(long *)(unaff_x20 + 0x20);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_0185daa4();
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_0185daa4();
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
            if (lVar2 != 0) {
              FUN_02170834(lVar2,*unaff_x21,unaff_x21[1]);
              if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
                FUN_0185daa4();
              }
              FUN_028e5b50();
              return;
            }
          }
          else {
            lVar2 = FUN_02afcf34();
            if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02afcff4(lVar2,0);
            }
          }
        }
      }
      else if (in_stack_00000018 != 0) {
                    /* try { // try from 028e56c4 to 029e56db has its CatchHandler @ 028e5750 */
        if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
                    /* try { // try from 028e56dc to 029e573f has its CatchHandler @ 028e560c */
        FUN_01de6838(lVar2);
        return;
      }
    }
  }
  else if (in_stack_00000028 != 0) {
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
                    /* try { // try from 028e560c to 029e5653 has its CatchHandler @ 028e560c
                       catch() { ... } // from try @ 028e560c with catch @ 028e560c
                       catch() { ... } // from try @ 028e56ac with catch @ 028e560c
                       catch() { ... } // from try @ 028e56dc with catch @ 028e560c
                       catch() { ... } // from try @ 028e5758 with catch @ 028e560c */
    FUN_01d226b8(lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


