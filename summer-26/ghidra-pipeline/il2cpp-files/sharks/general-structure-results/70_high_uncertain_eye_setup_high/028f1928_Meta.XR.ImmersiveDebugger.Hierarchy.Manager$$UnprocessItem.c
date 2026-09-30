/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Manager$$UnprocessItem
ENTRY_POINT: 028f1928
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


/* WARNING: Removing unreachable block (ram,0x028f1d88) */
/* WARNING: Removing unreachable block (ram,0x028f1c98) */

void Meta_XR_ImmersiveDebugger_Hierarchy_Manager__UnprocessItem(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint in_w9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  uint unaff_w22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined *puVar8;
  
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_0185daa4(param_1);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    uVar1 = FUN_024c5010(**(long **)(lVar2 + 0xb8),*unaff_x21,unaff_x21[1],
                         *(undefined8 *)PTR_DAT_037fb608);
    if (((unaff_w22 | uVar1) & 1) == 0) {
      in_stack_00000008 = unaff_x21[1];
      thunk_FUN_01851c08(PTR_DAT_037f9268);
      uVar6 = thunk_FUN_018617ec();
      puVar8 = PTR_DAT_037fb668;
    }
    else {
      lVar2 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 028f1978 to 029f199f has its CatchHandler @ 028f1b34 */
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
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
                    /* try { // try from 028f19b8 to 029f1a1b has its CatchHandler @ 028f1b38 */
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
      if (lVar2 == 0) goto LAB_028f1cc4;
      uVar3 = FUN_02170a40(lVar2,*unaff_x21,unaff_x21[1],*(undefined8 *)PTR_DAT_037fb660);
      if ((uVar3 & 1) == 0) {
        lVar2 = *(long *)(unaff_x19 + 0x20);
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
                    /* try { // try from 028f1a1c to 029f1a47 has its CatchHandler @ 028f1674 */
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
                    /* try { // try from 028f1a48 to 029f1a5b has its CatchHandler @ 028f1b30 */
        if (lVar2 == 0) goto LAB_028f1cc4;
        lVar4 = *(long *)(unaff_x19 + 0x20);
        uVar6 = *unaff_x21;
        uVar7 = unaff_x21[1];
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 028f1a5c to 029f1b1f has its CatchHandler @ 028f1674 */
          lVar4 = FUN_0185daa4();
        }
        uVar3 = FUN_02170a40(lVar2,uVar6,uVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1f0));
        puVar8 = PTR_DAT_037f88d8;
        if ((uVar3 & 1) == 0) {
          in_stack_00000048 = unaff_x21[1];
          in_stack_00000040 = *unaff_x21;
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((unaff_w22 & 1) == 0) {
            if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_0185daa4();
            }
            lVar2 = FUN_01b793c4(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x210));
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
            uVar6 = *unaff_x21;
            uVar7 = unaff_x21[1];
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0185daa4();
            }
            FUN_02170834(lVar4,uVar6,uVar7,lVar2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x218));
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
              FUN_0185daa4();
            }
            in_stack_00000030 = *(undefined8 *)(lVar2 + 0x60);
            in_stack_00000028 = *(undefined8 *)(lVar2 + 0x58);
            in_stack_00000020 = *(undefined8 *)(lVar2 + 0x50);
          }
          else {
            if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_0185daa4();
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_0185daa4();
            }
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            lVar2 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_0185daa4();
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_0185daa4();
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            lVar4 = *(long *)(unaff_x19 + 0x20);
            uVar6 = *unaff_x21;
            uVar7 = unaff_x21[1];
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0185daa4();
            }
            FUN_0217b53c(lVar2,uVar6,uVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1f8));
            uVar6 = in_stack_00000058;
            in_stack_00000008 = 0;
            in_stack_00000010 = 0;
            if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
              FUN_0185daa4();
            }
            in_stack_00000008 = uVar6;
            thunk_FUN_0188fd20(&stack0x00000008,0);
            thunk_FUN_0188fd20();
            in_stack_00000010 = CONCAT53((int5)((ulong)in_stack_00000010 >> 0x18),0x10000);
            in_stack_00000028 = in_stack_00000008;
            in_stack_00000020 = 0;
            in_stack_00000030 = in_stack_00000010;
          }
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_0185daa4();
          }
          FUN_028f24b8(&stack0x00000040,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x228));
          unaff_x20[2] = in_stack_00000030;
          unaff_x20[1] = in_stack_00000028;
          *unaff_x20 = in_stack_00000020;
          return;
        }
        in_stack_00000008 = unaff_x21[1];
        thunk_FUN_01851c08(PTR_DAT_037f9268);
        uVar6 = thunk_FUN_018617ec();
        puVar8 = PTR_DAT_037fb678;
      }
      else {
        in_stack_00000008 = unaff_x21[1];
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
LAB_028f1cc4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


