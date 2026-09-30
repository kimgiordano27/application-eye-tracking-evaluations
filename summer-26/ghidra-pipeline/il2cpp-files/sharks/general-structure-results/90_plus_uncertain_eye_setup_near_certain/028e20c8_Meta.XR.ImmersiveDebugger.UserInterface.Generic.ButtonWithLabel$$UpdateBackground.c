/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$UpdateBackground
ENTRY_POINT: 028e20c8
PROGRAM: sharks-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__UpdateBackground(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack0000000000000010;
  long lStack0000000000000018;
  long lStack0000000000000028;
  
  lStack0000000000000028 = 0;
  uStack0000000000000010 = 0;
  lStack0000000000000018 = 0;
  lVar1 = *(long *)(unaff_x20 + 0x20);
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
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    uVar4 = *unaff_x21;
    uVar5 = unaff_x21[1];
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    uVar3 = FUN_02171fa4(lVar1,uVar4,uVar5,&stack0x00000028,
                         *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xb0));
    lVar1 = lStack0000000000000028;
    if ((uVar3 & 1) == 0) {
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 028e21a0 to 029e21c7 has its CatchHandler @ 028e2394 */
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
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
                    /* try { // try from 028e21e0 to 029e2243 has its CatchHandler @ 028e239c */
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
        uVar3 = FUN_02171fa4(lVar1,uVar4,uVar5,&stack0x00000018,
                             *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xd0));
        lVar1 = lStack0000000000000018;
        if ((uVar3 & 1) == 0) {
          lVar1 = *(long *)(unaff_x20 + 0x20);
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
          uVar3 = FUN_028e247c();
          if ((uVar3 & 1) == 0) {
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
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
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
              lVar1 = *(long *)(unaff_x20 + 0x20);
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
              lVar1 = *(long *)(unaff_x20 + 0x20);
              if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                lVar1 = FUN_0185daa4();
              }
              lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
              if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                lVar1 = FUN_0185daa4();
              }
              lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
              if (lVar1 != 0) {
                FUN_02170834(lVar1,*unaff_x21,unaff_x21[1]);
                if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
                  FUN_0185daa4();
                }
                FUN_028e26c0();
                return;
              }
            }
            else {
              lVar1 = FUN_02afcf34();
              if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02afcff4(lVar1,0);
              }
            }
          }
        }
        else if (lStack0000000000000018 != 0) {
          if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          FUN_01de6670(lVar1);
          return;
        }
      }
    }
    else if (lStack0000000000000028 != 0) {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      FUN_01d225e0(lVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


