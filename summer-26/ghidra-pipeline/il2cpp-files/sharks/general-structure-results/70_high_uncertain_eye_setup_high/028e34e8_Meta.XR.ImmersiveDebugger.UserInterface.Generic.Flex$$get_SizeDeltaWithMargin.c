/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$get_SizeDeltaWithMargin
ENTRY_POINT: 028e34e8
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


/* WARNING: Removing unreachable block (ram,0x028e3990) */
/* WARNING: Removing unreachable block (ram,0x028e38a0) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__get_SizeDeltaWithMargin(void)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined *puVar9;
  
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar2 = FUN_0216f088();
  lVar10 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0185daa4(lVar10);
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0185daa4();
  }
  if (**(long **)(lVar10 + 0xb8) != 0) {
    uVar3 = FUN_024c5010(**(long **)(lVar10 + 0xb8),*unaff_x21,unaff_x21[1],
                         *(undefined8 *)PTR_DAT_037fb608);
    if (((uVar2 | uVar3) & 1) == 0) {
      in_stack_00000028 = unaff_x21[1];
      in_stack_00000020 = *unaff_x21;
      uVar7 = thunk_FUN_01851c08(PTR_DAT_037f9268);
      uVar7 = thunk_FUN_018617ec(uVar7,&stack0x00000020);
      puVar9 = PTR_DAT_037fb668;
    }
    else {
      lVar10 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0185daa4();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0185daa4();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar10 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0185daa4();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0185daa4();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
      if (lVar10 == 0) goto LAB_028e38cc;
      uVar4 = FUN_02170a40(lVar10,*unaff_x21,unaff_x21[1],*(undefined8 *)PTR_DAT_037fb660);
      if ((uVar4 & 1) == 0) {
        lVar10 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0185daa4();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0185daa4();
        }
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar10 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0185daa4();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0185daa4();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x30);
        if (lVar10 == 0) goto LAB_028e38cc;
        lVar5 = *(long *)(unaff_x19 + 0x20);
        uVar7 = *unaff_x21;
        uVar8 = unaff_x21[1];
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0185daa4();
        }
        uVar4 = FUN_02170a40(lVar10,uVar7,uVar8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x1f0));
        puVar9 = PTR_DAT_037f88c8;
        if ((uVar4 & 1) == 0) {
          in_stack_00000088 = unaff_x21[1];
          in_stack_00000080 = *unaff_x21;
          lVar10 = *(long *)(unaff_x19 + 0x20);
          if ((uVar2 & 1) == 0) {
            if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_0185daa4();
            }
            lVar10 = FUN_01b793c4(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x210));
            lVar5 = *(long *)(unaff_x19 + 0x20);
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
            lVar5 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0185daa4();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0185daa4();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            lVar6 = *(long *)(unaff_x19 + 0x20);
            uVar7 = *unaff_x21;
            uVar8 = unaff_x21[1];
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_0185daa4();
            }
            FUN_02170834(lVar5,uVar7,uVar8,lVar10,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x218));
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
              FUN_0185daa4();
            }
            in_stack_00000070 = *(undefined8 *)(lVar10 + 0x80);
            in_stack_00000058 = *(undefined8 *)(lVar10 + 0x68);
            in_stack_00000050 = *(undefined8 *)(lVar10 + 0x60);
            in_stack_00000068 = *(undefined8 *)(lVar10 + 0x78);
            in_stack_00000060 = *(undefined8 *)(lVar10 + 0x70);
          }
          else {
            if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_0185daa4();
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_0185daa4();
            }
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            lVar10 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_0185daa4();
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_0185daa4();
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            lVar5 = *(long *)(unaff_x19 + 0x20);
            uVar7 = *unaff_x21;
            uVar8 = unaff_x21[1];
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0185daa4();
            }
            FUN_0216ea28(lVar10,uVar7,uVar8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x1f8));
            uVar1 = in_stack_000000a8;
            uVar8 = in_stack_000000a0;
            uVar7 = in_stack_00000098;
            in_stack_00000040 = 0;
            in_stack_00000028 = 0;
            in_stack_00000020 = 0;
            in_stack_00000038 = 0;
            in_stack_00000030 = 0;
            if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
              FUN_0185daa4();
            }
            in_stack_00000020 = 0;
            in_stack_00000030 = uVar8;
            in_stack_00000028 = uVar7;
            in_stack_00000038 = uVar1;
            thunk_FUN_0188fd20(&stack0x00000020,0);
            in_stack_00000040 = CONCAT53((int5)((ulong)in_stack_00000040 >> 0x18),0x10000);
            in_stack_00000058 = in_stack_00000028;
            in_stack_00000050 = in_stack_00000020;
            in_stack_00000068 = in_stack_00000038;
            in_stack_00000060 = in_stack_00000030;
            in_stack_00000070 = in_stack_00000040;
          }
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar10 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_0185daa4();
          }
          FUN_028e40f0(&stack0x00000080,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x228));
          unaff_x20[4] = in_stack_00000070;
          unaff_x20[1] = in_stack_00000058;
          *unaff_x20 = in_stack_00000050;
          unaff_x20[3] = in_stack_00000068;
          unaff_x20[2] = in_stack_00000060;
          return;
        }
        in_stack_00000028 = unaff_x21[1];
        in_stack_00000020 = *unaff_x21;
        uVar7 = thunk_FUN_01851c08(PTR_DAT_037f9268);
        uVar7 = thunk_FUN_018617ec(uVar7,&stack0x00000020);
        puVar9 = PTR_DAT_037fb678;
      }
      else {
        in_stack_00000028 = unaff_x21[1];
        in_stack_00000020 = *unaff_x21;
        uVar7 = thunk_FUN_01851c08(PTR_DAT_037f9268);
        uVar7 = thunk_FUN_018617ec(uVar7,&stack0x00000020);
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
LAB_028e38cc:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


