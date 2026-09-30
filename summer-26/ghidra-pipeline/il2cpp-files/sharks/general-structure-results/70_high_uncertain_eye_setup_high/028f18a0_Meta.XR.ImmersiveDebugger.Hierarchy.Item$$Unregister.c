/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item$$Unregister
ENTRY_POINT: 028f18a0
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


/* WARNING: Removing unreachable block (ram,0x028f1d88) */
/* WARNING: Removing unreachable block (ram,0x028f1c98) */

void Meta_XR_ImmersiveDebugger_Hierarchy_Item__Unregister(long param_1)

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
  undefined8 *unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined *puVar9;
  
  lVar3 = *(long *)(param_1 + 8);
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
    uVar7 = *unaff_x21;
    uVar8 = unaff_x21[1];
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    uVar1 = FUN_0217bb58(lVar3,uVar7,uVar8,&stack0x00000058,
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
      uVar2 = FUN_024c5010(**(long **)(lVar3 + 0xb8),*unaff_x21,unaff_x21[1],
                           *(undefined8 *)PTR_DAT_037fb608);
      if (((uVar1 | uVar2) & 1) == 0) {
        in_stack_00000008 = unaff_x21[1];
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
        if (lVar3 == 0) goto LAB_028f1cc4;
        uVar5 = FUN_02170a40(lVar3,*unaff_x21,unaff_x21[1],*(undefined8 *)PTR_DAT_037fb660);
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
          if (lVar3 == 0) goto LAB_028f1cc4;
          lVar4 = *(long *)(unaff_x19 + 0x20);
          uVar7 = *unaff_x21;
          uVar8 = unaff_x21[1];
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          uVar5 = FUN_02170a40(lVar3,uVar7,uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1f0));
          puVar9 = PTR_DAT_037f88d8;
          if ((uVar5 & 1) == 0) {
            in_stack_00000048 = unaff_x21[1];
            in_stack_00000040 = *unaff_x21;
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
              uVar7 = *unaff_x21;
              uVar8 = unaff_x21[1];
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
              in_stack_00000030 = *(undefined8 *)(lVar3 + 0x60);
              in_stack_00000028 = *(undefined8 *)(lVar3 + 0x58);
              in_stack_00000020 = *(undefined8 *)(lVar3 + 0x50);
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
              uVar7 = *unaff_x21;
              uVar8 = unaff_x21[1];
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              FUN_0217b53c(lVar3,uVar7,uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1f8));
              uVar7 = in_stack_00000058;
              in_stack_00000008 = 0;
              in_stack_00000010 = 0;
              if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
                FUN_0185daa4();
              }
              in_stack_00000008 = uVar7;
              thunk_FUN_0188fd20(&stack0x00000008,0);
              thunk_FUN_0188fd20();
              in_stack_00000010 = CONCAT53((int5)((ulong)in_stack_00000010 >> 0x18),0x10000);
              in_stack_00000028 = in_stack_00000008;
              in_stack_00000020 = 0;
              in_stack_00000030 = in_stack_00000010;
            }
            if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            lVar3 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0185daa4();
            }
            FUN_028f24b8(&stack0x00000040,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x228));
            unaff_x20[2] = in_stack_00000030;
            unaff_x20[1] = in_stack_00000028;
            *unaff_x20 = in_stack_00000020;
            return;
          }
          in_stack_00000008 = unaff_x21[1];
          thunk_FUN_01851c08(PTR_DAT_037f9268);
          uVar7 = thunk_FUN_018617ec();
          puVar9 = PTR_DAT_037fb678;
        }
        else {
          in_stack_00000008 = unaff_x21[1];
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
LAB_028f1cc4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


