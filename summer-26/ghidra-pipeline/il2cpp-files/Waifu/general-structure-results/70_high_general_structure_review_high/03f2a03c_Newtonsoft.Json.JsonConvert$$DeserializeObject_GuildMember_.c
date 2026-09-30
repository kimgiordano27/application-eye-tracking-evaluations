/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<GuildMember>
ENTRY_POINT: 03f2a03c
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f2a360) */

ulong Newtonsoft_Json_JsonConvert__DeserializeObject<GuildMember>(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_0335b6c8(&DAT_083cc5a0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cc7a8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cc870,1);
    DataMemoryBarrier(2,3);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_0338f674(param_2);
    }
  }
  if (param_1 == (long *)0x0) {
    uVar5 = FUN_033d1ba8(&DAT_084585b8);
    uVar5 = FUN_06cfae28(uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar5,param_2);
  }
  lVar3 = *(long *)(*(long *)(param_2 + 0x38) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0338f618(lVar3);
  }
  plVar1 = (long *)FUN_0339898c(param_1,lVar3);
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)FUN_0339898c(param_1,DAT_083cc5a0);
    if (plVar1 == (long *)0x0) {
      lVar3 = **(long **)(param_2 + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0338f618(lVar3);
      }
      lVar4 = *param_1;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03f2a20c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c(param_1,lVar3,0);
LAB_03f2a20c:
      plVar1 = (long *)(*(code *)*puVar2)(param_1,puVar2[1]);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar8 = 0;
      do {
        lVar3 = *plVar1;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_083cc870) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03f2a278;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_0338f71c(plVar1,DAT_083cc870,0);
LAB_03f2a278:
        uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
        if ((uVar6 & 1) == 0) {
          if (plVar1 == (long *)0x0) goto LAB_03f2a2fc;
          lVar3 = *plVar1;
          uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar6 == 0) goto LAB_03f2a2d4;
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_03f2a2bc;
        }
        if (uVar8 == 0x7fffffff) {
          uVar5 = FUN_0334ef60(DAT_086f5c88,"System","OverflowException",
                               "Arithmetic operation resulted in an overflow.");
                    /* WARNING: Subroutine does not return */
          FUN_033d1c20(uVar5,param_2);
        }
        uVar8 = uVar8 + 1;
      } while( true );
    }
    lVar3 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_083cc5a0) {
          lVar3 = lVar3 + (long)(*piVar7 + 1) * 0x10;
          goto LAB_03f2a1e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    uVar5 = 1;
    lVar4 = DAT_083cc5a0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0338f618(lVar4);
    }
    lVar3 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          lVar3 = lVar3 + (long)*piVar7 * 0x10;
LAB_03f2a1e4:
          puVar2 = (undefined8 *)(lVar3 + 0x138);
          goto LAB_03f2a1e8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    uVar5 = 0;
  }
  puVar2 = (undefined8 *)FUN_0338f71c(plVar1,lVar4,uVar5);
LAB_03f2a1e8:
                    /* WARNING: Could not recover jumptable at 0x03f2a1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar6;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_03f2a2bc:
    if (*(long *)(piVar7 + -2) == DAT_083cc7a8) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03f2a2f0;
    }
  }
LAB_03f2a2d4:
  puVar2 = (undefined8 *)FUN_0338f71c(plVar1,DAT_083cc7a8,0);
LAB_03f2a2f0:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
LAB_03f2a2fc:
  return (ulong)uVar8;
}


