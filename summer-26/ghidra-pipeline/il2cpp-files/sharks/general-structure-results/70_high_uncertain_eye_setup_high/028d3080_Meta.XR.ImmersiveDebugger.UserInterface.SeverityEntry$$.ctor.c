/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.SeverityEntry$$.ctor
ENTRY_POINT: 028d3080
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


/* WARNING: Removing unreachable block (ram,0x028d35f8) */
/* WARNING: Removing unreachable block (ram,0x028d3504) */

void Meta_XR_ImmersiveDebugger_UserInterface_SeverityEntry___ctor
               (undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong in_x9;
  long unaff_x22;
  long *plVar11;
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
  undefined *puVar10;
  
  if ((in_x9 & 1) == 0) {
                    /* try { // try from 028d3094 to 029d30a7 has its CatchHandler @ 028d30b4 */
    FUN_017fc350(PTR_DAT_037fb660);
    FUN_017fc350(PTR_DAT_037fb608);
                    /* try { // try from 028d30a8 to 029d30cb has its CatchHandler @ 028d3054 */
    *(undefined1 *)(unaff_x22 + 0x5b3) = 1;
  }
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028d3094 with catch @ 028d30b4
                        */
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000070 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
                    /* try { // try from 028d30cc to 029d30e3 has its CatchHandler @ 028d311c */
  plVar11 = (long *)(param_3 + 0x20);
  lVar4 = *plVar11;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
                    /* try { // try from 028d30e4 to 029d310b has its CatchHandler @ 028d3054 */
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar4 = *plVar11;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
                    /* try { // try from 028d310c to 029d311b has its CatchHandler @ 028d311c */
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 028d30cc with catch @ 028d311c
                       catch() { ... } // from try @ 028d310c with catch @ 028d311c */
    lVar4 = FUN_0185daa4();
  }
                    /* try { // try from 028d3120 to 029d3123 has its CatchHandler @ 028d312c */
                    /* try { // try from 028d3124 to 029d312f has its CatchHandler @ 028d3054 */
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 028d3120 with catch @ 028d312c
                        */
    lVar5 = *plVar11;
    uVar8 = *param_2;
    uVar9 = param_2[1];
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    uVar2 = FUN_0215f074(lVar4,uVar8,uVar9,&stack0x00000098,
                         *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x1e8));
    lVar4 = *plVar11;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4(lVar4);
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    if (**(long **)(lVar4 + 0xb8) != 0) {
      uVar3 = FUN_024c5010(**(long **)(lVar4 + 0xb8),*param_2,param_2[1],
                           *(undefined8 *)PTR_DAT_037fb608);
      if (((uVar2 | uVar3) & 1) == 0) {
        in_stack_00000028 = param_2[1];
        in_stack_00000020 = *param_2;
        uVar8 = thunk_FUN_01851c08(PTR_DAT_037f9268);
        uVar8 = thunk_FUN_018617ec(uVar8,&stack0x00000020);
        puVar10 = PTR_DAT_037fb668;
      }
      else {
        lVar4 = *plVar11;
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
        lVar4 = *plVar11;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0185daa4();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0185daa4();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
        if (lVar4 == 0) goto LAB_028d3534;
        uVar6 = FUN_02170a40(lVar4,*param_2,param_2[1],*(undefined8 *)PTR_DAT_037fb660);
        if ((uVar6 & 1) == 0) {
          lVar4 = *plVar11;
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
          lVar4 = *plVar11;
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
          if (lVar4 == 0) goto LAB_028d3534;
          lVar5 = *plVar11;
          uVar8 = *param_2;
          uVar9 = param_2[1];
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0185daa4();
          }
          uVar6 = FUN_02170a40(lVar4,uVar8,uVar9,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x1f0));
          if ((uVar6 & 1) == 0) {
            in_stack_00000088 = param_2[1];
            in_stack_00000080 = *param_2;
            lVar4 = *plVar11;
            if ((uVar2 & 1) == 0) {
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              lVar4 = FUN_01b793c4(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x210));
              lVar5 = *plVar11;
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
              lVar5 = *plVar11;
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
              lVar7 = *plVar11;
              uVar8 = *param_2;
              uVar9 = param_2[1];
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_0185daa4();
              }
              FUN_02170834(lVar5,uVar8,uVar9,lVar4,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x218))
              ;
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
              if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
                FUN_0185daa4();
              }
              in_stack_00000070 = *(undefined8 *)(lVar4 + 0x80);
              in_stack_00000058 = *(undefined8 *)(lVar4 + 0x68);
              in_stack_00000050 = *(undefined8 *)(lVar4 + 0x60);
              in_stack_00000068 = *(undefined8 *)(lVar4 + 0x78);
              in_stack_00000060 = *(undefined8 *)(lVar4 + 0x70);
            }
            else {
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar4 = *plVar11;
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
              lVar5 = *plVar11;
              uVar8 = *param_2;
              uVar9 = param_2[1];
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_0185daa4();
              }
              FUN_0215e9f4(lVar4,uVar8,uVar9,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x1f8));
              uVar1 = in_stack_000000a8;
              uVar9 = in_stack_000000a0;
              uVar8 = in_stack_00000098;
              in_stack_00000040 = 0;
              in_stack_00000028 = 0;
              in_stack_00000020 = 0;
              in_stack_00000038 = 0;
              in_stack_00000030 = 0;
              if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
                FUN_0185daa4();
              }
              in_stack_00000030 = uVar9;
              in_stack_00000028 = uVar8;
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
            lVar4 = *plVar11;
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0185daa4();
            }
            lVar4 = thunk_FUN_0181d094(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x228));
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            lVar4 = *plVar11;
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0185daa4();
            }
            FUN_028d3d70(&stack0x00000080,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x228));
            param_1[4] = in_stack_00000070;
            param_1[1] = in_stack_00000058;
            *param_1 = in_stack_00000050;
            param_1[3] = in_stack_00000068;
            param_1[2] = in_stack_00000060;
            return;
          }
          in_stack_00000028 = param_2[1];
          in_stack_00000020 = *param_2;
          uVar8 = thunk_FUN_01851c08(PTR_DAT_037f9268);
          uVar8 = thunk_FUN_018617ec(uVar8,&stack0x00000020);
          puVar10 = PTR_DAT_037fb678;
        }
        else {
          in_stack_00000028 = param_2[1];
          in_stack_00000020 = *param_2;
          uVar8 = thunk_FUN_01851c08(PTR_DAT_037f9268);
          uVar8 = thunk_FUN_018617ec(uVar8,&stack0x00000020);
          puVar10 = PTR_DAT_037fb670;
        }
      }
      uVar9 = thunk_FUN_01851c08(puVar10);
      uVar8 = FUN_02a473b8(uVar9,uVar8,0);
      thunk_FUN_01851c08(PTR_DAT_037f8d50);
      uVar9 = thunk_FUN_01861bbc();
      FUN_02bcf690(uVar9,uVar8,0);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar9,param_3);
    }
  }
LAB_028d3534:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


