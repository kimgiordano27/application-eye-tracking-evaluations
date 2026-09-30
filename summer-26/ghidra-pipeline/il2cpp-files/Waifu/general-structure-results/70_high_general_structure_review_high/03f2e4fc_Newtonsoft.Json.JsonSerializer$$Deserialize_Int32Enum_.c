/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<Int32Enum>
ENTRY_POINT: 03f2e4fc
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03f2e8b4) */

void Newtonsoft_Json_JsonSerializer__Deserialize<Int32Enum>(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  void *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  int iVar9;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  if (param_1 == 0) {
    FUN_0335b6c8(&DAT_083cc7a8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cc870,1);
    DataMemoryBarrier(2,3);
    if (*(long *)(unaff_x20 + 0x38) == 0) {
      FUN_0338f674();
    }
  }
  in_stack_000000b0 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  if (unaff_x22 == (long *)0x0) {
    uVar4 = FUN_033d1ba8(&DAT_084585b8);
    FUN_06cfae28(uVar4,0);
  }
  else {
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      FUN_0338f618(lVar5);
    }
    plVar2 = (long *)FUN_0339898c();
    if (plVar2 == (long *)0x0) {
      lVar5 = **(long **)(unaff_x20 + 0x38);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0338f618(lVar5);
      }
      lVar6 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03f2e6dc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0338f71c();
LAB_03f2e6dc:
      plVar2 = (long *)(*(code *)*puVar3)();
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar5 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_083cc870) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03f2e740;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc870,0);
LAB_03f2e740:
      uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        iVar9 = 6;
        iVar1 = 6;
      }
      else {
        lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0338f618(lVar5);
        }
        lVar6 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03f2e7c4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0338f71c(plVar2,lVar5,0);
LAB_03f2e7c4:
        (*(code *)*puVar3)(&stack0x00000008,plVar2,puVar3[1]);
        memcpy(&stack0x00000060,&stack0x00000008,0x58);
        iVar9 = 8;
        iVar1 = 8;
      }
      if (plVar2 != (long *)0x0) {
        lVar5 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_083cc7a8) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03f2e840;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc7a8,0);
LAB_03f2e840:
        (*(code *)*puVar3)(plVar2,puVar3[1]);
        iVar1 = iVar9;
      }
      if (iVar1 == 8) {
        puVar3 = &stack0x00000060;
        goto LAB_03f2e874;
      }
      if ((iVar1 != 6) && (iVar1 != 0)) {
        return;
      }
    }
    else {
      lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0338f618(lVar5);
      }
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03f2e63c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0338f71c(plVar2,lVar5,0);
LAB_03f2e63c:
      iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if (0 < iVar1) {
        lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0338f618(lVar5);
        }
        lVar6 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03f2e6b4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0338f71c(plVar2,lVar5,0);
LAB_03f2e6b4:
        (*(code *)*puVar3)(&stack0x00000008,plVar2,0,puVar3[1]);
        puVar3 = (undefined8 *)&stack0x00000008;
LAB_03f2e874:
        memcpy(unaff_x19,puVar3,0x58);
        return;
      }
    }
    FUN_06cfafe8(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20();
}


