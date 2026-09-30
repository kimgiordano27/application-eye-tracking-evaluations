/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Values$$Setup
ENTRY_POINT: 028dcd8c
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


/* WARNING: Removing unreachable block (ram,0x028dd1d0) */

undefined1  [16] Meta_XR_ImmersiveDebugger_UserInterface_Values__Setup(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auVar10 [16];
  ulong uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined *puVar8;
  
  if ((param_1 & 1) == 0) {
    FUN_0185daa4();
  }
  uVar1 = FUN_0216896c();
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0185daa4(lVar9);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0185daa4();
  }
  if (**(long **)(lVar9 + 0xb8) == 0) {
LAB_028dd10c:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar2 = FUN_024c5010(**(long **)(lVar9 + 0xb8),*unaff_x20,unaff_x20[1],
                       *(undefined8 *)PTR_DAT_037fb608);
  if (((uVar1 | uVar2) & 1) == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f9268);
    uVar6 = thunk_FUN_018617ec();
    puVar8 = PTR_DAT_037fb668;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 028dce10 to 029dce17 has its CatchHandler @ 028dcf18 */
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0185daa4();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0185daa4();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0185daa4();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0185daa4();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
    if (lVar9 == 0) goto LAB_028dd10c;
                    /* try { // try from 028dce74 to 029dce7b has its CatchHandler @ 028dcf20 */
    uVar3 = FUN_02170a40(lVar9,*unaff_x20,unaff_x20[1],*(undefined8 *)PTR_DAT_037fb660);
                    /* try { // try from 028dce7c to 029dcef7 has its CatchHandler @ 028dcc14 */
    if ((uVar3 & 1) == 0) {
      lVar9 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0185daa4();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0185daa4();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar9 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0185daa4();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0185daa4();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
      if (lVar9 == 0) goto LAB_028dd10c;
      lVar4 = *(long *)(unaff_x19 + 0x20);
      uVar6 = *unaff_x20;
      uVar7 = unaff_x20[1];
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
                    /* try { // try from 028dcef8 to 029dcefb has its CatchHandler @ 028dcf28 */
                    /* try { // try from 028dcefc to 029dceff has its CatchHandler @ 028dcf1c */
                    /* try { // try from 028dcf00 to 029dcf03 has its CatchHandler @ 028dcf28 */
                    /* try { // try from 028dcf04 to 029dcf07 has its CatchHandler @ 028dcc14 */
                    /* try { // try from 028dcf08 to 029dcf0b has its CatchHandler @ 028dcf14 */
      uVar3 = FUN_02170a40(lVar9,uVar6,uVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1f0));
      puVar8 = PTR_DAT_037f88b8;
                    /* try { // try from 028dcf0c to 029dcf43 has its CatchHandler @ 028dcc14 */
      if ((uVar3 & 1) == 0) {
        in_stack_00000018 = unaff_x20[1];
        in_stack_00000010 = *unaff_x20;
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028dcf08 with catch @ 028dcf14
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028dce10 with catch @ 028dcf18
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028dcefc with catch @ 028dcf1c
                        */
        lVar9 = *(long *)(unaff_x19 + 0x20);
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028dce74 with catch @ 028dcf20
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028dcd34 with catch @ 028dcf24
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028dcef8 with catch @ 028dcf28
                       catch(type#1 @ 0361ba68) { ... } // from try @ 028dcf00 with catch @ 028dcf28
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028dcd74 with catch @ 028dcf2c
                        */
        if ((uVar1 & 1) == 0) {
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_0185daa4();
          }
          lVar9 = FUN_01b793c4(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x210));
          lVar4 = *(long *)(unaff_x19 + 0x20);
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
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          lVar5 = *(long *)(unaff_x19 + 0x20);
          uVar6 = *unaff_x20;
          uVar7 = unaff_x20[1];
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0185daa4();
          }
          FUN_02170834(lVar4,uVar6,uVar7,lVar9,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x218));
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          uVar6 = *(undefined8 *)(lVar9 + 0x48);
          uStack0000000000000008 = *(ulong *)(lVar9 + 0x50);
        }
        else {
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_0185daa4();
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
                    /* try { // try from 028dcf44 to 029dcf47 has its CatchHandler @ 028dcf54 */
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_0185daa4();
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 028dcf44 with catch @ 028dcf54 */
            thunk_FUN_01843fdc();
          }
          lVar9 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_0185daa4();
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_0185daa4();
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          lVar4 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 028dcf8c to 029dcfb3 has its CatchHandler @ 028dcfc8 */
          uVar6 = *unaff_x20;
          uVar7 = unaff_x20[1];
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          FUN_02168318(lVar9,uVar6,uVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1f8));
                    /* try { // try from 028dcfb4 to 029dcfbf has its CatchHandler @ 028dcc14 */
                    /* try { // try from 028dcfc0 to 029dcfc7 has its CatchHandler @ 028dcfc8 */
          if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 028dcf8c with catch @ 028dcfc8
                       catch(type#2 @ 00000000) { ... } // from try @ 028dcfc0 with catch @ 028dcfc8
                        */
            FUN_0185daa4();
          }
          thunk_FUN_0188fd20();
          uStack0000000000000008 = (ulong)CONCAT14(1,(uint)in_stack_00000028._4_1_);
          uVar6 = 0;
        }
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar9 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0185daa4();
        }
        FUN_028dd904(&stack0x00000010,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x228));
        auVar10._8_8_ = uStack0000000000000008;
        auVar10._0_8_ = uVar6;
        return auVar10;
      }
      thunk_FUN_01851c08(PTR_DAT_037f9268);
      uVar6 = thunk_FUN_018617ec();
      puVar8 = PTR_DAT_037fb678;
    }
    else {
      thunk_FUN_01851c08(PTR_DAT_037f9268);
      uVar6 = thunk_FUN_018617ec();
      puVar8 = PTR_DAT_037fb670;
    }
  }
  uVar7 = thunk_FUN_01851c08(puVar8);
  uVar6 = FUN_02a473b8(uVar7,uVar6,0);
  thunk_FUN_01851c08(PTR_DAT_037f8d50);
  uVar7 = thunk_FUN_01861bbc();
  FUN_02bcf690(uVar7,uVar6,0);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar7);
}


