/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ObjectCreationHandling
ENTRY_POINT: 0441c2b0
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_ObjectCreationHandling(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int iVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_DAT_06dc26f0;
  plVar3 = (long *)(**(code **)(param_1 + 0x418))(param_2,*(undefined8 *)(param_1 + 0x420));
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar1);
  }
  plVar4 = (long *)FUN_031c8668(uVar11,0);
  if (plVar3 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar3 + 0x298))(plVar3,plVar4,*(undefined8 *)(*plVar3 + 0x2a0));
    if ((uVar5 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_0441c550;
      uVar5 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar3,*(undefined8 *)(*plVar4 + 0x2a0));
      if ((uVar5 & 1) == 0) {
        FUN_031dbd4c(0);
      }
    }
    plVar3 = (long *)thunk_FUN_015d0480();
    if (plVar3 == (long *)0x0) {
      FUN_031dbd4c();
    }
    plVar4 = *(long **)(unaff_x21 + 0x10);
    if (plVar4 != (long *)0x0) {
      lVar7 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_015c2790(lVar7);
      }
      lVar8 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0441c408;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_015c2a80(plVar4,lVar7,0);
LAB_0441c408:
      iVar2 = (*(code *)*puVar6)(plVar4,puVar6[1]);
      if (0 < iVar2) {
        iVar10 = 0;
        do {
          plVar4 = *(long **)(unaff_x21 + 0x10);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
            lVar7 = FUN_015c2790(lVar7);
          }
          lVar8 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar7) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0441c494;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_015c2a80(plVar4,lVar7,0);
LAB_0441c494:
          (*(code *)*puVar6)(plVar4,iVar10,puVar6[1]);
          if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x132) &
              1) == 0) {
            FUN_015c2790();
          }
          lVar7 = thunk_FUN_015d01b0();
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar8 == 0)) {
            uVar11 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
            FUN_0160ee7c(uVar11,0);
          }
          if (*(uint *)(plVar3 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          plVar3[(long)(int)unaff_w19 + 4] = lVar7;
          thunk_FUN_01656ef8(plVar3 + (long)(int)unaff_w19 + 4,lVar7);
          iVar10 = iVar10 + 1;
          unaff_w19 = unaff_w19 + 1;
        } while (iVar10 != iVar2);
      }
      return;
    }
  }
LAB_0441c550:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


