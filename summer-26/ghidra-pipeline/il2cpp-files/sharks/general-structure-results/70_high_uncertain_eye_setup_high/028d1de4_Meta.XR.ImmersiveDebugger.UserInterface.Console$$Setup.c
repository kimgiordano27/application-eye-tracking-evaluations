/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$Setup
ENTRY_POINT: 028d1de4
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__Setup(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  long in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
                    /* try { // try from 028d1e04 to 029d1e67 has its CatchHandler @ 028d1fc8 */
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    uVar4 = *unaff_x21;
    uVar5 = unaff_x21[1];
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
                    /* try { // try from 028d1e68 to 029d1e9f has its CatchHandler @ 028d1c94 */
    uVar3 = FUN_02171fa4(lVar1,uVar4,uVar5,&stack0x00000018,
                         *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xd0));
    lVar1 = in_stack_00000018;
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 028d1ea0 to 029d1ea7 has its CatchHandler @ 028d1fb4 */
      lVar1 = *(long *)(unaff_x20 + 0x20);
                    /* try { // try from 028d1ea8 to 029d1f03 has its CatchHandler @ 028d1c94 */
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      uVar3 = FUN_028d20c4();
      if ((uVar3 & 1) == 0) {
                    /* try { // try from 028d205c to 029d2063 has its CatchHandler @ 028d2064 */
                    /* catch() { ... } // from try @ 028d2028 with catch @ 028d2064
                       catch() { ... } // from try @ 028d205c with catch @ 028d2064 */
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
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
                    /* try { // try from 028d1f04 to 029d1f0f has its CatchHandler @ 028d1fbc */
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
                    /* try { // try from 028d1f10 to 029d1f93 has its CatchHandler @ 028d1c94 */
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
      if (lVar1 != 0) {
        lVar2 = *(long *)(unaff_x20 + 0x20);
        uVar4 = *unaff_x21;
        uVar5 = unaff_x21[1];
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        uVar3 = FUN_02171fa4(lVar1,uVar4,uVar5,&stack0x00000010,
                             *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xf8));
        if ((uVar3 & 1) == 0) {
                    /* try { // try from 028d1fa0 to 029d1fa3 has its CatchHandler @ 028d1c94 */
          lVar1 = *(long *)(unaff_x20 + 0x20);
                    /* try { // try from 028d1fa4 to 029d1fa7 has its CatchHandler @ 028d1fb0 */
                    /* try { // try from 028d1fa8 to 029d1fdf has its CatchHandler @ 028d1c94 */
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
                    /* catch() { ... } // from try @ 028d1fa4 with catch @ 028d1fb0 */
                    /* catch() { ... } // from try @ 028d1ea0 with catch @ 028d1fb4 */
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
                    /* catch() { ... } // from try @ 028d1f98 with catch @ 028d1fb8 */
                    /* catch() { ... } // from try @ 028d1f04 with catch @ 028d1fbc */
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 028d1dc4 with catch @ 028d1fc0 */
            lVar1 = FUN_0185daa4();
          }
                    /* catch() { ... } // from try @ 028d1f94 with catch @ 028d1fc4
                       catch() { ... } // from try @ 028d1f9c with catch @ 028d1fc4 */
                    /* catch() { ... } // from try @ 028d1e04 with catch @ 028d1fc8 */
          if (*(int *)(lVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar1 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
                    /* try { // try from 028d1fe0 to 029d1fe3 has its CatchHandler @ 028d1ff0 */
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 028d1fe0 with catch @ 028d1ff0 */
            lVar1 = FUN_0185daa4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
          if (lVar1 != 0) {
            FUN_02170834(lVar1,*unaff_x21,unaff_x21[1]);
            if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
              FUN_0185daa4();
            }
                    /* try { // try from 028d2028 to 029d204f has its CatchHandler @ 028d2064 */
            FUN_028d2308();
            return;
          }
        }
        else {
          lVar1 = FUN_02afcf34();
                    /* try { // try from 028d1f94 to 029d1f97 has its CatchHandler @ 028d1fc4 */
          if (lVar1 != 0) {
                    /* try { // try from 028d1f98 to 029d1f9b has its CatchHandler @ 028d1fb8 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 028d1f9c to 029d1f9f has its CatchHandler @ 028d1fc4 */
            FUN_02afcff4(lVar1,0);
          }
        }
      }
    }
    else if (in_stack_00000018 != 0) {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      FUN_01de5cfc(lVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 028d2050 to 029d205b has its CatchHandler @ 028d1c94 */
  FUN_017fc5a8();
}


