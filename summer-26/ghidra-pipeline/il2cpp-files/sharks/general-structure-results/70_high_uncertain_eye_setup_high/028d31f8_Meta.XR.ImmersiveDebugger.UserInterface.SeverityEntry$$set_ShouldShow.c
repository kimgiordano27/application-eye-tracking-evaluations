/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.SeverityEntry$$set_ShouldShow
ENTRY_POINT: 028d31f8
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


/* WARNING: Removing unreachable block (ram,0x028d35f8) */
/* WARNING: Removing unreachable block (ram,0x028d3504) */

void Meta_XR_ImmersiveDebugger_UserInterface_SeverityEntry__set_ShouldShow(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x22;
  long *unaff_x26;
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
  undefined *puVar8;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_02170a40(lVar2,*unaff_x20,unaff_x20[1],*(undefined8 *)PTR_DAT_037fb660);
    if ((uVar3 & 1) == 0) {
      lVar2 = *unaff_x26;
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
      lVar2 = *unaff_x26;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
      if (lVar2 == 0) goto LAB_028d3534;
      lVar4 = *unaff_x26;
      uVar6 = *unaff_x20;
      uVar7 = unaff_x20[1];
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      uVar3 = FUN_02170a40(lVar2,uVar6,uVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1f0));
      if ((uVar3 & 1) == 0) {
        in_stack_00000088 = unaff_x20[1];
        in_stack_00000080 = *unaff_x20;
        lVar2 = *unaff_x26;
        if ((unaff_x22 & 1) == 0) {
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_0185daa4();
          }
          lVar2 = FUN_01b793c4(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x210));
          lVar4 = *unaff_x26;
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
          lVar4 = *unaff_x26;
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
          lVar5 = *unaff_x26;
          uVar6 = *unaff_x20;
          uVar7 = unaff_x20[1];
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0185daa4();
          }
          FUN_02170834(lVar4,uVar6,uVar7,lVar2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x218));
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          in_stack_00000070 = *(undefined8 *)(lVar2 + 0x80);
          in_stack_00000058 = *(undefined8 *)(lVar2 + 0x68);
          in_stack_00000050 = *(undefined8 *)(lVar2 + 0x60);
          in_stack_00000068 = *(undefined8 *)(lVar2 + 0x78);
          in_stack_00000060 = *(undefined8 *)(lVar2 + 0x70);
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
          lVar2 = *unaff_x26;
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
          lVar4 = *unaff_x26;
          uVar6 = *unaff_x20;
          uVar7 = unaff_x20[1];
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          FUN_0215e9f4(lVar2,uVar6,uVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1f8));
          uVar1 = in_stack_000000a8;
          uVar7 = in_stack_000000a0;
          uVar6 = in_stack_00000098;
          in_stack_00000040 = 0;
          in_stack_00000028 = 0;
          in_stack_00000020 = 0;
          in_stack_00000038 = 0;
          in_stack_00000030 = 0;
          if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          in_stack_00000030 = uVar7;
          in_stack_00000028 = uVar6;
          in_stack_00000038 = uVar1;
          thunk_FUN_0188fd20(&stack0x00000030,0);
          in_stack_00000020 = 0;
          thunk_FUN_0188fd20(&stack0x00000020,0);
          in_stack_00000040 = CONCAT53((int5)((ulong)in_stack_00000040 >> 0x18),0x10000);
          in_stack_00000058 = in_stack_00000028;
          in_stack_00000050 = in_stack_00000020;
          in_stack_00000068 = in_stack_00000038;
          in_stack_00000060 = in_stack_00000030;
          in_stack_00000070 = in_stack_00000040;
        }
        lVar2 = *unaff_x26;
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        lVar2 = thunk_FUN_0181d094(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x228));
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar2 = *unaff_x26;
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        FUN_028d3d70(&stack0x00000080,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x228));
        unaff_x19[4] = in_stack_00000070;
        unaff_x19[1] = in_stack_00000058;
        *unaff_x19 = in_stack_00000050;
        unaff_x19[3] = in_stack_00000068;
        unaff_x19[2] = in_stack_00000060;
        return;
      }
      in_stack_00000028 = unaff_x20[1];
      in_stack_00000020 = *unaff_x20;
      uVar6 = thunk_FUN_01851c08(PTR_DAT_037f9268);
      uVar6 = thunk_FUN_018617ec(uVar6,&stack0x00000020);
      puVar8 = PTR_DAT_037fb678;
    }
    else {
      in_stack_00000028 = unaff_x20[1];
      in_stack_00000020 = *unaff_x20;
      uVar6 = thunk_FUN_01851c08(PTR_DAT_037f9268);
      uVar6 = thunk_FUN_018617ec(uVar6,&stack0x00000020);
      puVar8 = PTR_DAT_037fb670;
    }
    uVar7 = thunk_FUN_01851c08(puVar8);
    uVar6 = FUN_02a473b8(uVar7,uVar6,0);
    thunk_FUN_01851c08(PTR_DAT_037f8d50);
    uVar7 = thunk_FUN_01861bbc();
    FUN_02bcf690(uVar7,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar7);
  }
LAB_028d3534:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


