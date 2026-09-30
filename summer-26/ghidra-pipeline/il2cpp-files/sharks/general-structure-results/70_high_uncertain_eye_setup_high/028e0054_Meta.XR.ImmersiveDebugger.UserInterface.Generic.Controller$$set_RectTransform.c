/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$set_RectTransform
ENTRY_POINT: 028e0054
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


/* WARNING: Removing unreachable block (ram,0x028e052c) */

undefined1  [16] Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__set_RectTransform(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 auVar10 [16];
  ulong uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  uint uStack000000000000002c;
  undefined *puVar9;
  
  FUN_017fc350(PTR_DAT_037fb608);
  FUN_017fc350(PTR_DAT_037f88c0);
  *(undefined1 *)(unaff_x21 + 0x5eb) = 1;
  uStack000000000000002c = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  lVar3 = *(long *)(unaff_x19 + 0x20);
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
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar7 = *unaff_x20;
    uVar8 = unaff_x20[1];
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    uVar1 = FUN_0216bc44(lVar3,uVar7,uVar8,&stack0x0000002c,
                         *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1e8));
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      uVar2 = FUN_024c5010(**(long **)(lVar3 + 0xb8),*unaff_x20,unaff_x20[1],
                           *(undefined8 *)PTR_DAT_037fb608);
      if (((uVar1 | uVar2) & 1) == 0) {
        thunk_FUN_01851c08(PTR_DAT_037f9268);
        uVar7 = thunk_FUN_018617ec();
        puVar9 = PTR_DAT_037fb668;
      }
      else {
        lVar3 = *(long *)(unaff_x19 + 0x20);
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
        lVar3 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
        if (lVar3 == 0) goto LAB_028e0468;
        uVar5 = FUN_02170a40(lVar3,*unaff_x20,unaff_x20[1],*(undefined8 *)PTR_DAT_037fb660);
        if ((uVar5 & 1) == 0) {
          lVar3 = *(long *)(unaff_x19 + 0x20);
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
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
          if (lVar3 == 0) goto LAB_028e0468;
          lVar4 = *(long *)(unaff_x19 + 0x20);
          uVar7 = *unaff_x20;
          uVar8 = unaff_x20[1];
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          uVar5 = FUN_02170a40(lVar3,uVar7,uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1f0));
          puVar9 = PTR_DAT_037f88c0;
          if ((uVar5 & 1) == 0) {
            in_stack_00000018 = unaff_x20[1];
            in_stack_00000010 = *unaff_x20;
            lVar3 = *(long *)(unaff_x19 + 0x20);
            if ((uVar1 & 1) == 0) {
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = FUN_01b793c4(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x210));
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
              lVar6 = *(long *)(unaff_x19 + 0x20);
              uVar7 = *unaff_x20;
              uVar8 = unaff_x20[1];
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_0185daa4();
              }
              FUN_02170834(lVar4,uVar7,uVar8,lVar3,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x218))
              ;
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
              if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
                FUN_0185daa4();
              }
              uVar7 = *(undefined8 *)(lVar3 + 0x48);
              uStack0000000000000008 = *(ulong *)(lVar3 + 0x50);
            }
            else {
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar3 = *(long *)(unaff_x19 + 0x20);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
              lVar4 = *(long *)(unaff_x19 + 0x20);
              uVar7 = *unaff_x20;
              uVar8 = unaff_x20[1];
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              FUN_0216b5f0(lVar3,uVar7,uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1f8));
              uVar1 = uStack000000000000002c;
              if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
                FUN_0185daa4();
              }
              thunk_FUN_0188fd20();
              uStack0000000000000008 = (ulong)CONCAT16(1,(uint6)uVar1);
              uVar7 = 0;
            }
            if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            lVar3 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0185daa4();
            }
            FUN_028e0c60(&stack0x00000010,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x228));
            auVar10._8_8_ = uStack0000000000000008;
            auVar10._0_8_ = uVar7;
            return auVar10;
          }
          thunk_FUN_01851c08(PTR_DAT_037f9268);
          uVar7 = thunk_FUN_018617ec();
          puVar9 = PTR_DAT_037fb678;
        }
        else {
          thunk_FUN_01851c08(PTR_DAT_037f9268);
          uVar7 = thunk_FUN_018617ec();
          puVar9 = PTR_DAT_037fb670;
        }
      }
      uVar8 = thunk_FUN_01851c08(puVar9);
      uVar7 = FUN_02a473b8(uVar8,uVar7,0);
      thunk_FUN_01851c08(PTR_DAT_037f8d50);
      uVar8 = thunk_FUN_01861bbc();
      FUN_02bcf690(uVar8,uVar7,0);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar8);
    }
  }
LAB_028e0468:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


