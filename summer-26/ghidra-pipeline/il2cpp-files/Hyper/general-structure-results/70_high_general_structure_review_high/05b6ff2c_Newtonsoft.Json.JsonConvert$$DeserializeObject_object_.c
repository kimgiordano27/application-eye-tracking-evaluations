/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 05b6ff2c
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05b7035c) */

undefined8 Newtonsoft_Json_JsonConvert__DeserializeObject<object>(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_04947ee4(&DAT_0ae96588);
    FUN_04947ee4(&DAT_0ae96710);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_04980b90(param_2);
    }
  }
  if (param_1 == (long *)0x0) {
    uVar5 = thunk_FUN_049ae08c(&DAT_0af62638);
    uVar5 = FUN_0961e3c8(uVar5,0);
  }
  else {
    lVar6 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04980b34(lVar6);
    }
    plVar3 = (long *)thunk_FUN_04983e64(param_1,lVar6);
    if (plVar3 == (long *)0x0) {
      lVar6 = **(long **)(param_2 + 0x38);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04980b34(lVar6);
      }
      lVar7 = *param_1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05b70114;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(param_1,lVar6,0);
LAB_05b70114:
      plVar3 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
      puVar1 = PTR_DAT_0ac09ba8;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac09ba8) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05b70188;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar3,*(long *)PTR_DAT_0ac09ba8,0);
LAB_05b70188:
      uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        uVar5 = 0;
        iVar2 = 6;
      }
      else {
        do {
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar6 = *(long *)(*(long *)(param_2 + 0x38) + 0x38);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_04980b34(lVar6);
          }
          lVar7 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar6) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_05b70208;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_04980e68(plVar3,lVar6,0);
LAB_05b70208:
          uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_05b7026c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_04980e68(plVar3,*(long *)puVar1,0);
LAB_05b7026c:
          uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        } while ((uVar8 & 1) != 0);
        iVar2 = 9;
      }
      if (plVar3 != (long *)0x0) {
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac09b90) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05b702f4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_04980e68(plVar3,*(long *)PTR_DAT_0ac09b90,0);
LAB_05b702f4:
        (*(code *)*puVar4)(plVar3,puVar4[1]);
      }
      if ((iVar2 != 6) && (iVar2 != 0)) {
        return uVar5;
      }
    }
    else {
      lVar6 = (*(long **)(param_2 + 0x38))[2];
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04980b34(lVar6);
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05b7006c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar3,lVar6,0);
LAB_05b7006c:
      iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (0 < iVar2) {
        lVar6 = *(long *)(*(long *)(param_2 + 0x38) + 8);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_04980b34(lVar6);
        }
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05b700e8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_04980e68(plVar3,lVar6,0);
LAB_05b700e8:
                    /* WARNING: Could not recover jumptable at 0x05b70104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)*puVar4)(plVar3,iVar2 + -1,puVar4[1]);
        return uVar5;
      }
    }
    uVar5 = FUN_0961e558(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar5,param_2);
}


